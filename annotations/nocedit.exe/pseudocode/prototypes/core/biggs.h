#pragma once

// Function prototypes for core/biggs.cpp
// Generated from Ghidra function signatures

// Original: core_biggs.cpp_staticInit_FUN_00418550
// Address: 00418550
void __cdecl staticInit(void);

// Original: core_biggs.cpp_factoryFunc_FUN_00418580
// Address: 00418580
CBiggs * __cdecl factoryFunc(void);

// Original: core_biggs.cpp_CBiggs_getActorType_FUN_004185b0
// Address: 004185b0
CDemonActorType * __cdecl CBiggs::getActorType(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_ctor_FUN_004185c0
// Address: 004185c0
CBiggs * __cdecl CBiggs::ctor(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_setup_FUN_00418680
// Address: 00418680
void __cdecl CBiggs::setup(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_process_FUN_00418700
// Address: 00418700
void __cdecl CBiggs::process(CBiggs *this_ptr,float delta_time);

// Original: core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0
// Address: 004189b0
int __cdecl CBiggs::renderOpaque(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_archive_FUN_00418ac0
// Address: 00418ac0
void __cdecl CBiggs::archive(CBiggs *this_ptr);

// Original: core_biggs.cpp_CBiggs_processDamage_FUN_00418b50
// Address: 00418b50
void __cdecl CBiggs::processDamage(CBiggs *this_ptr,SDamageInfo *damage_info);

// Original: core_biggs.cpp_CBiggs_getTargetPoints_FUN_00418c10
// Address: 00418c10
int __cdecl CBiggs::getTargetPoints(CBiggs *this_ptr,CVector3f *out_points_array);

// Original: core_biggs.cpp_CBiggs_hasCollision_FUN_00418c60
// Address: 00418c60
void __cdecl CBiggs::hasCollision(CBiggs *this_ptr,SCollisionInfo *collision_info);

// Original: core_biggs.cpp_CBiggs_getPropertyList_FUN_00418c80
// Address: 00418c80
void __cdecl CBiggs::getPropertyList(CBiggs *this_ptr,CActorPropertyList *property_list);

// Original: core_biggs.cpp_CBiggs_writeDependencies_FUN_00418ce0
// Address: 00418ce0
void __cdecl CBiggs::writeDependencies(CBiggs *this_ptr,_FILE *file_handle);

// Original: core_biggs.cpp_CBiggs_dtor_FUN_00418d10
// Address: 00418d10
CBiggs * __cdecl CBiggs::dtor(CBiggs *this_ptr,uint d1);
