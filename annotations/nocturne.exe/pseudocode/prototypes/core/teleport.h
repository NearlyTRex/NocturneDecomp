#pragma once

// Function prototypes for core/teleport.cpp
// Generated from Ghidra function signatures

// Original: core_teleport.cpp_staticInit_FUN_005437c0
// Address: 005437c0
void __cdecl staticInit(void);

// Original: core_teleport.cpp_factoryFuncTeleportDest_FUN_00543810
// Address: 00543810
CTeleportDest * __cdecl factoryFuncTeleportDest(void);

// Original: core_teleport.cpp_CTeleportDest_getActorType_FUN_00543830
// Address: 00543830
CDemonActorType * __cdecl CTeleportDest::getActorType(CTeleportDest *this_ptr);

// Original: core_teleport.cpp_CTeleportDest_ctor_FUN_00543840
// Address: 00543840
CTeleportDest * __cdecl CTeleportDest::ctor(CTeleportDest *this_ptr);

// Original: core_teleport.cpp_CTeleportDest_getBoundingBox_FUN_00543860
// Address: 00543860
CBoundingBox3D * __cdecl CTeleportDest::getBoundingBox(CTeleportDest *this_ptr,CBoundingBox3D *out_box);

// Original: core_teleport.cpp_CTeleportDest_getCollisionType_FUN_00543890
// Address: 00543890
ECollisionType __cdecl CTeleportDest::getCollisionType(CTeleportDest *this_ptr,SCollisionInfo *collision_info);

// Original: core_teleport.cpp_factoryFuncTeleport_FUN_005438a0
// Address: 005438a0
CTeleport * __cdecl factoryFuncTeleport(void);

// Original: core_teleport.cpp_CTeleport_getActorType_FUN_005438c0
// Address: 005438c0
CDemonActorType * __cdecl CTeleport::getActorType(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_ctor_FUN_005438d0
// Address: 005438d0
CTeleport * __cdecl CTeleport::ctor(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_process_FUN_00543910
// Address: 00543910
void __cdecl CTeleport::process(CTeleport *this_ptr,float delta_time);

// Original: core_teleport.cpp_CTeleport_getBoundingBox_FUN_005439c0
// Address: 005439c0
CBoundingBox3D * __cdecl CTeleport::getBoundingBox(CTeleport *this_ptr,CBoundingBox3D *out_box);

// Original: core_teleport.cpp_CTeleport_archive_FUN_00543a20
// Address: 00543a20
void __cdecl CTeleport::archive(CTeleport *this_ptr);

// Original: core_teleport.cpp_CTeleport_dtor_FUN_00543a60
// Address: 00543a60
CTeleport * __cdecl CTeleport::dtor(CTeleport *this_ptr,uint flags);

// Original: core_teleport.cpp_CTeleportDest_dtor_FUN_00543ab0
// Address: 00543ab0
CTeleportDest * __cdecl CTeleportDest::dtor(CTeleportDest *this_ptr,uint flags);
