// Name: core_tommygun.cpp_FUN_005de5a0
// Address: 005de5a0
// Address Range: [[005de5a0, 005de5c7]]
// Convention: unknown
// Signature: undefined core_tommygun.cpp_FUN_005de5a0()
// Function calls:
//   core_weapon.cpp_CWeapon_FUN_005ee640
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_tommygun.cpp_FUN_005de5a0(undefined4 param_1, undefined4
   param_2) */

void core_tommygun_cpp_FUN_005de5a0(void)

{
  CWeapon *in_stack_00000008;
  
  sound_sndmain_cpp_FUN_005a9c40();
  core_weapon_cpp_CWeapon_FUN_005ee640(in_stack_00000008);
  return;
}


// Assembly code:
// 005de5a0: PUSH EBX
//   Label: core_tommygun.cpp_FUN_005de5a0
// 005de5a1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005de5a5: MOV EDX,dword ptr [EAX + 0x57c]
// 005de5ab: PUSH EDX
// 005de5ac: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005de5b1: ADD ESP,0x4
// 005de5b4: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005de5b8: PUSH ECX
// 005de5b9: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005de5bd: PUSH EBX
// 005de5be: CALL core_weapon.cpp_CWeapon_FUN_005ee640
//   XREF to: 005ee640 (UNCONDITIONAL_CALL)
// 005de5c3: ADD ESP,0x8
// 005de5c6: POP EBX
// 005de5c7: RET
