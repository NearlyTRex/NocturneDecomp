// Name: core_werewolf.cpp_FUN_005f11e0
// Address: 005f11e0
// Address Range: [[005f11e0, 005f1227]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f11e0()
// Cross-references:
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0943 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1ac0 (005f1ac0) at 005f1bdb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_were_wav_00657da4
// Function calls:
//   sound_sndmain.cpp_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_werewolf.cpp_FUN_005f11e0(undefined4 param_1) */

void core_werewolf_cpp_FUN_005f11e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0xbedc) = 0x41200000;
  iVar1 = sound_sndmain_cpp_FUN_005a9660();
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(undefined4 *)(in_stack_00000004 + 0xbedc) = 0x41a00000;
  *(undefined4 *)(in_stack_00000004 + 0xbed8) = uVar2;
  return;
}


// Assembly code:
// 005f11e0: PUSH EBX
//   Label: core_werewolf.cpp_FUN_005f11e0
// 005f11e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f11e5: MOV EDX,dword ptr [EBX + 0xbed8]
// 005f11eb: PUSH EDX
// 005f11ec: MOV dword ptr [EBX + 0xbedc],0x41200000
// 005f11f6: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005f11fb: ADD ESP,0x4
// 005f11fe: TEST EAX,EAX
// 005f1200: JZ 0x005f1204
//   XREF to: 005f1204 (CONDITIONAL_JUMP)
// 005f1202: POP EBX
// 005f1203: RET
// 005f1204: PUSH 0x657da4
//   Label: LAB_005f1204
//   XREF to: 00657da4 (DATA)
// 005f1209: MOV EAX,dword ptr [EBX + 0x154]
// 005f120f: PUSH EBX
// 005f1210: CALL dword ptr [EAX + 0x24]
// 005f1213: MOV dword ptr [EBX + 0xbedc],0x41a00000
// 005f121d: ADD ESP,0x8
// 005f1220: MOV dword ptr [EBX + 0xbed8],EAX
// 005f1226: POP EBX
// 005f1227: RET
