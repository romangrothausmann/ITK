// this file defines the itkCommonTest for the test driver
// and all it expects is that you have a function called RegisterTests
#if defined(_MSC_VER)
#pragma warning ( disable : 4786 )
#endif
#include <iostream>
#include "itkTestMain.h" 


void RegisterTests()
{
REGISTER_TEST(itkCommonPrintTest );
REGISTER_TEST(itkModifiedTimeTest );
REGISTER_TEST(itkAdaptorComparisonTest );
REGISTER_TEST(itkAffineTransformTest );
REGISTER_TEST(itkArrayTest );
REGISTER_TEST(itkArray2DTest );
REGISTER_TEST(itkAutoPointerTest );
REGISTER_TEST(itkAzimuthElevationToCartesianTransformTest );
REGISTER_TEST(itkBinaryThresholdImageFunctionTest );
REGISTER_TEST(itkBoundingBoxTest );
REGISTER_TEST(itkBSplineDeformableTransformTest );
REGISTER_TEST(itkBSplineInterpolationWeightFunctionTest );
REGISTER_TEST(itkBSplineKernelFunctionTest );
REGISTER_TEST(itkByteSwapTest );
REGISTER_TEST(itkCenteredRigid2DTransformTest );
REGISTER_TEST(itkCenteredAffineTransformTest );
REGISTER_TEST(itkCentralDifferenceImageFunctionTest );
REGISTER_TEST(itkChainCodePath2DTest );
REGISTER_TEST(itkChainCodePathTest );
REGISTER_TEST(itkConstNeighborhoodIteratorTest );
REGISTER_TEST(itkConstShapedNeighborhoodIteratorTest );
REGISTER_TEST(itkCovariantVectorGeometryTest );
REGISTER_TEST(itkDataTypeTest );
REGISTER_TEST(itkDynamicMeshTest );
REGISTER_TEST(itkEuler2DTransformTest );
REGISTER_TEST(itkEuler3DTransformTest );
REGISTER_TEST(itkExceptionObjectTest );
REGISTER_TEST(itkFileOutputWindowTest );
REGISTER_TEST(itkFixedArrayTest );
REGISTER_TEST(itkFixedCenterOfRotationAffineTransformTest );
REGISTER_TEST(itkFloodFilledSpatialFunctionTest );
REGISTER_TEST(itkFourierSeriesPathTest );
REGISTER_TEST(itkGaussianBlurImageFunctionTest);
REGISTER_TEST(itkGaussianDerivativeImageFunctionTest);
REGISTER_TEST(itkHashTableTest );
REGISTER_TEST(itkImageAdaptorTest );
REGISTER_TEST(itkImageIteratorTest );
REGISTER_TEST(itkImageIteratorsForwardBackwardTest );
REGISTER_TEST(itkImageIteratorWithIndexTest );
REGISTER_TEST(itkImageLinearIteratorTest );
REGISTER_TEST(itkImageRandomIteratorTest );
REGISTER_TEST(itkImageRegionTest );
REGISTER_TEST(itkImageRegionExclusionIteratorWithIndexTest );
REGISTER_TEST(itkImageReverseIteratorTest );
REGISTER_TEST(itkImageSliceIteratorTest );
REGISTER_TEST(itkIteratorTests );
REGISTER_TEST(itkLightObjectTest );
REGISTER_TEST(itkLevelSetFunctionTest );
REGISTER_TEST(itkMatrixTest );
REGISTER_TEST(itkMapContainerTest );
REGISTER_TEST(itkMaximumDecisionRuleTest );
REGISTER_TEST(itkMaximumRatioDecisionRuleTest );
REGISTER_TEST(itkMeanImageFunctionTest );
REGISTER_TEST(itkMedianImageFunctionTest );
REGISTER_TEST(itkMemoryLeakTest );
REGISTER_TEST(itkMeshTest );
REGISTER_TEST(itkMeshFstreamTest );
REGISTER_TEST(itkMinimumDecisionRuleTest );
REGISTER_TEST(itkNearestNeighborExtrapolateImageFunctionTest );
REGISTER_TEST(itkNeighborhoodTest );
REGISTER_TEST(itkNeighborhoodIteratorTest );
REGISTER_TEST(itkNeighborhoodOperatorImageFunctionTest);
REGISTER_TEST(itkNeighborhoodOperatorTest );
REGISTER_TEST(itkNumericTraitsTest );
REGISTER_TEST(itkObjectStoreTest );
REGISTER_TEST(itkPathFunctionsTest );
REGISTER_TEST(itkPathIteratorTest );
REGISTER_TEST(itkPeriodicBoundaryConditionTest );
REGISTER_TEST(itkPixelAccessTest );
REGISTER_TEST(itkPointGeometryTest );
REGISTER_TEST(itkPointSetTest );
REGISTER_TEST(itkPolyLineParametricPathTest );
REGISTER_TEST(itkRGBPixelTest );
REGISTER_TEST(itkRGBInterpolateImageFunctionTest );
REGISTER_TEST(itkRGBToVectorImageAdaptorTest );
REGISTER_TEST(itkRigid2DTransformTest );
REGISTER_TEST(itkRigid3DTransformTest );
REGISTER_TEST(itkRigid3DPerspectiveTransformTest );
REGISTER_TEST(itkScalarToRGBPixelFunctorTest );
REGISTER_TEST(itkShapedNeighborhoodIteratorTest );
REGISTER_TEST(itkSimilarity2DTransformTest );
REGISTER_TEST(itkSliceIteratorTest );
REGISTER_TEST(itkSpatialFunctionTest );
REGISTER_TEST(itkSphereSignedDistanceFunctionTest );
REGISTER_TEST(itkSmartPointerTest );
REGISTER_TEST(itkSTLContainerAdaptorTest );
REGISTER_TEST(itkTimeProbesTest );
REGISTER_TEST(itkTransformTest );
REGISTER_TEST(itkThreadDefsTest );
REGISTER_TEST(itkTranslationTransformTest );
REGISTER_TEST(itkVarianceImageFunctionTest );
REGISTER_TEST(itkVectorGeometryTest );
REGISTER_TEST(itkVersorTest );
REGISTER_TEST(itkVersorRigid3DTransformTest );
REGISTER_TEST(itkVectorTest );
REGISTER_TEST(itkVectorInterpolateImageFunctionTest );
REGISTER_TEST(itkVectorToRGBImageAdaptorTest );
REGISTER_TEST(itkScaleTransformTest );
REGISTER_TEST(itkScaleLogarithmicTransformTest );
REGISTER_TEST(itkSplineKernelTransformTest );
REGISTER_TEST(itkEllipsoidInteriorExteriorSpatialFunctionTest );
REGISTER_TEST(itkSymmetricEllipsoidInteriorExteriorSpatialFunctionTest );
//This is a separate executable REGISTER_TEST(itkSystemInformationTest );
REGISTER_TEST(itkMetaDataDictionaryTest );
REGISTER_TEST(itkSTLThreadTest );
REGISTER_TEST(itkOctreeTest );
}
