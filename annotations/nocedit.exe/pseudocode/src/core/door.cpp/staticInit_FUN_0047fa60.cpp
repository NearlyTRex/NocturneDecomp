// Name: core_door.cpp_staticInit_FUN_0047fa60
// Address: 0047fa60
// Address Range: [[0047fa60, 0047fa83]]
// Convention: __cdecl
// Signature: void core_door.cpp_staticInit_FUN_0047fa60(void)
// Globals:
//   TerminatedCString s_CDoor_00621079
//   undefined4 g_CDoorClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CDoorClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_door_cpp_staticInit_FUN_0047fa60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDoorClassInfo,"CDoor",core_door_cpp_factoryFunc_FUN_0047fa90,
             &g_CDoorClassVersion,0xb,&g_CDemonActorClassInfo);
  return;
}


// Assembly code:
// 0047fa60: PUSH 0x821ff8
//   Label: core_door.cpp_staticInit_FUN_0047fa60
//   XREF to: 00821ff8 (DATA)
// 0047fa65: PUSH 0xb
// 0047fa67: PUSH 0x670378
//   XREF to: 00670378 (DATA)
// 0047fa6c: PUSH 0x47fa90
//   XREF to: 0047fa90 (DATA)
// 0047fa71: PUSH 0x621079
//   XREF to: 00621079 (DATA)
// 0047fa76: PUSH 0x2c14cdc
//   XREF to: 02c14cdc (DATA)
// 0047fa7b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0047fa80: ADD ESP,0x18
// 0047fa83: RET
