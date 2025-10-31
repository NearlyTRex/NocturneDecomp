// Name: core_werewolf.cpp_staticInit_FUN_005efb70
// Address: 005efb70
// Address Range: [[005efb70, 005efbcf]]
// Convention: __cdecl
// Signature: CDemonActorType * core_werewolf.cpp_staticInit_FUN_005efb70(void)
// Globals:
//   TerminatedCString s_CWerewolf_00657c34
//   int g_CWerewolfClassVersion = 0x6
//   CDemonActorType g_CEnemyClassInfo
//   undefined4 DAT_03f96b44
//   undefined4 DAT_03f96b48
//   undefined4 DAT_03f96b4c
//   undefined4 DAT_03f96b50
//   undefined4 DAT_03f96b54
//   undefined4 DAT_03f96b58
//   CDemonActorType g_CWerewolfClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_werewolf_cpp_staticInit_FUN_005efb70(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_03f96b44 = 0xbe8f5c29;
  _DAT_03f96b48 = 0x3ed70a3d;
  _DAT_03f96b4c = 0x3f19999a;
  _DAT_03f96b50 = 0x3eb33333;
  _DAT_03f96b54 = 0x3ed70a3d;
  _DAT_03f96b58 = 0x3f19999a;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CWerewolfClassInfo,"CWerewolf",core_werewolf_cpp_FUN_005efbd0,
                      &g_CWerewolfClassVersion,6,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 005efb70: PUSH EBX
//   Label: core_werewolf.cpp_staticInit_FUN_005efb70
// 005efb71: PUSH ESI
// 005efb72: PUSH 0x2cf2bb8
//   XREF to: 02cf2bb8 (DATA)
// 005efb77: PUSH 0x6
// 005efb79: MOV EDX,0xbe8f5c29
// 005efb7e: MOV ECX,0x3ed70a3d
// 005efb83: PUSH 0x684958
//   XREF to: 00684958 (DATA)
// 005efb88: MOV EBX,0x3f19999a
// 005efb8d: MOV ESI,0x3eb33333
// 005efb92: PUSH 0x5efbd0
//   XREF to: 005efbd0 (DATA)
// 005efb97: MOV dword ptr [0x03f96b44],EDX
//   XREF to: 03f96b44 (WRITE)
// 005efb9d: MOV dword ptr [0x03f96b48],ECX
//   XREF to: 03f96b48 (WRITE)
// 005efba3: PUSH 0x657c34
//   XREF to: 00657c34 (DATA)
// 005efba8: MOV dword ptr [0x03f96b4c],EBX
//   XREF to: 03f96b4c (WRITE)
// 005efbae: MOV dword ptr [0x03f96b50],ESI
//   XREF to: 03f96b50 (WRITE)
// 005efbb4: PUSH 0x3f96b5c
//   XREF to: 03f96b5c (DATA)
// 005efbb9: MOV dword ptr [0x03f96b54],ECX
//   XREF to: 03f96b54 (WRITE)
// 005efbbf: MOV dword ptr [0x03f96b58],EBX
//   XREF to: 03f96b58 (WRITE)
// 005efbc5: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005efbca: ADD ESP,0x18
// 005efbcd: POP ESI
// 005efbce: POP EBX
// 005efbcf: RET
