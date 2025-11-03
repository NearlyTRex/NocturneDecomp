// Name: core_boneguy.cpp_FUN_0041ba10
// Address: 0041ba10
// Address Range: [[0041ba10, 0041bbb7]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041ba10()
// Globals:
//   void* switchdataD_0041b9f4 = 0041ba74
//   double DAT_00615f6d = 0.00392156862745098
//   double DAT_00615f75 = 0.0235294117647059
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

float * core_boneguy_cpp_FUN_0041ba10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float extraout_EAX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  float10 fVar7;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float local_1c;
  float local_18;
  float local_10;
  
  fVar1 = *in_stack_00000008;
  fVar2 = in_stack_00000008[2];
  fVar5 = fVar2;
  fVar6 = fVar2;
  if (0.0 < in_stack_00000008[1]) {
    fVar5 = in_stack_00000008[1] * (float)DAT_00615f6d;
    fVar2 = (float)DAT_00615f75;
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar7 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    fVar3 = (1.0 - fVar5) * extraout_EAX;
    fVar2 = fVar1 * fVar2 - (float)(int)ROUND(fVar7);
    fVar1 = (1.0 - fVar5 * fVar2) * extraout_EAX;
    fVar4 = (1.0 - (1.0 - fVar2) * fVar5) * extraout_EAX;
    fVar2 = local_1c;
    fVar5 = local_18;
    fVar6 = local_10;
    switch(((int)ROUND(fVar7) + 600) % 6) {
    case 0:
      fVar2 = fVar3;
      fVar5 = extraout_EAX;
      fVar6 = fVar4;
      break;
    case 1:
      fVar2 = fVar3;
      fVar5 = fVar1;
      fVar6 = extraout_EAX;
      break;
    case 2:
      fVar2 = fVar4;
      fVar5 = fVar3;
      fVar6 = extraout_EAX;
      break;
    case 3:
      fVar2 = extraout_EAX;
      fVar5 = fVar3;
      fVar6 = fVar1;
      break;
    case 4:
      fVar2 = extraout_EAX;
      fVar5 = fVar4;
      fVar6 = fVar3;
      break;
    case 5:
      fVar2 = fVar1;
      fVar5 = extraout_EAX;
      fVar6 = fVar3;
    }
  }
  local_10 = fVar6;
  local_18 = fVar5;
  local_1c = fVar2;
  *in_stack_00000004 = local_18;
  in_stack_00000004[1] = local_10;
  in_stack_00000004[2] = local_1c;
  return in_stack_00000004;
}


// Assembly code:
// 0041ba10: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041ba10
// 0041ba11: PUSH EBP
// 0041ba12: MOV EBP,ESP
// 0041ba14: SUB ESP,0x44
// 0041ba17: AND ESP,0xfffffff8
// 0041ba1a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041ba1d: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041ba20: MOV EDX,dword ptr [EAX]
// 0041ba22: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0041ba26: MOV EDX,dword ptr [EAX + 0x4]
// 0041ba29: FLDZ
// 0041ba2b: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0041ba2f: MOV EAX,dword ptr [EAX + 0x8]
// 0041ba32: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0041ba36: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0041ba3a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0041ba3d: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0041ba40: FNSTSW AX
// 0041ba42: SAHF
// 0041ba43: JC 0x0041bafe
//   XREF to: 0041bafe (CONDITIONAL_JUMP)
// 0041ba49: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (READ)
// 0041ba4d: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0041ba51: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041ba55: MOV dword ptr [ESP + 0x34],EAX
//   Label: LAB_0041ba55
//   XREF to: Stack[-0x1c] (WRITE)
// 0041ba59: MOV EAX,dword ptr [ESP + 0x38]
//   Label: default
//   XREF to: Stack[-0x18] (READ)
// 0041ba5d: MOV dword ptr [EBX],EAX
// 0041ba5f: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x10] (READ)
// 0041ba63: MOV dword ptr [EBX + 0x4],EAX
// 0041ba66: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 0041ba6a: MOV dword ptr [EBX + 0x8],EAX
// 0041ba6d: MOV EAX,EBX
// 0041ba6f: MOV ESP,EBP
// 0041ba71: POP EBP
// 0041ba72: POP EBX
// 0041ba73: RET
// 0041ba74: MOV EAX,dword ptr [ESP + 0x10]
//   Label: caseD_0
//   XREF to: Stack[-0x44] (READ)
// 0041ba78: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041ba7c: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0041ba80: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041ba84: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0041ba88: JMP 0x0041ba55
//   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)
// 0041ba8a: MOV EAX,dword ptr [ESP + 0x28]
//   Label: caseD_1
//   XREF to: Stack[-0x2c] (READ)
// 0041ba8e: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041ba92: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0041ba96: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041ba9a: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0041ba9e: JMP 0x0041ba55
//   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)
// 0041baa0: MOV EAX,dword ptr [ESP + 0x30]
//   Label: caseD_2
//   XREF to: Stack[-0x24] (READ)
// 0041baa4: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041baa8: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0041baac: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041bab0: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 0041bab4: JMP 0x0041ba55
//   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)
// 0041bab6: MOV EAX,dword ptr [ESP + 0x30]
//   Label: caseD_3
//   XREF to: Stack[-0x24] (READ)
// 0041baba: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041babe: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0041bac2: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041bac6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0041baca: JMP 0x0041ba55
//   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)
// 0041bacc: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: caseD_4
//   XREF to: Stack[-0x28] (READ)
// 0041bad0: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041bad4: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0041bad8: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041badc: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0041bae0: JMP 0x0041ba55
//   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)
// 0041bae5: MOV EAX,dword ptr [ESP + 0x10]
//   Label: caseD_5
//   XREF to: Stack[-0x44] (READ)
// 0041bae9: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041baed: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 0041baf1: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041baf5: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 0041baf9: JMP 0x0041ba55
//   XREF to: 0041ba55 (UNCONDITIONAL_JUMP)
// 0041bafe: FLD double ptr [ESP]
//   Label: LAB_0041bafe
//   XREF to: Stack[-0x50] (DATA)
// 0041bb01: FMUL double ptr [0x00615f6d]
//   XREF to: 00615f6d (READ)
// 0041bb07: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (READ)
// 0041bb0b: FLD ST0
// 0041bb0d: FMUL double ptr [0x00615f75]
//   XREF to: 00615f75 (READ)
// 0041bb13: FXCH ST2
// 0041bb15: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (WRITE)
// 0041bb19: FXCH
// 0041bb1b: FSTP ST1
// 0041bb1d: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (WRITE)
// 0041bb21: SUB ESP,0x8
// 0041bb24: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0041bb27: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0041bb2c: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0041bb30: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0041bb34: FLD double ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 0041bb38: ADD ESP,0x8
// 0041bb3b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041bb40: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (WRITE)
// 0041bb44: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0041bb48: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041bb4c: LEA EDX,[EAX + 0x258]
// 0041bb52: MOV ECX,0x6
// 0041bb57: MOV EAX,EDX
// 0041bb59: SAR EDX,0x1f
// 0041bb5c: IDIV ECX
// 0041bb5e: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0041bb62: FLD1
// 0041bb64: FSUBRP
// 0041bb66: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (READ)
// 0041bb6a: FXCH
// 0041bb6c: FMUL ST1
// 0041bb6e: FLD1
// 0041bb70: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0041bb74: FILD dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0041bb78: FSUBR float ptr [ESP + 0xc]
//   XREF to: Stack[-0x48] (READ)
// 0041bb7c: FXCH ST2
// 0041bb7e: FSUB ST0,ST2
// 0041bb80: FXCH
// 0041bb82: FMULP ST2
// 0041bb84: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0041bb88: FLD1
// 0041bb8a: FLD1
// 0041bb8c: FXCH
// 0041bb8e: FSUBRP ST3,ST0
// 0041bb90: FSUBRP
// 0041bb92: FXCH
// 0041bb94: FMUL ST3
// 0041bb96: FXCH
// 0041bb98: FMULP ST3
// 0041bb9a: FXCH
// 0041bb9c: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (WRITE)
// 0041bba0: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (WRITE)
// 0041bba4: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (WRITE)
// 0041bba8: CMP EDX,0x5
// 0041bbab: JA 0x0041ba59
//   XREF to: 0041ba59 (CONDITIONAL_JUMP)
// 0041bbb1: JMP dword ptr [EDX*0x4 + 0x41b9f4]
//   Label: switchD
//   XREF to: 0041ba74 (COMPUTED_JUMP)
//   XREF to: 0041ba8a (COMPUTED_JUMP)
//   XREF to: 0041baa0 (COMPUTED_JUMP)
//   XREF to: 0041bab6 (COMPUTED_JUMP)
//   XREF to: 0041bacc (COMPUTED_JUMP)
//   XREF to: 0041bae5 (COMPUTED_JUMP)
//   XREF to: 0041b9f4 (DATA)
