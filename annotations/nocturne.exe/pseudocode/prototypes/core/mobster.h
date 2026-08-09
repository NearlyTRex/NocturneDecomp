#pragma once

// Function prototypes for core/mobster.cpp
// Generated from Ghidra function signatures

// Original: core_mobster.cpp_staticInit_FUN_004d9fd0
// Address: 004d9fd0
void __cdecl staticInit(void);

// Original: core_mobster.cpp_FUN_004da000
// Address: 004da000
float * FUN_004da000(void);

// Original: core_mobster.cpp_FUN_004da070
// Address: 004da070
CVector3f * FUN_004da070(CVector3f *param_1,CDemonActor *param_2);

// Original: core_mobster.cpp_factoryFuncMobster_FUN_004da120
// Address: 004da120
CMobster * __cdecl factoryFuncMobster(void);

// Original: core_mobster.cpp_CMobster_getActorType_FUN_004da140
// Address: 004da140
CDemonActorType * __cdecl CMobster::getActorType(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_ctor_FUN_004da150
// Address: 004da150
CMobster * __cdecl CMobster::ctor(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_setup_FUN_004da290
// Address: 004da290
void __cdecl CMobster::setup(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0
// Address: 004da5a0
void __cdecl CMobster::positionOnVehicle(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_dismountVehicle_FUN_004da670
// Address: 004da670
void __cdecl CMobster::dismountVehicle(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_process_FUN_004da790
// Address: 004da790
void __cdecl CMobster::process(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0
// Address: 004db6f0
void __cdecl CMobster::aimTommyGun(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_FUN_004dba50
// Address: 004dba50
void FUN_004dba50(void);

// Original: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_004dba70
// Address: 004dba70
void __stack2_esi CMobster::getCarryObjToBodyXForm(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0
// Address: 004dbce0
int __cdecl CMobster::processWeaponPickup(CMobster *this_ptr,float delta_time);

// Original: core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110
// Address: 004dc110
void __cdecl CMobster::startFiringAttack(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_archive_FUN_004dc180
// Address: 004dc180
void __cdecl CMobster::archive(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_reset_FUN_004dc2b0
// Address: 004dc2b0
void __cdecl CMobster::reset(CMobster *this_ptr);

// Original: core_mobster.cpp_CMobster_processDismemberment_FUN_004dc2d0
// Address: 004dc2d0
void __cdecl CMobster::processDismemberment(CMobster *this_ptr,SDamageInfo *damage_info);

// Original: core_mobster.cpp_CMobster_processDamage_FUN_004dc690
// Address: 004dc690
void __cdecl CMobster::processDamage(CMobster *this_ptr,SDamageInfo *damage_info);

// Original: core_mobster.cpp_CMobster_getTargetPoints_FUN_004dc820
// Address: 004dc820
int __cdecl CMobster::getTargetPoints(CMobster *this_ptr,CVector3f *out_points_array);

// Original: core_mobster.cpp_CMobster_getCollisionType_FUN_004dc920
// Address: 004dc920
ECollisionType __cdecl CMobster::getCollisionType(CMobster *this_ptr,SCollisionInfo *collision_info);

// Original: core_mobster.cpp_CMobster_playTaunt_FUN_004dc940
// Address: 004dc940
void __cdecl CMobster::playTaunt(CMobster *this_ptr,int taunt_category);

// Original: core_mobster.cpp_CMobster_dtor_FUN_004dcac0
// Address: 004dcac0
CMobster * __cdecl CMobster::dtor(CMobster *this_ptr,uint flags);
