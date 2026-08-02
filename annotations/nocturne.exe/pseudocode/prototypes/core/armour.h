#pragma once

// Function prototypes for core/armour.cpp
// Generated from Ghidra function signatures

// Original: core_armour.cpp_staticInit_FUN_0040f900
// Address: 0040f900
void __cdecl staticInit(void);

// Original: core_armour.cpp_factoryFunc_FUN_0040f930
// Address: 0040f930
CArmour * __cdecl factoryFunc(void);

// Original: core_armour.cpp_CArmour_getActorType_FUN_0040f950
// Address: 0040f950
CDemonActorType * CArmour::getActorType(void);

// Original: core_armour.cpp_CArmour_ctor_FUN_0040f960
// Address: 0040f960
CArmour * __cdecl CArmour::ctor(CArmour *this_ptr);

// Original: core_armour.cpp_CArmour_setup_FUN_0040fa00
// Address: 0040fa00
void CArmour::setup(CEnemy *param_1);

// Original: core_armour.cpp_CArmour_process_FUN_0040fa20
// Address: 0040fa20
void CArmour::process(CCharacter *param_1,float param_2);

// Original: core_armour.cpp_CArmour_archive_FUN_0040fb60
// Address: 0040fb60
void CArmour::archive(CEnemy *param_1);

// Original: core_armour.cpp_CArmour_processDamage_FUN_0040fbc0
// Address: 0040fbc0
void CArmour::processDamage(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_armour.cpp_CArmour_getTargetPoints_FUN_0040fc00
// Address: 0040fc00
undefined4 CArmour::getTargetPoints(void);

// Original: core_armour.cpp_CArmour_getCollisionType_FUN_0040fc10
// Address: 0040fc10
void CArmour::getCollisionType(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_armour.cpp_CArmour_dtor_FUN_0040fc30
// Address: 0040fc30
CArmour * __cdecl CArmour::dtor(CArmour *this_ptr,uint flags);

// Original: core_armour.cpp_CEnemy_dtor_FUN_0040fcf0
// Address: 0040fcf0
CEnemy * __cdecl CEnemy::dtor(CEnemy *this_ptr,uint flags);

// Original: core_armour.cpp_SFire_dtor_FUN_0040fdb0
// Address: 0040fdb0
SFire * __cdecl SFire::dtor(SFire *this_ptr,uint flags);

// Original: core_armour.cpp_CFlame_dtor_FUN_0040fdc0
// Address: 0040fdc0
CFlame * __cdecl CFlame::dtor(CFlame *this_ptr,uint flags);

// Original: core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
// Address: 0040fe10
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);

// Original: core_armour.cpp_SFire_arrdtor_FUN_0040fe30
// Address: 0040fe30
SFire * __cdecl SFire::arrdtor(SFire *objs,uint flags);

// Original: core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
// Address: 0040fe50
CFlame * __cdecl CFlame::arrdtor(CFlame *objs,uint flags);
