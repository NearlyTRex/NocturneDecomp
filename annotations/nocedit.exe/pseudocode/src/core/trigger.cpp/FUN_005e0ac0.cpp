// Name: core_trigger.cpp_FUN_005e0ac0
// Address: 005e0ac0
// Address Range: [[005e0ac0, 005e0af8]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005e0ac0()
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040ab09 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 00449277 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0a6c [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506200 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de285 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3b93 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

/* Signature: undefined1 actors_other_trigger.cpp_FUN_005e0ac0(undefined4 param_1, undefined4
   param_2) */

int core_trigger_cpp_FUN_005e0ac0(void)

{
  int iVar1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  if ((in_stack_00000008 != (char *)0x0) && (*(int *)(in_stack_00000004 + 0x174) == 7)) {
    if (*(char *)(in_stack_00000004 + 0x304) == '\0') {
      return 1;
    }
    iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                      ((char *)(in_stack_00000004 + 0x304),in_stack_00000008,0);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005e0ac0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_trigger.cpp_FUN_005e0ac0
//   XREF to: Stack[0x4] (READ)
// 005e0ac4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005e0ac8: TEST EDX,EDX
// 005e0aca: JZ 0x005e0ae4
//   XREF to: 005e0ae4 (CONDITIONAL_JUMP)
// 005e0acc: CMP dword ptr [EAX + 0x174],0x7
// 005e0ad3: JNZ 0x005e0ae4
//   XREF to: 005e0ae4 (CONDITIONAL_JUMP)
// 005e0ad5: CMP byte ptr [EAX + 0x304],0x0
// 005e0adc: JNZ 0x005e0ae7
//   XREF to: 005e0ae7 (CONDITIONAL_JUMP)
// 005e0ade: MOV EAX,0x1
// 005e0ae3: RET
// 005e0ae4: XOR EAX,EAX
//   Label: LAB_005e0ae4
// 005e0ae6: RET
// 005e0ae7: PUSH 0x0
//   Label: LAB_005e0ae7
// 005e0ae9: PUSH EDX
// 005e0aea: ADD EAX,0x304
// 005e0aef: PUSH EAX
// 005e0af0: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 005e0af5: ADD ESP,0xc
// 005e0af8: RET
