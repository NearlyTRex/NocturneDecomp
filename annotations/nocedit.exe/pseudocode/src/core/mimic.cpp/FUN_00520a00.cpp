// Name: core_mimic.cpp_FUN_00520a00
// Address: 00520a00
// Address Range: [[00520a00, 00520a79]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520a00()
// Globals:
//   double DOUBLE_00638833 = 1.30000000000000
//   float FLOAT_0063883b = 0.5
// Function calls:
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520a00(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_mimic_cpp_FUN_00520a00(void)

{
  float fVar1;
  SMotion *pSVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  in_stack_00000008[6] = *(int *)(in_stack_00000004 + 0x23a0);
  in_stack_00000008[7] = 0x3f800000;
  if (*in_stack_00000008 == 1) {
    in_stack_00000008[5] = -0x42333333;
    fVar1 = (float)DOUBLE_00638833;
    in_stack_00000008[6] = (int)((float)in_stack_00000008[6] + FLOAT_0063883b);
    in_stack_00000008[7] = (int)((float)in_stack_00000008[7] * fVar1);
  }
  else {
    in_stack_00000008[5] = 0x40000000;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  if (pSVar2->state_index == 0xc) {
    return 0;
  }
  return 2;
}


// Assembly code:
// 00520a00: SUB ESP,0x8
//   Label: core_mimic.cpp_FUN_00520a00
// 00520a03: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00520a07: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00520a0b: FLD float ptr [EDX + 0x23a0]
// 00520a11: MOV ECX,dword ptr [EAX]
// 00520a13: FSTP float ptr [EAX + 0x18]
// 00520a16: MOV dword ptr [EAX + 0x1c],0x3f800000
// 00520a1d: CMP ECX,0x1
// 00520a20: JZ 0x00520a46
//   XREF to: 00520a46 (CONDITIONAL_JUMP)
// 00520a22: MOV dword ptr [EAX + 0x14],0x40000000
// 00520a29: LEA EAX,[EDX + 0x158]
//   Label: LAB_00520a29
// 00520a2f: PUSH EAX
// 00520a30: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00520a35: MOV EAX,dword ptr [EAX + 0x24]
// 00520a38: ADD ESP,0x4
// 00520a3b: CMP EAX,0xc
// 00520a3e: JNZ 0x00520a71
//   XREF to: 00520a71 (CONDITIONAL_JUMP)
// 00520a40: XOR EAX,EAX
// 00520a42: ADD ESP,0x8
// 00520a45: RET
// 00520a46: FLD float ptr [EAX + 0x1c]
//   Label: LAB_00520a46
// 00520a49: FLD float ptr [EAX + 0x18]
// 00520a4c: MOV dword ptr [EAX + 0x14],0xbdcccccd
// 00520a53: FLD ST1
// 00520a55: FXCH
// 00520a57: FADD float ptr [0x0063883b]
//   XREF to: 0063883b (READ)
// 00520a5d: FXCH
// 00520a5f: FMUL double ptr [0x00638833]
//   XREF to: 00638833 (READ)
// 00520a65: FXCH
// 00520a67: FSTP float ptr [EAX + 0x18]
// 00520a6a: FSTP ST1
// 00520a6c: FSTP float ptr [EAX + 0x1c]
// 00520a6f: JMP 0x00520a29
//   XREF to: 00520a29 (UNCONDITIONAL_JUMP)
// 00520a71: MOV EAX,0x2
//   Label: LAB_00520a71
// 00520a76: ADD ESP,0x8
// 00520a79: RET
