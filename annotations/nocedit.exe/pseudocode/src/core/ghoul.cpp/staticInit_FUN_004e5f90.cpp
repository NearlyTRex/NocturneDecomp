// Name: core_ghoul.cpp_staticInit_FUN_004e5f90
// Address: 004e5f90
// Address Range: [[004e5f90, 004e5fe5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ghoul.cpp_staticInit_FUN_004e5f90(void)
// Globals:
//   TerminatedCString s_CGhoul_0062dae2
//   int g_CGhoulClassVersion = 0x7
//   CDemonActorType g_CEnemyClassInfo
//   undefined4 DAT_02d832a8
//   undefined4 DAT_02d832ac
//   undefined4 DAT_02d832b0
//   undefined4 DAT_02d832b4
//   undefined4 DAT_02d832b8
//   undefined4 DAT_02d832bc
//   CDemonActorType g_CGhoulClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_ghoul_cpp_staticInit_FUN_004e5f90(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_02d832a8 = 0xbf19999a;
  _DAT_02d832ac = 0;
  _DAT_02d832b0 = 0;
  _DAT_02d832b4 = 0x3f19999a;
  _DAT_02d832b8 = 0;
  _DAT_02d832bc = 0;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGhoulClassInfo,"CGhoul",core_ghoul_cpp_FUN_004e5ff0,
                      &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 004e5f90: PUSH ESI
//   Label: core_ghoul.cpp_staticInit_FUN_004e5f90
// 004e5f91: PUSH 0x2cf2bb8
//   XREF to: 02cf2bb8 (DATA)
// 004e5f96: PUSH 0x7
// 004e5f98: MOV EDX,0xbf19999a
// 004e5f9d: PUSH 0x67b92c
//   XREF to: 0067b92c (DATA)
// 004e5fa2: MOV ESI,0x3f19999a
// 004e5fa7: XOR ECX,ECX
// 004e5fa9: PUSH 0x4e5ff0
//   XREF to: 004e5ff0 (DATA)
// 004e5fae: MOV dword ptr [0x02d832a8],EDX
//   XREF to: 02d832a8 (WRITE)
// 004e5fb4: MOV dword ptr [0x02d832ac],ECX
//   XREF to: 02d832ac (WRITE)
// 004e5fba: PUSH 0x62dae2
//   XREF to: 0062dae2 (DATA)
// 004e5fbf: MOV dword ptr [0x02d832b0],ECX
//   XREF to: 02d832b0 (WRITE)
// 004e5fc5: MOV dword ptr [0x02d832b4],ESI
//   XREF to: 02d832b4 (WRITE)
// 004e5fcb: PUSH 0x2d832c0
//   XREF to: 02d832c0 (DATA)
// 004e5fd0: MOV dword ptr [0x02d832b8],ECX
//   XREF to: 02d832b8 (WRITE)
// 004e5fd6: MOV dword ptr [0x02d832bc],ECX
//   XREF to: 02d832bc (WRITE)
// 004e5fdc: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004e5fe1: ADD ESP,0x18
// 004e5fe4: POP ESI
// 004e5fe5: RET
