#pragma once

// Function prototypes for core/cloth.cpp
// Generated from Ghidra function signatures

// Original: core_cloth.cpp_CCloth_ctor_FUN_00435100
// Address: 00435100
CCloth * __cdecl CCloth::ctor(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_dtor_FUN_00435160
// Address: 00435160
CCloth * __cdecl CCloth::dtor(CCloth *this_ptr,uint flags);

// Original: core_cloth.cpp_CCloth_allocMemory_FUN_004351b0
// Address: 004351b0
void __cdecl CCloth::allocMemory(CCloth *this_ptr);

// Original: core_cloth.cpp_FUN_00435210
// Address: 00435210
void FUN_00435210(int param_1);

// Original: core_cloth.cpp_CCloth_load_FUN_00435240
// Address: 00435240
int __cdecl CCloth::load(CCloth *this_ptr,char *filename);

// Original: core_cloth.cpp_CCloth_initializeConnections_FUN_004357b0
// Address: 004357b0
void __cdecl CCloth::initializeConnections(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_setup_FUN_004359e0
// Address: 004359e0
void __cdecl CCloth::setup(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_orientBoneToChild_FUN_004363e0
// Address: 004363e0
void __cdecl CCloth::orientBoneToChild(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_computeBoneTransform_FUN_00436580
// Address: 00436580
void __cdecl CCloth::computeBoneTransform(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0
// Address: 004366f0
void __cdecl CCloth::applyConstraints(CCloth *this_ptr,SClothVertex *vertex);

// Original: core_cloth.cpp_CCloth_process_FUN_00436e50
// Address: 00436e50
void __cdecl CCloth::process(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_step_FUN_00436e80
// Address: 00436e80
void __cdecl CCloth::step(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_FUN_00437a60
// Address: 00437a60
void FUN_00437a60(int param_1);

// Original: core_cloth.cpp_FUN_00437ab0
// Address: 00437ab0
void FUN_00437ab0(int param_1,int param_2,int param_3);

// Original: core_cloth.cpp_CCloth_saveJoinedLight_FUN_00437cc0
// Address: 00437cc0
int CCloth::saveJoinedLight(int param_1,int param_2);

// Original: core_cloth.cpp_CCloth_render_FUN_00437db0
// Address: 00437db0
void __cdecl CCloth::render(CCloth *this_ptr,CDeformableModelInstance *deformable_model);

// Original: core_cloth.cpp_CClothList_ctor_FUN_00438210
// Address: 00438210
CClothList * __cdecl CClothList::ctor(CClothList *this_ptr);

// Original: core_cloth.cpp_CClothList_dtor_FUN_00438250
// Address: 00438250
CClothList * __cdecl CClothList::dtor(CClothList *this_ptr,uint flags);

// Original: core_cloth.cpp_CClothList_load_FUN_00438270
// Address: 00438270
void __cdecl CClothList::load(CClothList *this_ptr);

// Original: core_cloth.cpp_CClothList_reset_FUN_00438320
// Address: 00438320
void __cdecl CClothList::reset(CClothList *this_ptr);

// Original: core_cloth.cpp_CClothList_add_FUN_00438390
// Address: 00438390
void __cdecl CClothList::add(CClothList *this_ptr,char *filename);

// Original: core_cloth.cpp_CClothList_remove_FUN_00438410
// Address: 00438410
void CClothList::remove(int *param_1,int param_2);

// Original: core_cloth.cpp_CClothList_setup_FUN_00438510
// Address: 00438510
void __cdecl CClothList::setup(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CClothList_process_FUN_00438550
// Address: 00438550
void __cdecl CClothList::process(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CClothList_render_FUN_004385a0
// Address: 004385a0
void __cdecl CClothList::render(CClothList *this_ptr,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CClothList_applyRotation_FUN_00438620
// Address: 00438620
void CClothList::applyRotation(int *param_1,undefined4 param_2);

// Original: core_cloth.cpp_FUN_00438660
// Address: 00438660
void FUN_00438660(int *param_1,undefined4 *param_2);

// Original: core_cloth.cpp_CCloth_grabCloth_FUN_004386b0
// Address: 004386b0
void __cdecl CCloth::grabCloth(CCloth *this_ptr,char *bone_name,int vertex_index);

// Original: core_cloth.cpp_CCloth_resetState_FUN_00438750
// Address: 00438750
void __cdecl CCloth::resetState(CCloth *this_ptr,int vertex_index);

// Original: core_cloth.cpp_CCloth_applyRotation_FUN_00438780
// Address: 00438780
void CCloth::applyRotation(int param_1,float *param_2);

// Original: core_cloth.cpp_fastInvSqrt_FUN_00438880
// Address: 00438880
int fastInvSqrt(void);

// Original: core_cloth.cpp_addVector_FUN_004388a0
// Address: 004388a0
void addVector(void);

// Original: core_cloth.cpp_vectorLengthFast_FUN_004388d0
// Address: 004388d0
int vectorLengthFast(void);

// Original: core_cloth.cpp_applyLightAttenuation_FUN_00438900
// Address: 00438900
void applyLightAttenuation(void);

// Original: core_cloth.cpp_scaleVector_FUN_00438950
// Address: 00438950
void scaleVector(void);

// Original: core_cloth.cpp_FUN_00438980
// Address: 00438980
undefined4 FUN_00438980(undefined4 param_1);

// Original: core_cloth.cpp_FUN_00438990
// Address: 00438990
undefined4 FUN_00438990(undefined4 param_1);

// Original: core_cloth.cpp_SClothVertex_ctor_FUN_004389a0
// Address: 004389a0
int SClothVertex::ctor(int param_1);

// Original: core_cloth.cpp_SClothVertex_dtor_FUN_004389c0
// Address: 004389c0
float * SClothVertex::dtor(int param_1);

// Original: core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0
// Address: 004389e0
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);

// Original: core_cloth.cpp_SClothVertex_arrdtor_FUN_00438a00
// Address: 00438a00
SClothVertex * __cdecl SClothVertex::arrdtor(SClothVertex *objs,uint flags);

// Original: core_cloth.cpp_SClothBone_arrdtor_FUN_00438a20
// Address: 00438a20
SClothBone * __cdecl SClothBone::arrdtor(SClothBone *objs,uint flags);
