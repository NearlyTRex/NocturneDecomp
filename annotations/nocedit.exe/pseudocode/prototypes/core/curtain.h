#pragma once

// Function prototypes for core/curtain.cpp
// Generated from Ghidra function signatures

// Original: core_curtain.cpp_staticInit_FUN_00449610
// Address: 00449610
void __cdecl staticInit(void);

// Original: core_curtain.cpp_factoryFuncCurtain_FUN_00449660
// Address: 00449660
CCurtain * __cdecl factoryFuncCurtain(void);

// Original: core_curtain.cpp_CCurtain_getActorType_FUN_00449690
// Address: 00449690
CDemonActorType * __cdecl CCurtain::getActorType(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_ctor_FUN_004496a0
// Address: 004496a0
CCurtain * __cdecl CCurtain::ctor(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_setup_FUN_00449810
// Address: 00449810
void __cdecl CCurtain::setup(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_updateWorldPositions_FUN_00449e40
// Address: 00449e40
void __cdecl CCurtain::updateWorldPositions(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_updateLocalPositions_FUN_00449f10
// Address: 00449f10
void __cdecl CCurtain::updateLocalPositions(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_solveConstraints_FUN_00449fc0
// Address: 00449fc0
void __cdecl CCurtain::solveConstraints(CCurtain *this_ptr,SCurtainVertex *vertex);

// Original: core_curtain.cpp_CCurtain_process_FUN_0044a920
// Address: 0044a920
void __cdecl CCurtain::process(CCurtain *this_ptr,float delta_time);

// Original: core_curtain.cpp_CCurtain_renderMesh_FUN_0044b060
// Address: 0044b060
int __cdecl CCurtain::renderMesh(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_renderOpaque_FUN_0044b340
// Address: 0044b340
int __cdecl CCurtain::renderOpaque(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_renderTransparent_FUN_0044b360
// Address: 0044b360
int __cdecl CCurtain::renderTransparent(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_getCollisionType_FUN_0044b370
// Address: 0044b370
ECollisionType __cdecl CCurtain::getCollisionType(CCurtain *this_ptr,SCollisionInfo *collision_info);

// Original: core_curtain.cpp_CCurtain_getBoundingBox_FUN_0044b380
// Address: 0044b380
CBoundingBox3D * __cdecl CCurtain::getBoundingBox(CCurtain *this_ptr,CBoundingBox3D *out_box);

// Original: core_curtain.cpp_CCurtain_archive_FUN_0044b3e0
// Address: 0044b3e0
void __cdecl CCurtain::archive(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_getBlockVirtualDirectorFlag_FUN_0044b600
// Address: 0044b600
int __cdecl CCurtain::getBlockVirtualDirectorFlag(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_getPropertyList_FUN_0044b610
// Address: 0044b610
void __cdecl CCurtain::getPropertyList(CCurtain *this_ptr,CActorPropertyList *property_list);

// Original: core_curtain.cpp_CCurtain_processInEditor_FUN_0044b7a0
// Address: 0044b7a0
void __cdecl CCurtain::processInEditor(CCurtain *this_ptr);

// Original: core_curtain.cpp_CCurtain_showEditorHelp_FUN_0044b8d0
// Address: 0044b8d0
void __cdecl CCurtain::showEditorHelp(CCurtain *this_ptr,int *y_pos);

// Original: core_curtain.cpp_CCurtain_addFilesToExtract_FUN_0044b960
// Address: 0044b960
void __cdecl CCurtain::addFilesToExtract(CCurtain *this_ptr,_FILE *file_handle);

// Original: core_curtain.cpp_CCurtain_dtor_FUN_0044ba30
// Address: 0044ba30
CCurtain * __cdecl CCurtain::dtor(CCurtain *this_ptr,uint flags);

// Original: core_curtain.cpp_SCurtainVertex_ctor_FUN_0044baa0
// Address: 0044baa0
SCurtainVertex * __cdecl SCurtainVertex::ctor(SCurtainVertex *this_ptr);

// Original: core_curtain.cpp_SCurtainVertex_dtor_FUN_0044bab0
// Address: 0044bab0
SCurtainVertex * __cdecl SCurtainVertex::dtor(SCurtainVertex *this_ptr,uint flags);

// Original: core_curtain.cpp_SCollisionInfo_dtor_FUN_0044bac0
// Address: 0044bac0
SCollisionInfo * __cdecl SCollisionInfo::dtor(SCollisionInfo *this_ptr,uint flags);

// Original: core_curtain.cpp_SCurtainVertex_arrdtor1000_FUN_0044bad0
// Address: 0044bad0
SCurtainVertex * __cdecl SCurtainVertex::arrdtor1000(SCurtainVertex *objs,uint flags);

// Original: core_curtain.cpp_CVector3f_arrdtor100_FUN_0044baf0
// Address: 0044baf0
CVector3f * __cdecl CVector3f::arrdtor100(CVector3f *this_ptr,uint flags);
