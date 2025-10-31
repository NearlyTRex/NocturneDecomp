// Name: core_bugs.cpp_FUN_004268e0
// Address: 004268e0
// Address Range: [[004268e0, 004270ee]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004268e0()
// Cross-references:
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 0042614b [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00616e43 = -1
//   double DOUBLE_00616e4b = 0.00100000000000000
//   undefined4 DAT_0065b5b8
//   undefined4 DAT_0065b5cc
// Function calls:
//   core_bugs.cpp_FUN_00426420
//   core_bugs.cpp_FUN_004270f0
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004268e0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_bugs_cpp_FUN_004268e0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  CVector3f *pCVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_fffffeec;
  float local_10c;
  CMatrix3x3f local_f4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f CStack_a4;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CVector3f local_6c [2];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined1 local_3c [8];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(in_stack_00000008 + 0x2c) < 0) {
    piVar4 = (int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) +
                    *(int *)(in_stack_00000008 + 0x30) * 0xc);
    local_6c[0].x = (float)*piVar4 * _DAT_0065b5b8;
    local_6c[0].y = (float)piVar4[1] * _DAT_0065b5b8;
    local_6c[0].z = (float)piVar4[2] * _DAT_0065b5b8;
    core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
              (local_6c,(CMatrix3x4f *)(in_stack_00000004 + 0x12b00));
    iVar8 = core_bugs_cpp_FUN_00426420();
    if (iVar8 != 0) {
      core_bugs_cpp_FUN_004270f0();
      *(undefined4 *)(in_stack_00000008 + 0x34) = 0;
      return;
    }
  }
  else {
    if (*(float *)(in_stack_00000008 + 0x38) <= 0.0) {
      core_bugs_cpp_FUN_004270f0();
      *(undefined4 *)(in_stack_00000008 + 0x34) = 0;
    }
    else {
      iVar8 = 0;
      while( true ) {
        fVar2 = *(float *)(in_stack_00000008 + 0x34);
        fVar3 = in_stack_fffffeec * local_10c + fVar2;
        *(float *)(in_stack_00000008 + 0x34) = fVar3;
        if (fVar3 < 1.0) break;
        core_bugs_cpp_FUN_004270f0();
        in_stack_fffffeec = in_stack_fffffeec - (1.0 - fVar2) / local_10c;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) + FLOAT_00616e43
        ;
        if ((in_stack_fffffeec < (float)DOUBLE_00616e4b) || (iVar8 = iVar8 + 1, 2 < iVar8)) break;
      }
      if (*(float *)(in_stack_00000008 + 0x34) < 0.0) {
        *(undefined4 *)(in_stack_00000008 + 0x34) = 0;
      }
      if (1.0 < *(float *)(in_stack_00000008 + 0x34)) {
        *(undefined4 *)(in_stack_00000008 + 0x34) = 0x3f800000;
      }
    }
    piVar4 = (int *)(*(int *)(in_stack_00000008 + 0x2c) * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_80 = (float)*piVar4 * _DAT_0065b5b8;
    local_7c = (float)piVar4[1] * _DAT_0065b5b8;
    local_78 = (float)piVar4[2] * _DAT_0065b5b8;
    piVar4 = (int *)(*(int *)(in_stack_00000008 + 0x30) * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_2c = (float)*piVar4 * _DAT_0065b5b8;
    local_28 = (float)piVar4[1] * _DAT_0065b5b8;
    fStack_24 = (float)piVar4[2] * _DAT_0065b5b8;
    pfVar1 = (float *)(in_stack_00000008 + 0x34);
    local_b0 = local_2c * *pfVar1;
    local_ac = local_28 * *pfVar1;
    local_a8 = fStack_24 * *pfVar1;
    local_18 = 1.0 - *(float *)(in_stack_00000008 + 0x34);
    local_74 = local_80 * local_18;
    local_70 = local_7c * local_18;
    local_6c[0].x = local_78 * local_18;
    local_3c._4_4_ = local_74 + local_b0;
    local_34 = local_70 + local_ac;
    local_30 = local_6c[0].x + local_a8;
    pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_a4,(CVector3f *)(local_3c + 4),
                        (CMatrix3x4f *)(in_stack_00000004 + 0x12b00));
    if ((CVector3f *)(in_stack_00000008 + 8) != pCVar5) {
      ((CVector3f *)(in_stack_00000008 + 8))->x = pCVar5->x;
      *(float *)(in_stack_00000008 + 0xc) = pCVar5->y;
      *(float *)(in_stack_00000008 + 0x10) = pCVar5->z;
    }
    local_d0 = local_28 - local_7c;
    local_cc = fStack_24 - local_78;
    local_c8 = fStack_20 - local_74;
    iVar8 = *(int *)(in_stack_00000004 + 0x12b3c + *(int *)(in_stack_00000008 + 0x2c) * 0x28);
    iVar6 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
    puVar7 = (ushort *)(*(int *)(iVar6 + unaff_EDI + 0x7c) + iVar8 * 0x12);
    piVar4 = (int *)((uint)*puVar7 * 0xc + *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234))
    ;
    local_78 = (float)*piVar4 * _DAT_0065b5b8;
    local_74 = (float)piVar4[1] * _DAT_0065b5b8;
    local_70 = (float)piVar4[2] * _DAT_0065b5b8;
    piVar4 = (int *)(*(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234) +
                    (uint)puVar7[1] * 0xc);
    fStack_24 = (float)*piVar4 * _DAT_0065b5b8;
    fStack_20 = (float)piVar4[1] * _DAT_0065b5b8;
    local_1c = (float)piVar4[2] * _DAT_0065b5b8;
    piVar4 = (int *)((uint)puVar7[2] * 0xc +
                    *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234));
    local_54 = (float)*piVar4 * _DAT_0065b5b8;
    local_50 = (float)piVar4[1] * _DAT_0065b5b8;
    local_4c = (float)piVar4[2] * _DAT_0065b5b8;
    fStack_44 = fStack_20 - local_74;
    local_88 = local_4c - local_1c;
    fStack_40 = local_1c - local_70;
    local_90 = local_54 - fStack_24;
    local_48 = fStack_24 - local_78;
    local_8c = local_50 - fStack_20;
    local_b0 = fStack_40 * local_90 - local_48 * local_88;
    local_ac = local_48 * local_8c - fStack_44 * local_90;
    local_b4 = fStack_44 * local_88 - fStack_40 * local_8c;
    local_7c = local_b4 * local_c8 - local_b0 * local_cc;
    local_84 = local_b0 * local_c4 - local_ac * local_c8;
    local_80 = local_ac * local_cc - local_b4 * local_c4;
    local_c0 = local_c8 * local_7c - local_c4 * local_80;
    local_bc = local_c4 * local_84 - local_cc * local_7c;
    local_b8 = local_cc * local_80 - local_c8 * local_84;
    if (&local_b4 != &local_c0) {
      local_b4 = local_c0;
      local_b0 = local_bc;
      local_ac = local_b8;
    }
    fVar2 = SQRT(local_ac * local_ac + local_b4 * local_b4 + local_b0 * local_b0);
    if (fVar2 <= 0.0) {
      local_b0 = 0.0;
      local_b4 = 0.0;
      local_ac = 0.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_b4 = local_b4 * fVar2;
      local_b0 = local_b0 * fVar2;
      local_ac = local_ac * fVar2;
    }
    fVar2 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if (fVar2 <= 0.0) {
      local_80 = 0.0;
      local_84 = 0.0;
      local_7c = 0.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_84 = local_84 * fVar2;
      local_80 = local_80 * fVar2;
      local_7c = local_7c * fVar2;
    }
    fVar2 = SQRT(local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8);
    if (fVar2 <= 0.0) {
      local_c8 = 0.0;
      local_cc = 0.0;
      local_c4 = 0.0;
    }
    else {
      fVar2 = 1.0 / fVar2;
      local_cc = local_cc * fVar2;
      local_c8 = local_c8 * fVar2;
      local_c4 = local_c4 * fVar2;
    }
    local_f4.m[0].x = local_84;
    local_f4.m[0].y = local_b4;
    local_f4.m[0].z = local_cc;
    local_f4.m[1].x = local_80;
    local_f4.m[1].y = local_b0;
    local_f4.m[1].z = local_c8;
    local_f4.m[2].x = local_7c;
    local_f4.m[2].y = local_ac;
    local_f4.m[2].z = local_c4;
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                       (&local_f4,(CVector3f *)local_3c);
    if ((CVector3f *)(in_stack_00000008 + 0x14) != pCVar5) {
      ((CVector3f *)(in_stack_00000008 + 0x14))->x = pCVar5->x;
      *(float *)(in_stack_00000008 + 0x18) = pCVar5->y;
      *(float *)(in_stack_00000008 + 0x1c) = pCVar5->z;
      return;
    }
  }
  return;
}


// Assembly code:
// 004268e0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004268e0
// 004268e1: PUSH ESI
// 004268e2: PUSH EDI
// 004268e3: PUSH EBP
// 004268e4: MOV EBP,ESP
// 004268e6: SUB ESP,0x104
// 004268ec: AND ESP,0xfffffff8
// 004268ef: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004268f2: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004268f5: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004268f8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x118] (DATA)
// 004268fb: CMP dword ptr [ESI + 0x2c],0x0
// 004268ff: JL 0x00426f9b
//   XREF to: 00426f9b (CONDITIONAL_JUMP)
// 00426905: FLD float ptr [ESI + 0x38]
// 00426908: FLDZ
// 0042690a: FCOMPP
// 0042690c: FNSTSW AX
// 0042690e: SAHF
// 0042690f: JNC 0x00427032
//   XREF to: 00427032 (CONDITIONAL_JUMP)
// 00426915: FLD float ptr [0x0065b5cc]
//   XREF to: 0065b5cc (READ)
// 0042691b: FDIV float ptr [ESI + 0x38]
// 0042691e: XOR EBX,EBX
// 00426920: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (WRITE)
// 00426924: FLD float ptr [ESP]
//   Label: LAB_00426924
//   XREF to: Stack[-0x118] (DATA)
// 00426927: MOV EAX,dword ptr [ESI + 0x34]
// 0042692a: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 0042692e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 00426932: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10c] (READ)
// 00426936: FST float ptr [ESI + 0x34]
// 00426939: FLD1
// 0042693b: FCOMPP
// 0042693d: FNSTSW AX
// 0042693f: SAHF
// 00426940: JBE 0x00427048
//   XREF to: 00427048 (CONDITIONAL_JUMP)
// 00426946: FLD float ptr [ESI + 0x34]
//   Label: LAB_00426946
// 00426949: FLDZ
// 0042694b: FCOMPP
// 0042694d: FNSTSW AX
// 0042694f: SAHF
// 00426950: JBE 0x00426959
//   XREF to: 00426959 (CONDITIONAL_JUMP)
// 00426952: MOV dword ptr [ESI + 0x34],0x0
// 00426959: FLD float ptr [ESI + 0x34]
//   Label: LAB_00426959
// 0042695c: FLD1
// 0042695e: FCOMPP
// 00426960: FNSTSW AX
// 00426962: SAHF
// 00426963: JNC 0x0042696c
//   XREF to: 0042696c (CONDITIONAL_JUMP)
// 00426965: MOV dword ptr [ESI + 0x34],0x3f800000
// 0042696c: MOV EDX,dword ptr [ESI + 0x2c]
//   Label: LAB_0042696c
// 0042696f: LEA EAX,[EDX*0x4 + 0x0]
// 00426976: SUB EAX,EDX
// 00426978: MOV EBX,dword ptr [EDI + 0x12afc]
// 0042697e: SHL EAX,0x2
// 00426981: MOV EDX,dword ptr [EBX + 0x2234]
// 00426987: LEA EBX,[ESP + 0x94]
//   XREF to: Stack[-0x84] (DATA)
// 0042698e: ADD EAX,EDX
// 00426990: FILD dword ptr [EAX]
// 00426992: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426998: FSTP float ptr [EBX]
//   XREF to: Stack[-0x84] (DATA)
// 0042699a: FILD dword ptr [EAX + 0x4]
// 0042699d: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 004269a3: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x80] (WRITE)
// 004269a6: FILD dword ptr [EAX + 0x8]
// 004269a9: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 004269af: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x7c] (WRITE)
// 004269b2: MOV EDX,dword ptr [ESI + 0x30]
// 004269b5: LEA EAX,[EDX*0x4 + 0x0]
// 004269bc: SUB EAX,EDX
// 004269be: MOV EBX,dword ptr [EDI + 0x12afc]
// 004269c4: SHL EAX,0x2
// 004269c7: MOV EDX,dword ptr [EBX + 0x2234]
// 004269cd: LEA EBX,[ESP + 0xe8]
//   XREF to: Stack[-0x30] (DATA)
// 004269d4: ADD EAX,EDX
// 004269d6: FILD dword ptr [EAX]
// 004269d8: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 004269de: FSTP float ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 004269e0: FILD dword ptr [EAX + 0x4]
// 004269e3: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 004269e9: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 004269ec: FILD dword ptr [EAX + 0x8]
// 004269ef: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 004269f5: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 004269f8: LEA EAX,[ESI + 0x34]
// 004269fb: FLD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x30] (READ)
// 00426a02: FMUL float ptr [EAX]
// 00426a04: FLD float ptr [ESP + 0xec]
//   XREF to: Stack[-0x2c] (READ)
// 00426a0b: FXCH
// 00426a0d: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0xb4] (WRITE)
// 00426a11: FMUL float ptr [EAX]
// 00426a13: FLD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x28] (READ)
// 00426a1a: FXCH
// 00426a1c: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0xb0] (WRITE)
// 00426a20: FMUL float ptr [EAX]
// 00426a22: FLD1
// 00426a24: FXCH
// 00426a26: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xac] (WRITE)
// 00426a2a: FSUB float ptr [ESI + 0x34]
// 00426a2d: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x84] (READ)
// 00426a34: FXCH
// 00426a36: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00426a3d: FMUL float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00426a44: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x80] (READ)
// 00426a4b: FMUL float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00426a52: FLD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x7c] (READ)
// 00426a59: LEA EAX,[EDI + 0x12b00]
// 00426a5f: FMUL float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00426a66: PUSH EAX
// 00426a67: LEA EAX,[ESP + 0xe0]
//   XREF to: Stack[-0x3c] (DATA)
// 00426a6e: LEA EBX,[ESI + 0x8]
// 00426a71: PUSH EAX
// 00426a72: FXCH ST2
// 00426a74: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x78] (WRITE)
// 00426a7b: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x74] (WRITE)
// 00426a82: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x70] (WRITE)
// 00426a89: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x78] (READ)
// 00426a90: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x74] (READ)
// 00426a97: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0xa8] (DATA)
// 00426a9b: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x70] (READ)
// 00426aa2: PUSH EAX
// 00426aa3: FXCH ST2
// 00426aa5: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[-0xb4] (READ)
// 00426aa9: FXCH
// 00426aab: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0xb0] (READ)
// 00426aaf: FXCH ST2
// 00426ab1: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xac] (READ)
// 00426ab5: FXCH
// 00426ab7: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x3c] (WRITE)
// 00426abe: FXCH
// 00426ac0: FSTP float ptr [ESP + 0xec]
//   XREF to: Stack[-0x38] (WRITE)
// 00426ac7: FSTP float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x34] (WRITE)
// 00426ace: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00426ad3: ADD ESP,0xc
// 00426ad6: CMP EBX,EAX
// 00426ad8: JZ 0x00426aea
//   XREF to: 00426aea (CONDITIONAL_JUMP)
// 00426ada: MOV EDX,dword ptr [EAX]
// 00426adc: MOV dword ptr [EBX],EDX
// 00426ade: MOV EDX,dword ptr [EAX + 0x4]
// 00426ae1: MOV dword ptr [EBX + 0x4],EDX
// 00426ae4: MOV EDX,dword ptr [EAX + 0x8]
// 00426ae7: MOV dword ptr [EBX + 0x8],EDX
// 00426aea: FLD float ptr [ESP + 0xe8]
//   Label: LAB_00426aea
//   XREF to: Stack[-0x30] (READ)
// 00426af1: FLD float ptr [ESP + 0xec]
//   XREF to: Stack[-0x2c] (READ)
// 00426af8: FLD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x28] (READ)
// 00426aff: FXCH ST2
// 00426b01: FSUB float ptr [ESP + 0x94]
//   XREF to: Stack[-0x84] (READ)
// 00426b08: FXCH
// 00426b0a: FSUB float ptr [ESP + 0x98]
//   XREF to: Stack[-0x80] (READ)
// 00426b11: FXCH ST2
// 00426b13: FSUB float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x7c] (READ)
// 00426b1a: FXCH
// 00426b1c: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (WRITE)
// 00426b20: FXCH
// 00426b22: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (WRITE)
// 00426b26: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (WRITE)
// 00426b2a: MOV EDX,dword ptr [ESI + 0x2c]
// 00426b2d: LEA EAX,[EDX*0x4 + 0x0]
// 00426b34: MOV ECX,dword ptr [EDI + 0x12afc]
// 00426b3a: ADD EAX,EDX
// 00426b3c: PUSH ECX
// 00426b3d: MOV EDX,dword ptr [EDI + EAX*0x8 + 0x12b3c]
// 00426b44: MOV EAX,dword ptr [EDI + 0x12b30]
// 00426b4a: LEA EBX,[EDX*0x8 + 0x0]
// 00426b51: SHL EAX,0x2
// 00426b54: ADD EBX,EDX
// 00426b56: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00426b5d: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00426b62: ADD ESP,0x4
// 00426b65: ADD EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x18] (READ)
// 00426b6c: ADD EBX,EBX
// 00426b6e: MOV EDX,dword ptr [EAX + 0x7c]
// 00426b71: ADD EDX,EBX
// 00426b73: XOR EBX,EBX
// 00426b75: MOV BX,word ptr [EDX]
// 00426b78: LEA EAX,[EBX*0x4 + 0x0]
// 00426b7f: MOV ECX,dword ptr [EDI + 0x12afc]
// 00426b85: SUB EAX,EBX
// 00426b87: MOV ECX,dword ptr [ECX + 0x2234]
// 00426b8d: SHL EAX,0x2
// 00426b90: LEA EBX,[ESP + 0x94]
//   XREF to: Stack[-0x84] (DATA)
// 00426b97: ADD EAX,ECX
// 00426b99: FILD dword ptr [EAX]
// 00426b9b: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426ba1: FSTP float ptr [EBX]
//   XREF to: Stack[-0x84] (DATA)
// 00426ba3: FILD dword ptr [EAX + 0x4]
// 00426ba6: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426bac: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x80] (WRITE)
// 00426baf: FILD dword ptr [EAX + 0x8]
// 00426bb2: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426bb8: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x7c] (WRITE)
// 00426bbb: XOR EBX,EBX
// 00426bbd: MOV BX,word ptr [EDX + 0x2]
// 00426bc1: LEA EAX,[EBX*0x4 + 0x0]
// 00426bc8: SUB EAX,EBX
// 00426bca: MOV ECX,dword ptr [EDI + 0x12afc]
// 00426bd0: LEA EBX,[EAX*0x4 + 0x0]
// 00426bd7: MOV EAX,dword ptr [ECX + 0x2234]
// 00426bdd: ADD EAX,EBX
// 00426bdf: LEA EBX,[ESP + 0xe8]
//   XREF to: Stack[-0x30] (DATA)
// 00426be6: FILD dword ptr [EAX]
// 00426be8: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426bee: FSTP float ptr [EBX]
//   XREF to: Stack[-0x30] (DATA)
// 00426bf0: FILD dword ptr [EAX + 0x4]
// 00426bf3: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426bf9: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 00426bfc: FILD dword ptr [EAX + 0x8]
// 00426bff: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426c05: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 00426c08: MOV EBX,dword ptr [EDI + 0x12afc]
// 00426c0e: MOV DX,word ptr [EDX + 0x4]
// 00426c12: AND EDX,0xffff
// 00426c18: LEA EAX,[EDX*0x4 + 0x0]
// 00426c1f: SUB EAX,EDX
// 00426c21: SHL EAX,0x2
// 00426c24: MOV EDX,dword ptr [EBX + 0x2234]
// 00426c2a: LEA EBX,[ESP + 0xb8]
//   XREF to: Stack[-0x60] (DATA)
// 00426c31: ADD EAX,EDX
// 00426c33: FILD dword ptr [EAX]
// 00426c35: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426c3b: FSTP float ptr [EBX]
//   XREF to: Stack[-0x60] (DATA)
// 00426c3d: FILD dword ptr [EAX + 0x4]
// 00426c40: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426c46: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 00426c49: FILD dword ptr [EAX + 0x8]
// 00426c4c: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426c52: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 00426c55: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x58] (READ)
// 00426c5c: FLD float ptr [ESP + 0xec]
//   XREF to: Stack[-0x2c] (READ)
// 00426c63: FSUB float ptr [ESP + 0x98]
//   XREF to: Stack[-0x80] (READ)
// 00426c6a: FXCH
// 00426c6c: FSUB float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x28] (READ)
// 00426c73: FXCH
// 00426c75: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x50] (WRITE)
// 00426c7c: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x94] (WRITE)
// 00426c83: FLD float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x50] (READ)
// 00426c8a: FMUL float ptr [ESP + 0x84]
//   XREF to: Stack[-0x94] (READ)
// 00426c91: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x60] (READ)
// 00426c98: FLD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x28] (READ)
// 00426c9f: FSUB float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x7c] (READ)
// 00426ca6: FXCH
// 00426ca8: FSUB float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x30] (READ)
// 00426caf: FXCH
// 00426cb1: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x4c] (WRITE)
// 00426cb8: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x9c] (WRITE)
// 00426cbc: FLD float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x4c] (READ)
// 00426cc3: FMUL float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x9c] (READ)
// 00426cc7: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x5c] (READ)
// 00426cce: FLD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x30] (READ)
// 00426cd5: FSUB float ptr [ESP + 0x94]
//   XREF to: Stack[-0x84] (READ)
// 00426cdc: FXCH
// 00426cde: FSUB float ptr [ESP + 0xec]
//   XREF to: Stack[-0x2c] (READ)
// 00426ce5: FXCH
// 00426ce7: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x54] (WRITE)
// 00426cee: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x98] (WRITE)
// 00426cf5: FLD float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x54] (READ)
// 00426cfc: FMUL float ptr [ESP + 0x80]
//   XREF to: Stack[-0x98] (READ)
// 00426d03: FLD float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x4c] (READ)
// 00426d0a: FMUL float ptr [ESP + 0x80]
//   XREF to: Stack[-0x98] (READ)
// 00426d11: FLD float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x54] (READ)
// 00426d18: FMUL float ptr [ESP + 0x84]
//   XREF to: Stack[-0x94] (READ)
// 00426d1f: FLD float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x50] (READ)
// 00426d26: FXCH
// 00426d28: FSUBP ST4,ST0
// 00426d2a: FMUL float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x9c] (READ)
// 00426d2e: FXCH ST3
// 00426d30: FST float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xbc] (WRITE)
// 00426d34: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (READ)
// 00426d38: FXCH ST3
// 00426d3a: FSUBP ST2,ST0
// 00426d3c: FSUBP ST3,ST0
// 00426d3e: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (WRITE)
// 00426d42: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00426d46: FXCH ST2
// 00426d48: FST float ptr [ESP + 0x58]
//   XREF to: Stack[-0xc0] (WRITE)
// 00426d4c: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (READ)
// 00426d50: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (READ)
// 00426d54: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (READ)
// 00426d58: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0xc0] (READ)
// 00426d5c: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (READ)
// 00426d60: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xbc] (READ)
// 00426d64: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00426d68: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (READ)
// 00426d6c: FXCH
// 00426d6e: FSUBP ST4,ST0
// 00426d70: FXCH ST2
// 00426d72: FSUBP ST4,ST0
// 00426d74: FXCH ST2
// 00426d76: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (WRITE)
// 00426d7d: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (READ)
// 00426d84: FXCH ST2
// 00426d86: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x90] (WRITE)
// 00426d8d: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (READ)
// 00426d91: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0x90] (READ)
// 00426d98: FXCH
// 00426d9a: FSUBP ST3,ST0
// 00426d9c: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00426da0: FXCH ST3
// 00426da2: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x8c] (WRITE)
// 00426da9: FXCH ST2
// 00426dab: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x8c] (READ)
// 00426db2: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (READ)
// 00426db6: FMUL float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x8c] (READ)
// 00426dbd: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00426dc1: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (READ)
// 00426dc8: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (READ)
// 00426dcc: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0x90] (READ)
// 00426dd3: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0xcc] (DATA)
// 00426dd7: LEA EDX,[ESP + 0x58]
//   XREF to: Stack[-0xc0] (DATA)
// 00426ddb: FXCH ST2
// 00426ddd: FSUBP ST4,ST0
// 00426ddf: FSUBP ST4,ST0
// 00426de1: FSUBP
// 00426de3: FXCH
// 00426de5: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xcc] (WRITE)
// 00426de9: FXCH
// 00426deb: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0xc8] (WRITE)
// 00426def: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0xc4] (WRITE)
// 00426df3: CMP EDX,EAX
// 00426df5: JZ 0x00426e0f
//   XREF to: 00426e0f (CONDITIONAL_JUMP)
// 00426df7: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0xcc] (DATA)
// 00426dfb: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 00426dff: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0xc8] (READ)
// 00426e03: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00426e07: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0xc4] (READ)
// 00426e0b: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 00426e0f: FLD float ptr [ESP + 0x5c]
//   Label: LAB_00426e0f
//   XREF to: Stack[-0xbc] (READ)
// 00426e13: FMUL ST0
// 00426e15: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0xc0] (READ)
// 00426e19: FMUL ST0
// 00426e1b: FADDP
// 00426e1d: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (READ)
// 00426e21: FMUL ST0
// 00426e23: FADDP
// 00426e25: FSQRT
// 00426e27: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x108] (WRITE)
// 00426e2b: FLDZ
// 00426e2d: FCOMPP
// 00426e2f: FNSTSW AX
// 00426e31: SAHF
// 00426e32: JNC 0x00427096
//   XREF to: 00427096 (CONDITIONAL_JUMP)
// 00426e38: FLD1
// 00426e3a: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0xc0] (READ)
// 00426e3e: FXCH
// 00426e40: FDIV float ptr [ESP + 0x10]
//   XREF to: Stack[-0x108] (READ)
// 00426e44: FXCH
// 00426e46: FMUL ST1
// 00426e48: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xbc] (READ)
// 00426e4c: FMUL ST2
// 00426e4e: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (READ)
// 00426e52: FMULP ST3
// 00426e54: FXCH
// 00426e56: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0xc0] (WRITE)
// 00426e5a: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xbc] (WRITE)
// 00426e5e: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (WRITE)
// 00426e62: FLD float ptr [ESP + 0x8c]
//   Label: LAB_00426e62
//   XREF to: Stack[-0x8c] (READ)
// 00426e69: FMUL ST0
// 00426e6b: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x90] (READ)
// 00426e72: FMUL ST0
// 00426e74: FADDP
// 00426e76: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (READ)
// 00426e7d: FMUL ST0
// 00426e7f: FADDP
// 00426e81: FSQRT
// 00426e83: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x114] (WRITE)
// 00426e87: FLDZ
// 00426e89: FCOMPP
// 00426e8b: FNSTSW AX
// 00426e8d: SAHF
// 00426e8e: JNC 0x004270a9
//   XREF to: 004270a9 (CONDITIONAL_JUMP)
// 00426e94: FLD1
// 00426e96: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x90] (READ)
// 00426e9d: FXCH
// 00426e9f: FDIV float ptr [ESP + 0x4]
//   XREF to: Stack[-0x114] (READ)
// 00426ea3: FXCH
// 00426ea5: FMUL ST1
// 00426ea7: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x8c] (READ)
// 00426eae: FMUL ST2
// 00426eb0: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (READ)
// 00426eb7: FMULP ST3
// 00426eb9: FXCH
// 00426ebb: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x90] (WRITE)
// 00426ec2: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x8c] (WRITE)
// 00426ec9: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (WRITE)
// 00426ed0: FLD float ptr [ESP + 0x44]
//   Label: LAB_00426ed0
//   XREF to: Stack[-0xd4] (READ)
// 00426ed4: FMUL ST0
// 00426ed6: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00426eda: FMUL ST0
// 00426edc: FADDP
// 00426ede: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (READ)
// 00426ee2: FMUL ST0
// 00426ee4: FADDP
// 00426ee6: FSQRT
// 00426ee8: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x104] (WRITE)
// 00426eec: FLDZ
// 00426eee: FCOMPP
// 00426ef0: FNSTSW AX
// 00426ef2: SAHF
// 00426ef3: JNC 0x004270c5
//   XREF to: 004270c5 (CONDITIONAL_JUMP)
// 00426ef9: FLD1
// 00426efb: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00426eff: FXCH
// 00426f01: FDIV float ptr [ESP + 0x14]
//   XREF to: Stack[-0x104] (READ)
// 00426f05: FXCH
// 00426f07: FMUL ST1
// 00426f09: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (READ)
// 00426f0d: FMUL ST2
// 00426f0f: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (READ)
// 00426f13: FMULP ST3
// 00426f15: FXCH
// 00426f17: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (WRITE)
// 00426f1b: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (WRITE)
// 00426f1f: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (WRITE)
// 00426f23: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_00426f23
//   XREF to: Stack[-0x90] (READ)
// 00426f2a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 00426f2e: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0xc0] (READ)
// 00426f32: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 00426f36: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00426f3a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 00426f3e: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x8c] (READ)
// 00426f45: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 00426f49: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0xbc] (READ)
// 00426f4d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 00426f51: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0xd4] (READ)
// 00426f55: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 00426f59: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (READ)
// 00426f60: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 00426f64: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (READ)
// 00426f68: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 00426f6c: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0xd0] (READ)
// 00426f70: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 00426f74: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x48] (DATA)
// 00426f7b: PUSH EAX
// 00426f7c: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x100] (DATA)
// 00426f80: PUSH EAX
// 00426f81: ADD ESI,0x14
// 00426f84: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 00426f89: ADD ESP,0x8
// 00426f8c: CMP ESI,EAX
// 00426f8e: JNZ 0x004270d8
//   XREF to: 004270d8 (CONDITIONAL_JUMP)
// 00426f94: MOV ESP,EBP
//   Label: LAB_00426f94
// 00426f96: POP EBP
// 00426f97: POP EDI
// 00426f98: POP ESI
// 00426f99: POP EBX
// 00426f9a: RET
// 00426f9b: MOV EDX,dword ptr [ESI + 0x30]
//   Label: LAB_00426f9b
// 00426f9e: LEA EAX,[EDX*0x4 + 0x0]
// 00426fa5: SUB EAX,EDX
// 00426fa7: MOV EBX,dword ptr [EDI + 0x12afc]
// 00426fad: LEA EDX,[EAX*0x4 + 0x0]
// 00426fb4: MOV EAX,dword ptr [EBX + 0x2234]
// 00426fba: LEA EBX,[ESP + 0xac]
//   XREF to: Stack[-0x6c] (DATA)
// 00426fc1: ADD EAX,EDX
// 00426fc3: FILD dword ptr [EAX]
// 00426fc5: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426fcb: FSTP float ptr [EBX]
//   XREF to: Stack[-0x6c] (DATA)
// 00426fcd: FILD dword ptr [EAX + 0x4]
// 00426fd0: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426fd6: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x68] (WRITE)
// 00426fd9: FILD dword ptr [EAX + 0x8]
// 00426fdc: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00426fe2: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x64] (WRITE)
// 00426fe5: LEA EAX,[EDI + 0x12b00]
// 00426feb: PUSH EAX
// 00426fec: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x6c] (DATA)
// 00426ff3: PUSH EAX
// 00426ff4: CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
//   XREF to: 005f4e20 (UNCONDITIONAL_CALL)
// 00426ff9: ADD ESP,0x8
// 00426ffc: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x6c] (DATA)
// 00427003: PUSH EAX
// 00427004: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x118] (READ)
// 00427008: PUSH ESI
// 00427009: PUSH EDI
// 0042700a: CALL core_bugs.cpp_FUN_00426420
//   XREF to: 00426420 (UNCONDITIONAL_CALL)
// 0042700f: ADD ESP,0x10
// 00427012: TEST EAX,EAX
// 00427014: JZ 0x00426f94
//   XREF to: 00426f94 (CONDITIONAL_JUMP)
// 0042701a: PUSH ESI
// 0042701b: PUSH EDI
// 0042701c: CALL core_bugs.cpp_FUN_004270f0
//   XREF to: 004270f0 (UNCONDITIONAL_CALL)
// 00427021: ADD ESP,0x8
// 00427024: MOV dword ptr [ESI + 0x34],0x0
// 0042702b: MOV ESP,EBP
// 0042702d: POP EBP
// 0042702e: POP EDI
// 0042702f: POP ESI
// 00427030: POP EBX
// 00427031: RET
// 00427032: PUSH ESI
//   Label: LAB_00427032
// 00427033: PUSH EDI
// 00427034: CALL core_bugs.cpp_FUN_004270f0
//   XREF to: 004270f0 (UNCONDITIONAL_CALL)
// 00427039: ADD ESP,0x8
// 0042703c: MOV dword ptr [ESI + 0x34],0x0
// 00427043: JMP 0x0042696c
//   XREF to: 0042696c (UNCONDITIONAL_JUMP)
// 00427048: PUSH ESI
//   Label: LAB_00427048
// 00427049: PUSH EDI
// 0042704a: CALL core_bugs.cpp_FUN_004270f0
//   XREF to: 004270f0 (UNCONDITIONAL_CALL)
// 0042704f: ADD ESP,0x8
// 00427052: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10c] (READ)
// 00427056: FLD1
// 00427058: FSUBRP
// 0042705a: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 0042705e: FLD float ptr [ESI + 0x34]
// 00427061: FADD float ptr [0x00616e43]
//   XREF to: 00616e43 (READ)
// 00427067: FLD float ptr [ESP]
//   XREF to: Stack[-0x118] (DATA)
// 0042706a: FXCH ST2
// 0042706c: FSUBR ST0,ST2
// 0042706e: FXCH
// 00427070: FSTP float ptr [ESI + 0x34]
// 00427073: FSTP ST1
// 00427075: FST float ptr [ESP]
//   XREF to: Stack[-0x118] (DATA)
// 00427078: FCOMP double ptr [0x00616e4b]
//   XREF to: 00616e4b (READ)
// 0042707e: FNSTSW AX
// 00427080: SAHF
// 00427081: JC 0x00426946
//   XREF to: 00426946 (CONDITIONAL_JUMP)
// 00427087: INC EBX
// 00427088: CMP EBX,0x3
// 0042708b: JL 0x00426924
//   XREF to: 00426924 (CONDITIONAL_JUMP)
// 00427091: JMP 0x00426946
//   XREF to: 00426946 (UNCONDITIONAL_JUMP)
// 00427096: XOR ECX,ECX
//   Label: LAB_00427096
// 00427098: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 0042709c: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0xc0] (WRITE)
// 004270a0: MOV dword ptr [ESP + 0x60],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 004270a4: JMP 0x00426e62
//   XREF to: 00426e62 (UNCONDITIONAL_JUMP)
// 004270a9: XOR EAX,EAX
//   Label: LAB_004270a9
// 004270ab: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 004270b2: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 004270b9: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 004270c0: JMP 0x00426ed0
//   XREF to: 00426ed0 (UNCONDITIONAL_JUMP)
// 004270c5: XOR EBX,EBX
//   Label: LAB_004270c5
// 004270c7: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0xd4] (WRITE)
// 004270cb: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0xd8] (WRITE)
// 004270cf: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0xd0] (WRITE)
// 004270d3: JMP 0x00426f23
//   XREF to: 00426f23 (UNCONDITIONAL_JUMP)
// 004270d8: MOV EDX,dword ptr [EAX]
//   Label: LAB_004270d8
// 004270da: MOV dword ptr [ESI],EDX
// 004270dc: MOV EDX,dword ptr [EAX + 0x4]
// 004270df: MOV dword ptr [ESI + 0x4],EDX
// 004270e2: MOV EDX,dword ptr [EAX + 0x8]
// 004270e5: MOV dword ptr [ESI + 0x8],EDX
// 004270e8: MOV ESP,EBP
// 004270ea: POP EBP
// 004270eb: POP EDI
// 004270ec: POP ESI
// 004270ed: POP EBX
// 004270ee: RET
