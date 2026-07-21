#pragma once

// Function prototypes for core/skeleton.cpp
// Generated from Ghidra function signatures

// Original: core_skeleton.cpp_distancePointToLineSegment_FUN_005171b0
// Address: 005171b0
float distancePointToLineSegment(float *param_1,float *param_2,float *param_3);

// Original: core_skeleton.cpp_CSkeleton_allocMemory_FUN_005173c0
// Address: 005173c0
void __cdecl CSkeleton::allocMemory(int param_1,int param_2,undefined4 param_3);

// Original: core_skeleton.cpp_CSkeleton_load_FUN_00517560
// Address: 00517560
void __cdecl CSkeleton::load(int param_1,char *param_2);

// Original: core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0
// Address: 005175f0
void __cdecl CSkeleton::loadStream(int param_1,int param_2);

// Original: core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
// Address: 005179d0
int __cdecl CSkeleton::findBone(int param_1,undefined4 param_2,int param_3);

// Original: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
// Address: 00517a60
int __cdecl CSkeleton::getBoneAngleAtFrame(int param_1,int param_2,int param_3);

// Original: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
// Address: 00517a80
undefined4 * __stack5_esi CSkeleton::getBoneAngleInterpolated(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5 ,undefined4 *param_6);

// Original: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
// Address: 00517b10
int __cdecl CSkeleton::getHierarchyDistance(int param_1,int param_2,int param_3);

// Original: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50
// Address: 00517b50
int __cdecl CSkeleton::calculateFrameDataSize(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_ctor_FUN_00517b70
// Address: 00517b70
undefined4 * CDeformableModel::ctor(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80
// Address: 00517c80
int CDeformableModel::dtor(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_free_FUN_00517cc0
// Address: 00517cc0
void __cdecl CDeformableModel::free(int *param_1);

// Original: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0
// Address: 00517da0
undefined8 __cdecl CDeformableModel::allocMemory(int *param_1,int param_2,int *param_3,int param_4,int param_5);

// Original: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0
// Address: 00517ec0
void CDeformableModel::allocLOD(int *param_1,int param_2,int param_3,int param_4,int param_5);

// Original: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0
// Address: 005180a0
void __cdecl CDeformableModel::captureTextures(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
// Address: 00518130
undefined4 __cdecl CDeformableModel::getSkeletonPtr(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180
// Address: 00518180
int __cdecl CDeformableModel::getVertexPoolPtr(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_005181a0
// Address: 005181a0
void __cdecl CDeformableModel::skinVertices(int param_1,int param_2,int param_3,int *param_4);

// Original: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00518440
// Address: 00518440
void __cdecl CDeformableModel::rotateVertices(int param_1,int param_2,undefined4 param_3);

// Original: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00518470
// Address: 00518470
void __cdecl CDeformableModel::lightVertices(int param_1,int param_2,undefined4 param_3);

// Original: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_005184b0
// Address: 005184b0
int __cdecl CDeformableModel::initVertexWRecip(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510
// Address: 00518510
void __cdecl CDeformableModel::renderParts(int param_1,int param_2,byte *param_3,int *param_4,uint param_5,int param_6);

// Original: core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00518ec0
// Address: 00518ec0
void CDeformableModel::renderWireframe(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModel_load_FUN_005191f0
// Address: 005191f0
void __cdecl CDeformableModel::load(int param_1,char *param_2);

// Original: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
// Address: 00519280
void __cdecl CDeformableModel::loadStream(int *param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0
// Address: 00519ae0
void CDeformableModel::bindSkeleton(int param_1,undefined4 param_2);

// Original: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_00519b10
// Address: 00519b10
int __cdecl CDeformableModel::getPartPtr(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
// Address: 00519b30
int __cdecl CDeformableModel::findPartByName(int param_1,undefined4 param_2,int param_3);

// Original: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00519bc0
// Address: 00519bc0
undefined4 __cdecl CDeformableModel::getBonePart(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
// Address: 00519be0
int __cdecl CDeformableModel::computeBoneDominantPart(int param_1,uint param_2);

// Original: core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0
// Address: 00519ec0
void __cdecl CDeformableModel::dismember(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6);

// Original: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470
// Address: 0051a470
float CDeformableModel::exactRayTrace(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,byte *param_6);

// Original: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700
// Address: 0051a700
int __cdecl CDeformableModel::selectLOD(int *param_1,undefined4 param_2);

// Original: core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780
// Address: 0051a780
void __cdecl CDeformableModel::shatter(int param_1,float *param_2,undefined4 param_3,int param_4,int *param_5,byte *param_6 ,int *param_7);

// Original: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20
// Address: 0051ad20
int __cdecl CDeformableModel::computePartDominantBones(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280
// Address: 0051b280
int __cdecl CDeformableModel::computeBoneBoundsAndFlags(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480
// Address: 0051b480
void __cdecl CDeformableModel::computeFarthestChildBones(int param_1);

// Original: core_skeleton.cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540
// Address: 0051b540
int CDeformableModel::findMaxWeightBone(int param_1,int param_2,int param_3);

// Original: core_skeleton.cpp_CDeformableModel_calculateMemorySize_FUN_0051b600
// Address: 0051b600
int __cdecl CDeformableModel::calculateMemorySize(int *param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
// Address: 0051b660
void __cdecl CDeformableModelInstance::ctor(undefined4 param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
// Address: 0051b6e0
int __cdecl CDeformableModelInstance::dtor(int param_1,byte param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750
// Address: 0051b750
void __cdecl CDeformableModelInstance::allocPointList(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
// Address: 0051b800
void __cdecl CDeformableModelInstance::resetToRestPose(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
// Address: 0051b880
void __cdecl CDeformableModelInstance::updateAnimationAndTransforms(undefined4 param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
// Address: 0051b8a0
void __cdecl CDeformableModelInstance::updateAnimation(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
// Address: 0051b8f0
void __cdecl CDeformableModelInstance::updateMotionAtFrame(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
// Address: 0051b920
void __cdecl CDeformableModelInstance::updateMotion(int param_1,int param_2,undefined4 param_3,int param_4);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
// Address: 0051c3d0
void CDeformableModelInstance::blendMotion(int param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5,code *param_6);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
// Address: 0051cab0
void __cdecl CDeformableModelInstance::blendWithPoseData(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0
// Address: 0051cae0
void __cdecl CDeformableModelInstance::blendWithQuaternions(int param_1,undefined4 *param_2,float *param_3,float param_4,int param_5,code *param_6);

// Original: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
// Address: 0051cfd0
void __cdecl CDeformableModelInstance::blendBoneRotations(int param_1,undefined4 param_2,float param_3,undefined4 param_4,code *param_5);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
// Address: 0051d0a0
void CDeformableModelInstance::getBoneWorldMatrix(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
// Address: 0051d2a0
float * __cdecl CDeformableModelInstance::getBoneWorldPosition(int param_1,float *param_2,int param_3);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
// Address: 0051d380
undefined4 * __cdecl CDeformableModelInstance::getBoneCachedWorldPosition(int param_1,undefined4 *param_2,int param_3);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
// Address: 0051d3c0
void __cdecl CDeformableModelInstance::computeBoneTransforms(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
// Address: 0051d7a0
void __cdecl CDeformableModelInstance::applyRotationToHierarchy(int param_1,undefined4 param_2,float param_3,int param_4,code *param_5);

// Original: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970
// Address: 0051d970
void __cdecl CDeformableModelInstance::scalePoseDataForHierarchy(int param_1,float param_2,undefined4 param_3);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
// Address: 0051d9d0
void __cdecl CDeformableModelInstance::renderWithOptions(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
// Address: 0051da50
void __cdecl CDeformableModelInstance::skinVerticesForLOD(int param_1,undefined4 param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0
// Address: 0051dad0
void __cdecl CDeformableModelInstance::skinAndRotateVertices(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20
// Address: 0051db20
void __cdecl CDeformableModelInstance::skinAndLightVertices(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70
// Address: 0051db70
void __cdecl CDeformableModelInstance::skinAndInitWRecip(int param_1,int param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
// Address: 0051dbc0
void CDeformableModelInstance::renderPolygons(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
// Address: 0051dc90
void __cdecl CDeformableModelInstance::showAllParts(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_0051dcb0
// Address: 0051dcb0
void __cdecl CDeformableModelInstance::clearAllTextureSetIndices(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
// Address: 0051dcd0
void __cdecl CDeformableModelInstance::preCache(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
// Address: 0051dd00
void __cdecl CDeformableModelInstance::initializeFromModel(int param_1,undefined4 param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60
// Address: 0051de60
void __cdecl CDeformableModelInstance::computeBoundingBoxFromVertices(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
// Address: 0051e020
undefined4 __cdecl CDeformableModelInstance::getModelPtr(int param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
// Address: 0051e0a0
void __cdecl CDeformableModelInstance::getSkeletonPtr(undefined4 param_1);

// Original: core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
// Address: 0051e0c0
void CDeformableModelInstance::init(int param_1,char *param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120
// Address: 0051e120
int CDeformableModelInstance::findPatchToFrame(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350
// Address: 0051e350
void __cdecl CDeformableModelInstance::computeBoneTransformsForFrame(int param_1,undefined4 param_2,undefined4 param_3,float *param_4);

// Original: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510
// Address: 0051e510
void CDeformableModelInstance::accumulateScaledRootMotion(int param_1,undefined4 param_2,undefined4 param_3,float param_4);

// Original: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
// Address: 0051e590
float * __cdecl CDeformableModelInstance::getRootMotionDelta(float param_1,float *param_2,float param_3,float param_4);

// Original: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
// Address: 0051e8c0
void CDeformableModelInstance::dismemberPart(int param_1,int param_2,int param_3);

// Original: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960
// Address: 0051e960
undefined4 CDeformableModelInstance::rayIntersect(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0
// Address: 0051e9e0
int __cdecl CDeformableModelInstance::findClosestBone(int param_1,float *param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30
// Address: 0051ed30
void __cdecl CDeformableModelInstance::shatter(int param_1,undefined4 param_2,undefined4 param_3,int param_4);

// Original: core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
// Address: 0051ed90
void __cdecl CDeformableModelInstance::getBoneTransform(int param_1,undefined4 *param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60
// Address: 0051ee60
void __cdecl CDeformableModelInstance::setBoneTransform(int param_1,undefined4 *param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
// Address: 0051ef40
undefined4 __cdecl CDeformableModelInstance::computeBoundingBoxFromBones(int param_1,undefined4 param_2);

// Original: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
// Address: 0051f080
void __cdecl CDeformableModelInstance::computeCylindricalUVs(int param_1,int param_2,int param_3);

// Original: core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0
// Address: 0051f1d0
void __cdecl computeBoneWorldMatrices(float *param_1,int param_2);

// Original: core_skeleton.cpp_getDeformableModel_FUN_0051f570
// Address: 0051f570
int __cdecl getDeformableModel(undefined4 param_1);

// Original: core_skeleton.cpp_freeAllSkeletons_FUN_0051f730
// Address: 0051f730
void __cdecl freeAllSkeletons(void);

// Original: core_skeleton.cpp_SVert_ctor_FUN_0051f840
// Address: 0051f840
int SVert::ctor(int param_1);

// Original: core_skeleton.cpp_SVert_dtor_FUN_0051f860
// Address: 0051f860
int SVert::dtor(int param_1);
