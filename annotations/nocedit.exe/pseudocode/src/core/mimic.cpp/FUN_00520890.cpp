// Name: core_mimic.cpp_FUN_00520890
// Address: 00520890
// Address Range: [[00520890, 0052089f]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520890()

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520890(undefined4 param_1) */

undefined4 core_mimic_cpp_FUN_00520890(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0xfc) == 0) {
    return 0;
  }
  uVar1 = core_mimic_cpp_FUN_005205f0();
  return uVar1;
}


// Assembly code:
// 00520890: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mimic.cpp_FUN_00520890
//   XREF to: Stack[0x4] (READ)
// 00520894: CMP dword ptr [EAX + 0xfc],0x0
// 0052089b: JNZ 0x00520880
//   XREF to: 00520880 (CONDITIONAL_JUMP)
// 0052089d: LEA EAX,[EAX]
