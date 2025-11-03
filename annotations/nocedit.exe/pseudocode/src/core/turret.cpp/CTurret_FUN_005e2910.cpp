// Name: core_turret.cpp_CTurret_FUN_005e2910
// Address: 005e2910
// Address Range: [[005e2910, 005e2b12]]
// Convention: __cdecl
// Signature: int * core_turret.cpp_CTurret_FUN_005e2910(CTurret * this_ptr)
// Globals:
//   CVector3f g_ZeroVector
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int * __cdecl core_turret_cpp_CTurret_FUN_005e2910(CTurret *this_ptr)

{
  CTurret *pCVar1;
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  undefined4 extraout_EDX;
  uint corner_index;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  int unaff_retaddr;
  CBoundingBox3D *in_stack_00000008;
  CKeyFramedModelInstance *in_stack_00000010;
  float fStack00000014;
  int iStack00000018;
  int in_stack_0000001c;
  CMatrix3x4f *in_stack_ffffff10;
  float fStack_ec;
  CBoundingBox3D *in_stack_ffffff28;
  undefined4 auStack_b4 [12];
  undefined4 auStack_84 [9];
  undefined1 auStack_60 [72];
  float fStack_18;
  float fStack_14;
  float local_10;
  float local_c;
  
  pCVar1 = this_ptr;
  bVar7 = 0;
  core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,&(pCVar1->base_weapon).model))
  ;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84(dVar9,0));
  pCVar3 = pCVar2->frame_bounds + unaff_retaddr * 2;
  (in_stack_00000008->min).x = pCVar3->x;
  (in_stack_00000008->min).y = pCVar3->y;
  (in_stack_00000008->min).z = pCVar3->z;
  (in_stack_00000008->max).x = pCVar3[1].x;
  (in_stack_00000008->max).y = pCVar3[1].y;
  (in_stack_00000008->max).z = pCVar3[1].z;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(pCVar1->field1_0x578 + 0xc));
  if (pCVar2->poly_count < 1) {
    return (int *)in_stack_00000008;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_60,&g_ZeroVector,(CVector3f *)pCVar1->field1_0x578);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)&fStack_ec,&g_ZeroVector,
             (CVector3f *)&(pCVar1->base_weapon).base_actor.orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_60 + 8),(CMatrix3x4f *)&stack0xffffff18,in_stack_ffffff10);
  puVar5 = auStack_84;
  puVar6 = auStack_b4;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  dVar9 = (double)core_turret_cpp_CTurret_getCurFrame_FUN_005e2b30();
  fStack00000014 = SUB84(dVar9,0);
  fVar8 = (float10)fStack00000014;
  fStack_ec = 8.647718e-39;
  crt_math_c_round_FUN_005fe6b0(dVar9);
  iStack00000018 = (int)ROUND(fVar8);
  fStack_ec = 8.647737e-39;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(in_stack_00000010);
  pCVar3 = pCVar2->frame_bounds + in_stack_0000001c * 2;
  fStack_18 = pCVar3->x;
  fStack_14 = pCVar3->y;
  local_10 = pCVar3->z;
  local_c = pCVar3[1].x;
  corner_index = 0;
  do {
    fStack_ec = 8.647923e-39;
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)&fStack_18,(CVector3f *)&stack0x0000000c,corner_index);
    pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)&this_ptr,pCVar3,(CMatrix3x4f *)in_stack_ffffff28);
    corner_index = corner_index + 1;
    in_stack_ffffff28 = in_stack_00000008;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240(in_stack_00000008,pCVar3);
  } while ((int)corner_index < 8);
  return (int *)in_stack_00000008;
}


// Assembly code:
// 005e2910: PUSH EBX
//   Label: core_turret.cpp_CTurret_FUN_005e2910
// 005e2911: PUSH EBP
// 005e2912: SUB ESP,0xf8
// 005e2918: MOV EBX,dword ptr [ESP + 0x104]
//   XREF to: Stack[0x4] (READ)
// 005e291f: MOV EBP,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x8] (READ)
// 005e2926: PUSH 0x0
// 005e2928: PUSH EBX
// 005e2929: CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
//   XREF to: 005e2b30 (UNCONDITIONAL_CALL)
// 005e292e: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005e2935: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0xc] (READ)
// 005e293c: LEA EAX,[EBX + 0x158]
// 005e2942: ADD ESP,0x8
// 005e2945: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e294a: PUSH EAX
// 005e294b: FISTP dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xc] (WRITE)
// 005e2952: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e2957: ADD ESP,0x4
// 005e295a: MOV EDX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xc] (READ)
// 005e2961: MOV ECX,EAX
// 005e2963: LEA EAX,[EDX*0x4 + 0x0]
// 005e296a: SUB EAX,EDX
// 005e296c: SHL EAX,0x3
// 005e296f: MOV EDX,dword ptr [ECX + 0x5690]
// 005e2975: ADD EAX,EDX
// 005e2977: MOV EDX,dword ptr [EAX]
// 005e2979: LEA ECX,[EAX + 0x4]
// 005e297c: MOV dword ptr [EBP],EDX
// 005e297f: LEA EDX,[EBP + 0x4]
// 005e2982: MOV ECX,dword ptr [ECX]
// 005e2984: MOV dword ptr [EDX],ECX
// 005e2986: LEA ECX,[EAX + 0x8]
// 005e2989: MOV ECX,dword ptr [ECX]
// 005e298b: MOV dword ptr [EDX + 0x4],ECX
// 005e298e: MOV ECX,dword ptr [EAX + 0xc]
// 005e2991: ADD EAX,0xc
// 005e2994: MOV dword ptr [EDX + 0x8],ECX
// 005e2997: LEA ECX,[EAX + 0x4]
// 005e299a: MOV ECX,dword ptr [ECX]
// 005e299c: MOV dword ptr [EDX + 0xc],ECX
// 005e299f: MOV EAX,dword ptr [EAX + 0x8]
// 005e29a2: MOV dword ptr [EDX + 0x10],EAX
// 005e29a5: LEA EAX,[EBX + 0x584]
// 005e29ab: PUSH EAX
// 005e29ac: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005e29b3: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e29b8: MOV ECX,dword ptr [EAX + 0x110]
// 005e29be: ADD ESP,0x4
// 005e29c1: CMP ECX,0x1
// 005e29c4: JGE 0x005e29d1
//   XREF to: 005e29d1 (CONDITIONAL_JUMP)
// 005e29c6: MOV EAX,EBP
// 005e29c8: ADD ESP,0xf8
// 005e29ce: POP EBP
// 005e29cf: POP EBX
// 005e29d0: RET
// 005e29d1: PUSH EDI
//   Label: LAB_005e29d1
// 005e29d2: PUSH ESI
// 005e29d3: LEA EAX,[EBX + 0x578]
// 005e29d9: PUSH EAX
// 005e29da: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005e29df: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x70] (DATA)
// 005e29e6: PUSH EAX
// 005e29e7: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005e29ec: ADD ESP,0xc
// 005e29ef: LEA EAX,[EBX + 0x30]
// 005e29f2: PUSH EAX
// 005e29f3: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005e29f8: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x100] (DATA)
// 005e29fc: PUSH EAX
// 005e29fd: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 005e2a02: ADD ESP,0xc
// 005e2a05: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100] (DATA)
// 005e2a09: PUSH EAX
// 005e2a0a: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x70] (DATA)
// 005e2a11: PUSH EAX
// 005e2a12: LEA ESI,[ESP + 0x70]
//   XREF to: Stack[-0xa0] (DATA)
// 005e2a16: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005e2a1b: ADD ESP,0x8
// 005e2a1e: LEA EDI,[ESP + 0x38]
//   XREF to: Stack[-0xd0] (DATA)
// 005e2a22: PUSH 0x1
// 005e2a24: MOV ECX,0xc
// 005e2a29: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0xa0] (DATA)
// 005e2a2d: PUSH EBX
// 005e2a2e: MOVSD.REP ES:EDI,ESI
// 005e2a30: CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
//   XREF to: 005e2b30 (UNCONDITIONAL_CALL)
// 005e2a35: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005e2a3c: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0xc] (READ)
// 005e2a43: ADD ESP,0x8
// 005e2a46: MOV EBX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x10] (READ)
// 005e2a4d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e2a52: PUSH EBX
// 005e2a53: FISTP dword ptr [ESP + 0x100]
//   XREF to: Stack[-0xc] (WRITE)
// 005e2a5a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e2a5f: ADD ESP,0x4
// 005e2a62: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xc] (READ)
// 005e2a69: MOV EBX,EAX
// 005e2a6b: LEA EAX,[EDX*0x4 + 0x0]
// 005e2a72: SUB EAX,EDX
// 005e2a74: MOV EBX,dword ptr [EBX + 0x5690]
// 005e2a7a: SHL EAX,0x3
// 005e2a7d: ADD EBX,EAX
// 005e2a7f: MOV EAX,dword ptr [EBX]
// 005e2a81: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005e2a88: LEA EAX,[EBX + 0x4]
// 005e2a8b: MOV EAX,dword ptr [EAX]
// 005e2a8d: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005e2a94: LEA EAX,[EBX + 0x8]
// 005e2a97: MOV EAX,dword ptr [EAX]
// 005e2a99: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005e2aa0: MOV EAX,dword ptr [EBX + 0xc]
// 005e2aa3: ADD EBX,0xc
// 005e2aa6: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005e2aad: LEA EAX,[EBX + 0x4]
// 005e2ab0: MOV EAX,dword ptr [EAX]
// 005e2ab2: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005e2ab9: LEA EAX,[EBX + 0x8]
// 005e2abc: MOV EAX,dword ptr [EAX]
// 005e2abe: XOR EBX,EBX
// 005e2ac0: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005e2ac7: POP ESI
// 005e2ac8: POP EDI
// 005e2ac9: LEA EAX,[ESP + 0x30]
//   Label: LAB_005e2ac9
//   XREF to: Stack[-0xd0] (DATA)
// 005e2acd: PUSH EAX
// 005e2ace: PUSH EBX
// 005e2acf: LEA EAX,[ESP + 0xec]
//   XREF to: Stack[-0x1c] (DATA)
// 005e2ad6: PUSH EAX
// 005e2ad7: LEA EAX,[ESP + 0xcc]
//   XREF to: Stack[-0x40] (DATA)
// 005e2ade: PUSH EAX
// 005e2adf: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 005e2ae4: ADD ESP,0xc
// 005e2ae7: PUSH EAX
// 005e2ae8: LEA EAX,[ESP + 0xe0]
//   XREF to: Stack[-0x28] (DATA)
// 005e2aef: PUSH EAX
// 005e2af0: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 005e2af5: ADD ESP,0xc
// 005e2af8: PUSH EAX
// 005e2af9: PUSH EBP
// 005e2afa: INC EBX
// 005e2afb: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005e2b00: ADD ESP,0x8
// 005e2b03: CMP EBX,0x8
// 005e2b06: JL 0x005e2ac9
//   XREF to: 005e2ac9 (CONDITIONAL_JUMP)
// 005e2b08: MOV EAX,EBP
// 005e2b0a: ADD ESP,0xf8
// 005e2b10: POP EBP
// 005e2b11: POP EBX
// 005e2b12: RET
