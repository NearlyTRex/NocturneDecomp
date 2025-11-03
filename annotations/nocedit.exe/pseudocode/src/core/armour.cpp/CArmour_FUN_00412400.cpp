// Name: core_armour.cpp_CArmour_FUN_00412400
// Address: 00412400
// Address Range: [[00412400, 00412438]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_FUN_00412400(CArmour * this_ptr)
// Globals:
//   TerminatedCString s_armour_wav_00614e0c
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042b9e0
//   core_enemy.cpp_FUN_004a9f10

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_FUN_00412400(CArmour *this_ptr)

{
  undefined4 uStack00000008;
  CArmour *pCStack0000000c;
  
  core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
  (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
            ((CDemonActor *)this_ptr,"armour.wav");
  pCStack0000000c = this_ptr;
  uStack00000008 = 0x412434;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00412400: PUSH EBX
//   Label: core_armour.cpp_CArmour_FUN_00412400
// 00412401: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412405: PUSH 0x1
// 00412407: PUSH 0xbf800000
// 0041240c: PUSH 0x0
// 0041240e: PUSH EBX
// 0041240f: CALL core_charactr.cpp_CCharacter_FUN_0042b9e0
//   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)
// 00412414: ADD ESP,0x10
// 00412417: PUSH 0x614e0c
//   XREF to: 00614e0c (DATA)
// 0041241c: MOV EAX,dword ptr [EBX + 0x154]
// 00412422: PUSH EBX
// 00412423: CALL dword ptr [EAX + 0x24]
// 00412426: ADD ESP,0x8
// 00412429: MOV EDX,dword ptr [ESP + 0xc]
// 0041242d: PUSH EDX
// 0041242e: PUSH EBX
// 0041242f: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00412434: ADD ESP,0x8
// 00412437: POP EBX
// 00412438: RET
