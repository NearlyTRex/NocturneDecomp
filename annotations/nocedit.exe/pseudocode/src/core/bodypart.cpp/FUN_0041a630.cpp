// Name: core_bodypart.cpp_FUN_0041a630
// Address: 0041a630
// Address Range: [[0041a630, 0041aa34]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041a630()
// Cross-references:
//   core_bodypart.cpp_FUN_0041aa40 (0041aa40) at 0041adb4 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00615e44 = 65536
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041a630
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
               CDemonActor *param_5,CVector3f *param_6)

{
  COrientation *euler_angles;
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 extraout_EAX;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int extraout_ECX;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  CVector3f *euler_angles_00;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
  int unaff_retaddr;
  int in_stack_00000030;
  CVector3f *in_stack_00000034;
  CMatrix3x4f *in_stack_fffffe6c;
  float *in_stack_fffffe80;
  undefined1 auStack_154 [24];
  undefined1 auStack_13c [52];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [28];
  float local_d4;
  CVector3f aCStack_d0 [3];
  CMatrix3x3f local_a4;
  float fStack_80;
  float fStack_78;
  CMatrix3x3f CStack_68;
  CVector3f local_38;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar11 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_a4,param_6);
  fVar12 = (float10)local_a4.m[0].y * (float10)FLOAT_00615e44;
  fVar13 = (float10)local_a4.m[0].z * (float10)FLOAT_00615e44;
  fVar14 = (float10)local_a4.m[1].x * (float10)FLOAT_00615e44;
  fVar15 = (float10)local_a4.m[1].y * (float10)FLOAT_00615e44;
  fVar16 = (float10)local_a4.m[1].z * (float10)FLOAT_00615e44;
  fVar17 = (float10)local_a4.m[2].x * (float10)FLOAT_00615e44;
  fVar18 = (float10)local_a4.m[2].y * (float10)FLOAT_00615e44;
  dVar19 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_28.y = (float)(int)ROUND(fVar12);
  fVar12 = (float10)fStack_80 * (float10)FLOAT_00615e44;
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  local_1c.x = (float)(int)ROUND(fVar13);
  fVar13 = (float10)fStack_78 * (float10)FLOAT_00615e44;
  iVar9 = 0;
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  dVar19 = crt_math_c_round_FUN_005fe6b0(dVar19);
  crt_math_c_round_FUN_005fe6b0(dVar19);
  if (0 < extraout_ECX) {
    iVar7 = 0;
    do {
      fVar1 = param_5[1].location.position.x;
      lVar2 = (longlong)unaff_EBX * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)ROUND(fVar15) * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)(int)ROUND(fVar18) * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_1c.y = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
      lVar2 = (longlong)unaff_retaddr * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)ROUND(fVar16) * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)(int)ROUND(fVar12) * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      local_1c.z = (float)(((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10));
      lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)*(int *)((int)fVar1 + iVar7);
      lVar3 = (longlong)(int)ROUND(fVar17) * (longlong)*(int *)((int)fVar1 + 4 + iVar7);
      lVar4 = (longlong)(int)ROUND(fVar13) * (longlong)*(int *)((int)fVar1 + 8 + iVar7);
      *(float *)((int)fVar1 + iVar7) = local_1c.y;
      *(uint *)((int)fVar1 + 8 + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(float *)((int)fVar1 + 4 + iVar7) = local_1c.z;
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < *(int *)(param_5[1].actor_name + 0x1c));
  }
  euler_angles = &param_5->orient;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_13c,&g_ZeroVector,(CVector3f *)euler_angles);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)auStack_108,&g_ZeroVector,in_stack_00000034);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_13c + 8),(CMatrix3x4f *)(auStack_108 + 4),in_stack_fffffe6c);
  pfVar8 = &local_a4.m[0].y;
  pfVar10 = &local_d4;
  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
  }
  pCVar5 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(aCStack_d0,(CMatrix3x3f *)&local_1c.y)
  ;
  if (euler_angles != (COrientation *)pCVar5) {
    euler_angles->pitch = pCVar5->x;
    (param_5->orient).bank = pCVar5->y;
    (param_5->orient).heading = pCVar5->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(param_5);
  iVar9 = 0;
  if (0 < *(int *)(param_5[5].create_event + 0x1c)) {
    pCVar5 = (CVector3f *)(param_5[5].create_event + 0x20);
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_68,&local_28,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      iVar9 = iVar9 + 1;
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(param_5,&local_38,pCVar5);
      pCVar5[3].z = pCVar6->x;
      pCVar5[4].x = pCVar6->y;
      pCVar5[4].y = pCVar6->z;
      pCVar5 = (CVector3f *)&pCVar5[0x39].y;
    } while (iVar9 < *(int *)(param_5[5].create_event + 0x1c));
  }
  if (0 < (int)param_5[1].previous_transform_state.orientation.x) {
    pCVar5 = (CVector3f *)&param_5[1].previous_transform_state.orientation.y;
    do {
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_68,&local_1c,pCVar5);
      if (pCVar5 != pCVar6) {
        pCVar5->x = pCVar6->x;
        pCVar5->y = pCVar6->y;
        pCVar5->z = pCVar6->z;
      }
      euler_angles_00 = pCVar5 + 1;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                ((CMatrix3x4f *)auStack_154,&g_ZeroVector,euler_angles_00);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_154 + 4),(CMatrix3x4f *)auStack_f0,
                 (CMatrix3x4f *)in_stack_fffffe80);
      in_stack_fffffe80 = &local_38.y;
      pCVar6 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)(auStack_f0 + 4),(CMatrix3x3f *)in_stack_fffffe80);
      if (euler_angles_00 != pCVar6) {
        euler_angles_00->x = pCVar6->x;
        pCVar5[1].y = pCVar6->y;
        pCVar5[1].z = pCVar6->z;
      }
      pCVar5 = (CVector3f *)&pCVar5[0x21].z;
      in_stack_00000030 = in_stack_00000030 + 1;
    } while (in_stack_00000030 < (int)param_5[1].previous_transform_state.orientation.x);
  }
  return;
}


// Assembly code:
// 0041a630: PUSH EBX
//   Label: core_bodypart.cpp_FUN_0041a630
// 0041a631: PUSH ESI
// 0041a632: PUSH EDI
// 0041a633: PUSH EBP
// 0041a634: SUB ESP,0x1b4
// 0041a63a: MOV EBP,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[0x4] (READ)
// 0041a641: MOV EDX,dword ptr [ESP + 0x1cc]
//   XREF to: Stack[0x8] (READ)
// 0041a648: PUSH EDX
// 0041a649: LEA EAX,[ESP + 0x124]
//   XREF to: Stack[-0xa4] (DATA)
// 0041a650: PUSH EAX
// 0041a651: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0041a656: ADD ESP,0x8
// 0041a659: FLD float ptr [ESP + 0x120]
//   XREF to: Stack[-0xa4] (READ)
// 0041a660: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a666: FLD float ptr [ESP + 0x124]
//   XREF to: Stack[-0xa0] (READ)
// 0041a66d: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a673: FLD float ptr [ESP + 0x128]
//   XREF to: Stack[-0x9c] (READ)
// 0041a67a: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a680: FLD float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x98] (READ)
// 0041a687: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a68d: FLD float ptr [ESP + 0x130]
//   XREF to: Stack[-0x94] (READ)
// 0041a694: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a69a: FLD float ptr [ESP + 0x134]
//   XREF to: Stack[-0x90] (READ)
// 0041a6a1: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a6a7: FLD float ptr [ESP + 0x138]
//   XREF to: Stack[-0x8c] (READ)
// 0041a6ae: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a6b4: FXCH ST6
// 0041a6b6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a6bb: FISTP dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x2c] (WRITE)
// 0041a6c2: FLD float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x88] (READ)
// 0041a6c9: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a6cf: FXCH ST5
// 0041a6d1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a6d6: FISTP dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x28] (WRITE)
// 0041a6dd: FLD float ptr [ESP + 0x140]
//   XREF to: Stack[-0x84] (READ)
// 0041a6e4: FMUL float ptr [0x00615e44]
//   XREF to: 00615e44 (READ)
// 0041a6ea: XOR EDI,EDI
// 0041a6ec: MOV ECX,dword ptr [EBP + 0x174]
// 0041a6f2: FXCH ST4
// 0041a6f4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a6f9: FXCH ST3
// 0041a6fb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a700: FXCH ST2
// 0041a702: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a707: FXCH
// 0041a709: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a70e: FXCH ST6
// 0041a710: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a715: FXCH ST5
// 0041a717: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a71c: FXCH ST4
// 0041a71e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0041a723: FXCH ST3
// 0041a725: FISTP dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x24] (WRITE)
// 0041a72c: FXCH
// 0041a72e: FISTP dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x38] (WRITE)
// 0041a735: FISTP dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x34] (WRITE)
// 0041a73c: FXCH ST3
// 0041a73e: FISTP dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x18] (WRITE)
// 0041a745: FXCH
// 0041a747: FISTP dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x30] (WRITE)
// 0041a74e: FISTP dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x20] (WRITE)
// 0041a755: FISTP dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x14] (WRITE)
// 0041a75c: TEST ECX,ECX
// 0041a75e: JLE 0x0041a850
//   XREF to: 0041a850 (CONDITIONAL_JUMP)
// 0041a764: XOR ESI,ESI
// 0041a766: MOV ECX,dword ptr [EBP + 0x178]
//   Label: LAB_0041a766
// 0041a76c: MOV EAX,dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x2c] (READ)
// 0041a773: MOV EDX,dword ptr [ECX + ESI*0x1]
// 0041a776: IMUL EDX
// 0041a778: SHRD EAX,EDX,0x10
// 0041a77c: MOV EBX,EAX
// 0041a77e: MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4]
// 0041a782: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x38] (READ)
// 0041a789: IMUL EDX
// 0041a78b: SHRD EAX,EDX,0x10
// 0041a78f: MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8]
// 0041a793: ADD EBX,EAX
// 0041a795: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x30] (READ)
// 0041a79c: IMUL EDX
// 0041a79e: SHRD EAX,EDX,0x10
// 0041a7a2: MOV EDX,dword ptr [ECX + ESI*0x1]
// 0041a7a5: ADD EBX,EAX
// 0041a7a7: MOV EAX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x28] (READ)
// 0041a7ae: MOV dword ptr [ESP + 0x184],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 0041a7b5: IMUL EDX
// 0041a7b7: SHRD EAX,EDX,0x10
// 0041a7bb: MOV EBX,EAX
// 0041a7bd: MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4]
// 0041a7c1: MOV EAX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x34] (READ)
// 0041a7c8: IMUL EDX
// 0041a7ca: SHRD EAX,EDX,0x10
// 0041a7ce: MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8]
// 0041a7d2: ADD EBX,EAX
// 0041a7d4: MOV EAX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x20] (READ)
// 0041a7db: IMUL EDX
// 0041a7dd: SHRD EAX,EDX,0x10
// 0041a7e1: MOV EDX,dword ptr [ECX + ESI*0x1]
// 0041a7e4: ADD EBX,EAX
// 0041a7e6: MOV EAX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x24] (READ)
// 0041a7ed: MOV dword ptr [ESP + 0x188],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0041a7f4: IMUL EDX
// 0041a7f6: SHRD EAX,EDX,0x10
// 0041a7fa: MOV EBX,EAX
// 0041a7fc: MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4]
// 0041a800: MOV EAX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x18] (READ)
// 0041a807: IMUL EDX
// 0041a809: SHRD EAX,EDX,0x10
// 0041a80d: MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8]
// 0041a811: ADD EBX,EAX
// 0041a813: MOV EAX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x14] (READ)
// 0041a81a: IMUL EDX
// 0041a81c: SHRD EAX,EDX,0x10
// 0041a820: MOV EDX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x40] (READ)
// 0041a827: ADD EAX,EBX
// 0041a829: MOV dword ptr [ECX + ESI*0x1],EDX
// 0041a82c: MOV dword ptr [ECX + ESI*0x1 + 0x8],EAX
// 0041a830: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x3c] (READ)
// 0041a837: MOV dword ptr [ECX + ESI*0x1 + 0x4],EDX
// 0041a83b: INC EDI
// 0041a83c: MOV EBX,dword ptr [EBP + 0x174]
// 0041a842: ADD ESI,0xc
// 0041a845: CMP EDI,EBX
// 0041a847: JL 0x0041a766
//   XREF to: 0041a766 (CONDITIONAL_JUMP)
// 0041a84d: LEA EAX,[EAX]
// 0041a850: LEA EBX,[EBP + 0x30]
//   Label: LAB_0041a850
// 0041a853: PUSH EBX
// 0041a854: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041a859: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x164] (DATA)
// 0041a85d: PUSH EAX
// 0041a85e: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0041a863: ADD ESP,0xc
// 0041a866: MOV ESI,dword ptr [ESP + 0x1cc]
//   XREF to: Stack[0x8] (READ)
// 0041a86d: PUSH ESI
// 0041a86e: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041a873: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x134] (DATA)
// 0041a87a: PUSH EAX
// 0041a87b: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0041a880: ADD ESP,0xc
// 0041a883: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x134] (DATA)
// 0041a88a: PUSH EAX
// 0041a88b: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x164] (DATA)
// 0041a88f: PUSH EAX
// 0041a890: LEA ESI,[ESP + 0xf8]
//   XREF to: Stack[-0xd4] (DATA)
// 0041a897: LEA EDI,[ESP + 0xc8]
//   XREF to: Stack[-0x104] (DATA)
// 0041a89e: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0041a8a3: ADD ESP,0x8
// 0041a8a6: LEA EAX,[ESP + 0x178]
//   XREF to: Stack[-0x4c] (DATA)
// 0041a8ad: MOV ECX,0xc
// 0041a8b2: PUSH EAX
// 0041a8b3: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x104] (DATA)
// 0041a8ba: LEA ESI,[ESP + 0xf4]
//   XREF to: Stack[-0xd4] (DATA)
// 0041a8c1: PUSH EAX
// 0041a8c2: MOVSD.REP ES:EDI,ESI
// 0041a8c4: CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
//   XREF to: 005f5bd0 (UNCONDITIONAL_CALL)
// 0041a8c9: ADD ESP,0x8
// 0041a8cc: CMP EBX,EAX
// 0041a8ce: JZ 0x0041a8e0
//   XREF to: 0041a8e0 (CONDITIONAL_JUMP)
// 0041a8d0: MOV EDX,dword ptr [EAX]
// 0041a8d2: MOV dword ptr [EBX],EDX
// 0041a8d4: MOV EDX,dword ptr [EAX + 0x4]
// 0041a8d7: MOV dword ptr [EBX + 0x4],EDX
// 0041a8da: MOV EDX,dword ptr [EAX + 0x8]
// 0041a8dd: MOV dword ptr [EBX + 0x8],EDX
// 0041a8e0: PUSH EBP
//   Label: LAB_0041a8e0
// 0041a8e1: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0041a8e6: XOR EDI,EDI
// 0041a8e8: MOV EAX,dword ptr [EBP + 0x74c]
// 0041a8ee: ADD ESP,0x4
// 0041a8f1: TEST EAX,EAX
// 0041a8f3: JLE 0x0041a960
//   XREF to: 0041a960 (CONDITIONAL_JUMP)
// 0041a8f5: LEA EBX,[EBP + 0x750]
// 0041a8fb: PUSH EBX
//   Label: LAB_0041a8fb
// 0041a8fc: LEA EAX,[ESP + 0x164]
//   XREF to: Stack[-0x64] (DATA)
// 0041a903: PUSH EAX
// 0041a904: LEA EAX,[ESP + 0x128]
//   XREF to: Stack[-0xa4] (DATA)
// 0041a90b: PUSH EAX
// 0041a90c: MOV ESI,EBX
// 0041a90e: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0041a913: ADD ESP,0xc
// 0041a916: CMP EBX,EAX
// 0041a918: JZ 0x0041a92a
//   XREF to: 0041a92a (CONDITIONAL_JUMP)
// 0041a91a: MOV EDX,dword ptr [EAX]
// 0041a91c: MOV dword ptr [EBX],EDX
// 0041a91e: MOV EDX,dword ptr [EAX + 0x4]
// 0041a921: MOV dword ptr [EBX + 0x4],EDX
// 0041a924: MOV EDX,dword ptr [EAX + 0x8]
// 0041a927: MOV dword ptr [EBX + 0x8],EDX
// 0041a92a: PUSH ESI
//   Label: LAB_0041a92a
// 0041a92b: LEA EAX,[ESP + 0x158]
//   XREF to: Stack[-0x70] (DATA)
// 0041a932: PUSH EAX
// 0041a933: PUSH EBP
// 0041a934: ADD EBX,0x2b0
// 0041a93a: INC EDI
// 0041a93b: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041a940: LEA ECX,[ESI + 0x2c]
// 0041a943: MOV EDX,dword ptr [EAX]
// 0041a945: MOV dword ptr [ECX],EDX
// 0041a947: MOV EDX,dword ptr [EAX + 0x4]
// 0041a94a: MOV dword ptr [ECX + 0x4],EDX
// 0041a94d: MOV EDX,dword ptr [EAX + 0x8]
// 0041a950: MOV dword ptr [ECX + 0x8],EDX
// 0041a953: MOV EDX,dword ptr [EBP + 0x74c]
// 0041a959: ADD ESP,0xc
// 0041a95c: CMP EDI,EDX
// 0041a95e: JL 0x0041a8fb
//   XREF to: 0041a8fb (CONDITIONAL_JUMP)
// 0041a960: XOR ECX,ECX
//   Label: LAB_0041a960
// 0041a962: MOV EBX,dword ptr [EBP + 0x28c]
// 0041a968: MOV dword ptr [ESP + 0x1a8],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0041a96f: TEST EBX,EBX
// 0041a971: JLE 0x0041aa2a
//   XREF to: 0041aa2a (CONDITIONAL_JUMP)
// 0041a977: LEA EBX,[EBP + 0x290]
// 0041a97d: PUSH EBX
//   Label: LAB_0041a97d
// 0041a97e: LEA EAX,[ESP + 0x170]
//   XREF to: Stack[-0x58] (DATA)
// 0041a985: PUSH EAX
// 0041a986: LEA EAX,[ESP + 0x128]
//   XREF to: Stack[-0xa4] (DATA)
// 0041a98d: PUSH EAX
// 0041a98e: MOV EDI,EBX
// 0041a990: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0041a995: ADD ESP,0xc
// 0041a998: CMP EBX,EAX
// 0041a99a: JZ 0x0041a9ac
//   XREF to: 0041a9ac (CONDITIONAL_JUMP)
// 0041a99c: MOV EDX,dword ptr [EAX]
// 0041a99e: MOV dword ptr [EBX],EDX
// 0041a9a0: MOV EDX,dword ptr [EAX + 0x4]
// 0041a9a3: MOV dword ptr [EBX + 0x4],EDX
// 0041a9a6: MOV EDX,dword ptr [EAX + 0x8]
// 0041a9a9: MOV dword ptr [EBX + 0x8],EDX
// 0041a9ac: ADD EDI,0xc
//   Label: LAB_0041a9ac
// 0041a9af: PUSH EDI
// 0041a9b0: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041a9b5: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x194] (DATA)
// 0041a9b9: PUSH EAX
// 0041a9ba: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0041a9bf: ADD ESP,0xc
// 0041a9c2: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x134] (DATA)
// 0041a9c9: PUSH EAX
// 0041a9ca: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x194] (DATA)
// 0041a9ce: PUSH EAX
// 0041a9cf: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1c4] (DATA)
// 0041a9d3: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0041a9d8: ADD ESP,0x8
// 0041a9db: LEA EAX,[ESP + 0x148]
//   XREF to: Stack[-0x7c] (DATA)
// 0041a9e2: PUSH EAX
// 0041a9e3: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x134] (DATA)
// 0041a9ea: PUSH EAX
// 0041a9eb: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0041a9f0: ADD ESP,0x8
// 0041a9f3: CMP EDI,EAX
// 0041a9f5: JZ 0x0041aa07
//   XREF to: 0041aa07 (CONDITIONAL_JUMP)
// 0041a9f7: MOV EDX,dword ptr [EAX]
// 0041a9f9: MOV dword ptr [EDI],EDX
// 0041a9fb: MOV EDX,dword ptr [EAX + 0x4]
// 0041a9fe: MOV dword ptr [EDI + 0x4],EDX
// 0041aa01: MOV EDX,dword ptr [EAX + 0x8]
// 0041aa04: MOV dword ptr [EDI + 0x8],EDX
// 0041aa07: MOV ESI,dword ptr [ESP + 0x1a8]
//   Label: LAB_0041aa07
//   XREF to: Stack[-0x1c] (READ)
// 0041aa0e: ADD EBX,0x194
// 0041aa14: INC ESI
// 0041aa15: MOV EDI,dword ptr [EBP + 0x28c]
// 0041aa1b: MOV dword ptr [ESP + 0x1a8],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0041aa22: CMP ESI,EDI
// 0041aa24: JL 0x0041a97d
//   XREF to: 0041a97d (CONDITIONAL_JUMP)
// 0041aa2a: ADD ESP,0x1b4
//   Label: LAB_0041aa2a
// 0041aa30: POP EBP
// 0041aa31: POP EDI
// 0041aa32: POP ESI
// 0041aa33: POP EBX
// 0041aa34: RET
