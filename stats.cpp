#include "stats.h"
#include <cmath>
 
using namespace std;

Stats Statistics::ComputeStatistics(const std::vector<float>& ) {
    
	Statistics::Stats st;
    st.average = NAN;
    st.max = NAN;
    st.min = NAN;
    float total = 0;
    int arr_size = arr.size();
    if(arr.size()){
 
        for(auto i : arr){
            total += i;
            st.max = (st.max > i) ? st.max : i ;
            st.min = (st.min < i) ? st.min : i ;
        }
 
        st.average = total/arr_size;
    }
 
    return st;
}
