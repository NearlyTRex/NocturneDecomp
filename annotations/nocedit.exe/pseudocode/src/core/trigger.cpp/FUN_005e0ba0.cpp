// Name: core_trigger.cpp_FUN_005e0ba0
// Address: 005e0ba0
// Address Range: [[005e0ba0, 005e0c29]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_FUN_005e0ba0()
// Cross-references:
//   core_trigger.cpp_CTrigger_FUN_005e1180 (005e1180) at 005e11fb [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_serialize_FUN_005e0690 (005e0690) at 005e0917 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005e0b78 = 005e0bba
//   double DOUBLE_006557cc = 10
// Function calls:
//   crt_math.c_ceil_FUN_006001b2

#include "nocturne.h"

/* Signature: undefined1 actors_other_trigger.cpp_FUN_005e0ba0(undefined4 param_1) */

void core_trigger_cpp_FUN_005e0ba0(void)

{
  float *pfVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  switch(*(undefined4 *)(in_stack_00000004 + 0x174)) {
  case 0:
  case 1:
    pfVar1 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
    crt_math_c_ceil_FUN_006001b2
              ((double)(SQRT((pfVar1[5] - pfVar1[2]) * (pfVar1[5] - pfVar1[2]) +
                             (pfVar1[3] - *pfVar1) * (pfVar1[3] - *pfVar1) +
                             (pfVar1[4] - pfVar1[1]) * (pfVar1[4] - pfVar1[1])) +
                       (float)DOUBLE_006557cc));
    *(float *)(in_stack_00000004 + 0x158) = (float)(double)CONCAT44(extraout_EDX,extraout_EAX);
  }
  return;
}


// Assembly code:
// 005e0ba0: PUSH EBX
//   Label: core_trigger.cpp_FUN_005e0ba0
// 005e0ba1: SUB ESP,0x2c
// 005e0ba4: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005e0ba8: MOV EAX,dword ptr [EBX + 0x174]
// 005e0bae: CMP EAX,0x9
// 005e0bb1: JA 0x005e0c25
//   XREF to: 005e0c25 (CONDITIONAL_JUMP)
// 005e0bb3: JMP dword ptr [EAX*0x4 + 0x5e0b78]
//   Label: switchD
//   XREF to: 005e0bba (COMPUTED_JUMP)
//   XREF to: 005e0c25 (COMPUTED_JUMP)
//   XREF to: 005e0b78 (DATA)
// 005e0bba: MOV EDX,ESP
//   Label: caseD_1
// 005e0bbc: PUSH EDX
// 005e0bbd: MOV EAX,dword ptr [EBX + 0x154]
// 005e0bc3: PUSH EBX
// 005e0bc4: CALL dword ptr [EAX + 0x14]
// 005e0bc7: LEA EDX,[EAX + 0xc]
// 005e0bca: FLD float ptr [EDX]
// 005e0bcc: FSUB float ptr [EAX]
// 005e0bce: ADD ESP,0x8
// 005e0bd1: FSTP float ptr [ESP + 0x18]
// 005e0bd5: FLD float ptr [EDX + 0x4]
// 005e0bd8: FSUB float ptr [EAX + 0x4]
// 005e0bdb: FST float ptr [ESP + 0x1c]
// 005e0bdf: FMUL float ptr [ESP + 0x1c]
// 005e0be3: FLD float ptr [ESP + 0x18]
// 005e0be7: FMUL ST0
// 005e0be9: FLD float ptr [EDX + 0x8]
// 005e0bec: FSUB float ptr [EAX + 0x8]
// 005e0bef: FXCH
// 005e0bf1: FADDP ST2,ST0
// 005e0bf3: FST float ptr [ESP + 0x20]
// 005e0bf7: FMUL float ptr [ESP + 0x20]
// 005e0bfb: FADDP
// 005e0bfd: FSQRT
// 005e0bff: FADD double ptr [0x006557cc]
//   XREF to: 006557cc (READ)
// 005e0c05: SUB ESP,0x8
// 005e0c08: FSTP double ptr [ESP]
// 005e0c0b: CALL crt_math.c_ceil_FUN_006001b2
//   XREF to: 006001b2 (UNCONDITIONAL_CALL)
// 005e0c10: MOV dword ptr [ESP + 0x2c],EAX
// 005e0c14: MOV dword ptr [ESP + 0x30],EDX
// 005e0c18: FLD double ptr [ESP + 0x2c]
// 005e0c1c: FSTP float ptr [EBX + 0x158]
// 005e0c22: ADD ESP,0x8
// 005e0c25: ADD ESP,0x2c
//   Label: caseD_9
// 005e0c28: POP EBX
// 005e0c29: RET
