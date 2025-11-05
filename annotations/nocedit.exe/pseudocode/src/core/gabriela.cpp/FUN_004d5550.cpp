// Name: core_gabriela.cpp_FUN_004d5550
// Address: 004d5550
// Address Range: [[004d5550, 004d586b]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5550()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d35f3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CCrossbow_0062afa5
//   undefined4 DAT_0065e7b4
//   undefined4 DAT_02d7b814
//   undefined4 DAT_02d7b820
//   undefined4 DAT_02d7b82c
//   undefined4 DAT_02d7b870
//   undefined4 DAT_02d7b88c
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_CCharacter_FUN_0042d090
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_buildRotationX_FUN_005f6c40
//   core_xform.cpp_buildRotationY_FUN_005f6cc0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d5550(undefined4 param_1, undefined4
   param_2) */

void core_gabriela_cpp_FUN_004d5550(void)

{
  float fVar1;
  undefined4 *extraout_EAX;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  CCharacter *in_stack_00000004;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f *in_stack_fffffc54;
  float local_37c [12];
  CMatrix3x4f local_34c;
  CVector3f local_31c [4];
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_2bc;
  CMatrix3x4f local_28c;
  CMatrix3x4f local_25c;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1fc;
  float local_1cc [12];
  CMatrix3x4f local_19c;
  float local_16c [12];
  CMatrix3x4f local_13c;
  float local_10c [12];
  float local_dc [12];
  float local_ac [12];
  float local_7c [12];
  undefined1 local_4c [24];
  CMatrix3x3f local_34;
  
  bVar8 = 0;
  core_charactr_cpp_CCharacter_FUN_0042d090(in_stack_00000004);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_34c,&(in_stack_00000004->base_actor).location.position,
             (CVector3f *)&(in_stack_00000004->base_actor).orient);
  local_34.m[2].z = (float)(in_stack_00000004[2].cloth_data + 0x5058);
  if (*(float *)(in_stack_00000004[2].cloth_data + 0x54fc) < _DAT_0065e7b4) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 0xf0))();
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_22c,(CVector3f *)&DAT_02d7b820,(CVector3f *)&DAT_02d7b82c);
    pCVar7 = &local_34c;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_22c,
               (in_stack_00000004->model).bone_transform.bone_world_matrices + DAT_02d7b870,pCVar7);
    pfVar4 = local_1cc;
    pCVar6 = &local_1fc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_1fc,pCVar7,in_stack_fffffc54);
    pfVar4 = local_dc;
  }
  else {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 0xf0))();
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_13c,(CVector3f *)&DAT_02d7b814,&g_ZeroVector);
    matrix_b = (in_stack_00000004->model).bone_transform.bone_world_matrices + DAT_02d7b88c;
    pCVar7 = &local_13c;
    core_xform_cpp_buildRotationX_FUN_005f6c40((CMatrix3x4f *)0x3fc90fdb,(float)pCVar7);
    pCVar6 = &local_28c;
    pfVar4 = local_16c;
    pCVar5 = &local_28c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,(float)pCVar6);
    pfVar4 = (float *)&stack0xfffffc54;
    pCVar5 = &local_2bc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2bc,pCVar6,pCVar7);
    pfVar4 = local_37c;
    pCVar6 = &local_25c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_25c,pCVar7,matrix_b);
    pfVar4 = local_ac;
    pCVar7 = &local_19c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,matrix_b,in_stack_fffffc54);
    fVar1 = local_34.m[2].z;
    pfVar4 = local_7c;
    pCVar7 = &local_2ec;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (*(CDemonActor **)((int)fVar1 + 0x330),"CCrossbow");
    if (iVar3 != 0) {
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&local_2ec,(CMatrix3x4f *)(local_4c + 0xc));
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)&local_2ec,&local_34);
      local_34.m[0].z =
           (1.0 - *(float *)(in_stack_00000004[2].cloth_data + 0x5530)) * local_34.m[0].z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2ec,(CVector3f *)(local_4c + 0xc),local_34.m);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2ec,&local_34c,in_stack_fffffc54);
    pfVar4 = local_10c;
  }
  pCVar2 = local_31c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar2->x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pCVar2 = (CVector3f *)((int)pCVar2 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_005f6110(local_31c,(CMatrix3x4f *)(local_34.m + 1));
  iVar3 = *(int *)(in_stack_00000004[2].cloth_data + 0x5388);
  *(undefined4 *)(iVar3 + 0x20) = *extraout_EAX;
  *(undefined4 *)(iVar3 + 0x24) = extraout_EAX[1];
  *(undefined4 *)(iVar3 + 0x28) = extraout_EAX[2];
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_31c,(CMatrix3x3f *)local_4c);
  iVar3 = *(int *)(in_stack_00000004[2].cloth_data + 0x5388);
  if ((CVector3f *)(iVar3 + 0x30) != pCVar2) {
    ((CVector3f *)(iVar3 + 0x30))->x = pCVar2->x;
    *(float *)(iVar3 + 0x34) = pCVar2->y;
    *(float *)(iVar3 + 0x38) = pCVar2->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x5388));
  return;
}


// Assembly code:
// 004d5550: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d5550
// 004d5551: PUSH ESI
// 004d5552: PUSH EDI
// 004d5553: PUSH EBP
// 004d5554: MOV EBP,ESP
// 004d5556: SUB ESP,0x39c
// 004d555c: SUB EBP,0x7e
// 004d555f: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x4] (READ)
// 004d5565: PUSH dword ptr [EBP + 0x96]
//   XREF to: Stack[0x8] (READ)
// 004d556b: PUSH EBX
// 004d556c: CALL core_charactr.cpp_CCharacter_FUN_0042d090
//   XREF to: 0042d090 (UNCONDITIONAL_CALL)
// 004d5571: ADD ESP,0x8
// 004d5574: LEA EAX,[EBX + 0x30]
// 004d5577: PUSH EAX
// 004d5578: LEA EAX,[EBX + 0x20]
// 004d557b: PUSH EAX
// 004d557c: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x34c] (DATA)
// 004d5582: PUSH EAX
// 004d5583: LEA ESI,[EBX + 0xfd8]
// 004d5589: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004d558e: FLD float ptr [EBX + 0x1fbdc]
// 004d5594: LEA EAX,[EBX + 0x1f738]
// 004d559a: ADD ESP,0xc
// 004d559d: MOV dword ptr [EBP + 0x7a],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d55a0: FCOMP float ptr [0x0065e7b4]
//   XREF to: 0065e7b4 (READ)
// 004d55a6: FNSTSW AX
// 004d55a8: SAHF
// 004d55a9: JC 0x004d57d2
//   XREF to: 004d57d2 (CONDITIONAL_JUMP)
// 004d55af: MOV EAX,dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d55b2: PUSH 0x2
// 004d55b4: MOV EAX,dword ptr [EAX + 0x330]
// 004d55ba: PUSH EAX
// 004d55bb: MOV EDX,dword ptr [EAX + 0x154]
// 004d55c1: CALL dword ptr [EDX + 0xf0]
// 004d55c7: ADD ESP,0x8
// 004d55ca: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004d55cf: PUSH 0x2d7b814
//   XREF to: 02d7b814 (DATA)
// 004d55d4: LEA EAX,[EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (DATA)
// 004d55da: PUSH EAX
// 004d55db: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004d55e0: MOV EDX,dword ptr [0x02d7b88c]
//   XREF to: 02d7b88c (READ)
// 004d55e6: LEA EAX,[EDX*0x4 + 0x0]
// 004d55ed: SUB EAX,EDX
// 004d55ef: SHL EAX,0x4
// 004d55f2: ADD ESP,0xc
// 004d55f5: ADD EAX,ESI
// 004d55f7: PUSH EAX
// 004d55f8: LEA EAX,[EBP + 0xffffff52]
//   XREF to: Stack[-0x13c] (DATA)
// 004d55fe: PUSH EAX
// 004d55ff: LEA ESI,[EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (DATA)
// 004d5605: PUSH 0x3fc90fdb
// 004d560a: LEA EDI,[EBP + 0xfffffe02]
//   XREF to: Stack[-0x28c] (DATA)
// 004d5610: CALL core_xform.cpp_buildRotationX_FUN_005f6c40
//   XREF to: 005f6c40 (UNCONDITIONAL_CALL)
// 004d5615: MOV ECX,0xc
// 004d561a: ADD ESP,0x4
// 004d561d: LEA EAX,[EBP + 0xfffffe02]
//   XREF to: Stack[-0x28c] (DATA)
// 004d5623: LEA ESI,[EBP + 0xffffff22]
//   XREF to: Stack[-0x16c] (DATA)
// 004d5629: PUSH EAX
// 004d562a: MOVSD.REP ES:EDI,ESI
// 004d562c: PUSH 0x3fc90fdb
// 004d5631: LEA ESI,[EBP + 0xfffffce2]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d5637: LEA EDI,[EBP + 0xfffffdd2]
//   XREF to: Stack[-0x2bc] (DATA)
// 004d563d: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 004d5642: MOV ECX,0xc
// 004d5647: LEA ESI,[EBP + 0xfffffce2]
//   XREF to: Stack[-0x3ac] (DATA)
// 004d564d: LEA EAX,[EBP + 0xfffffdd2]
//   XREF to: Stack[-0x2bc] (DATA)
// 004d5653: ADD ESP,0x4
// 004d5656: MOVSD.REP ES:EDI,ESI
// 004d5658: PUSH EAX
// 004d5659: LEA ESI,[EBP + 0xfffffd12]
//   XREF to: Stack[-0x37c] (DATA)
// 004d565f: LEA EDI,[EBP + 0xfffffe32]
//   XREF to: Stack[-0x25c] (DATA)
// 004d5665: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004d566a: MOV ECX,0xc
// 004d566f: LEA ESI,[EBP + 0xfffffd12]
//   XREF to: Stack[-0x37c] (DATA)
// 004d5675: LEA EAX,[EBP + 0xfffffe32]
//   XREF to: Stack[-0x25c] (DATA)
// 004d567b: ADD ESP,0x8
// 004d567e: MOVSD.REP ES:EDI,ESI
// 004d5680: PUSH EAX
// 004d5681: LEA ESI,[EBP + -0x1e]
//   XREF to: Stack[-0xac] (DATA)
// 004d5684: LEA EDI,[EBP + 0xfffffef2]
//   XREF to: Stack[-0x19c] (DATA)
// 004d568a: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004d568f: MOV ECX,0xc
// 004d5694: LEA ESI,[EBP + -0x1e]
//   XREF to: Stack[-0xac] (DATA)
// 004d5697: LEA EAX,[EBP + 0xfffffef2]
//   XREF to: Stack[-0x19c] (DATA)
// 004d569d: ADD ESP,0x8
// 004d56a0: MOVSD.REP ES:EDI,ESI
// 004d56a2: PUSH EAX
// 004d56a3: LEA ESI,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 004d56a6: LEA EDI,[EBP + 0xfffffda2]
//   XREF to: Stack[-0x2ec] (DATA)
// 004d56ac: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004d56b1: MOV ECX,0xc
// 004d56b6: LEA ESI,[EBP + 0x12]
//   XREF to: Stack[-0x7c] (DATA)
// 004d56b9: MOV EAX,dword ptr [EBP + 0x7a]
//   XREF to: Stack[-0x14] (READ)
// 004d56bc: ADD ESP,0x8
// 004d56bf: MOVSD.REP ES:EDI,ESI
// 004d56c1: PUSH 0x62afa5
//   XREF to: 0062afa5 (DATA)
// 004d56c6: MOV EAX,dword ptr [EAX + 0x330]
// 004d56cc: PUSH EAX
// 004d56cd: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004d56d2: ADD ESP,0x8
// 004d56d5: TEST EAX,EAX
// 004d56d7: JZ 0x004d572c
//   XREF to: 004d572c (CONDITIONAL_JUMP)
// 004d56d9: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x40] (DATA)
// 004d56dc: PUSH EAX
// 004d56dd: LEA EAX,[EBP + 0xfffffda2]
//   XREF to: Stack[-0x2ec] (DATA)
// 004d56e3: PUSH EAX
// 004d56e4: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 004d56e9: ADD ESP,0x8
// 004d56ec: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x34] (DATA)
// 004d56ef: PUSH EAX
// 004d56f0: LEA EAX,[EBP + 0xfffffda2]
//   XREF to: Stack[-0x2ec] (DATA)
// 004d56f6: PUSH EAX
// 004d56f7: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 004d56fc: FLD float ptr [EBX + 0x1fc10]
// 004d5702: FLD1
// 004d5704: LEA EAX,[EBP + 0x5a]
//   XREF to: Stack[-0x34] (DATA)
// 004d5707: ADD ESP,0x8
// 004d570a: FSUBRP
// 004d570c: PUSH EAX
// 004d570d: FLD float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (READ)
// 004d5710: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x40] (DATA)
// 004d5713: FXCH
// 004d5715: FMUL ST1
// 004d5717: PUSH EAX
// 004d5718: LEA EAX,[EBP + 0xfffffda2]
//   XREF to: Stack[-0x2ec] (DATA)
// 004d571e: FSTP ST1
// 004d5720: PUSH EAX
// 004d5721: FSTP float ptr [EBP + 0x62]
//   XREF to: Stack[-0x2c] (WRITE)
// 004d5724: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004d5729: ADD ESP,0xc
// 004d572c: LEA EAX,[EBP + 0xfffffd42]
//   Label: LAB_004d572c
//   XREF to: Stack[-0x34c] (DATA)
// 004d5732: PUSH EAX
// 004d5733: LEA EAX,[EBP + 0xfffffda2]
//   XREF to: Stack[-0x2ec] (DATA)
// 004d5739: PUSH EAX
// 004d573a: LEA ESI,[EBP + -0x7e]
//   XREF to: Stack[-0x10c] (DATA)
// 004d573d: LEA EDI,[EBP + 0xfffffd72]
//   XREF to: Stack[-0x31c] (DATA)
// 004d5743: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004d5748: MOV ECX,0xc
// 004d574d: LEA ESI,[EBP + -0x7e]
//   XREF to: Stack[-0x10c] (DATA)
// 004d5750: ADD ESP,0x8
//   Label: LAB_004d5750
// 004d5753: MOVSD.REP ES:EDI,ESI
// 004d5755: LEA EAX,[EBP + 0x66]
//   XREF to: Stack[-0x28] (DATA)
// 004d5758: PUSH EAX
// 004d5759: LEA EAX,[EBP + 0xfffffd72]
//   XREF to: Stack[-0x31c] (DATA)
// 004d575f: PUSH EAX
// 004d5760: LEA ESI,[EBX + 0x1f738]
// 004d5766: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 004d576b: MOV EDX,dword ptr [ESI + 0x330]
// 004d5771: FLD float ptr [EAX]
// 004d5773: ADD ESP,0x8
// 004d5776: FSTP float ptr [EDX + 0x20]
// 004d5779: MOV ECX,dword ptr [EAX + 0x4]
// 004d577c: MOV dword ptr [EDX + 0x24],ECX
// 004d577f: FLD float ptr [EAX + 0x8]
// 004d5782: LEA EAX,[EBP + 0x42]
//   XREF to: Stack[-0x4c] (DATA)
// 004d5785: PUSH EAX
// 004d5786: LEA EAX,[EBP + 0xfffffd72]
//   XREF to: Stack[-0x31c] (DATA)
// 004d578c: PUSH EAX
// 004d578d: FSTP float ptr [EDX + 0x28]
// 004d5790: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 004d5795: MOV EDX,dword ptr [ESI + 0x330]
// 004d579b: ADD EDX,0x30
// 004d579e: ADD ESP,0x8
// 004d57a1: CMP EDX,EAX
// 004d57a3: JZ 0x004d57b5
//   XREF to: 004d57b5 (CONDITIONAL_JUMP)
// 004d57a5: MOV ECX,dword ptr [EAX]
// 004d57a7: MOV dword ptr [EDX],ECX
// 004d57a9: MOV ECX,dword ptr [EAX + 0x4]
// 004d57ac: MOV dword ptr [EDX + 0x4],ECX
// 004d57af: MOV ECX,dword ptr [EAX + 0x8]
// 004d57b2: MOV dword ptr [EDX + 0x8],ECX
// 004d57b5: LEA EAX,[EBX + 0x1f738]
//   Label: LAB_004d57b5
// 004d57bb: MOV EAX,dword ptr [EAX + 0x330]
// 004d57c1: PUSH EAX
// 004d57c2: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004d57c7: ADD ESP,0x4
// 004d57ca: LEA ESP,[EBP + 0x7e]
//   XREF to: Stack[-0x10] (DATA)
// 004d57cd: POP EBP
// 004d57ce: POP EDI
// 004d57cf: POP ESI
// 004d57d0: POP EBX
// 004d57d1: RET
// 004d57d2: MOV EAX,dword ptr [EBP + 0x7a]
//   Label: LAB_004d57d2
//   XREF to: Stack[-0x14] (READ)
// 004d57d5: PUSH 0x1
// 004d57d7: MOV EAX,dword ptr [EAX + 0x330]
// 004d57dd: PUSH EAX
// 004d57de: MOV EDX,dword ptr [EAX + 0x154]
// 004d57e4: CALL dword ptr [EDX + 0xf0]
// 004d57ea: ADD ESP,0x8
// 004d57ed: PUSH 0x2d7b82c
//   XREF to: 02d7b82c (DATA)
// 004d57f2: PUSH 0x2d7b820
//   XREF to: 02d7b820 (DATA)
// 004d57f7: LEA EAX,[EBP + 0xfffffe62]
//   XREF to: Stack[-0x22c] (DATA)
// 004d57fd: PUSH EAX
// 004d57fe: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004d5803: ADD ESP,0xc
// 004d5806: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x34c] (DATA)
// 004d580c: MOV EDX,dword ptr [0x02d7b870]
//   XREF to: 02d7b870 (READ)
// 004d5812: PUSH EAX
// 004d5813: LEA EAX,[EDX*0x4 + 0x0]
// 004d581a: SUB EAX,EDX
// 004d581c: SHL EAX,0x4
// 004d581f: ADD EAX,ESI
// 004d5821: PUSH EAX
// 004d5822: LEA EAX,[EBP + 0xfffffe62]
//   XREF to: Stack[-0x22c] (DATA)
// 004d5828: PUSH EAX
// 004d5829: LEA ESI,[EBP + 0xfffffec2]
//   XREF to: Stack[-0x1cc] (DATA)
// 004d582f: LEA EDI,[EBP + 0xfffffe92]
//   XREF to: Stack[-0x1fc] (DATA)
// 004d5835: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004d583a: MOV ECX,0xc
// 004d583f: LEA ESI,[EBP + 0xfffffec2]
//   XREF to: Stack[-0x1cc] (DATA)
// 004d5845: LEA EAX,[EBP + 0xfffffe92]
//   XREF to: Stack[-0x1fc] (DATA)
// 004d584b: ADD ESP,0x8
// 004d584e: MOVSD.REP ES:EDI,ESI
// 004d5850: PUSH EAX
// 004d5851: LEA ESI,[EBP + -0x4e]
//   XREF to: Stack[-0xdc] (DATA)
// 004d5854: LEA EDI,[EBP + 0xfffffd72]
//   XREF to: Stack[-0x31c] (DATA)
// 004d585a: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004d585f: MOV ECX,0xc
// 004d5864: LEA ESI,[EBP + -0x4e]
//   XREF to: Stack[-0xdc] (DATA)
// 004d5867: JMP 0x004d5750
//   XREF to: 004d5750 (UNCONDITIONAL_JUMP)
