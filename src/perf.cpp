#include "perf.hpp"

perf_time_t calcTicTime(){
	return clock();
}
void calcTocTime(perf_time_t ticTime){
	std::cout << float(clock() - ticTime)/ CLOCKS_PER_SEC << " sec "<< std::endl;
}




perf_time_t calcTimeStatistics(){
	
	
	return clock();
}


void calcEmitStatistics(perf_time_t ticTime){

	
	std::cout << float(clock() - ticTime)/ CLOCKS_PER_SEC << " sec "<< std::endl;
}