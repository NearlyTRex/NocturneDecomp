// Name: core_mimic.cpp_FUN_00520890
// Address: 00520890
// Address Range: [[00520890, 0052089f]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520890()

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520890(undefined4 param_1) */

int core_mimic_cpp_FUN_00520890(void)

{
  int iVar1;
  CMimic *in_stack_00000004;
  
  if ((in_stack_00000004->field0_0x0).base_character.base_actor.is_transparent == 0) {
    return 0;
  }
  iVar1 = core_mimic_cpp_CMimic_FUN_005205f0(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 00520890: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mimic.cpp_FUN_00520890
//   XREF to: Stack[0x4] (READ)
// 00520894: CMP dword ptr [EAX + 0xfc],0x0
// 0052089b: JNZ 0x00520880
//   XREF to: 00520880 (CONDITIONAL_JUMP)
// 0052089d: LEA EAX,[EAX]
