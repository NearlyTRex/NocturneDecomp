#pragma once

// Function prototypes for core/flamecan.cpp
// Generated from Ghidra function signatures

// Original: core_flamecan.cpp_staticInit_FUN_004cb0f0
// Address: 004cb0f0
void __cdecl staticInit(void);

// Original: core_flamecan.cpp_factoryFuncFlameCan_FUN_004cb120
// Address: 004cb120
CFlameCan * __cdecl factoryFuncFlameCan(void);

// Original: core_flamecan.cpp_CFlameCan_getActorType_FUN_004cb150
// Address: 004cb150
CDemonActorType * __cdecl CFlameCan::getActorType(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_ctor_FUN_004cb160
// Address: 004cb160
CFlameCan * __cdecl CFlameCan::ctor(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_setup_FUN_004cb200
// Address: 004cb200
void __cdecl CFlameCan::setup(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340
// Address: 004cb340
void __cdecl CFlameCan::ignite(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_process_FUN_004cb390
// Address: 004cb390
void __cdecl CFlameCan::process(CFlameCan *this_ptr,float delta_time);

// Original: core_flamecan.cpp_CFlameCan_renderOpaque_FUN_004cb4c0
// Address: 004cb4c0
int __cdecl CFlameCan::renderOpaque(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004cb550
// Address: 004cb550
int __cdecl CFlameCan::renderTransparent(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_getTargetPoints_FUN_004cb580
// Address: 004cb580
int __cdecl CFlameCan::getTargetPoints(CFlameCan *this_ptr,CVector3f *out_points_array);

// Original: core_flamecan.cpp_CFlameCan_archive_FUN_004cb620
// Address: 004cb620
void __cdecl CFlameCan::archive(CFlameCan *this_ptr);

// Original: core_flamecan.cpp_CFlameCan_getCollisionType_FUN_004cb680
// Address: 004cb680
ECollisionType __cdecl CFlameCan::getCollisionType(CFlameCan *this_ptr,SCollisionInfo *collision_info);

// Original: core_flamecan.cpp_CFlameCan_getBoundingBox_FUN_004cb690
// Address: 004cb690
CBoundingBox3D * __cdecl CFlameCan::getBoundingBox(CFlameCan *this_ptr,CBoundingBox3D *out_box);

// Original: core_flamecan.cpp_CFlameCan_getPropertyList_FUN_004cb6e0
// Address: 004cb6e0
void __cdecl CFlameCan::getPropertyList(CFlameCan *this_ptr,CActorPropertyList *property_list);

// Original: core_flamecan.cpp_CFlameCan_addFilesToExtract_FUN_004cb750
// Address: 004cb750
void __cdecl CFlameCan::addFilesToExtract(CFlameCan *this_ptr,_FILE *file_handle);

// Original: core_flamecan.cpp_CFlameCan_dtor_FUN_004cb7a0
// Address: 004cb7a0
CFlameCan * __cdecl CFlameCan::dtor(CFlameCan *this_ptr,uint flags);
