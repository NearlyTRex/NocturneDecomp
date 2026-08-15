#pragma once

// Function prototypes for core/cloth.cpp
// Generated from Ghidra function signatures

// Original: core_cloth.cpp_staticInit_FUN_00438b80
// Address: 00438b80
void __cdecl staticInit(void);

// Original: core_cloth.cpp_CCloth_ctor_FUN_00438ba0
// Address: 00438ba0
CCloth * __cdecl CCloth::ctor(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_dtor_FUN_00438c00
// Address: 00438c00
CCloth * __cdecl CCloth::dtor(CCloth *this_ptr,uint flags);

// Original: core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
// Address: 00438c50
void __cdecl CCloth::allocMemory(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_free_FUN_00438cb0
// Address: 00438cb0
void __cdecl CCloth::free(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_load_FUN_00438cf0
// Address: 00438cf0
int __cdecl CCloth::load(CCloth *this_ptr,char *filename);

// Original: core_cloth.cpp_CCloth_save_FUN_00439260
// Address: 00439260
void __cdecl CCloth::save(CCloth *this_ptr,char *filename);

// Original: core_cloth.cpp_CCloth_initializeConnections_FUN_004394e0
// Address: 004394e0
void __cdecl CCloth::initializeConnections(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_setup_FUN_00439710
// Address: 00439710
void __cdecl CCloth::setup(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043a110
// Address: 0043a110
void __cdecl CCloth::orientBoneToChild(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0
// Address: 0043a2b0
void __cdecl CCloth::computeBoneTransform(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420
// Address: 0043a420
void __cdecl CCloth::applyConstraints(CCloth *this_ptr,SClothVertex *vertex);

// Original: core_cloth.cpp_CCloth_process_FUN_0043ab80
// Address: 0043ab80
void __cdecl CCloth::process(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_step_FUN_0043abb0
// Address: 0043abb0
void __cdecl CCloth::step(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_renderCollisionBones_FUN_0043b790
// Address: 0043b790
void __cdecl CCloth::renderCollisionBones(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0
// Address: 0043b7e0
void __cdecl CCloth::renderBone(CCloth *this_ptr,int bone_index,int show_labels);

// Original: core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
// Address: 0043b9f0
int __cdecl CCloth::saveJoinedLight(CCloth *this_ptr,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CCloth_render_FUN_0043bae0
// Address: 0043bae0
void __cdecl CCloth::render(CCloth *this_ptr,CDeformableModelInstance *deformable_model);

// Original: core_cloth.cpp_CClothList_ctor_FUN_0043bf40
// Address: 0043bf40
CClothList * __cdecl CClothList::ctor(CClothList *this_ptr);

// Original: core_cloth.cpp_CClothList_dtor_FUN_0043bf80
// Address: 0043bf80
CClothList * __cdecl CClothList::dtor(CClothList *this_ptr,uint flags);

// Original: core_cloth.cpp_CClothList_load_FUN_0043bfa0
// Address: 0043bfa0
void __cdecl CClothList::load(CClothList *this_ptr);

// Original: core_cloth.cpp_CClothList_reset_FUN_0043c070
// Address: 0043c070
void __cdecl CClothList::reset(CClothList *this_ptr);

// Original: core_cloth.cpp_CClothList_add_FUN_0043c0f0
// Address: 0043c0f0
void __cdecl CClothList::add(CClothList *this_ptr,char *filename);

// Original: core_cloth.cpp_CClothList_remove_FUN_0043c170
// Address: 0043c170
void __cdecl CClothList::remove(CClothList *this_ptr,int index);

// Original: core_cloth.cpp_CClothList_setup_FUN_0043c290
// Address: 0043c290
void __cdecl CClothList::setup(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CClothList_process_FUN_0043c2d0
// Address: 0043c2d0
void __cdecl CClothList::process(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CClothList_render_FUN_0043c320
// Address: 0043c320
void __cdecl CClothList::render(CClothList *this_ptr,CDeformableModelInstance *model_ptr);

// Original: core_cloth.cpp_CClothList_applyRotation_FUN_0043c3a0
// Address: 0043c3a0
void __cdecl CClothList::applyRotation(CClothList *this_ptr,CVector3f *euler);

// Original: core_cloth.cpp_CClothList_setWindVelocity_FUN_0043c3e0
// Address: 0043c3e0
void __cdecl CClothList::setWindVelocity(CClothList *this_ptr,CVector3f *wind_velocity);

// Original: core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430
// Address: 0043c430
void __cdecl CCloth::addCollisionBone(CCloth *this_ptr);

// Original: core_cloth.cpp_plotPixelSafe_FUN_0043c6b0
// Address: 0043c6b0
void __cdecl plotPixelSafe(int x,int y);

// Original: core_cloth.cpp_drawVertexMarker_FUN_0043c6e0
// Address: 0043c6e0
void __cdecl drawVertexMarker(int vert_index);

// Original: core_cloth.cpp_drawVertexMarkerAtWorldPos_FUN_0043c820
// Address: 0043c820
void __cdecl drawVertexMarkerAtWorldPos(CVector3f *world_pos);

// Original: core_cloth.cpp_CCloth_boneEditor_FUN_0043c880
// Address: 0043c880
void __cdecl CCloth::boneEditor(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590
// Address: 0043d590
void __cdecl CCloth::lockedVertexEditor(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_createFromKFM_FUN_0043dcc0
// Address: 0043dcc0
void __cdecl CCloth::createFromKFM(CCloth *this_ptr,char *filename);

// Original: core_cloth.cpp_CCloth_showMenu_FUN_0043ddf0
// Address: 0043ddf0
void __cdecl CCloth::showMenu(CCloth *this_ptr);

// Original: core_cloth.cpp_CCloth_addFilesToExtract_FUN_0043e0a0
// Address: 0043e0a0
void __cdecl CCloth::addFilesToExtract(CCloth *this_ptr,_FILE *file_handle);

// Original: core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
// Address: 0043e0d0
void __cdecl CCloth::grabCloth(CCloth *this_ptr,char *bone_name,int vertex_index);

// Original: core_cloth.cpp_CCloth_resetState_FUN_0043e170
// Address: 0043e170
void __cdecl CCloth::resetState(CCloth *this_ptr,int vertex_index);

// Original: core_cloth.cpp_CCloth_applyRotation_FUN_0043e1a0
// Address: 0043e1a0
void __cdecl CCloth::applyRotation(CCloth *this_ptr,CVector3f *euler);

// Original: core_cloth.cpp_fastInvSqrt_FUN_0043e2a0
// Address: 0043e2a0
float __cdecl fastInvSqrt(float dist_sq);

// Original: core_cloth.cpp_dotProduct1_FUN_0043e2c0
// Address: 0043e2c0
float __cdecl dotProduct1(CVector3f *a,CVector3f *b);

// Original: core_cloth.cpp_addVector_FUN_0043e2f0
// Address: 0043e2f0
void __cdecl addVector(CVector3f *a,CVector3f *b);

// Original: core_cloth.cpp_dotProduct2_FUN_0043e320
// Address: 0043e320
float __cdecl dotProduct2(CVector3f *a,CVector3f *b);

// Original: core_cloth.cpp_vectorLengthFast_FUN_0043e350
// Address: 0043e350
float __cdecl vectorLengthFast(CVector3f *v);

// Original: core_cloth.cpp_applyLightAttenuation_FUN_0043e380
// Address: 0043e380
CVector3f * __cdecl applyLightAttenuation(CVector3f *v);

// Original: core_cloth.cpp_scaleVector_FUN_0043e3d0
// Address: 0043e3d0
CVector3f * __cdecl scaleVector(CVector3f *out,float *scale,CVector3f *v);

// Original: core_cloth.cpp_SClothBone_ctor_FUN_0043e400
// Address: 0043e400
SClothBone * __cdecl SClothBone::ctor(SClothBone *this_ptr);

// Original: core_cloth.cpp_SClothBone_dtor_FUN_0043e410
// Address: 0043e410
SClothBone * __cdecl SClothBone::dtor(SClothBone *this_ptr,uint flags);

// Original: core_cloth.cpp_SClothVertex_ctor_FUN_0043e420
// Address: 0043e420
SClothVertex * __cdecl SClothVertex::ctor(SClothVertex *this_ptr);

// Original: core_cloth.cpp_SClothVertex_dtor_FUN_0043e440
// Address: 0043e440
SClothVertex * __cdecl SClothVertex::dtor(SClothVertex *this_ptr,uint flags);

// Original: core_cloth.cpp_CVector3f_arrdtor3_FUN_0043e460
// Address: 0043e460
CVector3f * __cdecl CVector3f::arrdtor3(CVector3f *this_ptr,uint flags);

// Original: core_cloth.cpp_SClothVertex_arrdtor800_FUN_0043e480
// Address: 0043e480
SClothVertex * __cdecl SClothVertex::arrdtor800(SClothVertex *objs,uint flags);

// Original: core_cloth.cpp_SClothBone_arrdtor50_FUN_0043e4a0
// Address: 0043e4a0
SClothBone * __cdecl SClothBone::arrdtor50(SClothBone *objs,uint flags);
