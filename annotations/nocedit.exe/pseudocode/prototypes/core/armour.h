#pragma once

// Function prototypes for core/armour.cpp
// Generated from Ghidra function signatures

// Original: core_armour.cpp_staticInit_FUN_00412130
// Address: 00412130
void __cdecl staticInit(void);

// Original: core_armour.cpp_factoryFunc_FUN_00412160
// Address: 00412160
CArmour * __cdecl factoryFunc(void);

// Original: core_armour.cpp_CArmour_getActorType_FUN_00412190
// Address: 00412190
CDemonActorType * __cdecl CArmour::getActorType(CArmour *this_ptr);

// Original: core_armour.cpp_CArmour_ctor_FUN_004121a0
// Address: 004121a0
CArmour * __cdecl CArmour::ctor(CArmour *this_ptr);

// Original: core_armour.cpp_CArmour_setup_FUN_00412240
// Address: 00412240
void __cdecl CArmour::setup(CArmour *this_ptr);

// Original: core_armour.cpp_CArmour_process_FUN_00412260
// Address: 00412260
void __cdecl CArmour::process(CArmour *this_ptr,float delta_time);

// Original: core_armour.cpp_CArmour_serialize_FUN_004123a0
// Address: 004123a0
void __cdecl CArmour::serialize(CArmour *this_ptr);

// Original: core_armour.cpp_CArmour_processDamage_FUN_00412400
// Address: 00412400
void __cdecl CArmour::processDamage(CArmour *this_ptr,SDamageInfo *damage_info);

// Original: core_armour.cpp_CArmour_getTargetPoints_FUN_00412440
// Address: 00412440
int __cdecl CArmour::getTargetPoints(CArmour *this_ptr,CVector3f *out_points_array);

// Original: core_armour.cpp_CArmour_hasCollision_FUN_00412450
// Address: 00412450
int __cdecl CArmour::hasCollision(CArmour *this_ptr,SCollisionInfo *collision_info);

// Original: core_armour.cpp_CArmour_getPropertyList_FUN_00412470
// Address: 00412470
void __cdecl CArmour::getPropertyList(CArmour *this_ptr,CActorPropertyList *property_list);

// Original: core_armour.cpp_CArmour_writeDependencies_FUN_004124d0
// Address: 004124d0
void __cdecl CArmour::writeDependencies(CArmour *this_ptr,_FILE *file_handle);

// Original: core_armour.cpp_CArmour_dtor_FUN_00412500
// Address: 00412500
CArmour * __cdecl CArmour::dtor(CArmour *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);

// Original: core_armour.cpp_CEnemy_dtor_FUN_004125c0
// Address: 004125c0
CEnemy * __cdecl CEnemy::dtor(CEnemy *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8);

// Original: core_armour.cpp_SFire_dtor_FUN_00412680
// Address: 00412680
SFire * __cdecl SFire::dtor(SFire *this_ptr);

// Original: core_armour.cpp_CFlame_dtor_FUN_00412690
// Address: 00412690
CFlame * __cdecl CFlame::dtor(CFlame *this_ptr,uint d1,uint d2);

// Original: core_armour.cpp_freeVectors_FUN_004126e0
// Address: 004126e0
int __cdecl freeVectors(CVector3f **objs);

// Original: core_armour.cpp_freeFires_FUN_00412700
// Address: 00412700
int __cdecl freeFires(SFire **objs);

// Original: core_armour.cpp_freeFlames_FUN_00412720
// Address: 00412720
int __cdecl freeFlames(CFlame **array);
