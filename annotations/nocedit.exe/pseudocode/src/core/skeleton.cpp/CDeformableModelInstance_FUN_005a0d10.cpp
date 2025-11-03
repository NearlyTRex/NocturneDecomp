// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0d10
// Address: 005a0d10
// Address Range: [[005a0d10, 005a0f46]]
// Convention: __cdecl
// Signature: float * core_skeleton.cpp_CDeformableModelInstance_FUN_005a0d10(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0c90 (005a0c90) at 005a0ca5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a0f50 (005a0f50) at 005a0fc1 [UNCONDITIONAL_CALL]
// Globals:
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   crt_math.c_ceil_FUN_006001b2
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

float * __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a0d10(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int iVar12;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 in_ST0;
  float10 fVar13;
  float *in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  float local_2c;
  float local_28;
  float local_24;
  
  if (in_stack_00000010 <= in_stack_0000000c) {
    *in_stack_00000008 = g_ZeroVector.x;
    in_stack_00000008[1] = g_ZeroVector.y;
    in_stack_00000008[2] = g_ZeroVector.z;
    return in_stack_00000008;
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar13 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX_00);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX_00));
  iVar1 = (int)ROUND(fVar13);
  crt_math_c_ceil_FUN_006001b2((double)in_stack_00000014);
  fVar13 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_01);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_01));
  iVar2 = (int)ROUND(fVar13);
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  if (iVar1 < iVar2) {
    iVar12 = iVar1 * 0xc;
    do {
      iVar9 = *(int *)(extraout_EAX + 0x29378);
      local_2c = local_2c + *(float *)(iVar9 + iVar12);
      local_28 = local_28 + *(float *)(iVar9 + 4 + iVar12);
      local_24 = local_24 + *(float *)(iVar9 + 8 + iVar12);
      iVar12 = iVar12 + 0xc;
    } while (iVar12 < iVar2 * 0xc);
  }
  iVar12 = iVar1 * 0xc;
  fVar10 = in_stack_00000010 - (float)iVar1;
  iVar9 = *(int *)(extraout_EAX + 0x29378);
  fVar3 = *(float *)(iVar12 + 4 + iVar9);
  fVar4 = *(float *)(iVar12 + 8 + iVar9);
  iVar1 = iVar2 + -1;
  fVar11 = (float)iVar2 - in_stack_00000014;
  iVar2 = *(int *)(extraout_EAX + 0x29378);
  fVar5 = *(float *)(iVar2 + 4 + iVar1 * 0xc);
  fVar6 = *(float *)(iVar2 + 8 + iVar1 * 0xc);
  fVar7 = *(float *)(this_ptr->field3_0x508 + 4);
  fVar8 = *(float *)(this_ptr->field3_0x508 + 8);
  *in_stack_00000008 =
       ((local_2c - *(float *)(iVar12 + iVar9) * fVar10) - *(float *)(iVar2 + iVar1 * 0xc) * fVar11)
       * *(float *)this_ptr->field3_0x508;
  in_stack_00000008[1] = ((local_28 - fVar3 * fVar10) - fVar5 * fVar11) * fVar7;
  in_stack_00000008[2] = ((local_24 - fVar4 * fVar10) - fVar6 * fVar11) * fVar8;
  return in_stack_00000008;
}


// Assembly code:
// 005a0d10: PUSH ESI
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0d10
// 005a0d11: PUSH EDI
// 005a0d12: SUB ESP,0x40
// 005a0d15: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005a0d19: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005a0d1d: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 005a0d21: FCOMP float ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 005a0d25: FNSTSW AX
// 005a0d27: SAHF
// 005a0d28: JC 0x005a0d4d
//   XREF to: 005a0d4d (CONDITIONAL_JUMP)
// 005a0d2a: MOV EAX,[0x03f87558]
//   XREF to: 03f87558 (READ)
// 005a0d2f: MOV dword ptr [ESI],EAX
// 005a0d31: LEA EAX,[ESI + 0x4]
// 005a0d34: MOV EDX,dword ptr [0x03f8755c]
//   XREF to: 03f8755c (READ)
// 005a0d3a: MOV dword ptr [EAX],EDX
// 005a0d3c: MOV EDX,dword ptr [0x03f87560]
//   XREF to: 03f87560 (READ)
// 005a0d42: MOV dword ptr [EAX + 0x4],EDX
// 005a0d45: MOV EAX,ESI
// 005a0d47: ADD ESP,0x40
// 005a0d4a: POP EDI
// 005a0d4b: POP ESI
// 005a0d4c: RET
// 005a0d4d: PUSH EBX
//   Label: LAB_005a0d4d
// 005a0d4e: PUSH EDI
// 005a0d4f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a0d54: ADD ESP,0x4
// 005a0d57: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[0xc] (READ)
// 005a0d5b: SUB ESP,0x8
// 005a0d5e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 005a0d61: MOV EBX,EAX
// 005a0d63: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a0d68: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a0d6c: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005a0d70: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 005a0d74: ADD ESP,0x8
// 005a0d77: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a0d7c: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[0x10] (READ)
// 005a0d80: FXCH
// 005a0d82: FISTP dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x10] (WRITE)
// 005a0d86: SUB ESP,0x8
// 005a0d89: FSTP double ptr [ESP]
//   XREF to: Stack[-0x54] (DATA)
// 005a0d8c: CALL crt_math.c_ceil_FUN_006001b2
//   XREF to: 006001b2 (UNCONDITIONAL_CALL)
// 005a0d91: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005a0d95: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005a0d99: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (READ)
// 005a0d9d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a0da2: ADD ESP,0x8
// 005a0da5: XOR EDX,EDX
// 005a0da7: FISTP dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (WRITE)
// 005a0dab: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x10] (READ)
// 005a0daf: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005a0db3: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a0db7: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005a0dbb: CMP EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 005a0dbf: JGE 0x005a0e10
//   XREF to: 005a0e10 (CONDITIONAL_JUMP)
// 005a0dc1: MOV EDX,EAX
// 005a0dc3: SHL EAX,0x2
// 005a0dc6: SUB EAX,EDX
// 005a0dc8: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 005a0dcc: LEA ECX,[EDX*0x4 + 0x0]
// 005a0dd3: SUB ECX,EDX
// 005a0dd5: SHL EAX,0x2
// 005a0dd8: SHL ECX,0x2
// 005a0ddb: MOV EDX,dword ptr [EBX + 0x29378]
//   Label: LAB_005a0ddb
// 005a0de1: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 005a0de5: FADD float ptr [EDX + EAX*0x1]
// 005a0de8: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005a0dec: FXCH
// 005a0dee: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (WRITE)
// 005a0df2: FADD float ptr [EDX + EAX*0x1 + 0x4]
// 005a0df6: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0dfa: FXCH
// 005a0dfc: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a0e00: FADD float ptr [EDX + EAX*0x1 + 0x8]
// 005a0e04: ADD EAX,0xc
// 005a0e07: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 005a0e0b: CMP EAX,ECX
// 005a0e0d: JL 0x005a0ddb
//   XREF to: 005a0ddb (CONDITIONAL_JUMP)
// 005a0e0f: NOP
// 005a0e10: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_005a0e10
//   XREF to: Stack[-0x10] (READ)
// 005a0e14: MOV EDX,EAX
// 005a0e16: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005a0e1a: SHL EAX,0x2
// 005a0e1d: SUB EAX,EDX
// 005a0e1f: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[-0xc] (READ)
// 005a0e23: LEA EDX,[EAX*0x4 + 0x0]
// 005a0e2a: FSUBR float ptr [ESP + 0x58]
//   XREF to: Stack[0xc] (READ)
// 005a0e2e: MOV EAX,dword ptr [EBX + 0x29378]
// 005a0e34: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (WRITE)
// 005a0e38: FLD float ptr [EDX + EAX*0x1]
// 005a0e3b: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 005a0e3f: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x3c] (WRITE)
// 005a0e43: FLD float ptr [EDX + EAX*0x1 + 0x4]
// 005a0e47: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 005a0e4b: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (WRITE)
// 005a0e4f: FLD float ptr [EDX + EAX*0x1 + 0x8]
// 005a0e53: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (READ)
// 005a0e57: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005a0e5b: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 005a0e5f: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x3c] (READ)
// 005a0e63: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0e67: FXCH
// 005a0e69: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (WRITE)
// 005a0e6d: FXCH
// 005a0e6f: FSUB float ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 005a0e73: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x14] (READ)
// 005a0e77: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a0e7b: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005a0e7f: FXCH
// 005a0e81: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (WRITE)
// 005a0e85: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[-0xc] (READ)
// 005a0e89: FXCH
// 005a0e8b: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 005a0e8f: LEA EDX,[EAX + -0x1]
// 005a0e92: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 005a0e96: LEA EAX,[EDX*0x4 + 0x0]
// 005a0e9d: FSUB float ptr [ESP + 0x5c]
//   XREF to: Stack[0x10] (READ)
// 005a0ea1: SUB EAX,EDX
// 005a0ea3: MOV EDX,dword ptr [EBX + 0x29378]
// 005a0ea9: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (WRITE)
// 005a0ead: FLD float ptr [EDX + EAX*0x4]
// 005a0eb0: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 005a0eb4: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x48] (WRITE)
// 005a0eb8: FLD float ptr [EDX + EAX*0x4 + 0x4]
// 005a0ebc: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 005a0ec0: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (WRITE)
// 005a0ec4: FLD float ptr [EDX + EAX*0x4 + 0x8]
// 005a0ec8: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 005a0ecc: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005a0ed0: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 005a0ed4: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005a0ed8: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0edc: FXCH
// 005a0ede: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (WRITE)
// 005a0ee2: FXCH ST2
// 005a0ee4: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x44] (READ)
// 005a0ee8: FXCH ST3
// 005a0eea: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (WRITE)
// 005a0eee: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x40] (READ)
// 005a0ef2: FXCH ST2
// 005a0ef4: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a0ef8: FXCH
// 005a0efa: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 005a0efe: FMUL float ptr [EDI + 0x508]
// 005a0f04: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005a0f08: FXCH
// 005a0f0a: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (WRITE)
// 005a0f0e: FMUL float ptr [EDI + 0x50c]
// 005a0f14: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0f18: FXCH
// 005a0f1a: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a0f1e: FMUL float ptr [EDI + 0x510]
// 005a0f24: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 005a0f28: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 005a0f2c: MOV dword ptr [ESI],EAX
// 005a0f2e: LEA EDX,[ESI + 0x4]
// 005a0f31: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005a0f35: MOV dword ptr [EDX],EAX
// 005a0f37: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x28] (READ)
// 005a0f3b: MOV dword ptr [EDX + 0x4],EAX
// 005a0f3e: POP EBX
// 005a0f3f: MOV EAX,ESI
// 005a0f41: ADD ESP,0x40
// 005a0f44: POP EDI
// 005a0f45: POP ESI
// 005a0f46: RET
