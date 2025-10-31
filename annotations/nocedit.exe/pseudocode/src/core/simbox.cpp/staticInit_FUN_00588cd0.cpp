// Name: core_simbox.cpp_staticInit_FUN_00588cd0
// Address: 00588cd0
// Address Range: [[00588cd0, 00588cf3]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_staticInit_FUN_00588cd0(void)
// Globals:
//   TerminatedCString s_CSimBox_00649bd2
//   int g_CSimBoxClassVersion = 0x3
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CSimBoxClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_simbox_cpp_staticInit_FUN_00588cd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CSimBoxClassInfo,"CSimBox",core_simbox_cpp_CSimBox_FUN_00588d00,
             &g_CSimBoxClassVersion,3,&g_CDemonActorClassInfo);
  return;
}


// Assembly code:
// 00588cd0: PUSH 0x821ff8
//   Label: core_simbox.cpp_staticInit_FUN_00588cd0
//   XREF to: 00821ff8 (DATA)
// 00588cd5: PUSH 0x3
// 00588cd7: PUSH 0x68183c
//   XREF to: 0068183c (DATA)
// 00588cdc: PUSH 0x588d00
//   XREF to: 00588d00 (DATA)
// 00588ce1: PUSH 0x649bd2
//   XREF to: 00649bd2 (DATA)
// 00588ce6: PUSH 0x36597e8
//   XREF to: 036597e8 (DATA)
// 00588ceb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00588cf0: ADD ESP,0x18
// 00588cf3: RET
