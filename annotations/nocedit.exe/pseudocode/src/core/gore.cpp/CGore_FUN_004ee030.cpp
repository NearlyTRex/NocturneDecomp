// Name: core_gore.cpp_CGore_FUN_004ee030
// Address: 004ee030
// Address Range: [[004ee030, 004ee063]]
// Convention: __cdecl
// Signature: void core_gore.cpp_CGore_FUN_004ee030(CGore * this_ptr, CDemonActor * actor)
// Cross-references:
//   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409e70 (00409e70) at 00409ea9 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_004404b0 (004404b0) at 00440596 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1b70 (004f1b70) at 004f1c70 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_CIcePick_FUN_004f95b0 (004f95b0) at 004f96f6 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557ea0 (00557ea0) at 00557f86 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4a7e [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9d30 (005d9d30) at 005d9e4f [UNCONDITIONAL_CALL]
// Function calls:
//   core_gore.cpp_CreateFlies_FUN_004edf30

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ee030(CGore *this_ptr,CDemonActor *actor)

{
  int iVar1;
  
  iVar1 = core_gore_cpp_CreateFlies_FUN_004edf30();
  *(int *)(iVar1 + 0x2c) = (actor->location).area_id;
  *(CDemonActor **)(iVar1 + 0x2a08) = actor;
  return;
}


// Assembly code:
// 004ee030: PUSH EBX
//   Label: core_gore.cpp_CGore_FUN_004ee030
// 004ee031: PUSH ESI
// 004ee032: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004ee036: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 004ee03a: PUSH EDX
// 004ee03b: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004ee03f: PUSH dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004ee043: PUSH ECX
// 004ee044: LEA EAX,[EBX + 0x20]
// 004ee047: PUSH EAX
// 004ee048: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004ee04c: PUSH ESI
// 004ee04d: CALL core_gore.cpp_CreateFlies_FUN_004edf30
//   XREF to: 004edf30 (UNCONDITIONAL_CALL)
// 004ee052: MOV EDX,dword ptr [EBX + 0x2c]
// 004ee055: MOV dword ptr [EAX + 0x2c],EDX
// 004ee058: ADD ESP,0x14
// 004ee05b: MOV dword ptr [EAX + 0x2a08],EBX
// 004ee061: POP ESI
// 004ee062: POP EBX
// 004ee063: RET
