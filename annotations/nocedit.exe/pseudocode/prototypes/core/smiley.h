#pragma once

// Function prototypes for core/smiley.cpp
// Generated from Ghidra function signatures

// Original: core_smiley.cpp_staticInit_FUN_005a23c0
// Address: 005a23c0
void __cdecl staticInit(void);

// Original: core_smiley.cpp_factorFunc_FUN_005a23f0
// Address: 005a23f0
CSmiley * __cdecl factorFunc(void);

// Original: core_smiley.cpp_CSmiley_getActorType_FUN_005a2420
// Address: 005a2420
CDemonActorType * __cdecl CSmiley::getActorType(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_ctor_FUN_005a2430
// Address: 005a2430
CSmiley * __cdecl CSmiley::ctor(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_FUN_005a24d0
// Address: 005a24d0
void __cdecl CSmiley(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_process_FUN_005a2800
// Address: 005a2800
void __cdecl CSmiley::process(CSmiley *this_ptr,float delta_time);

// Original: core_smiley.cpp_CSmiley_FUN_005a3160
// Address: 005a3160
int __cdecl CSmiley(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_archive_FUN_005a3220
// Address: 005a3220
void __cdecl CSmiley::archive(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_reset_FUN_005a3280
// Address: 005a3280
void __cdecl CSmiley::reset(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_FUN_005a32a0
// Address: 005a32a0
void __cdecl CSmiley(CSmiley *this_ptr);

// Original: core_smiley.cpp_CSmiley_processDamage_FUN_005a3580
// Address: 005a3580
void __cdecl CSmiley::processDamage(CSmiley *this_ptr,SDamageInfo *damage_info);

// Original: core_smiley.cpp_CSmiley_getTargetPoints_FUN_005a3690
// Address: 005a3690
int __cdecl CSmiley::getTargetPoints(CSmiley *this_ptr,CVector3f *out_points_array);

// Original: core_smiley.cpp_CSmiley_hasCollision_FUN_005a37f0
// Address: 005a37f0
void __cdecl CSmiley::hasCollision(CSmiley *this_ptr,SCollisionInfo *collision_info);

// Original: core_smiley.cpp_CSmiley_getPropertyList_FUN_005a3810
// Address: 005a3810
void __cdecl CSmiley::getPropertyList(CSmiley *this_ptr,CActorPropertyList *property_list);

// Original: core_smiley.cpp_CSmiley_addFilesToExtract_FUN_005a3850
// Address: 005a3850
void __cdecl CSmiley::addFilesToExtract(CSmiley *this_ptr,_FILE *file_handle);

// Original: core_smiley.cpp_CSmiley_dtor_FUN_005a3880
// Address: 005a3880
CSmiley * __cdecl CSmiley::dtor(CSmiley *this_ptr,uint flags);
