// Name: core_mimic.cpp_FUN_00520870
// Address: 00520870
// Address Range: [[00520870, 00520889]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520870()
// Function calls:
//   core_mimic.cpp_FUN_005205f0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520870(undefined4 param_1) */

undefined4 core_mimic_cpp_FUN_00520870(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0xfc) != 0) {
    return 0;
  }
  uVar1 = core_mimic_cpp_FUN_005205f0();
  return uVar1;
}


// Assembly code:
// 00520870: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mimic.cpp_FUN_00520870
//   XREF to: Stack[0x4] (READ)
// 00520874: CMP dword ptr [EAX + 0xfc],0x0
// 0052087b: JZ 0x00520880
//   XREF to: 00520880 (CONDITIONAL_JUMP)
// 0052087d: XOR EAX,EAX
// 0052087f: RET
// 00520880: PUSH EAX
//   Label: LAB_00520880
// 00520881: CALL core_mimic.cpp_FUN_005205f0
//   XREF to: 005205f0 (UNCONDITIONAL_CALL)
// 00520886: ADD ESP,0x4
// 00520889: RET
