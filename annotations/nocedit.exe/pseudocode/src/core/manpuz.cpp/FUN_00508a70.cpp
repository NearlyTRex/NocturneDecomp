// Name: core_manpuz.cpp_FUN_00508a70
// Address: 00508a70
// Address Range: [[00508a70, 00508a90]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00508a70()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_00508a70(uint param_1) */

void core_manpuz_cpp_FUN_00508a70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  CKeyFramedModel *pCVar8;
  CVector3f *pCVar9;
  uint *extraout_EAX;
  CVector3f *pCVar10;
  char *pcVar11;
  int iVar12;
  float *pfVar13;
  CMatrix3x4f *pCVar14;
  uint uVar15;
  CMatrix3x4f *pCVar16;
  byte bVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  CDemonActor *in_stack_00000004;
  CMatrix3x4f local_1dc;
  CMatrix3x4f local_1ac;
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
  byte local_64 [44];
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
  
  bVar17 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&in_stack_00000004[2].location.position.y);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004[3].orient_matrix.m + 1));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(in_stack_00000004[0xf].create_event + 0x20))
  ;
  pCVar8 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  local_c4 = (pCVar8->bounds_min).x;
  local_c0 = (pCVar8->bounds_min).y;
  local_bc = (pCVar8->bounds_min).z;
  local_b8 = (pCVar8->bounds_max).x;
  local_b4 = (pCVar8->bounds_max).y;
  local_b0 = (pCVar8->bounds_max).z;
  in_stack_00000004[0xf].field12_0xe0.y = 12.1391;
  fVar18 = (float10)fcos((float10)_DAT_00660d8c * (float10)0.5);
  fVar1 = *(float *)(in_stack_00000004[4].create_event + 0x10);
  fVar2 = *(float *)(in_stack_00000004[4].create_event + 0xc);
  fVar3 = *(float *)(in_stack_00000004[4].create_event + 0x14);
  in_stack_00000004[0xf].field12_0xe0.x =
       (float)(((float10)in_stack_00000004[0xf].field12_0xe0.y + (float10)local_b0) / fVar18);
  in_stack_00000004[0xf].field12_0xe0.z = local_b4 - local_c0;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar1 = in_stack_00000004[0xf].field12_0xe0.z;
    in_stack_00000004[4].create_event[0xc] = '\0';
    in_stack_00000004[4].create_event[0xd] = '\0';
    in_stack_00000004[4].create_event[0xe] = '\0';
    in_stack_00000004[4].create_event[0xf] = '\0';
    fVar2 = (float)2;
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
  local_34 = &in_stack_00000004[7].previous_transform_state.orientation.y;
  local_28 = in_stack_00000004[8].actor_name + 4;
  local_2c = &in_stack_00000004[7].previous_transform_state.orientation.z;
  local_30 = &in_stack_00000004[7].previous_transform_state.dirty_flags;
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
    pCVar10 = &local_94;
    local_88.z = in_stack_00000004[0xf].field12_0xe0.y;
    local_88.x = 0.0;
    local_88.y = 0.0;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_ec,&local_7c,&local_88)
    ;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_1ac,pCVar9,pCVar10);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_17c,&local_1ac,&local_1dc);
    pCVar14 = &local_1dc;
    pCVar16 = &local_11c;
    for (iVar12 = 0xc; pcVar11 = local_28, iVar12 != 0; iVar12 = iVar12 + -1) {
      pCVar16->m[0].w = pCVar14->m[0].w;
      pCVar14 = (CMatrix3x4f *)((int)pCVar14 + ((uint)bVar17 * -2 + 1) * 4);
      pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar17 * -2 + 1) * 4);
    }
    core_xform_cpp_getTranslation_FUN_005f6110
              ((CVector3f *)&local_11c,(CMatrix3x4f *)(local_64 + 0x18));
    pfVar13 = local_24;
    if ((char *)extraout_EAX != pcVar11) {
      *(uint *)pcVar11 = *extraout_EAX;
      *(uint *)(pcVar11 + 4) = extraout_EAX[1];
      *(uint *)(pcVar11 + 8) = extraout_EAX[2];
    }
    pCVar9 = (CVector3f *)(local_24 + 0xc);
    pCVar10 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                        ((CVector3f *)&local_11c,(CMatrix3x3f *)local_64);
    if (pCVar9 != pCVar10) {
      pCVar9->x = pCVar10->x;
      pfVar13[0xd] = pCVar10->y;
      pfVar13[0xe] = pCVar10->z;
    }
    pCVar10 = &local_14c;
    uVar15 = 0;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_14c,4,&g_CVectorTypeInfo);
    do {
      local_70.y = 0.0;
      local_70.x = local_ac;
      if ((uVar15 & 1) != 0) {
        local_70.x = local_a0;
      }
      local_70.z = local_a4;
      if ((uVar15 & 2) != 0) {
        local_70.z = local_98;
      }
      local_20 = local_70.x;
      local_1c = local_70.z;
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         ((CVector3f *)(local_64 + 0xc),&local_70,&local_11c);
      if (pCVar10 != pCVar9) {
        pCVar10->x = pCVar9->x;
        pCVar10->y = pCVar9->y;
        pCVar10->z = pCVar9->z;
      }
      uVar15 = uVar15 + 1;
      pCVar10 = pCVar10 + 1;
    } while ((int)uVar15 < 4);
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
  fVar18 = (float10)fcos((float10)_DAT_00660d8c);
  fVar19 = (float10)fsin((float10)_DAT_00660d8c);
  fVar1 = (float)in_stack_00000004[4].was_created;
  fVar7 = (float)0.75;
  fVar20 = (float10)0.5;
  fVar2 = in_stack_00000004[0xf].field12_0xe0.y;
  pcVar11 = in_stack_00000004[0xe].create_event + 4;
  fVar3 = *(float *)(in_stack_00000004[4].create_event + 0x10);
  fVar5 = (float)0.25;
  *(float *)(in_stack_00000004[0xe].create_event + 0xc) =
       (float)(fVar18 * (float10)in_stack_00000004[0xf].field12_0xe0.y * fVar20);
  *(float *)pcVar11 = (float)((float10)fVar2 * fVar19 * fVar20);
  *(float *)(in_stack_00000004[0xe].create_event + 8) = fVar3 * fVar5 + fVar1 * fVar7;
  if (&in_stack_00000004[0xe].was_created != (int *)pcVar11) {
    in_stack_00000004[0xe].was_created = (int)*(float *)pcVar11;
    in_stack_00000004[0xe].create_prob = *(float *)(in_stack_00000004[0xe].create_event + 8);
    *(uint *)in_stack_00000004[0xe].create_event =
         *(uint *)(in_stack_00000004[0xe].create_event + 0xc);
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
  in_stack_00000004[0xe].create_prob = fVar1 + -4.0f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(in_stack_00000004[0xe].create_event + 0x2c),
             (CVector3f *)(in_stack_00000004[0xe].create_event + 0x20));
  fVar1 = (float)in_stack_00000004[0xe].was_created;
  uVar4 = *(uint *)in_stack_00000004[0xe].create_event;
  fVar2 = *(float *)(in_stack_00000004[0xe].create_event + 8);
  fVar3 = *(float *)(in_stack_00000004[0xe].create_event + 4);
  fVar5 = *(float *)(in_stack_00000004[0xe].create_event + 0xc);
  iVar12 = *(int *)(in_stack_00000004[0xe].create_event + 0x20);
  *(float *)(in_stack_00000004[0xe].create_event + 0x5c) = in_stack_00000004[0xe].create_prob;
  iVar6 = *(int *)(in_stack_00000004[0xe].create_event + 0x28);
  *(uint *)(in_stack_00000004[0xe].create_event + 0x60) = uVar4;
  fVar7 = *(float *)(in_stack_00000004[0xe].create_event + 0x24);
  in_stack_00000004[0xe].field12_0xe0.x = fVar2;
  in_stack_00000004[0xe].field12_0xe0.y = fVar5;
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
