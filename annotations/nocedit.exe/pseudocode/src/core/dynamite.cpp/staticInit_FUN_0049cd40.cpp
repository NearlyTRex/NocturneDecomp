// Name: core_dynamite.cpp_staticInit_FUN_0049cd40
// Address: 0049cd40
// Address Range: [[0049cd40, 0049cd7c]]
// Convention: __cdecl
// Signature: CDemonActorType * core_dynamite.cpp_staticInit_FUN_0049cd40(void)
// Globals:
//   TerminatedCString s_CDynamite_00622e62
//   int g_CDynamiteClassVersion = 0x1
//   CDemonActorType g_CDynamiteClassInfo
//   undefined4 DAT_02ceed24
//   undefined4 DAT_02ceed28
//   undefined4 DAT_02ceed2c
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_dynamite_cpp_staticInit_FUN_0049cd40(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CDynamiteClassInfo,"CDynamite",core_dynamite_cpp_FUN_0049cd80,
                      &g_CDynamiteClassVersion,1,&g_CWeaponClassInfo);
  _DAT_02ceed24 = 0;
  _DAT_02ceed28 = 0xc2000000;
  _DAT_02ceed2c = 0;
  return pCVar1;
}


// Assembly code:
// 0049cd40: PUSH 0x3f95d40
//   Label: core_dynamite.cpp_staticInit_FUN_0049cd40
//   XREF to: 03f95d40 (DATA)
// 0049cd45: PUSH 0x1
// 0049cd47: PUSH 0x678a34
//   XREF to: 00678a34 (DATA)
// 0049cd4c: PUSH 0x49cd80
//   XREF to: 0049cd80 (DATA)
// 0049cd51: PUSH 0x622e62
//   XREF to: 00622e62 (DATA)
// 0049cd56: PUSH 0x2ceece8
//   XREF to: 02ceece8 (DATA)
// 0049cd5b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0049cd60: MOV ECX,0xc2000000
// 0049cd65: XOR EDX,EDX
// 0049cd67: ADD ESP,0x18
// 0049cd6a: MOV dword ptr [0x02ceed24],EDX
//   XREF to: 02ceed24 (WRITE)
// 0049cd70: MOV dword ptr [0x02ceed28],ECX
//   XREF to: 02ceed28 (WRITE)
// 0049cd76: MOV dword ptr [0x02ceed2c],EDX
//   XREF to: 02ceed2c (WRITE)
// 0049cd7c: RET
