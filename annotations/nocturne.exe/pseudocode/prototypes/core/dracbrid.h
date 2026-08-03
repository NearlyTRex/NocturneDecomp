#pragma once

// Function prototypes for core/dracbrid.cpp
// Generated from Ghidra function signatures

// Original: core_dracbrid.cpp_staticInit_FUN_00458580
// Address: 00458580
void __cdecl staticInit(void);

// Original: core_dracbrid.cpp_factoryFunc_FUN_00458610
// Address: 00458610
CDraculaBride * __cdecl factoryFunc(void);

// Original: core_dracbrid.cpp_CDraculaBride_getActorType_FUN_00458630
// Address: 00458630
CDemonActorType * CDraculaBride::getActorType(void);

// Original: core_dracbrid.cpp_CDraculaBride_ctor_FUN_00458640
// Address: 00458640
CDraculaBride * __cdecl CDraculaBride::ctor(CDraculaBride *this_ptr);

// Original: core_dracbrid.cpp_CDraculaBride_setup_FUN_00458730
// Address: 00458730
void CDraculaBride::setup(CEnemy *param_1);

// Original: core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90
// Address: 00458a90
void CDraculaBride::process(CDraculaBride *param_1,float param_2);

// Original: core_dracbrid.cpp_CDraculaBride_explode_FUN_00459f70
// Address: 00459f70
void __cdecl CDraculaBride::explode(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background);

// Original: core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0
// Address: 0045a1a0
void __cdecl CDraculaBride::dismemberPart(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background);

// Original: core_dracbrid.cpp_CDraculaBride_getCollisionType_FUN_0045a240
// Address: 0045a240
ECollisionType CDraculaBride::getCollisionType(CCharacter *param_1,SCollisionInfo *param_2);

// Original: core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0045a260
// Address: 0045a260
int CDraculaBride::renderOpaque(CCharacter *param_1);

// Original: core_dracbrid.cpp_CDraculaBride_archive_FUN_0045a450
// Address: 0045a450
void CDraculaBride::archive(CEnemy *param_1);

// Original: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0
// Address: 0045a6a0
void __cdecl CDraculaBride::checkHeartShot(CDraculaBride *this_ptr,SDamageInfo *damage_info);

// Original: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0045a6f0
// Address: 0045a6f0
void CDraculaBride::processDamage(CDraculaBride *param_1,SDamageInfo *param_2);

// Original: core_dracbrid.cpp_CDraculaBride_getDeathState_FUN_0045a9a0
// Address: 0045a9a0
undefined4 CDraculaBride::getDeathState(int param_1);

// Original: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0
// Address: 0045a9e0
undefined4 CDraculaBride::getTargetPoints(int param_1,CVector3f *param_2);

// Original: core_dracbrid.cpp_CDraculaBride_FUN_0045ab40
// Address: 0045ab40
void __cdecl CDraculaBride(CDraculaBride *this_ptr,char *sound_name,float volume);

// Original: core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_0045b020
// Address: 0045b020
void __cdecl CDraculaBride::updateFreakySounds(CDraculaBride *this_ptr,float delta_time);

// Original: core_dracbrid.cpp_SFreaky_ctor_FUN_0045b310
// Address: 0045b310
SFreaky * __cdecl SFreaky::ctor(SFreaky *this_ptr);

// Original: core_dracbrid.cpp_SFreaky_dtor_FUN_0045b330
// Address: 0045b330
SFreaky * __cdecl SFreaky::dtor(SFreaky *this_ptr,uint flags);

// Original: core_dracbrid.cpp_CDraculaBride_dtor_FUN_0045b350
// Address: 0045b350
CDraculaBride * __cdecl CDraculaBride::dtor(CDraculaBride *this_ptr,uint flags);

// Original: core_dracbrid.cpp_CVector3f_arrdtor_FUN_0045b410
// Address: 0045b410
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *objs,uint flags);

// Original: core_dracbrid.cpp_SFreaky_arrdtor_FUN_0045b430
// Address: 0045b430
SFreaky * __cdecl SFreaky::arrdtor(SFreaky *this_ptr,uint flags);
