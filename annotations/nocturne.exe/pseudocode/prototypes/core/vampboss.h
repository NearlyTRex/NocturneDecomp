#pragma once

// Function prototypes for core/vampboss.cpp
// Generated from Ghidra function signatures

// Original: core_vampboss.cpp_staticInit_FUN_0054c250
// Address: 0054c250
void __cdecl staticInit(void);

// Original: core_vampboss.cpp_factoryFunc_FUN_0054c280
// Address: 0054c280
CVampireBoss * __cdecl factoryFunc(void);

// Original: core_vampboss.cpp_CVampireBoss_getActorType_FUN_0054c2a0
// Address: 0054c2a0
CDemonActorType * __cdecl CVampireBoss::getActorType(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0
// Address: 0054c2b0
CVampireBoss * __cdecl CVampireBoss::ctor(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_setup_FUN_0054c3e0
// Address: 0054c3e0
void __cdecl CVampireBoss::setup(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_FUN_0054c5f0
// Address: 0054c5f0
float FUN_0054c5f0(void);

// Original: core_vampboss.cpp_CVampireBoss_process_FUN_0054c690
// Address: 0054c690
void __cdecl CVampireBoss::process(CVampireBoss *this_ptr,float delta_time);

// Original: core_vampboss.cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_0054d8a0
// Address: 0054d8a0
void __stack2_esi CVampireBoss::getCarryObjToBodyXForm(CVampireBoss *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0
// Address: 0054d9c0
void __cdecl CVampireBoss::advanceAnimation(CVampireBoss *this_ptr,float delta_time);

// Original: core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_0054dac0
// Address: 0054dac0
int __cdecl CVampireBoss::renderOpaque(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_archive_FUN_0054dc70
// Address: 0054dc70
void __cdecl CVampireBoss::archive(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_processDamage_FUN_0054dd50
// Address: 0054dd50
void __cdecl CVampireBoss::processDamage(CVampireBoss *this_ptr,SDamageInfo *damage_info);

// Original: core_vampboss.cpp_CVampireBoss_getDeathState_FUN_0054df90
// Address: 0054df90
EDeathState __cdecl CVampireBoss::getDeathState(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_getTargetPoints_FUN_0054dfa0
// Address: 0054dfa0
int __cdecl CVampireBoss::getTargetPoints(CVampireBoss *this_ptr,CVector3f *out_points_array);

// Original: core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040
// Address: 0054e040
void __cdecl CVampireBoss::summonBats(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0
// Address: 0054e0b0
void __cdecl CVampireBoss::summonStalagmites(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_FUN_0054e130
// Address: 0054e130
void __cdecl FUN_0054e130(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_transformToBat_FUN_0054e1a0
// Address: 0054e1a0
void __cdecl CVampireBoss::transformToBat(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_0054e1e0
// Address: 0054e1e0
void __cdecl CVampireBoss::transformToHuman(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230
// Address: 0054e230
void __cdecl CVampireBoss::chooseDestWayPoint(CVampireBoss *this_ptr);

// Original: core_vampboss.cpp_CVampireBoss_getCollisionType_FUN_0054e310
// Address: 0054e310
ECollisionType __cdecl CVampireBoss::getCollisionType(CVampireBoss *this_ptr,SCollisionInfo *collision_info);

// Original: core_vampboss.cpp_CVampireBoss_dtor_FUN_0054e370
// Address: 0054e370
CVampireBoss * __cdecl CVampireBoss::dtor(CVampireBoss *this_ptr,uint flags);
