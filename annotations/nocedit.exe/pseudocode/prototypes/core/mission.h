#pragma once

// Function prototypes for core/mission.cpp
// Generated from Ghidra function signatures

// Original: core_mission.cpp_staticInit_FUN_00522c50
// Address: 00522c50
void staticInit(void);

// Original: core_mission.cpp_FUN_00522c60
// Address: 00522c60
void FUN_00522c60(FILE * file_handle);

// Original: core_mission.cpp_CDemonMission_clearMaybe_FUN_00522c80
// Address: 00522c80
void CDemonMission::clearMaybe(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
// Address: 00522d20
void CDemonMission::checkMemory(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
// Address: 00522d30
void CDemonMission::checkMemory2(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_load_FUN_00522d90
// Address: 00522d90
void CDemonMission::load(CDemonMission * this_ptr, char * mission_filename, int load_flags);

// Original: core_mission.cpp_CDemonMission_save_FUN_00522e30
// Address: 00522e30
void CDemonMission::save(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
// Address: 00522eb0
void CDemonMission::readMissionFile(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
// Address: 00523520
void CDemonMission::getNextLoadedInventoryActor(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_005235b0
// Address: 005235b0
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
// Address: 00523600
void CDemonMission::writeFile(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_loadActor_FUN_00523990
// Address: 00523990
CDemonActor * CDemonMission::loadActor(CDemonMission * this_ptr, FILE * file, CDemonActor * current_actor, char * property_description);

// Original: core_mission.cpp_CDemonMission_writeActor_FUN_00523af0
// Address: 00523af0
void CDemonMission::writeActor(CDemonMission * this_ptr, CDemonActor * actor_ptr, FILE * file, CDemonActor * current_actor, char * description);

// Original: core_mission.cpp_CDemonMission_FUN_00523b70
// Address: 00523b70
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
// Address: 00523be0
void CDemonMission::setupActorMaybe(CDemonMission * this_ptr, CDemonActor * actor_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00523cc0
// Address: 00523cc0
int CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00523cf0
// Address: 00523cf0
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
// Address: 00523e60
void CDemonMission::buildSetActorList(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00523f20
// Address: 00523f20
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00523f50
// Address: 00523f50
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00523fb0
// Address: 00523fb0
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00524030
// Address: 00524030
char * CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00524070
// Address: 00524070
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
// Address: 005240a0
void CDemonMission::markActorToDelete(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
// Address: 00524120
void CDemonMission::buildActiveSetActorList(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_process_FUN_00524250
// Address: 00524250
void CDemonMission::process(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_005243a0
// Address: 005243a0
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_run_FUN_00524420
// Address: 00524420
void CDemonMission::run(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00524630
// Address: 00524630
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_FUN_00524660
// Address: 00524660
void FUN_00524660(void);

// Original: core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
// Address: 00524700
void CDemonMission::initNewActorMaybe(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00524760
// Address: 00524760
int CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_005248a0
// Address: 005248a0
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_FUN_005248e0
// Address: 005248e0
void FUN_005248e0(void);

// Original: core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
// Address: 00524920
int CDemonMission::createOneHero(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
// Address: 00524a80
int CDemonMission::createHeros(CDemonMission * this_ptr, int creation_flags);

// Original: core_mission.cpp_FUN_00524c20
// Address: 00524c20
void FUN_00524c20(void);

// Original: core_mission.cpp_CDemonMission_FUN_00524e00
// Address: 00524e00
int CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_FUN_00524e60
// Address: 00524e60
void CDemonMission(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_ctor_FUN_00524ef0
// Address: 00524ef0
CDemonMission * CDemonMission::ctor(CDemonMission * this_ptr);

// Original: core_mission.cpp_CDemonMission_dtor_FUN_00524f00
// Address: 00524f00
CDemonMission * CDemonMission::dtor(CDemonMission * this_ptr);
