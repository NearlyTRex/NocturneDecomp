#pragma once

// Function prototypes for core/vampboss.cpp
// Generated from Ghidra function signatures

// Original: core_vampboss.cpp_staticInit_FUN_005e5520
// Address: 005e5520
void __cdecl staticInit(void);

// Original: core_vampboss.cpp_factoryFuncVampireBoss_FUN_005e5550
// Address: 005e5550
CVampireBoss * __cdecl factoryFuncVampireBoss(void);

// Original: core_vampboss.cpp_CVampireBoss_getActorType_FUN_005e5580
// Address: 005e5580
CDemonActorType * __cdecl CVampireBoss::getActorType(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
// Address: 005e5590
CVampireBoss * __cdecl CVampireBoss::ctor(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_setup_FUN_005e56c0
// Address: 005e56c0
void __cdecl CVampireBoss::setup(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_clampAngle_FUN_005e58d0
// Address: 005e58d0
float __cdecl clampAngle(float angle,float max_angle);

// Original: core_vampboss.cpp_CVampireBoss_process_FUN_005e5970
// Address: 005e5970
void __cdecl CVampireBoss::process(CVampireBoss *this_ptr,float delta_time);

// Original: core_vampboss.cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_005e6b80
// Address: 005e6b80
void __stack2_esi CVampireBoss::getCarryObjToBodyXForm(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_005e6ca0
// Address: 005e6ca0
void __cdecl CVampireBoss::advanceAnimation(CVampireBoss *this_ptr,float delta_time);

// Original: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0
// Address: 005e6da0
int __cdecl CVampireBoss::renderOpaque(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_archive_FUN_005e6f50
// Address: 005e6f50
void __cdecl CVampireBoss::archive(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_processDamage_FUN_005e7030
// Address: 005e7030
void __cdecl CVampireBoss::processDamage(CVampireBoss *this_ptr,SDamageInfo *damage_info);

// Original: core_vampboss.cpp_CVampireBoss_getDeathState_FUN_005e7270
// Address: 005e7270
EDeathState __cdecl CVampireBoss::getDeathState(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_getTargetPoints_FUN_005e7280
// Address: 005e7280
int __cdecl CVampireBoss::getTargetPoints(CVampireBoss *this_ptr,CVector3f *out_points_array);

// Original: core_vampboss.cpp_CVampireBoss_summonBats_FUN_005e7320
// Address: 005e7320
void __cdecl CVampireBoss::summonBats(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_005e7390
// Address: 005e7390
void __cdecl CVampireBoss::summonStalagmites(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005e7410
// Address: 005e7410
void __cdecl CVampireBoss::summonFireEmitters(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_transformToBat_FUN_005e7480
// Address: 005e7480
void __cdecl CVampireBoss::transformToBat(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_005e74c0
// Address: 005e74c0
void __cdecl CVampireBoss::transformToHuman(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
// Address: 005e7510
void __cdecl CVampireBoss::chooseDestWayPoint(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_getCollisionType_FUN_005e75f0
// Address: 005e75f0
ECollisionType __cdecl CVampireBoss::getCollisionType(CVampireBoss *this_ptr,SCollisionInfo *collision_info);

// Original: core_vampboss.cpp_CVampireBoss_getPropertyList_FUN_005e7650
// Address: 005e7650
void __cdecl CVampireBoss::getPropertyList(CVampireBoss *this_ptr,CActorPropertyList *property_list);

// Original: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
// Address: 005e7700
CVampireBoss * __cdecl CVampireBoss::dtor(CVampireBoss *this_ptr,uint flags);
