// Name: core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
// Address: 00529900
// Address Range: [[00529900, 00529947]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900()
// Cross-references:
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00529104 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_moloch_morph_todemon_wav_00639eaf
//   TerminatedCString s_moloch_morph_tohuman_wav_00639ec8

#include "nocturne.h"

/* Signature: undefined1 actors_hero_moloch.cpp_PlaySoundAbtMolochMorphingToHumanOrDemon(undefined4
   param_1) */

void core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x21e90) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x21e8c) = 1;
  if (*(int *)(in_stack_00000004 + 0x21e88) != 0) {
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    return;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}


// Assembly code:
// 00529900: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
//   XREF to: Stack[0x4] (READ)
// 00529904: MOV dword ptr [EAX + 0x21e90],0x0
// 0052990e: MOV EDX,dword ptr [EAX + 0x21e88]
// 00529914: MOV dword ptr [EAX + 0x21e8c],0x1
// 0052991e: TEST EDX,EDX
// 00529920: JZ 0x00529935
//   XREF to: 00529935 (CONDITIONAL_JUMP)
// 00529922: PUSH 0x639eaf
//   XREF to: 00639eaf (DATA)
// 00529927: MOV EDX,dword ptr [EAX + 0x154]
// 0052992d: PUSH EAX
// 0052992e: CALL dword ptr [EDX + 0x24]
// 00529931: ADD ESP,0x8
// 00529934: RET
// 00529935: PUSH 0x639ec8
//   Label: LAB_00529935
//   XREF to: 00639ec8 (DATA)
// 0052993a: MOV EDX,dword ptr [EAX + 0x154]
// 00529940: PUSH EAX
// 00529941: CALL dword ptr [EDX + 0x24]
// 00529944: ADD ESP,0x8
// 00529947: RET
