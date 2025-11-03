// Name: core_glass.cpp_staticInit_FUN_004e8fd0
// Address: 004e8fd0
// Address Range: [[004e8fd0, 004e8ff3]]
// Convention: __cdecl
// Signature: void core_glass.cpp_staticInit_FUN_004e8fd0(void)
// Globals:
//   TerminatedCString s_CGlass_0062df49
//   int g_CGlassClassVersion = 0x6
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CGlassClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_glass_cpp_staticInit_FUN_004e8fd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CGlassClassInfo,"CGlass",core_glass_cpp_CGlass_factoryFunc_FUN_004e9000,
             &g_CGlassClassVersion,6,&g_CDemonActorClassInfo);
  return;
}


// Assembly code:
// 004e8fd0: PUSH 0x821ff8
//   Label: core_glass.cpp_staticInit_FUN_004e8fd0
//   XREF to: 00821ff8 (DATA)
// 004e8fd5: PUSH 0x6
// 004e8fd7: PUSH 0x67b944
//   XREF to: 0067b944 (DATA)
// 004e8fdc: PUSH 0x4e9000
//   XREF to: 004e9000 (DATA)
// 004e8fe1: PUSH 0x62df49
//   XREF to: 0062df49 (DATA)
// 004e8fe6: PUSH 0x2d83328
//   XREF to: 02d83328 (DATA)
// 004e8feb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004e8ff0: ADD ESP,0x18
// 004e8ff3: RET
