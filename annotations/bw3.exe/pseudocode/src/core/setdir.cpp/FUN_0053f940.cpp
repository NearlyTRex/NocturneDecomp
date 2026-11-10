// Name: core_setdir.cpp_FUN_0053f940
// Address: 0053f940
// Address Range: [[0053f940, 00540b95]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_0053f940(CDemonSet *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_setdir_cpp_FUN_0053f940(CDemonSet *param_1,CDemonActor *param_2,int param_3)

{
  CDemonActor *this_ptr;
  float fVar1;
  float fVar2;
  double dVar3;
  CDemonRenderer *this_ptr_00;
  byte *puVar4;
  float fVar5;
  uint uVar6;
  SMRGLPrimitivePoly *pSVar7;
  int iVar8;
  int iVar9;
  byte *puVar10;
  uint *puVar11;
  C3DSCamera *pCVar12;
  float *pfVar13;
  float *pfVar14;
  SRenderVertex *pSVar15;
  uint *puVar16;
  SMRGLPrimitivePoly *pSVar17;
  int *piVar18;
  CBoundingBox3D *pCVar19;
  CVector3i *input;
  uint *puVar20;
  int *piVar21;
  byte bVar22;
  float10 fVar23;
  float afStackY_1178 [879];
  CBoundingBox3D *in_stack_fffffc58;
  CBoundingBox3D *in_stack_fffffc60;
  CBoundingBox3D *in_stack_fffffc6c;
  float fStack_390;
  int aiStack_2d4 [2];
  CVector3i aCStack_2cc [7];
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  SMRGLHeaderPrimitive SStack_260;
  uint uStack_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint auStack_22c [6];
  uint uStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float afStack_1f8 [8];
  uint auStack_1d8 [6];
  float afStack_1c0 [6];
  CBoundingBox3D CStack_1a8;
  float fStack_190;
  float afStack_18c [5];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_148;
  float afStack_144 [4];
  float fStack_134;
  float fStack_130;
  CVector3f CStack_124;
  CVector3i CStack_118;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_dc;
  float afStack_d8 [6];
  int local_c0;
  uint uStack_bc;
  int iStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  CLocation *pCStack_ac;
  float *pfStack_a8;
  float fStack_a4;
  C3DSCamera *pCStack_98;
  CDemonActor *pCStack_94;
  SMRGLPrimitivePoly *pSStack_90;
  int iStack_8c;
  C3DSCamera *pCStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  float local_6c;
  int iStack_5c;
  float fStack_58;
  CDemonActor *pCStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  float *pfStack_44;
  float fStack_40;
  int iStack_30;
  int *piStack_2c;
  CVector3f *pCStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iVar24;
  
  bVar22 = 0;
  afStack_d8[3] = 0.0;
  if (param_2 == (CDemonActor *)0x0) {
    if (param_1->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_00534890(param_1,0);
    }
    return 1;
  }
  if (param_1->selected_camera_index < 0) {
    param_1->pending_camera_index = -1;
    param_1->camera_switch_cooldown = 0.0;
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_0053f9af;
  if (0.0 < param_1->camera_switch_cooldown) {
    fVar5 = param_1->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    param_1->camera_switch_cooldown = fVar5;
    if (0.0 < fVar5) {
      if ((-1 < param_1->pending_camera_index) &&
         (param_1->pending_camera_index != param_1->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890(param_1,param_1->pending_camera_index);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_0053f9af:
  this_ptr_00 = DAT_005f2afc;
  param_1->camera_switch_cooldown = 0.0;
  local_c0 = _DAT_01c6cee8;
  _DAT_01c6cee8 = 0;
  local_6c = (float)engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
  engine_matrix_c_FUN_0046d2f0(DAT_005f2afc,0,0,0x40,0x30);
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffffc58);
  iVar24 = 0;
  piStack_2c = aiStack_2d4;
  pfVar13 = afStack_1f8;
  pfVar14 = &fStack_210;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar22 * -2 + 1;
    pfVar14 = pfVar14 + (uint)bVar22 * -2 + 1;
  }
  do {
    core_box_cpp_FUN_0041d8b0(&fStack_210,iVar24);
    afStack_d8[0] = fStack_f0;
    afStack_d8[(uint)bVar22 * -2 + 1] = afStack_108[(uint)bVar22 * -2 + 7];
    afStack_d8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 2] =
         afStack_108[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 8];
    *piStack_2c = (int)ROUND(afStack_d8[0] * _DAT_005e3ce0);
    piStack_2c[1] = (int)ROUND(afStack_d8[1] * _DAT_005e3ce0);
    piStack_2c[2] = (int)ROUND(afStack_d8[2] * _DAT_005e3ce0);
    iVar24 = iVar24 + 1;
    piStack_2c = piStack_2c + 3;
  } while (iVar24 < 8);
  afStack_144[3] = fStack_210 + fStack_204;
  fStack_134 = fStack_20c + local_200;
  fStack_130 = fStack_208 + fStack_1fc;
  fStack_15c = fStack_210 + fStack_204;
  afStack_18c[(uint)bVar22 * -2 + 0xd] = afStack_144[(uint)bVar22 * -2 + 4];
  afStack_18c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xe] =
       afStack_144[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 5];
  fStack_168 = fStack_15c * _DAT_005d0c86;
  fStack_164 = fStack_158 * _DAT_005d0c86;
  fStack_160 = fStack_154 * _DAT_005d0c86;
  afStack_108[3] = fStack_15c * _DAT_005d0c86;
  afStack_108[(uint)bVar22 * -2 + 4] = afStack_18c[(uint)bVar22 * -2 + 10];
  afStack_108[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 5] =
       afStack_18c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 0xb];
  iStack_274 = (int)ROUND(afStack_108[3] * _DAT_005e3ce0);
  iStack_270 = (int)ROUND(fStack_f8 * _DAT_005e3ce0);
  iStack_26c = (int)ROUND(fStack_f4 * _DAT_005e3ce0);
  puVar10 = &DAT_00603eec;
  do {
    iVar8 = *(int *)(puVar10 + 0x18);
    puVar4 = puVar10 + 0x48;
    *(int *)(puVar10 + 0x14) =
         aCStack_2cc[iVar8 + -1].z * *(int *)(puVar10 + 0xc) +
         *(int *)(puVar10 + 8) * aiStack_2d4[iVar8 * 3] +
         *(int *)(puVar10 + 0x10) * aCStack_2cc[iVar8].x;
    puVar10 = puVar4;
  } while (puVar4 != &DAT_0060409c);
  if (param_3 == 0) {
    fVar23 = (float10)(param_1->camera_count * 10) * (float10)g_CGamePtr->delta_time_float;
    round();
    local_c0 = (int)ROUND(fVar23);
    if (local_c0 < 3) {
      local_c0 = 3;
    }
    if (param_1->camera_count < local_c0) {
      local_c0 = param_1->camera_count;
    }
    fVar5 = param_1->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    param_1->previous_best_camera_timer = fVar5;
    if (fVar5 <= 0.0) {
      param_1->previous_best_camera_index = -1;
      param_1->previous_best_camera_timer = 0.0;
    }
  }
  else {
    local_c0 = param_1->camera_count;
    param_1->previous_best_camera_index = -1;
    _DAT_02125514 = 0;
    param_1->previous_best_camera_timer = 0.0;
  }
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffffc60);
  pfVar13 = afStack_1c0;
  pCVar19 = &CStack_1a8;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pCVar19->min).x = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar22 * -2 + 1;
    pCVar19 = (CBoundingBox3D *)((int)pCVar19 + ((uint)bVar22 * -2 + 1) * 4);
  }
  fVar5 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960(&CStack_1a8);
  pfVar13 = &fStack_190;
  fStack_58 = fVar5 * (float)_DAT_005d0c8e + 1.0;
  pfVar14 = (float *)((int)param_2 + (uint)bVar22 * -8 + 0x24);
  fStack_190 = (param_2->location).position.x;
  afStack_18c[(uint)bVar22 * -2] = *pfVar14;
  afStack_18c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] = pfVar14[(uint)bVar22 * -2 + 1];
  afStack_18c[0] = afStack_18c[0] + _DAT_005d0c96;
  uVar6 = core_setdir_cpp_FUN_00541a20(param_1,pfVar13);
  fStack_148 = CStack_1a8.min.x + CStack_1a8.max.x;
  afStack_144[0] = CStack_1a8.min.y + CStack_1a8.max.y;
  afStack_144[1] = CStack_1a8.min.z + CStack_1a8.max.z;
  fStack_10c = CStack_1a8.min.x + CStack_1a8.max.x;
  afStack_108[(uint)bVar22 * -2] = afStack_144[(uint)bVar22 * -2];
  afStack_108[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
       afStack_144[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
  uStack_b4 = uVar6;
  pfVar13 = afStack_108 + 0xb;
  afStack_108[2] = fStack_10c * _DAT_005d0c86;
  afStack_108[3] = afStack_108[0] * _DAT_005d0c86;
  fStack_f8 = afStack_108[1] * _DAT_005d0c86;
  fStack_dc = fStack_10c * _DAT_005d0c86;
  afStack_d8[(uint)bVar22 * -2] = afStack_108[(uint)bVar22 * -2 + 3];
  afStack_d8[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] =
       afStack_108[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
  core_actor_cpp_FUN_00408b80(param_2,pfVar13);
  afStack_144[2] = afStack_18c[2];
  afStack_144[(uint)bVar22 * -2 + 3] = afStack_18c[(uint)bVar22 * -2 + 3];
  afStack_144[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4] =
       afStack_18c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 4];
  if (&fStack_190 != afStack_144 + 2) {
    fStack_190 = afStack_144[2];
    afStack_18c[0] = afStack_144[3];
    afStack_18c[1] = fStack_134;
  }
  if (uStack_b4 != _DAT_02125518) {
    iStack_b8 = param_1->camera_count;
    param_3 = 1;
    param_1->previous_best_camera_index = -1;
    _DAT_02125514 = 0;
    param_1->previous_best_camera_timer = 0.0;
  }
  _DAT_02125518 = uStack_b4;
  _DAT_0270f3d4 = (uint)(uStack_b4 == 0xffffffff);
  iVar8 = 0;
  do {
    iVar24 = iVar8 + 4;
    *(uint *)(&stack0xfffffc74 + iVar8) = *(uint *)(&DAT_01c60dac + iVar8);
    iVar8 = iVar24;
  } while (iVar24 != 0xc0);
  _DAT_02701910 = 0;
  iStack_20 = 0;
  pfStack_a8 = (float *)(_DAT_005e3cfc * _DAT_005e3cfc);
  pCStack_ac = &param_2->location;
  for (iVar8 = 0; iVar8 < g_CDemonSetPtr->actor_count; iVar8 = iVar8 + 1) {
    this_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_20);
    iVar24 = (*((this_ptr->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr);
    if (((iVar24 != 0) && (this_ptr != param_2)) &&
       (fVar5 = (this_ptr->location).position.x - *pfStack_a8,
       fVar2 = (this_ptr->location).position.y - pfStack_a8[1],
       fVar1 = (this_ptr->location).position.z - pfStack_a8[2],
       fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= fStack_a4)) {
      *(CDemonActor **)(&DAT_02701914 + _DAT_02701910 * 4) = this_ptr;
      (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc6c);
      iVar9 = _DAT_02701910 * 0x18;
      puVar11 = auStack_22c;
      puVar16 = &uStack_214;
      for (iVar24 = 6; iVar24 != 0; iVar24 = iVar24 + -1) {
        *puVar16 = *puVar11;
        puVar11 = puVar11 + (uint)bVar22 * -2 + 1;
        puVar16 = puVar16 + (uint)bVar22 * -2 + 1;
      }
      if ((uint *)(iVar9 + 0x2703854) != &uStack_214) {
        *(uint *)(iVar9 + 0x2703854) = uStack_214;
        *(float *)(iVar9 + 0x2703858) = fStack_210;
        *(float *)(iVar9 + 0x270385c) = fStack_20c;
      }
      if ((float *)(iVar9 + 0x2703860) != &fStack_208) {
        *(float *)(iVar9 + 0x2703860) = fStack_208;
        *(float *)(iVar9 + 0x2703864) = fStack_204;
        *(float *)(iVar9 + 0x2703868) = local_200;
      }
      _DAT_02701910 = _DAT_02701910 + 1;
    }
    iStack_20 = iStack_20 + 4;
  }
  pCStack_28 = &(param_2->location).position;
  fStack_40 = _DAT_005e3cfc * _DAT_005e3cfc;
  local_6c = _DAT_005e3cf8 * _DAT_005e3cf8;
  pCStack_98 = param_1->cameras;
  while ((0 < iStack_b8 && (_DAT_02125514 < param_1->camera_count))) {
    uVar6 = *(uint *)&param_1->cameras[_DAT_02125514].field_0x19c;
    if (uStack_b4 == uVar6) {
      pCStack_94 = param_2;
      pCVar12 = pCStack_98 + _DAT_02125514;
      pSStack_90 = (SMRGLPrimitivePoly *)&DAT_00603eec;
      iStack_8c = _DAT_02125514;
      pCStack_88 = pCVar12;
      if ((*(int *)&pCVar12->field_0x1a0 == 0) ||
         (fVar5 = *(float *)&pCVar12->field_0x100 - ((CVector3f *)&pCStack_28->x)->x,
         fVar2 = *(float *)&pCVar12->field_0x104 - pCStack_28->y,
         fVar1 = *(float *)&pCVar12->field_0x108 - pCStack_28->z,
         local_6c < fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5)) {
        fStack_84 = (float)(uStack_b4 ^ uVar6);
        fVar5 = fStack_84;
      }
      else {
        fVar5 = (float)core_setutil_cpp_FUN_005420b0(pCVar12,pCStack_28,fStack_58);
        if (fVar5 == 0.0) {
          fStack_84 = fVar5;
          fVar5 = fStack_84;
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
                    (DAT_005f2afc,(CVector3f *)&pCVar12->field_0x100);
          engine_matrix_c_FUN_0046d090(DAT_005f2afc,*(uint *)&pCVar12->field_0x144);
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
                    (DAT_005f2afc,(CVector3f *)&pCVar12->field_0x10c);
          uStack_80 = 0x800000ff;
          uStack_7c = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                    (DAT_005f2afc,pCStack_28);
          CStack_124.x = (param_2->orient).vec.x;
          CStack_124.z = (param_2->orient).vec.z;
          CStack_124.y = *(float *)&pCVar12->field_0x110;
          input = aCStack_2cc;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                    (DAT_005f2afc,&CStack_124,(CVector3f *)0x0);
          iVar8 = 0;
          do {
            engine_special_cpp_FUN_005632a3
                      ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + iVar8),input);
            iVar24 = iVar8 + 0x30;
            input = input + 1;
            uStack_80 = uStack_80 & *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar8 + 0x10);
            uStack_7c = uStack_7c | *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar8 + 0x10);
            iVar8 = iVar24;
          } while (iVar24 != 0x180);
          if (((uStack_80 & 0x80000000) == 0) || ((char)uStack_80 == '\0')) {
            iVar8 = 0;
            pSVar17 = pSStack_90 + 0x1b0;
            iStack_78 = 0;
            pSVar7 = pSStack_90;
            do {
              *(SMRGLPrimitivePoly **)((int)auStack_1d8 + iVar8) = pSVar7;
              iVar8 = iVar8 + 4;
              iStack_78 = iStack_78 + 1;
              pSVar7 = pSVar7 + 0x48;
            } while (pSVar7 != pSVar17);
            iVar8 = 0;
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_94);
            do {
              pSVar15 = DAT_005f2afc->vertex_buffer_ptr + iVar8;
              iVar24 = *(int *)(pSVar15 + 8);
              if (0 < iVar24) {
                iVar9 = iVar24 + 0x80;
                *(int *)pSVar15 =
                     (int)(((longlong)*(int *)pSVar15 * (longlong)iVar9) / (longlong)iVar24);
                *(int *)(pSVar15 + 4) =
                     (int)(((longlong)*(int *)(pSVar15 + 4) * (longlong)iVar9) /
                          (longlong)*(int *)(pSVar15 + 8));
                *(int *)(pSVar15 + 8) = iVar9;
                engine_matrix_c_projectTransformedPoint_FUN_004e5590(pSVar15);
              }
              iVar8 = iVar8 + 0x30;
            } while (iVar8 != 0x180);
            iVar8 = 0;
            fStack_390 = 1.0;
            do {
              if (((byte)DAT_005f2afc->vertex_buffer_ptr[iVar8 + 0x13] & 0x80) != 0) {
                dVar3 = _DAT_005d0ca6;
                if (0 < *(int *)(DAT_005f2afc->vertex_buffer_ptr + iVar8 + 8)) {
                  dVar3 = _DAT_005d0c9e;
                }
                fStack_390 = fStack_390 * (float)dVar3;
              }
              iVar8 = iVar8 + 0x30;
            } while (iVar8 != 0x180);
            iVar8 = 0;
            iStack_74 = 0;
            if (0 < _DAT_02701910) {
              iStack_18 = 0;
              piStack_2c = (int *)(&DAT_0212551c + iStack_8c * 0x3000);
              iStack_14 = 0x2703854;
              pfStack_44 = (float *)&pCStack_88->field_0x100;
              do {
                pCStack_54 = *(CDemonActor **)(&DAT_02701914 + iStack_18);
                fVar5 = (pCStack_54->location).position.x - *pfStack_44;
                fVar2 = (pCStack_54->location).position.y - pfStack_44[1];
                fVar1 = (pCStack_54->location).position.z - pfStack_44[2];
                if (fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= fStack_40) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(pCStack_54);
                  uStack_50 = 0x800000ff;
                  uStack_4c = 0;
                  iStack_48 = 0;
                  iStack_1c = 0x180;
                  iStack_30 = iStack_14;
                  do {
                    core_box_cpp_FUN_0041d8b0(iStack_30,iStack_48);
                    fStack_178 = fStack_16c;
                    afStack_18c[(uint)bVar22 * -2 + 6] = afStack_18c[(uint)bVar22 * -2 + 9];
                    iVar24 = iStack_1c;
                    afStack_18c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 7] =
                         afStack_18c[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 10];
                    CStack_118.x = (int)ROUND(fStack_178 * _DAT_005e3ce0);
                    CStack_118.y = (int)ROUND(fStack_174 * _DAT_005e3ce0);
                    CStack_118.z = (int)ROUND(fStack_170 * _DAT_005e3ce0);
                    engine_special_cpp_FUN_005632a3
                              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + iStack_1c),
                               &CStack_118);
                    iStack_1c = iVar24 + 0x30;
                    uStack_50 = uStack_50 &
                                *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar24 + 0x10);
                    uStack_4c = uStack_4c |
                                *(uint *)(DAT_005f2afc->vertex_buffer_ptr + iVar24 + 0x10);
                    iStack_48 = iStack_48 + 1;
                  } while (iStack_48 < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_54);
                  if (((uStack_50 & 0x80000000) == 0) || ((char)uStack_50 == '\0')) {
                    if (iStack_74 == 0) {
                      piVar18 = piStack_2c;
                      piVar21 = (int *)&DAT_02122514;
                      for (iVar24 = 0xc00; iVar24 != 0; iVar24 = iVar24 + -1) {
                        *piVar21 = *piVar18;
                        piVar18 = piVar18 + (uint)bVar22 * -2 + 1;
                        piVar21 = piVar21 + (uint)bVar22 * -2 + 1;
                      }
                      for (iVar24 = 0; iVar24 != 0; iVar24 = iVar24 + -1) {
                        *(char *)piVar21 = (char)*piVar18;
                        piVar18 = (int *)((int)piVar18 + (uint)bVar22 * -2 + 1);
                        piVar21 = (int *)((int)piVar21 + (uint)bVar22 * -2 + 1);
                      }
                      puVar10 = &DAT_02122514;
                      iStack_74 = 1;
                      iVar24 = 0;
                      do {
                        *(byte **)(&DAT_01c60dac + iVar24) = puVar10;
                        iVar24 = iVar24 + 4;
                        puVar10 = puVar10 + 0x100;
                      } while (iVar24 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460
                                (DAT_005f2afc,1);
                    }
                    SStack_260.base.count = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                              (DAT_005f2afc,(uint)((uStack_4c & 0x80000000) != 0));
                    uStack_248 = 8;
                    uStack_244 = 0xc;
                    uStack_240 = 0xe;
                    uStack_23c = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,&SStack_260);
                    uStack_248 = 9;
                    uStack_244 = 0xb;
                    uStack_240 = 0xf;
                    uStack_23c = 0xd;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,&SStack_260);
                    uStack_244 = 9;
                    uStack_240 = 0xd;
                    uStack_248 = 8;
                    uStack_23c = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,&SStack_260);
                    uStack_240 = 0xf;
                    uStack_248 = 10;
                    uStack_244 = 0xe;
                    uStack_23c = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,&SStack_260);
                    uStack_248 = 8;
                    uStack_23c = 9;
                    uStack_244 = 10;
                    uStack_240 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,&SStack_260);
                    uStack_248 = 0xc;
                    uStack_244 = 0xd;
                    uStack_240 = 0xf;
                    uStack_23c = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (DAT_005f2afc,&SStack_260);
                  }
                }
                iStack_18 = iStack_18 + 4;
                iStack_14 = iStack_14 + 0x18;
                iVar8 = iVar8 + 1;
              } while (iVar8 < _DAT_02701910);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
            if (iStack_74 == 0) {
              puVar10 = &DAT_0212551c + iStack_8c * 0x3000;
              iVar8 = 0;
              do {
                *(byte **)(&DAT_01c60dac + iVar8) = puVar10;
                iVar8 = iVar8 + 4;
                puVar10 = puVar10 + 0x100;
              } while (iVar8 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                      (DAT_005f2afc,(uint)((uStack_7c & 0x80000000) != 0));
            iStack_70 = 0;
            if (0 < iStack_78) {
              iVar8 = iStack_78 * 4;
              iVar24 = 0;
              do {
                iVar9 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
                                  (DAT_005f2afc,*(SMRGLPrimitivePoly **)((int)auStack_1d8 + iVar24))
                ;
                iVar24 = iVar24 + 4;
                iStack_70 = iStack_70 + iVar9;
              } while (iVar24 < iVar8);
            }
            if (*(int *)&g_CGamePtr->field_0x20c != 0) {
              puVar11 = (uint *)(iStack_8c * 0x3000 + 0x241351c);
              iVar8 = 0;
              do {
                iVar9 = iVar8 + 4;
                puVar16 = *(uint **)(&DAT_01c60dac + iVar8);
                puVar20 = puVar11;
                for (iVar24 = 0x40; iVar24 != 0; iVar24 = iVar24 + -1) {
                  *puVar20 = *puVar16;
                  puVar16 = puVar16 + (uint)bVar22 * -2 + 1;
                  puVar20 = puVar20 + (uint)bVar22 * -2 + 1;
                }
                for (iVar24 = 0; iVar24 != 0; iVar24 = iVar24 + -1) {
                  *(byte *)puVar20 = *(byte *)puVar16;
                  puVar16 = (uint *)((int)puVar16 + (uint)bVar22 * -2 + 1);
                  puVar20 = (uint *)((int)puVar20 + (uint)bVar22 * -2 + 1);
                }
                *(uint **)(&DAT_01c60dac + iVar8) = puVar11;
                puVar11 = puVar11 + 0x40;
                iVar8 = iVar9;
              } while (iVar9 != 0xc0);
              iVar8 = 0;
              pSVar17 = pSStack_90;
              if (0 < iStack_78) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                            (DAT_005f2afc,pSVar17);
                  iVar8 = iVar8 + 1;
                  pSVar17 = pSVar17 + 0x48;
                } while (iVar8 < iStack_78);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
            fStack_84 = (float)iStack_70 * fStack_390;
            fVar5 = fStack_84;
          }
          else {
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_94);
            fStack_84 = 0.0;
            fVar5 = fStack_84;
          }
        }
      }
    }
    else {
      fVar5 = -99999.9;
    }
    if ((param_3 == 0) && (0.0 < fVar5)) {
      if (_DAT_02125514 == param_1->selected_camera_index) {
        fVar5 = fVar5 * (float)_DAT_005d0cae;
      }
      if (_DAT_02125514 == param_1->previous_best_camera_index) {
        fVar5 = fVar5 * (float)_DAT_005d0cb6;
      }
    }
    *(float *)(&DAT_02701528 + _DAT_02125514 * 4) = fVar5;
    iStack_b8 = iStack_b8 + -1;
    _DAT_02125514 = _DAT_02125514 + 1;
  }
  iVar8 = 0;
  do {
    iVar24 = iVar8 + 4;
    *(uint *)(&DAT_01c60dac + iVar8) = *(uint *)(&stack0xfffffc74 + iVar8);
    iVar8 = iVar24;
  } while (iVar24 != 0xc0);
  engine_matrix_c_popViewport_FUN_0046d320();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,iStack_5c);
  _DAT_01c6cee8 = uStack_b0;
  if (param_1->camera_count <= _DAT_02125514) {
    iVar8 = -1;
    iVar24 = 0;
    fVar5 = -1.0;
    if (0 < param_1->camera_count) {
      iVar9 = 0;
      do {
        if (fVar5 < *(float *)(&DAT_02701528 + iVar9)) {
          fVar5 = *(float *)(&DAT_02701528 + iVar9);
          iVar8 = iVar24;
        }
        iVar24 = iVar24 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar24 < param_1->camera_count);
    }
    if (-1 < iVar8) {
      if ((param_1->selected_camera_index < 0) ||
         (1 < param_3 || iVar8 != param_1->selected_camera_index && 0.0 < fVar5)) {
        param_1->last_switch_area_invalid = _DAT_0270f3d4;
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890(param_1,iVar8);
        uStack_bc = 1;
      }
    }
    _DAT_02125514 = 0;
  }
  return uStack_bc;
}
