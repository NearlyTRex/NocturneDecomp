#pragma once

// Function prototypes for core/mission.cpp
// Generated from Ghidra function signatures

// Original: core_mission.cpp_staticInit_FUN_00522c50
// Address: 00522c50
void __cdecl staticInit(void);

// Original: core_mission.cpp_FUN_00522c60
// Address: 00522c60
void __cdecl FUN_00522c60(_FILE *file_handle);

// Original: core_mission.cpp_CDemonMission_reset_FUN_00522c80
// Address: 00522c80
void __cdecl CDemonMission::reset(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_checkMemory_FUN_00522d20
// Address: 00522d20
void __cdecl CDemonMission::checkMemory(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
// Address: 00522d30
void __cdecl CDemonMission::checkMemory2(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_load_FUN_00522d90
// Address: 00522d90
void __cdecl CDemonMission::load(CDemonMission *this_ptr,char *mission_filename,int load_flags);

// Original: core_mission.cpp_CDemonMission_save_FUN_00522e30
// Address: 00522e30
void __cdecl CDemonMission::save(CDemonMission *this_ptr,char *filename);

// Original: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
// Address: 00522eb0
void __cdecl CDemonMission::readMissionFile(CDemonMission *this_ptr,_FILE *file_handle);

// Original: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
// Address: 00523520
void __cdecl CDemonMission::getNextLoadedInventoryActor(CDemonMission *this_ptr,char *actor_name);

// Original: core_mission.cpp_CDemonMission_loadScript_FUN_005235b0
// Address: 005235b0
void __cdecl CDemonMission::loadScript(CDemonMission *this_ptr,int param_2);

// Original: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
// Address: 00523600
void __cdecl CDemonMission::writeFile(CDemonMission *this_ptr,_FILE *file_handle);

// Original: core_mission.cpp_CDemonMission_loadActor_FUN_00523990
// Address: 00523990
CDemonActor * __cdecl CDemonMission::loadActor(CDemonMission *this_ptr,_FILE *file,CDemonActor *current_actor,char *property_description);

// Original: core_mission.cpp_CDemonMission_saveActor_FUN_00523af0
// Address: 00523af0
void __cdecl CDemonMission::saveActor(CDemonMission *this_ptr,CDemonActor *actor_ptr,_FILE *file,CDemonActor *current_actor, char *description);

// Original: core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
// Address: 00523b70
void __cdecl CDemonMission::addActorToList(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0
// Address: 00523be0
void __cdecl CDemonMission::removeActorFromList(CDemonMission *this_ptr,CDemonActor *actor_ptr);

// Original: core_mission.cpp_CDemonMission_countActors_FUN_00523cc0
// Address: 00523cc0
int __cdecl CDemonMission::countActors(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
// Address: 00523cf0
void __cdecl CDemonMission::prepareAllActors(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
// Address: 00523e60
void __cdecl CDemonMission::buildSetActorList(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_removeActor_FUN_00523f20
// Address: 00523f20
void __cdecl CDemonMission::removeActor(CDemonMission *this_ptr,CDemonActor *actor,int should_delete);

// Original: core_mission.cpp_CDemonMission_FUN_00523f50
// Address: 00523f50
void __cdecl CDemonMission(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
// Address: 00523fb0
void __cdecl CDemonMission::loadSet(CDemonMission *this_ptr,int set_index);

// Original: core_mission.cpp_CDemonMission_findActorByName_FUN_00524030
// Address: 00524030
char * __cdecl CDemonMission::findActorByName(CDemonMission *this_ptr,char *name);

// Original: core_mission.cpp_CDemonMission_setTeleportTarget_FUN_00524070
// Address: 00524070
void __cdecl CDemonMission::setTeleportTarget(CDemonMission *this_ptr,CLocation *teleport_target);

// Original: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
// Address: 005240a0
void __cdecl CDemonMission::markActorToDelete(CDemonMission *this_ptr,CDemonActor *actor,uint flags);

// Original: core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
// Address: 00524120
void __cdecl CDemonMission::buildActiveSetActorList(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_process_FUN_00524250
// Address: 00524250
void __cdecl CDemonMission::process(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0
// Address: 005243a0
void __cdecl CDemonMission::createFromSingleSet(CDemonMission *this_ptr,char *set_name);

// Original: core_mission.cpp_CDemonMission_run_FUN_00524420
// Address: 00524420
void __cdecl CDemonMission::run(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_setMissionName_FUN_00524630
// Address: 00524630
void __cdecl CDemonMission::setMissionName(CDemonMission *this_ptr,char *name);

// Original: core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_00524660
// Address: 00524660
void __cdecl CDemonMission::generateUniqueActorName(CDemonMission *this_ptr,char *out_buf,char *base_name);

// Original: core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
// Address: 00524700
void __cdecl CDemonMission::generateActorName(CDemonMission *this_ptr,CDemonActor *actor);

// Original: core_mission.cpp_CDemonMission_FUN_00524760
// Address: 00524760
int __cdecl CDemonMission(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_calculateAllActorChecksums_FUN_005248a0
// Address: 005248a0
void __cdecl CDemonMission::calculateAllActorChecksums(CDemonMission *this_ptr,uint *checksum);

// Original: core_mission.cpp_CDemonMission_FUN_005248e0
// Address: 005248e0
void __cdecl CDemonMission(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
// Address: 00524920
int __cdecl CDemonMission::createOneHero(CDemonMission *this_ptr,int index,int param_3,void *param_4);

// Original: core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
// Address: 00524a80
int __cdecl CDemonMission::createHeros(CDemonMission *this_ptr,int creation_flags);

// Original: core_mission.cpp_CDemonMission_FUN_00524c20
// Address: 00524c20
void __cdecl CDemonMission(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_00524e00
// Address: 00524e00
int __cdecl CDemonMission::countDamageableEnemies(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_addFilesToExtract_FUN_00524e60
// Address: 00524e60
void __cdecl CDemonMission::addFilesToExtract(CDemonMission *this_ptr,_FILE *file_handle,int unknown_flag);

// Original: core_mission.cpp_CDemonMission_ctor_FUN_00524ef0
// Address: 00524ef0
CDemonMission * __cdecl CDemonMission::ctor(CDemonMission *this_ptr);

// Original: core_mission.cpp_CDemonMission_dtor_FUN_00524f00
// Address: 00524f00
CDemonMission * __cdecl CDemonMission::dtor(CDemonMission *this_ptr,uint flags);
