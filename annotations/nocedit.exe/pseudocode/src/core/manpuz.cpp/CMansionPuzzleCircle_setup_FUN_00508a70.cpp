// Name: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70
// Address: 00508a70
// Address Range: [[00508a70, 00508a90]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  CKeyFramedModel *pCVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  char *pcVar10;
  CMatrix3x4f *pCVar11;
  uint uVar12;
  CMatrix3x4f *pCVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
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
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  CVector3f *local_28;
  char *local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar14 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)this_ptr->unk1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0x17c));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0x2f8));
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(this_ptr->unk3 + 0xe78));
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->unk1);
  local_c4 = (pCVar6->bounds_min).x;
  local_c0 = (pCVar6->bounds_min).y;
  local_bc = (pCVar6->bounds_min).z;
  local_b8 = (pCVar6->bounds_max).x;
  local_b4 = (pCVar6->bounds_max).y;
  local_b0 = (pCVar6->bounds_max).z;
  this_ptr->unk3[0xec4] = -0x3f;
  this_ptr->unk3[0xec5] = '9';
  this_ptr->unk3[0xec6] = 'B';
  this_ptr->unk3[0xec7] = 'A';
  fVar15 = (float10)fcos((float10)0.5235988f * (float10)0.5);
  fVar1 = (this_ptr->emitter_pos).y;
  fVar2 = (this_ptr->emitter_pos).x;
  fVar3 = (this_ptr->emitter_pos).z;
  *(float *)(this_ptr->unk3 + 0xec0) =
       (float)(((float10)*(float *)(this_ptr->unk3 + 0xec4) + (float10)local_b0) / fVar15);
  *(float *)(this_ptr->unk3 + 0xec8) = local_b4 - local_c0;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    fVar1 = *(float *)(this_ptr->unk3 + 0xec8);
    (this_ptr->emitter_pos).x = 0.0;
    fVar2 = (float)2;
    (this_ptr->emitter_pos).z = -1.1;
    (this_ptr->emitter_pos).y = fVar1 + fVar2;
  }
  fVar1 = (this_ptr->gem_pos).y;
  fVar2 = (this_ptr->gem_pos).x;
  fVar3 = (this_ptr->gem_pos).z;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) == 0.0) {
    (this_ptr->gem_pos).y = 3.0;
    (this_ptr->gem_pos).z = -0.1;
    (this_ptr->gem_pos).x = 0.0;
  }
  local_18 = local_b0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_17c,&this_ptr->gem_pos,(CVector3f *)&this_ptr->gem_orient);
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0x17c));
  local_ac = (pCVar6->bounds_min).x;
  local_a8 = (pCVar6->bounds_min).y;
  local_a4 = (pCVar6->bounds_min).z;
  local_a0 = (pCVar6->bounds_max).x;
  local_9c = (pCVar6->bounds_max).y;
  local_98 = (pCVar6->bounds_max).z;
  local_34 = this_ptr->unk3 + 0x458;
  local_28 = (CVector3f *)(this_ptr->unk3 + 0x47c);
  local_2c = this_ptr->unk3 + 0x45c;
  local_30 = this_ptr->unk3 + 0x460;
  local_38 = 0;
  do {
    iVar9 = local_38;
    core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(this_ptr);
    pcVar10 = local_34 + iVar9 * 0xb8;
    local_24 = pcVar10;
    core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(this_ptr);
    pcVar10[0x14] = '\0';
    pcVar10[0x15] = '\0';
    pcVar10[0x16] = '\0';
    pcVar10[0x17] = '\0';
    *(uint *)(pcVar10 + 0x10) = *(uint *)(pcVar10 + 0x14);
    pcVar10[0x20] = '\0';
    pcVar10[0x21] = '\0';
    pcVar10[0x22] = '\0';
    pcVar10[0x23] = '\0';
    *(uint *)(pcVar10 + 0xc) = *(uint *)(pcVar10 + 0x10);
    *(uint *)(pcVar10 + 0x1c) = *(uint *)(pcVar10 + 0x20);
    local_14 = iVar9;
    local_94.y = (float)iVar9 * 0.5235988f;
    pcVar10[0xac] = '\0';
    pcVar10[0xad] = '\0';
    pcVar10[0xae] = '\0';
    pcVar10[0xaf] = '\0';
    pcVar10[0xb0] = '\0';
    pcVar10[0xb1] = '\0';
    pcVar10[0xb2] = '\0';
    pcVar10[0xb3] = '\0';
    *(uint *)(pcVar10 + 0x18) = *(uint *)(pcVar10 + 0x1c);
    pcVar10[0xb4] = '\0';
    pcVar10[0xb5] = '\0';
    pcVar10[0xb6] = '\0';
    pcVar10[0xb7] = '\0';
    local_94.x = 0.0;
    local_94.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_ec,&local_94);
    pCVar8 = &local_94;
    local_88.z = *(float *)(this_ptr->unk3 + 0xec4);
    local_88.x = 0.0;
    local_88.y = 0.0;
    pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&local_ec,&local_7c,&local_88)
    ;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_1ac,pCVar7,pCVar8);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_17c,&local_1ac,&local_1dc);
    pCVar11 = &local_1dc;
    pCVar13 = &local_11c;
    for (iVar9 = 0xc; pCVar8 = local_28, iVar9 != 0; iVar9 = iVar9 + -1) {
      pCVar13->m[0].w = pCVar11->m[0].w;
      pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar14 * -2 + 1) * 4);
    }
    pCVar7 = core_xform_cpp_getTranslation_FUN_005f6110(&local_11c,&local_4c);
    pcVar10 = local_24;
    if (pCVar7 != pCVar8) {
      pCVar8->x = pCVar7->x;
      pCVar8->y = pCVar7->y;
      pCVar8->z = pCVar7->z;
    }
    pCVar7 = (CVector3f *)(local_24 + 0x30);
    pCVar8 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_11c,&local_64);
    if (pCVar7 != pCVar8) {
      pCVar7->x = pCVar8->x;
      *(float *)(pcVar10 + 0x34) = pCVar8->y;
      *(float *)(pcVar10 + 0x38) = pCVar8->z;
    }
    pCVar8 = &local_14c;
    uVar12 = 0;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_14c,4,&g_CVectorTypeInfo);
    do {
      local_70.y = 0.0;
      local_70.x = local_ac;
      if ((uVar12 & 1) != 0) {
        local_70.x = local_a0;
      }
      local_70.z = local_a4;
      if ((uVar12 & 2) != 0) {
        local_70.z = local_98;
      }
      local_20 = local_70.x;
      local_1c = local_70.z;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_58,&local_70,&local_11c);
      if (pCVar8 != pCVar7) {
        pCVar8->x = pCVar7->x;
        pCVar8->y = pCVar7->y;
        pCVar8->z = pCVar7->z;
      }
      uVar12 = uVar12 + 1;
      pCVar8 = pCVar8 + 1;
    } while ((int)uVar12 < 4);
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
              ((CDemonTriangle *)(local_24 + 0x3c),&local_134,&local_140,&local_14c);
    local_30 = local_30 + 0xb8;
    iVar9 = local_38 + 1;
    local_38 = iVar9;
    core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
              ((CDemonTriangle *)(local_24 + 0x74),&local_134,&local_128,&local_140);
    local_28 = (CVector3f *)&local_28[0xf].y;
    local_2c = local_2c + 0xb8;
  } while (iVar9 < 0xc);
  fVar15 = (float10)fcos((float10)0.5235988f);
  fVar16 = (float10)fsin((float10)0.5235988f);
  fVar1 = (this_ptr->gem_pos).y;
  fVar5 = (float)0.75;
  fVar17 = (float10)0.5;
  pcVar10 = this_ptr->unk3 + 0xd04;
  fVar2 = (this_ptr->emitter_pos).y;
  fVar3 = (float)0.25;
  *(float *)(this_ptr->unk3 + 0xd0c) =
       (float)(fVar15 * (float10)*(float *)(this_ptr->unk3 + 0xec4) * fVar17);
  *(float *)pcVar10 = (float)((float10)*(float *)(this_ptr->unk3 + 0xec4) * fVar16 * fVar17);
  *(float *)(this_ptr->unk3 + 0xd08) = fVar2 * fVar3 + fVar1 * fVar5;
  if (this_ptr->unk3 + 0xcf8 != pcVar10) {
    *(float *)(this_ptr->unk3 + 0xcf8) = *(float *)pcVar10;
    *(uint *)(this_ptr->unk3 + 0xcfc) = *(uint *)(this_ptr->unk3 + 0xd08);
    *(uint *)(this_ptr->unk3 + 0xd00) = *(uint *)(this_ptr->unk3 + 0xd0c);
  }
  ((CVector3f *)(this_ptr->unk3 + 0xd20))->x = -0.0805024;
  this_ptr->unk3[0xd28] = '\0';
  this_ptr->unk3[0xd29] = '\0';
  this_ptr->unk3[0xd2a] = '\0';
  this_ptr->unk3[0xd2b] = '\0';
  fVar1 = *(float *)(this_ptr->unk3 + 0xcfc);
  this_ptr->unk3[0xd24] = -0x24;
  this_ptr->unk3[0xd25] = ')';
  this_ptr->unk3[0xd26] = -0x3b;
  this_ptr->unk3[0xd27] = -0x41;
  *(float *)(this_ptr->unk3 + 0xcfc) = fVar1 + -4.0f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(this_ptr->unk3 + 0xd2c),(CVector3f *)(this_ptr->unk3 + 0xd20));
  fVar1 = *(float *)(this_ptr->unk3 + 0xcf8);
  fVar2 = *(float *)(this_ptr->unk3 + 0xd04);
  *(uint *)(this_ptr->unk3 + 0xd5c) = *(uint *)(this_ptr->unk3 + 0xcfc);
  uVar4 = *(uint *)(this_ptr->unk3 + 0xd28);
  *(uint *)(this_ptr->unk3 + 0xd60) = *(uint *)(this_ptr->unk3 + 0xd00);
  fVar3 = *(float *)(this_ptr->unk3 + 0xd24);
  *(uint *)(this_ptr->unk3 + 0xd68) = *(uint *)(this_ptr->unk3 + 0xd08);
  *(uint *)(this_ptr->unk3 + 0xd6c) = *(uint *)(this_ptr->unk3 + 0xd0c);
  ((CVector3f *)(this_ptr->unk3 + 0xd80))->x = *(float *)(this_ptr->unk3 + 0xd20);
  *(uint *)(this_ptr->unk3 + 0xd88) = uVar4;
  *(float *)(this_ptr->unk3 + 0xd58) = -fVar1;
  *(float *)(this_ptr->unk3 + 0xd64) = -fVar2;
  *(float *)(this_ptr->unk3 + 0xd84) = -fVar3;
  iVar9 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(this_ptr->unk3 + 0xd8c),(CVector3f *)(this_ptr->unk3 + 0xd80));
  do {
    core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af80(this_ptr);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  return;
}
