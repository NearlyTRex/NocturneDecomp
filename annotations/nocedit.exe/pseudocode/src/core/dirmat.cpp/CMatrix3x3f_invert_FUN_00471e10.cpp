// Name: core_dirmat.cpp_CMatrix3x3f_invert_FUN_00471e10
// Address: 00471e10
// Address Range: [[00471e10, 00471fc2]]
// Convention: __cdecl
// Signature: void core_dirmat.cpp_CMatrix3x3f_invert_FUN_00471e10(CMatrix3x3f * this_ptr)
// Globals:
//   TerminatedCString s_core_dirmat_cpp_0061edb3
//   TerminatedCString s_CMatrix_invert_Singular__0061edc6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_dirmat_cpp_CMatrix3x3f_invert_FUN_00471e10(CMatrix3x3f *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_34;
  
  if (ABS((this_ptr->m[1].x * this_ptr->m[2].y - this_ptr->m[1].y * this_ptr->m[2].x) *
          this_ptr->m[0].z +
          ((this_ptr->m[1].y * this_ptr->m[2].z - this_ptr->m[1].z * this_ptr->m[2].y) *
           this_ptr->m[0].x -
          (this_ptr->m[1].x * this_ptr->m[2].z - this_ptr->m[1].z * this_ptr->m[2].x) *
          this_ptr->m[0].y)) == 0.0) {
    g_CurrentFilename = "..\\core\\dirmat.cpp";
    g_CurrentLineNumber = 0x69;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMatrix::invert - Singular matrix");
  }
  fVar1 = this_ptr->m[1].x;
  fVar2 = this_ptr->m[2].z;
  fVar3 = this_ptr->m[1].x;
  fVar4 = this_ptr->m[2].y;
  fVar5 = this_ptr->m[2].z;
  fVar6 = this_ptr->m[0].z;
  fVar7 = this_ptr->m[2].x;
  fVar8 = this_ptr->m[1].z;
  fVar9 = this_ptr->m[2].x;
  fVar10 = this_ptr->m[1].y;
  fVar11 = this_ptr->m[2].x;
  fVar12 = this_ptr->m[0].y;
  fVar13 = this_ptr->m[2].x;
  fVar30 = 1.0 / local_34;
  fVar14 = this_ptr->m[2].y;
  fVar15 = this_ptr->m[0].y;
  fVar16 = this_ptr->m[1].z;
  fVar17 = this_ptr->m[0].x;
  fVar18 = this_ptr->m[2].z;
  fVar19 = this_ptr->m[0].y;
  fVar20 = this_ptr->m[1].x;
  fVar21 = this_ptr->m[1].y;
  fVar22 = this_ptr->m[0].x;
  fVar23 = this_ptr->m[2].y;
  fVar24 = this_ptr->m[0].x;
  fVar25 = this_ptr->m[1].y;
  fVar26 = this_ptr->m[0].z;
  fVar27 = this_ptr->m[1].x;
  fVar28 = this_ptr->m[0].x;
  fVar29 = this_ptr->m[1].z;
  this_ptr->m[0].x =
       (this_ptr->m[1].y * this_ptr->m[2].z - this_ptr->m[1].z * this_ptr->m[2].y) * fVar30;
  this_ptr->m[0].y = -(this_ptr->m[0].y * fVar5 - this_ptr->m[0].z * fVar14) * fVar30;
  this_ptr->m[0].z = (fVar15 * fVar16 - this_ptr->m[0].z * fVar21) * fVar30;
  this_ptr->m[1].x = -(fVar1 * fVar2 - fVar8 * fVar9) * fVar30;
  this_ptr->m[1].y = (fVar17 * fVar18 - fVar6 * fVar7) * fVar30;
  this_ptr->m[1].z = -(fVar28 * fVar29 - fVar26 * fVar27) * fVar30;
  this_ptr->m[2].x = (fVar3 * fVar4 - fVar10 * fVar11) * fVar30;
  this_ptr->m[2].y = -(fVar22 * fVar23 - fVar12 * fVar13) * fVar30;
  this_ptr->m[2].z = (fVar24 * fVar25 - fVar19 * fVar20) * fVar30;
  return;
}


// Assembly code:
// 00471e10: PUSH EBX
//   Label: core_dirmat.cpp_CMatrix3x3f_invert_FUN_00471e10
// 00471e11: PUSH ESI
// 00471e12: PUSH EBP
// 00471e13: MOV EBP,ESP
// 00471e15: SUB ESP,0x28
// 00471e18: AND ESP,0xfffffff8
// 00471e1b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00471e1e: FLD float ptr [EBX + 0xc]
// 00471e21: FMUL float ptr [EBX + 0x20]
// 00471e24: FLD float ptr [EBX + 0x14]
// 00471e27: FMUL float ptr [EBX + 0x18]
// 00471e2a: FSUBP
// 00471e2c: FMUL float ptr [EBX + 0x4]
// 00471e2f: FLD float ptr [EBX + 0x10]
// 00471e32: FMUL float ptr [EBX + 0x20]
// 00471e35: FLD float ptr [EBX + 0x14]
// 00471e38: FMUL float ptr [EBX + 0x1c]
// 00471e3b: FSUBP
// 00471e3d: FMUL float ptr [EBX]
// 00471e3f: FSUBRP
// 00471e41: FLD float ptr [EBX + 0xc]
// 00471e44: FMUL float ptr [EBX + 0x1c]
// 00471e47: FLD float ptr [EBX + 0x10]
// 00471e4a: FMUL float ptr [EBX + 0x18]
// 00471e4d: FSUBP
// 00471e4f: FMUL float ptr [EBX + 0x8]
// 00471e52: FADDP
// 00471e54: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471e57: TEST dword ptr [ESP],0x7fffffff
//   XREF to: Stack[-0x38] (DATA)
// 00471e5e: JZ 0x00471f9b
//   XREF to: 00471f9b (CONDITIONAL_JUMP)
// 00471e64: FLD float ptr [EBX + 0x10]
//   Label: LAB_00471e64
// 00471e67: FMUL float ptr [EBX + 0x20]
// 00471e6a: FLD float ptr [EBX + 0xc]
// 00471e6d: FMUL float ptr [EBX + 0x20]
// 00471e70: FLD float ptr [EBX + 0xc]
// 00471e73: FMUL float ptr [EBX + 0x1c]
// 00471e76: FLD float ptr [EBX + 0x4]
// 00471e79: FMUL float ptr [EBX + 0x20]
// 00471e7c: FLD float ptr [EBX + 0x8]
// 00471e7f: FMUL float ptr [EBX + 0x18]
// 00471e82: FLD float ptr [EBX + 0x14]
// 00471e85: FMUL float ptr [EBX + 0x1c]
// 00471e88: FLD float ptr [EBX + 0x14]
// 00471e8b: FXCH
// 00471e8d: FSUBP ST6,ST0
// 00471e8f: FMUL float ptr [EBX + 0x18]
// 00471e92: FXCH ST5
// 00471e94: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 00471e98: FLD float ptr [EBX + 0x10]
// 00471e9b: FMUL float ptr [EBX + 0x18]
// 00471e9e: FXCH ST5
// 00471ea0: FSUBP ST4,ST0
// 00471ea2: FLD float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471ea5: FXCH ST4
// 00471ea7: FCHS
// 00471ea9: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 00471ead: FLD float ptr [EBX + 0x4]
// 00471eb0: FLD1
// 00471eb2: FXCH
// 00471eb4: FMUL float ptr [EBX + 0x18]
// 00471eb7: FXCH
// 00471eb9: FDIVRP ST5,ST0
// 00471ebb: FXCH ST5
// 00471ebd: FSUBP ST3,ST0
// 00471ebf: FXCH ST2
// 00471ec1: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 00471ec5: FLD float ptr [EBX + 0x8]
// 00471ec8: FMUL float ptr [EBX + 0x1c]
// 00471ecb: FLD float ptr [EBX + 0x4]
// 00471ece: FXCH
// 00471ed0: FSUBP ST2,ST0
// 00471ed2: FMUL float ptr [EBX + 0x14]
// 00471ed5: FXCH
// 00471ed7: FCHS
// 00471ed9: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 00471edd: FLD float ptr [EBX]
// 00471edf: FMUL float ptr [EBX + 0x20]
// 00471ee2: FLD float ptr [EBX + 0x4]
// 00471ee5: FMUL float ptr [EBX + 0xc]
// 00471ee8: FXCH
// 00471eea: FSUBRP ST3,ST0
// 00471eec: FLD float ptr [EBX + 0x8]
// 00471eef: FMUL float ptr [EBX + 0x10]
// 00471ef2: FLD float ptr [EBX]
// 00471ef4: FMUL float ptr [EBX + 0x1c]
// 00471ef7: FXCH
// 00471ef9: FSUBP ST3,ST0
// 00471efb: FXCH ST2
// 00471efd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 00471f01: FLD float ptr [EBX]
// 00471f03: FMUL float ptr [EBX + 0x10]
// 00471f06: FLD float ptr [EBX + 0x8]
// 00471f09: FMUL float ptr [EBX + 0xc]
// 00471f0c: FXCH
// 00471f0e: FSUBRP ST2,ST0
// 00471f10: FXCH
// 00471f12: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 00471f16: FLD float ptr [EBX]
// 00471f18: FMUL float ptr [EBX + 0x14]
// 00471f1b: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00471f1f: FXCH ST5
// 00471f21: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f24: FXCH ST4
// 00471f26: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f29: FXCH ST2
// 00471f2b: FSUBRP ST5,ST0
// 00471f2d: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00471f31: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f34: FXCH ST4
// 00471f36: FSUBRP
// 00471f38: FXCH ST4
// 00471f3a: FCHS
// 00471f3c: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (WRITE)
// 00471f40: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 00471f44: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f47: FXCH ST4
// 00471f49: FCHS
// 00471f4b: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 00471f4f: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f52: FXCH ST3
// 00471f54: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f57: FXCH
// 00471f59: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f5c: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 00471f60: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f63: FXCH ST3
// 00471f65: FSTP float ptr [EBX]
// 00471f67: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00471f6b: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f6e: FXCH ST5
// 00471f70: FSTP float ptr [EBX + 0x4]
// 00471f73: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00471f77: FMUL float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00471f7a: FXCH ST6
// 00471f7c: FSTP float ptr [EBX + 0x8]
// 00471f7f: FXCH ST3
// 00471f81: FSTP float ptr [EBX + 0xc]
// 00471f84: FSTP float ptr [EBX + 0x10]
// 00471f87: FXCH
// 00471f89: FSTP float ptr [EBX + 0x14]
// 00471f8c: FSTP float ptr [EBX + 0x18]
// 00471f8f: FSTP float ptr [EBX + 0x1c]
// 00471f92: FSTP float ptr [EBX + 0x20]
// 00471f95: MOV ESP,EBP
// 00471f97: POP EBP
// 00471f98: POP ESI
// 00471f99: POP EBX
// 00471f9a: RET
// 00471f9b: MOV ECX,0x61edb3
//   Label: LAB_00471f9b
//   XREF to: 0061edb3 (DATA)
// 00471fa0: MOV ESI,0x69
// 00471fa5: PUSH 0x61edc6
//   XREF to: 0061edc6 (DATA)
// 00471faa: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00471fb0: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00471fb6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00471fbb: ADD ESP,0x4
// 00471fbe: JMP 0x00471e64
//   XREF to: 00471e64 (UNCONDITIONAL_JUMP)
