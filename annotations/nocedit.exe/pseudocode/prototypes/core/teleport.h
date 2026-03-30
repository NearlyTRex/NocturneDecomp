#pragma once

// Function prototypes for core/teleport.cpp
// Generated from Ghidra function signatures

// Original: core_teleport.cpp_staticInit_FUN_005da6e0
// Address: 005da6e0
void __cdecl staticInit(void);

// Original: core_teleport.cpp_factoryFuncTeleportDest_FUN_005da730
// Address: 005da730
CTeleportDest * __cdecl factoryFuncTeleportDest(void);

// Original: core_teleport.cpp_CTeleportDest_getActorType_FUN_005da760
// Address: 005da760
CDemonActorType * __cdecl CTeleportDest::getActorType(CTeleportDest *this_ptr);

// Original: core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
// Address: 005da770
CTeleportDest * __cdecl CTeleportDest::ctor(CTeleportDest *this_ptr);

// Original: core_teleport.cpp_CTeleportDest_getBoundingBox_FUN_005da790
// Address: 005da790
CBoundingBox3D * __cdecl CTeleportDest::getBoundingBox(CTeleportDest *this_ptr,CBoundingBox3D *out_box);

// Original: core_teleport.cpp_CTeleportDest_getCollisionType_FUN_005da7c0
// Address: 005da7c0
ECollisionType __cdecl CTeleportDest::getCollisionType(CTeleportDest *this_ptr,SCollisionInfo *collision_info);

// Original: core_teleport.cpp_CTeleportDest_renderOpaque_FUN_005da7d0
// Address: 005da7d0
int __cdecl CTeleportDest::renderOpaque(CTeleportDest *this_ptr);

// Original: core_teleport.cpp_matchesTeleportDestination_FUN_005da850
// Address: 005da850
int __cdecl matchesTeleportDestination(CTeleportDest *dest,CTeleport *candidate);

// Original: core_teleport.cpp_CTeleportDest_processInEditor_FUN_005da870
// Address: 005da870
void __cdecl CTeleportDest::processInEditor(CTeleportDest *this_ptr);

// Original: core_teleport.cpp_CTeleportDest_showEditorHelp_FUN_005da970
// Address: 005da970
void __cdecl CTeleportDest::showEditorHelp(CTeleportDest *this_ptr,int *y_pos);

// Original: core_teleport.cpp_factoryFuncTeleport_FUN_005da9a0
// Address: 005da9a0
CTeleport * __cdecl factoryFuncTeleport(void);

// Original: core_teleport.cpp_CTeleport_getActorType_FUN_005da9d0
// Address: 005da9d0
CDemonActorType * __cdecl CTeleport::getActorType(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
// Address: 005da9e0
CTeleport * __cdecl CTeleport::ctor(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_process_FUN_005daa20
// Address: 005daa20
void __cdecl CTeleport::process(CTeleport *this_ptr,float delta_time);

// Original: core_teleport.cpp_CTeleport_getBoundingBox_FUN_005daad0
// Address: 005daad0
CBoundingBox3D * __cdecl CTeleport::getBoundingBox(CTeleport *this_ptr,CBoundingBox3D *out_box);

// Original: core_teleport.cpp_CTeleport_archive_FUN_005dab30
// Address: 005dab30
void __cdecl CTeleport::archive(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_onActorDeleted_FUN_005dab70
// Address: 005dab70
void __cdecl CTeleport::onActorDeleted(CTeleport *this_ptr,CDemonActor *deleted_actor);

// Original: core_teleport.cpp_CTeleport_getPropertyList_FUN_005daba0
// Address: 005daba0
void __cdecl CTeleport::getPropertyList(CTeleport *this_ptr,CActorPropertyList *property_list);

// Original: core_teleport.cpp_CTeleport_processInEditor_FUN_005dabe0
// Address: 005dabe0
void __cdecl CTeleport::processInEditor(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_showEditorHelp_FUN_005dadc0
// Address: 005dadc0
void __cdecl CTeleport::showEditorHelp(CTeleport *this_ptr,int *y_pos);

// Original: core_teleport.cpp_CTeleport_renderOpaque_FUN_005dae10
// Address: 005dae10
int __cdecl CTeleport::renderOpaque(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_dtor_FUN_005dae50
// Address: 005dae50
CTeleport * __cdecl CTeleport::dtor(CTeleport *this_ptr,uint flags);

// Original: core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0
// Address: 005daea0
CTeleportDest * __cdecl CTeleportDest::dtor(CTeleportDest *this_ptr,uint flags);
