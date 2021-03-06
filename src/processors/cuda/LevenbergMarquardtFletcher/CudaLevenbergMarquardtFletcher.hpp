/* 
 * File:   CudaLevenbergMarquardtFletcher.hpp
 * Author: christiantinauer
 *
 * Created on January 17, 2015, 11:56 AM
 */

#ifndef CUDALEVENBERGMARQUARDTFLETCHER_HPP
#define	CUDALEVENBERGMARQUARDTFLETCHER_HPP

template<typename NTINPUT, typename NTOUTPUT, typename NTCALC>
NTOUTPUT* CudaProcessLevenbergMarquardtFletcher(
	short startModelFunctionID, short modelFunctionID,
	short residualWeightingFunctionID, short alphaWeightingFunctionID,
	int parametersCount,
	int startIndex, int endIndex, int columnCount, int rowCount, 
	int sliceCount, NTCALC* echotimes, NTCALC* weights, NTINPUT* data,
	NTCALC threshold, NTCALC* constants, int constantsLength,
	NTCALC* parameterBoundaries,
	bool needsFlipAnglesData, bool needsT1Data, int threadCount,
	NTCALC EPSILON_1, NTCALC EPSILON_2);

#endif	/* CUDALEVENBERGMARQUARDTFLETCHER_HPP */