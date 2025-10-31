// Name: core_teleport.cpp_CTeleportDest_getActorType_FUN_005da760
// Address: 005da760
// Address Range: [[005da760, 005da765]]
// Convention: __cdecl
// Signature: CDemonActorType * core_teleport.cpp_CTeleportDest_getActorType_FUN_005da760(CTeleportDest * this_ptr)
// Globals:
//   CDemonActorType g_CTeleportDestClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_teleport_cpp_CTeleportDest_getActorType_FUN_005da760(CTeleportDest *this_ptr)

{
  return &g_CTeleportDestClassInfo;
}


// Assembly code:
// 005da760: MOV EAX,0x3f6cc90
//   Label: core_teleport.cpp_CTeleportDest_getActorType_FUN_005da760
//   XREF to: 03f6cc90 (DATA)
// 005da765: RET
