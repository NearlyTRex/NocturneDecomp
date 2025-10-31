// Name: core_xform.cpp_buildMirrorTransform_FUN_005f7000
// Address: 005f7000
// Address Range: [[005f7000, 005f713c]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_buildMirrorTransform_FUN_005f7000(CMatrix3x4f * matrix_out, CVector3f * axis_vector, float distance)
// Function calls:
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_buildMirrorTransform_FUN_005f7000
          (CMatrix3x4f *matrix_out,CVector3f *axis_vector,float distance)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *euler_angles;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CMatrix3x4f *unaff_ESI;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  CMatrix3x4f *in_stack_fffffe64;
  CMatrix3x4f *in_stack_fffffe68;
  CMatrix3x4f *in_stack_fffffe6c;
  CMatrix3x4f *in_stack_fffffe70;
  undefined4 auStack_160 [13];
  float afStack_12c [9];
  undefined4 uStack_108;
  CMatrix3x4f CStack_104;
  undefined4 uStack_d4;
  CMatrix3x4f CStack_d0;
  undefined1 auStack_80 [12];
  CMatrix3x4f CStack_74;
  float local_24;
  undefined1 local_20 [20];
  float local_c;
  
  bVar10 = 0;
  fVar1 = matrix_out->m[0].x;
  fVar2 = matrix_out->m[0].w;
  fVar3 = matrix_out->m[0].y;
  local_c = (float)axis_vector / (fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_24 = matrix_out->m[0].w * local_c;
  local_20._0_4_ = matrix_out->m[0].x * local_c;
  local_20._4_4_ = matrix_out->m[0].y * local_c;
  euler_angles = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           ((CVector3f *)(local_20 + 8),(CVector3f *)matrix_out);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_80,(CVector3f *)local_20,euler_angles);
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)(auStack_80 + 4),in_stack_fffffe64);
  pfVar6 = &CStack_74.m[2].z;
  pfVar7 = &CStack_d0.m[2].x;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
    pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_buildZFlipMatrix_FUN_005f6fa0((CMatrix3x4f *)0x0,(float)&CStack_d0.m[2].y);
  puVar5 = (undefined4 *)&stack0xfffffe6c;
  puVar8 = &uStack_108;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_74,&CStack_104,in_stack_fffffe68);
  puVar5 = auStack_160;
  puVar8 = &uStack_d4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_d0,in_stack_fffffe6c,in_stack_fffffe70);
  pfVar6 = afStack_12c;
  pCVar9 = unaff_ESI;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar9->m[0].w = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
  }
  return unaff_ESI;
}


// Assembly code:
// 005f7000: PUSH EBX
//   Label: core_xform.cpp_buildMirrorTransform_FUN_005f7000
// 005f7001: PUSH EDI
// 005f7002: SUB ESP,0x19c
// 005f7008: MOV EAX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[0x4] (READ)
// 005f700f: MOV EBX,ESI
// 005f7011: FLD float ptr [EAX + 0x4]
// 005f7014: FMUL ST0
// 005f7016: FLD float ptr [EAX]
// 005f7018: FMUL ST0
// 005f701a: FADDP
// 005f701c: FLD float ptr [EAX + 0x8]
// 005f701f: FMUL ST0
// 005f7021: FADDP
// 005f7023: FDIVR float ptr [ESP + 0x1ac]
//   XREF to: Stack[0x8] (READ)
// 005f702a: FLD float ptr [EAX]
// 005f702c: FXCH
// 005f702e: FSTP float ptr [ESP + 0x198]
//   XREF to: Stack[-0xc] (WRITE)
// 005f7035: FMUL float ptr [ESP + 0x198]
//   XREF to: Stack[-0xc] (READ)
// 005f703c: FSTP float ptr [ESP + 0x180]
//   XREF to: Stack[-0x24] (WRITE)
// 005f7043: FLD float ptr [EAX + 0x4]
// 005f7046: FMUL float ptr [ESP + 0x198]
//   XREF to: Stack[-0xc] (READ)
// 005f704d: PUSH EAX
// 005f704e: FSTP float ptr [ESP + 0x188]
//   XREF to: Stack[-0x20] (WRITE)
// 005f7055: FLD float ptr [EAX + 0x8]
// 005f7058: LEA EAX,[ESP + 0x190]
//   XREF to: Stack[-0x18] (DATA)
// 005f705f: FMUL float ptr [ESP + 0x19c]
//   XREF to: Stack[-0xc] (READ)
// 005f7066: PUSH EAX
// 005f7067: FSTP float ptr [ESP + 0x190]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f706e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005f7073: ADD ESP,0x8
// 005f7076: PUSH EAX
// 005f7077: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0x24] (DATA)
// 005f707e: PUSH EAX
// 005f707f: LEA EAX,[ESP + 0x128]
//   XREF to: Stack[-0x84] (DATA)
// 005f7086: PUSH EAX
// 005f7087: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 005f708c: ADD ESP,0xc
// 005f708f: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x84] (DATA)
// 005f7096: PUSH EAX
// 005f7097: LEA ESI,[ESP + 0x154]
//   XREF to: Stack[-0x54] (DATA)
// 005f709e: LEA EDI,[ESP + 0xf4]
//   XREF to: Stack[-0xb4] (DATA)
// 005f70a5: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 005f70aa: MOV ECX,0xc
// 005f70af: ADD ESP,0x4
// 005f70b2: LEA EAX,[ESP + 0xf0]
//   XREF to: Stack[-0xb4] (DATA)
// 005f70b9: LEA ESI,[ESP + 0x150]
//   XREF to: Stack[-0x54] (DATA)
// 005f70c0: PUSH EAX
// 005f70c1: MOVSD.REP ES:EDI,ESI
// 005f70c3: PUSH 0x0
// 005f70c5: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1a4] (DATA)
// 005f70c9: LEA EDI,[ESP + 0x98]
//   XREF to: Stack[-0x114] (DATA)
// 005f70d0: CALL core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
//   XREF to: 005f6fa0 (UNCONDITIONAL_CALL)
// 005f70d5: MOV ECX,0xc
// 005f70da: ADD ESP,0x4
// 005f70dd: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x114] (DATA)
// 005f70e4: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x1a4] (DATA)
// 005f70e8: PUSH EAX
// 005f70e9: LEA EAX,[ESP + 0x128]
//   XREF to: Stack[-0x84] (DATA)
// 005f70f0: MOVSD.REP ES:EDI,ESI
// 005f70f2: PUSH EAX
// 005f70f3: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x174] (DATA)
// 005f70f7: LEA EDI,[ESP + 0xcc]
//   XREF to: Stack[-0xe4] (DATA)
// 005f70fe: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005f7103: MOV ECX,0xc
// 005f7108: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x174] (DATA)
// 005f710c: ADD ESP,0x8
// 005f710f: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0xe4] (DATA)
// 005f7116: MOVSD.REP ES:EDI,ESI
// 005f7118: PUSH EAX
// 005f7119: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0x144] (DATA)
// 005f711d: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005f7122: MOV EDI,EBX
// 005f7124: MOV ECX,0xc
// 005f7129: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0x144] (DATA)
// 005f712d: ADD ESP,0x8
// 005f7130: MOVSD.REP ES:EDI,ESI
// 005f7132: MOV EAX,EBX
// 005f7134: ADD ESP,0x19c
// 005f713a: POP EDI
// 005f713b: POP EBX
// 005f713c: RET
