// Name: core_teleport.cpp_CTeleport_getActorType_FUN_005da9d0
// Address: 005da9d0
// Address Range: [[005da9d0, 005da9d5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_teleport.cpp_CTeleport_getActorType_FUN_005da9d0(CTeleport * this_ptr)
// Globals:
//   CDemonActorType g_CTeleportClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_teleport_cpp_CTeleport_getActorType_FUN_005da9d0(CTeleport *this_ptr)

{
  return &g_CTeleportClassInfo;
}


// Assembly code:
// 005da9d0: MOV EAX,0x3f6cccc
//   Label: core_teleport.cpp_CTeleport_getActorType_FUN_005da9d0
//   XREF to: 03f6cccc (DATA)
// 005da9d5: RET
