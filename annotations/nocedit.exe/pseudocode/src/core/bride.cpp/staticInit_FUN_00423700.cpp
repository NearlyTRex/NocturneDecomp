// Name: core_bride.cpp_staticInit_FUN_00423700
// Address: 00423700
// Address Range: [[00423700, 00423755]]
// Convention: __cdecl
// Signature: CDemonActorType * core_bride.cpp_staticInit_FUN_00423700(void)
// Globals:
//   TerminatedCString s_CBride_00616a9d
//   int g_CBrideClassVersion = 0x4
//   undefined4 DAT_00822c88
//   undefined4 DAT_00822c8c
//   undefined4 DAT_00822c90
//   undefined4 DAT_00822c94
//   undefined4 DAT_00822c98
//   undefined4 DAT_00822c9c
//   CDemonActorType g_CBrideClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_bride_cpp_staticInit_FUN_00423700(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_00822c88 = 0xbf19999a;
  _DAT_00822c8c = 0;
  _DAT_00822c90 = 0;
  _DAT_00822c94 = 0x3f19999a;
  _DAT_00822c98 = 0;
  _DAT_00822c9c = 0;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBrideClassInfo,"CBride",core_bride_cpp_FUN_00423760,
                      &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00423700: PUSH ESI
//   Label: core_bride.cpp_staticInit_FUN_00423700
// 00423701: PUSH 0x2cf2bb8
//   XREF to: 02cf2bb8 (DATA)
// 00423706: PUSH 0x4
// 00423708: MOV EDX,0xbf19999a
// 0042370d: PUSH 0x66e648
//   XREF to: 0066e648 (DATA)
// 00423712: MOV ESI,0x3f19999a
// 00423717: XOR ECX,ECX
// 00423719: PUSH 0x423760
//   XREF to: 00423760 (DATA)
// 0042371e: MOV dword ptr [0x00822c88],EDX
//   XREF to: 00822c88 (WRITE)
// 00423724: MOV dword ptr [0x00822c8c],ECX
//   XREF to: 00822c8c (WRITE)
// 0042372a: PUSH 0x616a9d
//   XREF to: 00616a9d (DATA)
// 0042372f: MOV dword ptr [0x00822c90],ECX
//   XREF to: 00822c90 (WRITE)
// 00423735: MOV dword ptr [0x00822c94],ESI
//   XREF to: 00822c94 (WRITE)
// 0042373b: PUSH 0x822ca0
//   XREF to: 00822ca0 (DATA)
// 00423740: MOV dword ptr [0x00822c98],ECX
//   XREF to: 00822c98 (WRITE)
// 00423746: MOV dword ptr [0x00822c9c],ECX
//   XREF to: 00822c9c (WRITE)
// 0042374c: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00423751: ADD ESP,0x18
// 00423754: POP ESI
// 00423755: RET
