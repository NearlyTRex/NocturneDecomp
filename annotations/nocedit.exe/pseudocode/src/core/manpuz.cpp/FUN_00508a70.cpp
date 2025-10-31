// Name: core_manpuz.cpp_FUN_00508a70
// Address: 00508a70
// Address Range: [[00508a70, 00508a90]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00508a70()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_FUN_00508a70(undefined4 param_1) */

void core_manpuz_cpp_FUN_00508a70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  CKeyFramedModel *pCVar8;
  CVector3f *pCVar9;
  undefined4 *extraout_EAX;
  CVector3f *pCVar10;
  char *pcVar11;
  int iVar12;
  BADSPACEBASE *in_ESP;
  float *pfVar13;
  uint uVar14;
  CMatrix3x4f *pCVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_fffffe50;
  CMatrix3x4f *in_stack_fffffe58;
  CMatrix3x4f local_17c;
  CVector3f local_14c;
  CVector3f local_140;
  CVector3f local_134;
  CVector3f local_128;
  CMatrix3x4f local_11c;
  CMatrix3x3f local_ec;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  undefined1 local_64 [44];
  int local_38;
  float *local_34;
  int *local_30;
  float *local_2c;
  char *local_28;
  float *local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar16 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&in_stack_00000004[2].location.position.y);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004[3].orient_matrix.m + 1));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[0xf].create_event + 0x20));
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  local_c4 = (pCVar8->bounds_min).x;
  local_c0 = (pCVar8->bounds_min).y;
  local_bc = (pCVar8->bounds_min).z;
  local_b8 = (pCVar8->bounds_max).x;
  local_b4 = (pCVar8->bounds_max).y;
  local_b0 = (pCVar8->bounds_max).z;
  in_stack_00000004[0xf].field_224.y = 12.1391;
  fVar17 = (float10)fcos((float10)_DAT_00660d8c * (float10)DOUBLE_006356d5);
  fVar1 = *(float *)(in_stack_00000004[4].create_event + 0x10);
  fVar2 = *(float *)(in_stack_00000004[4].create_event + 0xc);
  fVar3 = *(float *)(in_stack_00000004[4].create_event + 0x14);
  in_stack_00000004[0xf].field_224.x =
       (float)(((float10)in_stack_00000004[0xf].field_224.y + (float10)local_b0) / fVar17);
  in_stack_00000004[0xf].field_224.z = local_b4 - local_c0;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar1 = in_stack_00000004[0xf].field_224.z;
    in_stack_00000004[4].create_event[0xc] = '\0';
    in_stack_00000004[4].create_event[0xd] = '\0';
    in_stack_00000004[4].create_event[0xe] = '\0';
    in_stack_00000004[4].create_event[0xf] = '\0';
    fVar2 = (float)DOUBLE_006356dd;
    in_stack_00000004[4].create_event[0x14] = -0x33;
    in_stack_00000004[4].create_event[0x15] = -0x34;
    in_stack_00000004[4].create_event[0x16] = -0x74;
    in_stack_00000004[4].create_event[0x17] = -0x41;
    *(float *)(in_stack_00000004[4].create_event + 0x10) = fVar1 + fVar2;
  }
  if (SQRT(in_stack_00000004[4].create_prob * in_stack_00000004[4].create_prob +
           (float)in_stack_00000004[4].field7_0x6c * (float)in_stack_00000004[4].field7_0x6c +
           (float)in_stack_00000004[4].was_created * (float)in_stack_00000004[4].was_created) == 0.0
     ) {
    in_stack_00000004[4].was_created = 0x40400000;
    in_stack_00000004[4].create_prob = -0.1;
    in_stack_00000004[4].field7_0x6c = 0;
  }
  local_18 = local_b0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_17c,(CVector3f *)&in_stack_00000004[4].field7_0x6c,
             (CVector3f *)in_stack_00000004[4].create_event);
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&in_stack_00000004[2].location.position.y);
  local_ac = (pCVar8->bounds_min).x;
  local_a8 = (pCVar8->bounds_min).y;
  local_a4 = (pCVar8->bounds_min).z;
  local_a0 = (pCVar8->bounds_max).x;
  local_9c = (pCVar8->bounds_max).y;
  local_98 = (pCVar8->bounds_max).z;
  local_34 = &in_stack_00000004[7].metadata.runtime_vector2.y;
  local_28 = in_stack_00000004[8].actor_name + 4;
  local_2c = &in_stack_00000004[7].metadata.runtime_vector2.z;
  local_30 = &in_stack_00000004[7].metadata.runtime_flags;
  local_38 = 0;
  do {
    iVar12 = local_38;
    core_manpuz_cpp_FUN_00509b20();
    pfVar13 = local_34 + iVar12 * 0x2e;
    local_24 = pfVar13;
    core_manpuz_cpp_FUN_0050a420();
    pfVar13[5] = 0.0;
    pfVar13[4] = pfVar13[5];
    pfVar13[8] = 0.0;
    pfVar13[3] = pfVar13[4];
    pfVar13[7] = pfVar13[8];
    local_14 = iVar12;
    local_94.y = (float)iVar12 * _DAT_00660d8c;
    pfVar13[0x2b] = 0.0;
    pfVar13[0x2c] = 0.0;
    pfVar13[6] = pfVar13[7];
    pfVar13[0x2d] = 0.0;
    local_94.x = 0.0;
    local_94.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_ec,&local_94);
    local_88.z = in_stack_00000004[0xf].field_224.y;
    local_88.x = 0.0;
    local_88.y = 0.0;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_ec,&local_7c,&local_88)
    ;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xfffffe54,pCVar9,in_stack_fffffe50);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_17c,(CMatrix3x4f *)&stack0xfffffe54,in_stack_fffffe58);
    pfVar13 = (float *)&stack0xfffffe24;
    pCVar15 = &local_11c;
    for (iVar12 = 0xc; pcVar11 = local_28, iVar12 != 0; iVar12 = iVar12 + -1) {
      pCVar15->m[0].w = *pfVar13;
      pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
      pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar16 * -2 + 1) * 4);
    }
    in_stack_fffffe50 = (CVector3f *)0x508dc6;
    core_xform_cpp_getTranslation_FUN_005f6110
              ((CVector3f *)&local_11c,(CMatrix3x4f *)(local_64 + 0x18));
    pfVar13 = local_24;
    if ((char *)extraout_EAX != pcVar11) {
      *(undefined4 *)pcVar11 = *extraout_EAX;
      *(undefined4 *)(pcVar11 + 4) = extraout_EAX[1];
      *(undefined4 *)(pcVar11 + 8) = extraout_EAX[2];
    }
    pCVar10 = (CVector3f *)(local_24 + 0xc);
    pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                       ((CVector3f *)&local_11c,(CMatrix3x3f *)local_64);
    if (pCVar10 != pCVar9) {
      pCVar10->x = pCVar9->x;
      pfVar13[0xd] = pCVar9->y;
      pfVar13[0xe] = pCVar9->z;
    }
    pCVar9 = &local_14c;
    uVar14 = 0;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_14c,4,&g_CVectorTypeInfo);
    do {
      local_70.y = 0.0;
      local_70.x = local_ac;
      if ((uVar14 & 1) != 0) {
        local_70.x = local_a0;
      }
      local_70.z = local_a4;
      if ((uVar14 & 2) != 0) {
        local_70.z = local_98;
      }
      local_20 = local_70.x;
      local_1c = local_70.z;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          ((CVector3f *)(local_64 + 0xc),&local_70,&local_11c);
      if (pCVar9 != pCVar10) {
        pCVar9->x = pCVar10->x;
        pCVar9->y = pCVar10->y;
        pCVar9->z = pCVar10->z;
      }
      uVar14 = uVar14 + 1;
      pCVar9 = pCVar9 + 1;
    } while ((int)uVar14 < 4);
    in_stack_fffffe58 = (CMatrix3x4f *)0x508ea4;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
              ((CDemonTriangle *)(local_24 + 0xf),&local_134,&local_140,&local_14c);
    local_30 = local_30 + 0x2e;
    iVar12 = local_38 + 1;
    local_38 = iVar12;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
              ((CDemonTriangle *)(local_24 + 0x1d),&local_134,&local_128,&local_140);
    local_28 = local_28 + 0xb8;
    local_2c = local_2c + 0x2e;
  } while (iVar12 < 0xc);
  fVar17 = (float10)fcos((float10)_DAT_00660d8c);
  fVar18 = (float10)fsin((float10)_DAT_00660d8c);
  fVar1 = (float)in_stack_00000004[4].was_created;
  fVar7 = (float)DOUBLE_006356e5;
  fVar19 = (float10)DOUBLE_006356d5;
  fVar2 = in_stack_00000004[0xf].field_224.y;
  pcVar11 = in_stack_00000004[0xe].create_event + 4;
  fVar3 = *(float *)(in_stack_00000004[4].create_event + 0x10);
  fVar5 = (float)DOUBLE_006356ed;
  *(float *)(in_stack_00000004[0xe].create_event + 0xc) =
       (float)(fVar17 * (float10)in_stack_00000004[0xf].field_224.y * fVar19);
  *(float *)pcVar11 = (float)((float10)fVar2 * fVar18 * fVar19);
  *(float *)(in_stack_00000004[0xe].create_event + 8) = fVar3 * fVar5 + fVar1 * fVar7;
  if (&in_stack_00000004[0xe].was_created != (int *)pcVar11) {
    in_stack_00000004[0xe].was_created = (int)*(float *)pcVar11;
    in_stack_00000004[0xe].create_prob = *(float *)(in_stack_00000004[0xe].create_event + 8);
    *(undefined4 *)in_stack_00000004[0xe].create_event =
         *(undefined4 *)(in_stack_00000004[0xe].create_event + 0xc);
  }
  ((CVector3f *)(in_stack_00000004[0xe].create_event + 0x20))->x = -0.0805024;
  in_stack_00000004[0xe].create_event[0x28] = '\0';
  in_stack_00000004[0xe].create_event[0x29] = '\0';
  in_stack_00000004[0xe].create_event[0x2a] = '\0';
  in_stack_00000004[0xe].create_event[0x2b] = '\0';
  fVar1 = in_stack_00000004[0xe].create_prob;
  in_stack_00000004[0xe].create_event[0x24] = -0x24;
  in_stack_00000004[0xe].create_event[0x25] = ')';
  in_stack_00000004[0xe].create_event[0x26] = -0x3b;
  in_stack_00000004[0xe].create_event[0x27] = -0x41;
  in_stack_00000004[0xe].create_prob = fVar1 + FLOAT_006356f5;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(in_stack_00000004[0xe].create_event + 0x2c),
             (CVector3f *)(in_stack_00000004[0xe].create_event + 0x20));
  fVar1 = (float)in_stack_00000004[0xe].was_created;
  uVar4 = *(undefined4 *)in_stack_00000004[0xe].create_event;
  fVar2 = *(float *)(in_stack_00000004[0xe].create_event + 8);
  fVar3 = *(float *)(in_stack_00000004[0xe].create_event + 4);
  fVar5 = *(float *)(in_stack_00000004[0xe].create_event + 0xc);
  iVar12 = *(int *)(in_stack_00000004[0xe].create_event + 0x20);
  *(float *)(in_stack_00000004[0xe].create_event + 0x5c) = in_stack_00000004[0xe].create_prob;
  iVar6 = *(int *)(in_stack_00000004[0xe].create_event + 0x28);
  *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x60) = uVar4;
  fVar7 = *(float *)(in_stack_00000004[0xe].create_event + 0x24);
  in_stack_00000004[0xe].field_224.x = fVar2;
  in_stack_00000004[0xe].field_224.y = fVar5;
  in_stack_00000004[0xe].field14_0xf8 = iVar12;
  in_stack_00000004[0xe].field16_0x100 = iVar6;
  *(float *)(in_stack_00000004[0xe].create_event + 0x58) = -fVar1;
  in_stack_00000004[0xe].field11_0xdc = (int)-fVar3;
  in_stack_00000004[0xe].is_transparent = (int)-fVar7;
  iVar12 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&in_stack_00000004[0xe].field17_0x104,
             (CVector3f *)&in_stack_00000004[0xe].field14_0xf8);
  do {
    core_manpuz_cpp_FUN_0050af80();
    iVar12 = iVar12 + 1;
  } while (iVar12 < 2);
  return;
}


// Assembly code:
// 00508a70: PUSH EBX
//   Label: core_manpuz.cpp_FUN_00508a70
// 00508a71: PUSH ESI
// 00508a72: PUSH EDI
// 00508a73: PUSH EBP
// 00508a74: MOV EBP,ESP
// 00508a76: SUB ESP,0x1cc
// 00508a7c: SUB EBP,0x7e
// 00508a7f: MOV EDX,dword ptr [EBP + 0x92]
// 00508a85: PUSH EDX
// 00508a86: MOV EBX,dword ptr [EBP + 0x92]
// 00508a8c: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
