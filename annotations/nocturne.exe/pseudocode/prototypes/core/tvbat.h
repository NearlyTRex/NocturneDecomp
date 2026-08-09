#pragma once

// Function prototypes for core/tvbat.cpp
// Generated from Ghidra function signatures

// Original: core_tvbat.cpp_staticInit_FUN_0054b0b0
// Address: 0054b0b0
void __cdecl staticInit(void);

// Original: core_tvbat.cpp_factoryFuncTVBat_FUN_0054b0e0
// Address: 0054b0e0
CTVBat * __cdecl factoryFuncTVBat(void);

// Original: core_tvbat.cpp_CTVBat_getActorType_FUN_0054b100
// Address: 0054b100
CDemonActorType * __cdecl CTVBat::getActorType(CTVBat *this_ptr);

// Original: core_tvbat.cpp_jitterValue_FUN_0054b110
// Address: 0054b110
float __cdecl jitterValue(float value);

// Original: core_tvbat.cpp_CTVBat_ctor_FUN_0054b140
// Address: 0054b140
CTVBat * __cdecl CTVBat::ctor(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_setup_FUN_0054b2a0
// Address: 0054b2a0
void __cdecl CTVBat::setup(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_archive_FUN_0054b310
// Address: 0054b310
void __cdecl CTVBat::archive(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_process_FUN_0054b460
// Address: 0054b460
void __cdecl CTVBat::process(CTVBat *this_ptr,float delta_time);

// Original: core_tvbat.cpp_CTVBat_FUN_0054bfc0
// Address: 0054bfc0
void __cdecl CTVBat(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_renderOpaque_FUN_0054bfd0
// Address: 0054bfd0
int __cdecl CTVBat::renderOpaque(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_getBoundingBox_FUN_0054c040
// Address: 0054c040
CBoundingBox3D * __cdecl CTVBat::getBoundingBox(CTVBat *this_ptr,CBoundingBox3D *out_box);

// Original: core_tvbat.cpp_CTVBat_getCollisionType_FUN_0054c0c0
// Address: 0054c0c0
ECollisionType __cdecl CTVBat::getCollisionType(CTVBat *this_ptr,SCollisionInfo *collision_info);

// Original: core_tvbat.cpp_CTVBat_getTargetPoints_FUN_0054c0e0
// Address: 0054c0e0
int __cdecl CTVBat::getTargetPoints(CTVBat *this_ptr,CVector3f *out_points_array);

// Original: core_tvbat.cpp_CTVBat_getDeathState_FUN_0054c0f0
// Address: 0054c0f0
EDeathState __cdecl CTVBat::getDeathState(CTVBat *this_ptr);

// Original: core_tvbat.cpp_CTVBat_processDamage_FUN_0054c120
// Address: 0054c120
void __cdecl CTVBat::processDamage(CTVBat *this_ptr,SDamageInfo *damage_info);

// Original: core_tvbat.cpp_CTVBat_dtor_FUN_0054c190
// Address: 0054c190
CTVBat * __cdecl CTVBat::dtor(CTVBat *this_ptr,uint flags);
