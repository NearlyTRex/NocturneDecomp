#pragma once

// Function prototypes for core/armour.cpp
// Generated from Ghidra function signatures

// Original: core_armour.cpp_staticInit_FUN_00412130
// Address: 00412130
void __cdecl staticInit(void);

// Original: core_armour.cpp_factoryFuncArmour_FUN_00412160
// Address: 00412160
CArmour * __cdecl factoryFuncArmour(void);

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

// Original: core_armour.cpp_CArmour_archive_FUN_004123a0
// Address: 004123a0
void __cdecl CArmour::archive(CArmour *this_ptr);

// Original: core_armour.cpp_CArmour_processDamage_FUN_00412400
// Address: 00412400
void __cdecl CArmour::processDamage(CArmour *this_ptr,SDamageInfo *damage_info);

// Original: core_armour.cpp_CArmour_getTargetPoints_FUN_00412440
// Address: 00412440
int __cdecl CArmour::getTargetPoints(CArmour *this_ptr,CVector3f *out_points_array);

// Original: core_armour.cpp_CArmour_getCollisionType_FUN_00412450
// Address: 00412450
ECollisionType __cdecl CArmour::getCollisionType(CArmour *this_ptr,SCollisionInfo *collision_info);

// Original: core_armour.cpp_CArmour_getPropertyList_FUN_00412470
// Address: 00412470
void __cdecl CArmour::getPropertyList(CArmour *this_ptr,CActorPropertyList *property_list);

// Original: core_armour.cpp_CArmour_addFilesToExtract_FUN_004124d0
// Address: 004124d0
void __cdecl CArmour::addFilesToExtract(CArmour *this_ptr,_FILE *file_handle);

// Original: core_armour.cpp_CArmour_dtor_FUN_00412500
// Address: 00412500
CArmour * __cdecl CArmour::dtor(CArmour *this_ptr,uint flags);

// Original: core_armour.cpp_CEnemy_dtor_FUN_004125c0
// Address: 004125c0
CEnemy * __cdecl CEnemy::dtor(CEnemy *this_ptr,uint flags);

// Original: core_armour.cpp_SFire_dtor_FUN_00412680
// Address: 00412680
SFire * __cdecl SFire::dtor(SFire *this_ptr,uint flags);

// Original: core_armour.cpp_CFlame_dtor_FUN_00412690
// Address: 00412690
CFlame * __cdecl CFlame::dtor(CFlame *this_ptr,uint flags);

// Original: core_armour.cpp_CVector3f_arrdtor15_FUN_004126e0
// Address: 004126e0
CVector3f * __cdecl CVector3f::arrdtor15(CVector3f *this_ptr,uint flags);

// Original: core_armour.cpp_SFire_arrdtor50_FUN_00412700
// Address: 00412700
SFire * __cdecl SFire::arrdtor50(SFire *objs,uint flags);

// Original: core_armour.cpp_CFlame_arrdtor50_FUN_00412720
// Address: 00412720
CFlame * __cdecl CFlame::arrdtor50(CFlame *this_ptr,uint flags);
