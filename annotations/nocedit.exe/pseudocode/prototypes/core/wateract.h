#pragma once

// Function prototypes for core/wateract.cpp
// Generated from Ghidra function signatures

// Original: core_wateract.cpp_staticInit_FUN_005ea810
// Address: 005ea810
void __cdecl staticInit(void);

// Original: core_wateract.cpp_factoryFunc_FUN_005ea860
// Address: 005ea860
CWaterActor * __cdecl factoryFunc(void);

// Original: core_wateract.cpp_CWaterActor_getActorType_FUN_005ea890
// Address: 005ea890
CDemonActorType * __cdecl CWaterActor::getActorType(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
// Address: 005ea8a0
CWaterActor * __cdecl CWaterActor::ctor(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_setup_FUN_005ea9f0
// Address: 005ea9f0
void __cdecl CWaterActor::setup(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_FUN_005eafa0
// Address: 005eafa0
void __cdecl CWaterActor(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_FUN_005eb040
// Address: 005eb040
void __cdecl CWaterActor(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_process_FUN_005eb100
// Address: 005eb100
void __cdecl CWaterActor::process(CWaterActor *this_ptr,float delta_time);

// Original: core_wateract.cpp_CWaterActor_renderTransparent_FUN_005eb280
// Address: 005eb280
int __cdecl CWaterActor::renderTransparent(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_getBoundingBox_FUN_005eb4b0
// Address: 005eb4b0
CBoundingBox3D * __cdecl CWaterActor::getBoundingBox(CWaterActor *this_ptr,CBoundingBox3D *out_box);

// Original: core_wateract.cpp_CWaterActor_archive_FUN_005eb510
// Address: 005eb510
void __cdecl CWaterActor::archive(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_hasCollision_FUN_005eb710
// Address: 005eb710
int __cdecl CWaterActor::hasCollision(CWaterActor *this_ptr,SCollisionInfo *collision_info);

// Original: core_wateract.cpp_CWaterActor_getGroundType_FUN_005eb730
// Address: 005eb730
int __cdecl CWaterActor::getGroundType(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// Address: 005eb740
float __cdecl CWaterActor::customRayIntersect(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_normal);

// Original: core_wateract.cpp_CWaterActor_getSurfaceProperties_FUN_005eb910
// Address: 005eb910
void __cdecl CWaterActor::getSurfaceProperties(CWaterActor *this_ptr,SSurfaceInfo *surface_info);

// Original: core_wateract.cpp_CWaterActor_getPropertyList_FUN_005eb940
// Address: 005eb940
void __cdecl CWaterActor::getPropertyList(CWaterActor *this_ptr,CActorPropertyList *property_list);

// Original: core_wateract.cpp_CWaterActor_processInEditor_FUN_005ebab0
// Address: 005ebab0
void __cdecl CWaterActor::processInEditor(CWaterActor *this_ptr);

// Original: core_wateract.cpp_CWaterActor_showEditorHelp_FUN_005ebc10
// Address: 005ebc10
void __cdecl CWaterActor::showEditorHelp(CWaterActor *this_ptr,int *y_pos);

// Original: core_wateract.cpp_CWaterActor_addFilesToExtract_FUN_005ebc50
// Address: 005ebc50
void __cdecl CWaterActor::addFilesToExtract(CWaterActor *this_ptr,_FILE *file_handle);

// Original: core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60
// Address: 005ebc60
CWaterActor * __cdecl CWaterActor::dtor(CWaterActor *this_ptr,uint flags);

// Original: core_wateract.cpp_SWaterVertex_ctor_FUN_005ebcd0
// Address: 005ebcd0
SWaterVertex * __cdecl SWaterVertex::ctor(SWaterVertex *this_ptr);

// Original: core_wateract.cpp_SWaterVertex_dtor_FUN_005ebce0
// Address: 005ebce0
SWaterVertex * __cdecl SWaterVertex::dtor(SWaterVertex *this_ptr,uint flags);

// Original: core_wateract.cpp_SWaterVertex_arrdtor_FUN_005ebcf0
// Address: 005ebcf0
SWaterVertex * __cdecl SWaterVertex::arrdtor(SWaterVertex *objs,uint flags);
