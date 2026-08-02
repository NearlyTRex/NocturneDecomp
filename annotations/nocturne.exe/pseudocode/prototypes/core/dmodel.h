#pragma once

// Function prototypes for core/dmodel.cpp
// Generated from Ghidra function signatures

// Original: core_dmodel.cpp_staticInit_FUN_00452530
// Address: 00452530
void __cdecl staticInit(void);

// Original: core_dmodel.cpp_FUN_00452560
// Address: 00452560
void FUN_00452560(_FILE *param_1,int param_2);

// Original: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
// Address: 00452590
CKeyFramedModel * __cdecl CKeyFramedModel::ctor(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630
// Address: 00452630
CKeyFramedModel * __cdecl CKeyFramedModel::dtor(CKeyFramedModel *this_ptr,uint flags);

// Original: core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
// Address: 00452650
void __cdecl CKeyFramedModel::load(CKeyFramedModel *this_ptr,char *filename);

// Original: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0
// Address: 004527a0
void __cdecl CKeyFramedModel::readBinaryModel(CKeyFramedModel *this_ptr,_FILE *file);

// Original: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00452990
// Address: 00452990
void __cdecl CKeyFramedModel::readTextModel(CKeyFramedModel *this_ptr,_FILE *file);

// Original: core_dmodel.cpp_FUN_00452f10
// Address: 00452f10
void FUN_00452f10(int param_1);

// Original: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
// Address: 00453040
void __cdecl CKeyFramedModel::prepareForRender(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags);

// Original: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
// Address: 00453080
CVector3i * __cdecl CKeyFramedModel::getFrameVertices(CKeyFramedModel *this_ptr,int frame_index);

// Original: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0
// Address: 004530c0
void __cdecl CKeyFramedModel::rotateAndLightVertices(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance);

// Original: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170
// Address: 00453170
void __cdecl CKeyFramedModel::submitToRenderer(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags);

// Original: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0
// Address: 004533e0
void CKeyFramedModel::allocate(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620
// Address: 00453620
void __cdecl CKeyFramedModel::calcNormals(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0
// Address: 004537d0
void __cdecl CKeyFramedModel::calculateFrameBounds(CKeyFramedModel *model_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00453950
// Address: 00453950
void __cdecl CKeyFramedModel::captureTextures(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990
// Address: 00453990
float __cdecl CKeyFramedModel::intersectRay(CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *output_normal);

// Original: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10
// Address: 00453e10
void __cdecl CKeyFramedModel::intersectCylinder(CKeyFramedModel *this_ptr,int frame_index,SIntersectXZCylinder *cylinder,CVector3f *transform_vector);

// Original: core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00453f00
// Address: 00453f00
int __cdecl CKeyFramedModel::getFloorHeight(CKeyFramedModel *this_ptr,int frame_index,CVector3f *position,float search_radius,float *out_height,CVector3f *transform_vector);

// Original: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
// Address: 00453ff0
void __cdecl CKeyFramedModel::buildCollisionTriList(CKeyFramedModel *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
// Address: 00454100
void __cdecl CKeyFramedModel::populateCollisionList(CKeyFramedModel *this_ptr,CVector3f *transform_vector);

// Original: core_dmodel.cpp_loadModel_FUN_004543b0
// Address: 004543b0
CKeyFramedModel * __cdecl loadModel(char *filename);

// Original: core_dmodel.cpp_FUN_00454460
// Address: 00454460
void __cdecl FUN_00454460(void);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
// Address: 00454490
CKeyFramedModelInstance * __cdecl CKeyFramedModelInstance::ctor(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0
// Address: 004544b0
CKeyFramedModelInstance * __cdecl CKeyFramedModelInstance::init(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
// Address: 004544d0
void __cdecl CKeyFramedModelInstance::prepareForRendering(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
// Address: 00454510
CKeyFramedModel * __cdecl CKeyFramedModelInstance::preCache(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
// Address: 00454530
CKeyFramedModel * __cdecl CKeyFramedModelInstance::getModelPtr(CKeyFramedModelInstance *this_ptr);

// Original: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
// Address: 00454580
void __cdecl CKeyFramedModelInstance::setModelName(CKeyFramedModelInstance *this_ptr,char *filename);

// Original: core_dmodel.cpp_CDemonTriangle_ctor_FUN_004545c0
// Address: 004545c0
CDemonTriangle * __cdecl CDemonTriangle::ctor(CDemonTriangle *this_ptr);

// Original: core_dmodel.cpp_CDemonTriangle_dtor_FUN_004545d0
// Address: 004545d0
CDemonTriangle * __cdecl CDemonTriangle::dtor(CDemonTriangle *this_ptr,uint flags);

// Original: core_dmodel.cpp_FUN_004545e0
// Address: 004545e0
void FUN_004545e0(void *param_1);
