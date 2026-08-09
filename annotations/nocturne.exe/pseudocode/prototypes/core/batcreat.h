#pragma once

// Function prototypes for core/batcreat.cpp
// Generated from Ghidra function signatures

// Original: core_batcreat.cpp_staticInit_FUN_004120a0
// Address: 004120a0
void __cdecl staticInit(void);

// Original: core_batcreat.cpp_factoryFuncBatCreature_FUN_004120d0
// Address: 004120d0
CBatCreature * __cdecl factoryFuncBatCreature(void);

// Original: core_batcreat.cpp_CBatCreature_getActorType_FUN_004120f0
// Address: 004120f0
CDemonActorType * __cdecl CBatCreature::getActorType(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_ctor_FUN_00412100
// Address: 00412100
CBatCreature * __cdecl CBatCreature::ctor(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_setup_FUN_00412160
// Address: 00412160
void __cdecl CBatCreature::setup(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_process_FUN_00412480
// Address: 00412480
void __cdecl CBatCreature::process(CBatCreature *this_ptr,float delta_time);

// Original: core_batcreat.cpp_CBatCreature_archive_FUN_00412d80
// Address: 00412d80
void __cdecl CBatCreature::archive(CBatCreature *this_ptr);

// Original: core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0
// Address: 00412de0
void __cdecl CBatCreature::processDismemberment(CBatCreature *this_ptr,SDamageInfo *damage_info);

// Original: core_batcreat.cpp_CBatCreature_processDamage_FUN_00413040
// Address: 00413040
void __cdecl CBatCreature::processDamage(CBatCreature *this_ptr,SDamageInfo *damage_info);

// Original: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00413250
// Address: 00413250
int __cdecl CBatCreature::getTargetPoints(CBatCreature *this_ptr,CVector3f *out_points_array);

// Original: core_batcreat.cpp_CBatCreature_getCollisionType_FUN_004132a0
// Address: 004132a0
ECollisionType __cdecl CBatCreature::getCollisionType(CBatCreature *this_ptr,SCollisionInfo *collision_info);

// Original: core_batcreat.cpp_CBatCreature_dtor_FUN_004132c0
// Address: 004132c0
CDemonActor * __cdecl CBatCreature::dtor(CBatCreature *this_ptr,uint flags);
