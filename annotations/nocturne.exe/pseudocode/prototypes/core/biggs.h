#pragma once

// Function prototypes for core/biggs.cpp
// Generated from Ghidra function signatures

// Original: core_biggs.cpp_staticInit_FUN_00415310
// Address: 00415310
void __cdecl staticInit(void);

// Original: core_biggs.cpp_factoryFunc_FUN_00415340
// Address: 00415340
CBiggs * __cdecl factoryFunc(void);

// Original: core_biggs.cpp_CBiggs_getActorType_FUN_00415360
// Address: 00415360
CDemonActorType * __cdecl CBiggs::getActorType(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_ctor_FUN_00415370
// Address: 00415370
CBiggs * __cdecl CBiggs::ctor(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_setup_FUN_00415430
// Address: 00415430
void __cdecl CBiggs::setup(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_process_FUN_004154b0
// Address: 004154b0
void __cdecl CBiggs::process(CBiggs *this_ptr,float delta_time);

// Original: core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760
// Address: 00415760
int __cdecl CBiggs::renderOpaque(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_archive_FUN_00415870
// Address: 00415870
void __cdecl CBiggs::archive(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_processDamage_FUN_00415900
// Address: 00415900
void __cdecl CBiggs::processDamage(CBiggs *this_ptr,SDamageInfo *damage_info);

// Original: core_biggs.cpp_CBiggs_getTargetPoints_FUN_004159c0
// Address: 004159c0
int __cdecl CBiggs::getTargetPoints(CBiggs *this_ptr,CVector3f *out_points_array);

// Original: core_biggs.cpp_CBiggs_getCollisionType_FUN_00415a10
// Address: 00415a10
ECollisionType __cdecl CBiggs::getCollisionType(CBiggs *this_ptr,SCollisionInfo *collision_info);

// Original: core_biggs.cpp_CBiggs_dtor_FUN_00415a30
// Address: 00415a30
CBiggs * __cdecl CBiggs::dtor(CBiggs *this_ptr,uint flags);
