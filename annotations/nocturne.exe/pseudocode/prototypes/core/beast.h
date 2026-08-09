#pragma once

// Function prototypes for core/beast.cpp
// Generated from Ghidra function signatures

// Original: core_beast.cpp_staticInit_FUN_00414ff0
// Address: 00414ff0
void __cdecl staticInit(void);

// Original: core_beast.cpp_factoryFuncBeast_FUN_00415020
// Address: 00415020
CBeast * __cdecl factoryFuncBeast(void);

// Original: core_beast.cpp_CBeast_getActorType_FUN_00415040
// Address: 00415040
CDemonActorType * __cdecl CBeast::getActorType(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_ctor_FUN_00415050
// Address: 00415050
CBeast * __cdecl CBeast::ctor(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_setup_FUN_004150b0
// Address: 004150b0
void __cdecl CBeast::setup(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_process_FUN_004150d0
// Address: 004150d0
void __cdecl CBeast::process(CBeast *this_ptr,float delta_time);

// Original: core_beast.cpp_CBeast_archive_FUN_00415160
// Address: 00415160
void __cdecl CBeast::archive(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_processDamage_FUN_004151b0
// Address: 004151b0
void __cdecl CBeast::processDamage(CBeast *this_ptr,SDamageInfo *damage_info);

// Original: core_beast.cpp_CBeast_getDeathState_FUN_004151d0
// Address: 004151d0
EDeathState __cdecl CBeast::getDeathState(CBeast *this_ptr);

// Original: core_beast.cpp_CBeast_getTargetPoints_FUN_004151e0
// Address: 004151e0
int __cdecl CBeast::getTargetPoints(CBeast *this_ptr,CVector3f *out_points_array);

// Original: core_beast.cpp_CBeast_getCollisionType_FUN_00415230
// Address: 00415230
ECollisionType __cdecl CBeast::getCollisionType(CBeast *this_ptr,SCollisionInfo *collision_info);

// Original: core_beast.cpp_CBeast_dtor_FUN_00415250
// Address: 00415250
CBeast * __cdecl CBeast::dtor(CBeast *this_ptr,uint flags);
