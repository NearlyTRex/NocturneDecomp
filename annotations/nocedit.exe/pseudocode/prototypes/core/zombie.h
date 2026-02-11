#pragma once

// Function prototypes for core/zombie.cpp
// Generated from Ghidra function signatures

// Original: core_zombie.cpp_staticInit_FUN_005f8c90
// Address: 005f8c90
void __cdecl staticInit(void);

// Original: core_zombie.cpp_FUN_005f8cc0
// Address: 005f8cc0
float __cdecl FUN_005f8cc0(void);

// Original: core_zombie.cpp_FUN_005f8d30
// Address: 005f8d30
float * __cdecl FUN_005f8d30(void);

// Original: core_zombie.cpp_FUN_005f8da0
// Address: 005f8da0
CVector3f * __cdecl FUN_005f8da0(void);

// Original: core_zombie.cpp_FUN_005f8e50
// Address: 005f8e50
int __cdecl FUN_005f8e50(void);

// Original: core_zombie.cpp_factoryFunc_FUN_005f8fa0
// Address: 005f8fa0
CZombie * __cdecl factoryFunc(void);

// Original: core_zombie.cpp_CZombie_getActorType_FUN_005f8fd0
// Address: 005f8fd0
CDemonActorType * __cdecl CZombie::getActorType(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
// Address: 005f8fe0
CZombie * __cdecl CZombie::ctor(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_setup_FUN_005f9140
// Address: 005f9140
void __cdecl CZombie::setup(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_process_FUN_005f9470
// Address: 005f9470
void __cdecl CZombie::process(CZombie *this_ptr,float delta_time);

// Original: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_005fb1f0
// Address: 005fb1f0
void __stack2_esi CZombie::getCarryObjToBodyXForm(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_zombie.cpp_CZombie_FUN_005fb530
// Address: 005fb530
int __cdecl CZombie(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_FUN_005fbd00
// Address: 005fbd00
int __cdecl CZombie(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_FUN_005fbda0
// Address: 005fbda0
int __cdecl CZombie(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_FUN_005fbde0
// Address: 005fbde0
void __cdecl CZombie(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_renderOpaque_FUN_005fbe20
// Address: 005fbe20
int __cdecl CZombie::renderOpaque(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_renderTransparent_FUN_005fbe70
// Address: 005fbe70
int __cdecl CZombie::renderTransparent(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_archive_FUN_005fbfd0
// Address: 005fbfd0
void __cdecl CZombie::archive(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_canBeAttracted_FUN_005fc120
// Address: 005fc120
int __cdecl CZombie::canBeAttracted(CZombie *this_ptr,CVector3f *param_2);

// Original: core_zombie.cpp_CZombie_FUN_005fc220
// Address: 005fc220
void __cdecl CZombie(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_processDamage_FUN_005fc4f0
// Address: 005fc4f0
void __cdecl CZombie::processDamage(CZombie *this_ptr,SDamageInfo *damage_info);

// Original: core_zombie.cpp_CZombie_getTargetPoints_FUN_005fc720
// Address: 005fc720
int __cdecl CZombie::getTargetPoints(CZombie *this_ptr,CVector3f *out_points_array);

// Original: core_zombie.cpp_CZombie_isGrabbable_FUN_005fc920
// Address: 005fc920
int __cdecl CZombie::isGrabbable(CZombie *this_ptr,CDemonActor *param_2);

// Original: core_zombie.cpp_CZombie_canBeGrabbed_FUN_005fc960
// Address: 005fc960
int __cdecl CZombie::canBeGrabbed(CZombie *this_ptr,CDemonActor *grabber,int grab_type);

// Original: core_zombie.cpp_CZombie_getGrabbed_FUN_005fc970
// Address: 005fc970
int __cdecl CZombie::getGrabbed(CZombie *this_ptr,CDemonActor *grabber,int grab_type,int param_4);

// Original: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005fc9e0
// Address: 005fc9e0
int __cdecl CZombie::shouldIgnoreForTargeting(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_FUN_005fca10
// Address: 005fca10
void __cdecl CZombie(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_getPropertyList_FUN_005fca80
// Address: 005fca80
void __cdecl CZombie::getPropertyList(CZombie *this_ptr,CActorPropertyList *property_list);

// Original: core_zombie.cpp_CZombie_FUN_005fcb70
// Address: 005fcb70
void __cdecl CZombie(CZombie *this_ptr);

// Original: core_zombie.cpp_CZombie_addFilesToExtract_FUN_005fcc20
// Address: 005fcc20
void __cdecl CZombie::addFilesToExtract(CZombie *this_ptr,_FILE *file_handle);

// Original: core_zombie.cpp_CZombie_dtor_FUN_005fcc50
// Address: 005fcc50
CZombie * __cdecl CZombie::dtor(CZombie *this_ptr,uint flags);

// Original: core_zombie.cpp_FUN_005fcd10
// Address: 005fcd10
int __cdecl FUN_005fcd10(void);

// Original: core_zombie.cpp_FUN_005fcd20
// Address: 005fcd20
void __cdecl FUN_005fcd20(void);

// Original: core_zombie.cpp_FUN_005fce40
// Address: 005fce40
void __cdecl FUN_005fce40(void);

// Original: core_zombie.cpp_FUN_005fcf80
// Address: 005fcf80
SEdgeData * __cdecl FUN_005fcf80(void);
