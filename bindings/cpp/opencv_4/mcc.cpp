#include "ocvrs_common.hpp"
#include <opencv2/mcc.hpp>
#include "mcc_types.hpp"

extern "C" {
	void cv_ColorCorrectionModel_delete(cv::ccm::ColorCorrectionModel* instance) {
		delete instance;
	}
	Result<cv::ccm::ColorCorrectionModel*> cv_ccm_ColorCorrectionModel_ColorCorrectionModel_const_MatR_CONST_COLOR(const cv::Mat* src, cv::ccm::CONST_COLOR constcolor) {
		try {
			cv::ccm::ColorCorrectionModel* ret = new cv::ccm::ColorCorrectionModel(*src, constcolor);
			return Ok<cv::ccm::ColorCorrectionModel*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::ccm::ColorCorrectionModel*>))
	}
	
	Result<cv::ccm::ColorCorrectionModel*> cv_ccm_ColorCorrectionModel_ColorCorrectionModel_const_MatR_Mat_COLOR_SPACE(const cv::Mat* src, cv::Mat* colors, cv::ccm::COLOR_SPACE ref_cs) {
		try {
			cv::ccm::ColorCorrectionModel* ret = new cv::ccm::ColorCorrectionModel(*src, *colors, ref_cs);
			return Ok<cv::ccm::ColorCorrectionModel*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::ccm::ColorCorrectionModel*>))
	}
	
	Result<cv::ccm::ColorCorrectionModel*> cv_ccm_ColorCorrectionModel_ColorCorrectionModel_const_MatR_Mat_COLOR_SPACE_Mat(const cv::Mat* src, cv::Mat* colors, cv::ccm::COLOR_SPACE ref_cs, cv::Mat* colored) {
		try {
			cv::ccm::ColorCorrectionModel* ret = new cv::ccm::ColorCorrectionModel(*src, *colors, ref_cs, *colored);
			return Ok<cv::ccm::ColorCorrectionModel*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::ccm::ColorCorrectionModel*>))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setColorSpace_COLOR_SPACE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::COLOR_SPACE cs) {
		try {
			instance->setColorSpace(cs);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setCCM_TYPE_CCM_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::CCM_TYPE ccm_type) {
		try {
			instance->setCCM_TYPE(ccm_type);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setDistance_DISTANCE_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::DISTANCE_TYPE distance) {
		try {
			instance->setDistance(distance);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setLinear_LINEAR_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::LINEAR_TYPE linear_type) {
		try {
			instance->setLinear(linear_type);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setLinearGamma_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* gamma) {
		try {
			instance->setLinearGamma(*gamma);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setLinearDegree_const_intR(cv::ccm::ColorCorrectionModel* instance, const int* deg) {
		try {
			instance->setLinearDegree(*deg);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setSaturatedThreshold_const_doubleR_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* lower, const double* upper) {
		try {
			instance->setSaturatedThreshold(*lower, *upper);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setWeightsList_const_MatR(cv::ccm::ColorCorrectionModel* instance, const cv::Mat* weights_list) {
		try {
			instance->setWeightsList(*weights_list);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setWeightCoeff_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* weights_coeff) {
		try {
			instance->setWeightCoeff(*weights_coeff);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setInitialMethod_INITIAL_METHOD_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::INITIAL_METHOD_TYPE initial_method_type) {
		try {
			instance->setInitialMethod(initial_method_type);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setMaxCount_const_intR(cv::ccm::ColorCorrectionModel* instance, const int* max_count) {
		try {
			instance->setMaxCount(*max_count);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_setEpsilon_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* epsilon) {
		try {
			instance->setEpsilon(*epsilon);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_ccm_ColorCorrectionModel_run(cv::ccm::ColorCorrectionModel* instance) {
		try {
			instance->run();
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Mat*> cv_ccm_ColorCorrectionModel_getCCM_const(const cv::ccm::ColorCorrectionModel* instance) {
		try {
			cv::Mat ret = instance->getCCM();
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<double> cv_ccm_ColorCorrectionModel_getLoss_const(const cv::ccm::ColorCorrectionModel* instance) {
		try {
			double ret = instance->getLoss();
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result<cv::Mat*> cv_ccm_ColorCorrectionModel_get_src_rgbl_const(const cv::ccm::ColorCorrectionModel* instance) {
		try {
			cv::Mat ret = instance->get_src_rgbl();
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Mat*> cv_ccm_ColorCorrectionModel_get_dst_rgbl_const(const cv::ccm::ColorCorrectionModel* instance) {
		try {
			cv::Mat ret = instance->get_dst_rgbl();
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Mat*> cv_ccm_ColorCorrectionModel_getMask_const(const cv::ccm::ColorCorrectionModel* instance) {
		try {
			cv::Mat ret = instance->getMask();
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Mat*> cv_ccm_ColorCorrectionModel_getWeights_const(const cv::ccm::ColorCorrectionModel* instance) {
		try {
			cv::Mat ret = instance->getWeights();
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Mat*> cv_ccm_ColorCorrectionModel_infer_const_MatR_bool(cv::ccm::ColorCorrectionModel* instance, const cv::Mat* img, bool islinear) {
		try {
			cv::Mat ret = instance->infer(*img, islinear);
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Ptr<cv::mcc::CChecker>*> cv_mcc_CChecker_create() {
		try {
			cv::Ptr<cv::mcc::CChecker> ret = cv::mcc::CChecker::create();
			return Ok(new cv::Ptr<cv::mcc::CChecker>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::mcc::CChecker>*>))
	}
	
	Result_void cv_mcc_CChecker_setTarget_TYPECHART(cv::mcc::CChecker* instance, cv::mcc::TYPECHART _target) {
		try {
			instance->setTarget(_target);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_mcc_CChecker_setBox_vector_Point2f_(cv::mcc::CChecker* instance, std::vector<cv::Point2f>* _box) {
		try {
			instance->setBox(*_box);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_mcc_CChecker_setChartsRGB_Mat(cv::mcc::CChecker* instance, cv::Mat* _chartsRGB) {
		try {
			instance->setChartsRGB(*_chartsRGB);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_mcc_CChecker_setChartsYCbCr_Mat(cv::mcc::CChecker* instance, cv::Mat* _chartsYCbCr) {
		try {
			instance->setChartsYCbCr(*_chartsYCbCr);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_mcc_CChecker_setCost_float(cv::mcc::CChecker* instance, float _cost) {
		try {
			instance->setCost(_cost);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result_void cv_mcc_CChecker_setCenter_Point2f(cv::mcc::CChecker* instance, cv::Point2f* _center) {
		try {
			instance->setCenter(*_center);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::mcc::TYPECHART> cv_mcc_CChecker_getTarget(cv::mcc::CChecker* instance) {
		try {
			cv::mcc::TYPECHART ret = instance->getTarget();
			return Ok<cv::mcc::TYPECHART>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::mcc::TYPECHART>))
	}
	
	Result<std::vector<cv::Point2f>*> cv_mcc_CChecker_getBox(cv::mcc::CChecker* instance) {
		try {
			std::vector<cv::Point2f> ret = instance->getBox();
			return Ok(new std::vector<cv::Point2f>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::vector<cv::Point2f>*>))
	}
	
	Result<cv::Mat*> cv_mcc_CChecker_getChartsRGB(cv::mcc::CChecker* instance) {
		try {
			cv::Mat ret = instance->getChartsRGB();
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Mat*> cv_mcc_CChecker_getChartsYCbCr(cv::mcc::CChecker* instance) {
		try {
			cv::Mat ret = instance->getChartsYCbCr();
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<float> cv_mcc_CChecker_getCost(cv::mcc::CChecker* instance) {
		try {
			float ret = instance->getCost();
			return Ok<float>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<float>))
	}
	
	Result<cv::Point2f> cv_mcc_CChecker_getCenter(cv::mcc::CChecker* instance) {
		try {
			cv::Point2f ret = instance->getCenter();
			return Ok<cv::Point2f>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Point2f>))
	}
	
	Result<bool> cv_mcc_CCheckerDetector_setNet_Net(cv::mcc::CCheckerDetector* instance, cv::dnn::Net* net) {
		try {
			bool ret = instance->setNet(*net);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<bool> cv_mcc_CCheckerDetector_process_const__InputArrayR_const_TYPECHART_const_vector_Rect_R_const_int_bool_const_Ptr_DetectorParameters_R(cv::mcc::CCheckerDetector* instance, const cv::_InputArray* image, const cv::mcc::TYPECHART chartType, const std::vector<cv::Rect>* regionsOfInterest, const int nc, bool useNet, const cv::Ptr<cv::mcc::DetectorParameters>* params) {
		try {
			bool ret = instance->process(*image, chartType, *regionsOfInterest, nc, useNet, *params);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<bool> cv_mcc_CCheckerDetector_process_const__InputArrayR_const_TYPECHART_const_int_bool_const_Ptr_DetectorParameters_R(cv::mcc::CCheckerDetector* instance, const cv::_InputArray* image, const cv::mcc::TYPECHART chartType, const int nc, bool useNet, const cv::Ptr<cv::mcc::DetectorParameters>* params) {
		try {
			bool ret = instance->process(*image, chartType, nc, useNet, *params);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<cv::Ptr<cv::mcc::CChecker>*> cv_mcc_CCheckerDetector_getBestColorChecker(cv::mcc::CCheckerDetector* instance) {
		try {
			cv::Ptr<cv::mcc::CChecker> ret = instance->getBestColorChecker();
			return Ok(new cv::Ptr<cv::mcc::CChecker>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::mcc::CChecker>*>))
	}
	
	Result<std::vector<cv::Ptr<cv::mcc::CChecker>>*> cv_mcc_CCheckerDetector_getListColorChecker(cv::mcc::CCheckerDetector* instance) {
		try {
			std::vector<cv::Ptr<cv::mcc::CChecker>> ret = instance->getListColorChecker();
			return Ok(new std::vector<cv::Ptr<cv::mcc::CChecker>>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::vector<cv::Ptr<cv::mcc::CChecker>>*>))
	}
	
	Result<cv::Ptr<cv::mcc::CCheckerDetector>*> cv_mcc_CCheckerDetector_create() {
		try {
			cv::Ptr<cv::mcc::CCheckerDetector> ret = cv::mcc::CCheckerDetector::create();
			return Ok(new cv::Ptr<cv::mcc::CCheckerDetector>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::mcc::CCheckerDetector>*>))
	}
	
	Result_void cv_mcc_CCheckerDraw_draw_const__InputOutputArrayR(cv::mcc::CCheckerDraw* instance, const cv::_InputOutputArray* img) {
		try {
			instance->draw(*img);
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<cv::Ptr<cv::mcc::CCheckerDraw>*> cv_mcc_CCheckerDraw_create_Ptr_CChecker__Scalar_int(cv::Ptr<cv::mcc::CChecker>* pChecker, cv::Scalar* color, int thickness) {
		try {
			cv::Ptr<cv::mcc::CCheckerDraw> ret = cv::mcc::CCheckerDraw::create(*pChecker, *color, thickness);
			return Ok(new cv::Ptr<cv::mcc::CCheckerDraw>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::mcc::CCheckerDraw>*>))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropAdaptiveThreshWinSizeMin_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->adaptiveThreshWinSizeMin;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropAdaptiveThreshWinSizeMin_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->adaptiveThreshWinSizeMin = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropAdaptiveThreshWinSizeMax_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->adaptiveThreshWinSizeMax;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropAdaptiveThreshWinSizeMax_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->adaptiveThreshWinSizeMax = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropAdaptiveThreshWinSizeStep_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->adaptiveThreshWinSizeStep;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropAdaptiveThreshWinSizeStep_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->adaptiveThreshWinSizeStep = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<double> cv_mcc_DetectorParameters_getPropAdaptiveThreshConstant_const(const cv::mcc::DetectorParameters* instance) {
		try {
			double ret = instance->adaptiveThreshConstant;
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropAdaptiveThreshConstant_double(cv::mcc::DetectorParameters* instance, double val) {
		try {
			instance->adaptiveThreshConstant = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<double> cv_mcc_DetectorParameters_getPropMinContoursAreaRate_const(const cv::mcc::DetectorParameters* instance) {
		try {
			double ret = instance->minContoursAreaRate;
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinContoursAreaRate_double(cv::mcc::DetectorParameters* instance, double val) {
		try {
			instance->minContoursAreaRate = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<double> cv_mcc_DetectorParameters_getPropMinContoursArea_const(const cv::mcc::DetectorParameters* instance) {
		try {
			double ret = instance->minContoursArea;
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinContoursArea_double(cv::mcc::DetectorParameters* instance, double val) {
		try {
			instance->minContoursArea = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<double> cv_mcc_DetectorParameters_getPropConfidenceThreshold_const(const cv::mcc::DetectorParameters* instance) {
		try {
			double ret = instance->confidenceThreshold;
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropConfidenceThreshold_double(cv::mcc::DetectorParameters* instance, double val) {
		try {
			instance->confidenceThreshold = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<double> cv_mcc_DetectorParameters_getPropMinContourSolidity_const(const cv::mcc::DetectorParameters* instance) {
		try {
			double ret = instance->minContourSolidity;
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinContourSolidity_double(cv::mcc::DetectorParameters* instance, double val) {
		try {
			instance->minContourSolidity = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<double> cv_mcc_DetectorParameters_getPropFindCandidatesApproxPolyDPEpsMultiplier_const(const cv::mcc::DetectorParameters* instance) {
		try {
			double ret = instance->findCandidatesApproxPolyDPEpsMultiplier;
			return Ok<double>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<double>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropFindCandidatesApproxPolyDPEpsMultiplier_double(cv::mcc::DetectorParameters* instance, double val) {
		try {
			instance->findCandidatesApproxPolyDPEpsMultiplier = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropBorderWidth_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->borderWidth;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropBorderWidth_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->borderWidth = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<float> cv_mcc_DetectorParameters_getPropB0factor_const(const cv::mcc::DetectorParameters* instance) {
		try {
			float ret = instance->B0factor;
			return Ok<float>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<float>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropB0factor_float(cv::mcc::DetectorParameters* instance, float val) {
		try {
			instance->B0factor = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<float> cv_mcc_DetectorParameters_getPropMaxError_const(const cv::mcc::DetectorParameters* instance) {
		try {
			float ret = instance->maxError;
			return Ok<float>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<float>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMaxError_float(cv::mcc::DetectorParameters* instance, float val) {
		try {
			instance->maxError = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropMinContourPointsAllowed_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->minContourPointsAllowed;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinContourPointsAllowed_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->minContourPointsAllowed = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropMinContourLengthAllowed_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->minContourLengthAllowed;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinContourLengthAllowed_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->minContourLengthAllowed = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropMinInterContourDistance_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->minInterContourDistance;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinInterContourDistance_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->minInterContourDistance = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropMinInterCheckerDistance_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->minInterCheckerDistance;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinInterCheckerDistance_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->minInterCheckerDistance = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<int> cv_mcc_DetectorParameters_getPropMinImageSize_const(const cv::mcc::DetectorParameters* instance) {
		try {
			int ret = instance->minImageSize;
			return Ok<int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinImageSize_int(cv::mcc::DetectorParameters* instance, int val) {
		try {
			instance->minImageSize = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	Result<unsigned int> cv_mcc_DetectorParameters_getPropMinGroupSize_const(const cv::mcc::DetectorParameters* instance) {
		try {
			unsigned int ret = instance->minGroupSize;
			return Ok<unsigned int>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<unsigned int>))
	}
	
	Result_void cv_mcc_DetectorParameters_setPropMinGroupSize_unsigned_int(cv::mcc::DetectorParameters* instance, unsigned int val) {
		try {
			instance->minGroupSize = val;
			return Ok();
		} OCVRS_CATCH(OCVRS_TYPE(Result_void))
	}
	
	void cv_MCC_DetectorParameters_delete(cv::mcc::DetectorParameters* instance) {
		delete instance;
	}
	Result<cv::mcc::DetectorParameters*> cv_mcc_DetectorParameters_DetectorParameters() {
		try {
			cv::mcc::DetectorParameters* ret = new cv::mcc::DetectorParameters();
			return Ok<cv::mcc::DetectorParameters*>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::mcc::DetectorParameters*>))
	}
	
	Result<cv::Ptr<cv::mcc::DetectorParameters>*> cv_mcc_DetectorParameters_create() {
		try {
			cv::Ptr<cv::mcc::DetectorParameters> ret = cv::mcc::DetectorParameters::create();
			return Ok(new cv::Ptr<cv::mcc::DetectorParameters>(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Ptr<cv::mcc::DetectorParameters>*>))
	}
	
}
