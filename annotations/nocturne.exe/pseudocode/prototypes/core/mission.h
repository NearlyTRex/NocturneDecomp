#pragma once

// Function prototypes for core/mission.cpp
// Generated from Ghidra function signatures

// Original: core_mission.cpp_staticInit_FUN_004d7dd0
// Address: 004d7dd0
void __cdecl staticInit(void);

// Original: core_mission.cpp_FUN_004d7de0
// Address: 004d7de0
void FUN_004d7de0(void);

// Original: core_mission.cpp_FUN_004d7e00
// Address: 004d7e00
void FUN_004d7e00(int param_1);

// Original: core_mission.cpp_FUN_004d7e90
// Address: 004d7e90
void FUN_004d7e90(undefined4 param_1);

// Original: core_mission.cpp_FUN_004d7ea0
// Address: 004d7ea0
void FUN_004d7ea0(int param_1);

// Original: core_mission.cpp_CDemonMission_load_FUN_004d7ee0
// Address: 004d7ee0
void __cdecl CDemonMission::load(CDemonMission *this_ptr,char *mission_filename,int load_flags);

// Original: core_mission.cpp_CDemonMission_save_FUN_004d7f80
// Address: 004d7f80
void CDemonMission::save(CDemonMission *param_1,char *param_2);

// Original: core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0
// Address: 004d7fe0
void __cdecl CDemonMission::readMissionFile(CDemonMission *this_ptr,_FILE *file_handle,int load_flags);

// Original: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640
// Address: 004d8640
CDemonActor * __cdecl CDemonMission::getNextLoadedInventoryActor(CDemonMission *this_ptr,char *actor_name);

// Original: core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0
// Address: 004d86d0
int __cdecl CDemonMission::loadScript(CDemonMission *this_ptr,int is_loading);

// Original: core_mission.cpp_FUN_004d8720
// Address: 004d8720
void __cdecl FUN_004d8720(CDemonMission *this_ptr,_FILE *file_handle);

// Original: core_mission.cpp_CDemonMission_loadActor_FUN_004d8aa0
// Address: 004d8aa0
CDemonActor * __cdecl CDemonMission::loadActor(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description);

// Original: core_mission.cpp_CDemonMission_saveActor_FUN_004d8c00
// Address: 004d8c00
void __cdecl CDemonMission::saveActor(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor,char *description);

// Original: core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
// Address: 004d8c60
void __cdecl CDemonMission::addActorToList(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_mission.cpp_FUN_004d8cd0
// Address: 004d8cd0
void FUN_004d8cd0(int param_1,int param_2);

// Original: core_mission.cpp_CDemonMission_countActors_FUN_004d8d80
// Address: 004d8d80
int __cdecl CDemonMission::countActors(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
// Address: 004d8db0
void __cdecl CDemonMission::prepareAllActors(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004d8ee0
// Address: 004d8ee0
void __cdecl CDemonMission::buildSetActorList(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90
// Address: 004d8f90
void __cdecl CDemonMission::removeActor(CDemonMission *this_ptr,CDemonActor *actor,int should_delete);

// Original: core_mission.cpp_FUN_004d8fc0
// Address: 004d8fc0
void FUN_004d8fc0(CDemonMission *param_1);

// Original: core_mission.cpp_CDemonMission_loadSet_FUN_004d9020
// Address: 004d9020
void __cdecl CDemonMission::loadSet(CDemonMission *this_ptr,int set_index);

// Original: core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
// Address: 004d90a0
CDemonActor * __cdecl CDemonMission::findActorByName(CDemonMission *this_ptr,char *name);

// Original: core_mission.cpp_CDemonMission_FUN_004d90e0
// Address: 004d90e0
void __cdecl CDemonMission(CDemonMission *this_ptr,CLocation *teleport_target);

// Original: core_mission.cpp_FUN_004d9110
// Address: 004d9110
void FUN_004d9110(int param_1,undefined4 param_2,undefined4 param_3);

// Original: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180
// Address: 004d9180
void CDemonMission::buildActiveSetActorList(int *param_1);

// Original: core_mission.cpp_CDemonMission_process_FUN_004d92a0
// Address: 004d92a0
void __cdecl CDemonMission::process(CDemonMission *this_ptr);

// Original: core_mission.cpp_FUN_004d93d0
// Address: 004d93d0
void FUN_004d93d0(CDemonMission *param_1,char *param_2);

// Original: core_mission.cpp_CDemonMission_run_FUN_004d9440
// Address: 004d9440
void __cdecl CDemonMission::run(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_setMissionName_FUN_004d9650
// Address: 004d9650
void __cdecl CDemonMission::setMissionName(CDemonMission *this_ptr,char *name);

// Original: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680
// Address: 004d9680
void __cdecl CDemonMission::generateUniqueActorName(CDemonMission *this_ptr,char *out_buf,char *base_name);

// Original: core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
// Address: 004d9720
void __cdecl CDemonMission::generateActorName(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_mission.cpp_CDemonMission_startMission_FUN_004d9780
// Address: 004d9780
int __cdecl CDemonMission::startMission(CDemonMission *this_ptr);

// Original: core_mission.cpp_FUN_004d98c0
// Address: 004d98c0
void FUN_004d98c0(int param_1,undefined4 param_2);

// Original: core_mission.cpp_FUN_004d9900
// Address: 004d9900
void FUN_004d9900(void);

// Original: core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920
// Address: 004d9920
int __cdecl CDemonMission::createOneHero(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor);

// Original: core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80
// Address: 004d9a80
int __cdecl CDemonMission::createHeros(CDemonMission *this_ptr,CCharacter *existing_hero);

// Original: core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20
// Address: 004d9c20
void __cdecl CDemonMission::ensureHeroPlaceholder(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0
// Address: 004d9df0
int __cdecl CDemonMission::countDamageableEnemies(CDemonMission *this_ptr);

// Original: core_mission.cpp_FUN_004d9e50
// Address: 004d9e50
undefined4 FUN_004d9e50(undefined4 param_1);

// Original: core_mission.cpp_FUN_004d9e60
// Address: 004d9e60
undefined4 FUN_004d9e60(undefined4 param_1);
