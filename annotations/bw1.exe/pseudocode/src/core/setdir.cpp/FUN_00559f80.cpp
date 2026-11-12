// Name: core_setdir.cpp_FUN_00559f80
// Address: 00559f80
// Address Range: [[00559f80, 0055b1d5]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_00559f80(CDemonSet *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_setdir_cpp_FUN_00559f80(CDemonSet *param_1,CDemonActor *param_2,int param_3)

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
  uint *puVar15;
  SMRGLPrimitivePoly *pSVar16;
  int *piVar17;
  CBoundingBox3D *pCVar18;
  CVector3i *input;
  uint *puVar19;
  int *piVar20;
  byte bVar21;
  float10 fVar22;
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
  CVector3f *pCStack_44;
  float fStack_40;
  int iStack_30;
  int *piStack_2c;
  CVector3f *pCStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iVar23;
  
  bVar21 = 0;
  afStack_d8[3] = 0.0;
  if (param_2 == (CDemonActor *)0x0) {
    if (param_1->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(param_1,0);
    }
    return 1;
  }
  if (param_1->selected_camera_index < 0) {
    param_1->pending_camera_index = -1;
    param_1->camera_switch_cooldown = 0.0;
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_00559fef;
  if (0.0 < param_1->camera_switch_cooldown) {
    fVar5 = param_1->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    param_1->camera_switch_cooldown = fVar5;
    if (0.0 < fVar5) {
      if ((-1 < param_1->pending_camera_index) &&
         (param_1->pending_camera_index != param_1->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(param_1,param_1->pending_camera_index);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_00559fef:
  this_ptr_00 = DAT_00612560;
  param_1->camera_switch_cooldown = 0.0;
  local_c0 = _DAT_01c50948;
  _DAT_01c50948 = 0;
  local_6c = (float)engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(DAT_00612560,0);
  engine_drender_cpp_FUN_00483c10(DAT_00612560,0,0,0x40,0x30);
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffffc58);
  iVar23 = 0;
  piStack_2c = aiStack_2d4;
  pfVar13 = afStack_1f8;
  pfVar14 = &fStack_210;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar21 * -2 + 1;
    pfVar14 = pfVar14 + (uint)bVar21 * -2 + 1;
  }
  do {
    core_box_cpp_FUN_00420570(&fStack_210,iVar23);
    afStack_d8[0] = fStack_f0;
    afStack_d8[(uint)bVar21 * -2 + 1] = afStack_108[(uint)bVar21 * -2 + 7];
    afStack_d8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 2] =
         afStack_108[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 8];
    *piStack_2c = (int)ROUND(afStack_d8[0] * _DAT_00605120);
    piStack_2c[1] = (int)ROUND(afStack_d8[1] * _DAT_00605120);
    piStack_2c[2] = (int)ROUND(afStack_d8[2] * _DAT_00605120);
    iVar23 = iVar23 + 1;
    piStack_2c = piStack_2c + 3;
  } while (iVar23 < 8);
  afStack_144[3] = fStack_210 + fStack_204;
  fStack_134 = fStack_20c + local_200;
  fStack_130 = fStack_208 + fStack_1fc;
  fStack_15c = fStack_210 + fStack_204;
  afStack_18c[(uint)bVar21 * -2 + 0xd] = afStack_144[(uint)bVar21 * -2 + 4];
  afStack_18c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xe] =
       afStack_144[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5];
  fStack_168 = fStack_15c * _DAT_005f0fdd;
  fStack_164 = fStack_158 * _DAT_005f0fdd;
  fStack_160 = fStack_154 * _DAT_005f0fdd;
  afStack_108[3] = fStack_15c * _DAT_005f0fdd;
  afStack_108[(uint)bVar21 * -2 + 4] = afStack_18c[(uint)bVar21 * -2 + 10];
  afStack_108[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 5] =
       afStack_18c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 0xb];
  iStack_274 = (int)ROUND(afStack_108[3] * _DAT_00605120);
  iStack_270 = (int)ROUND(fStack_f8 * _DAT_00605120);
  iStack_26c = (int)ROUND(fStack_f4 * _DAT_00605120);
  puVar10 = &DAT_00622fdc;
  do {
    iVar8 = *(int *)(puVar10 + 0x18);
    puVar4 = puVar10 + 0x48;
    *(int *)(puVar10 + 0x14) =
         aCStack_2cc[iVar8 + -1].z * *(int *)(puVar10 + 0xc) +
         *(int *)(puVar10 + 8) * aiStack_2d4[iVar8 * 3] +
         *(int *)(puVar10 + 0x10) * aCStack_2cc[iVar8].x;
    puVar10 = puVar4;
  } while (puVar4 != &DAT_0062318c);
  if (param_3 == 0) {
    fVar22 = (float10)(param_1->camera_count * 10) * (float10)g_CGamePtr->delta_time_float;
    round();
    local_c0 = (int)ROUND(fVar22);
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
    _DAT_020b28ec = 0;
    param_1->previous_best_camera_timer = 0.0;
  }
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffffc60);
  pfVar13 = afStack_1c0;
  pCVar18 = &CStack_1a8;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pCVar18->min).x = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar21 * -2 + 1;
    pCVar18 = (CBoundingBox3D *)((int)pCVar18 + ((uint)bVar21 * -2 + 1) * 4);
  }
  fVar5 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421620(&CStack_1a8);
  pfVar13 = &fStack_190;
  fStack_58 = fVar5 * (float)_DAT_005f0fe5 + 1.0;
  pfVar14 = (float *)((int)param_2 + (uint)bVar21 * -8 + 0x24);
  fStack_190 = (param_2->location).position.x;
  afStack_18c[(uint)bVar21 * -2] = *pfVar14;
  afStack_18c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] = pfVar14[(uint)bVar21 * -2 + 1];
  afStack_18c[0] = afStack_18c[0] + _DAT_005f0fed;
  uVar6 = core_setdir_cpp_FUN_0055c060(param_1,pfVar13);
  fStack_148 = CStack_1a8.min.x + CStack_1a8.max.x;
  afStack_144[0] = CStack_1a8.min.y + CStack_1a8.max.y;
  afStack_144[1] = CStack_1a8.min.z + CStack_1a8.max.z;
  fStack_10c = CStack_1a8.min.x + CStack_1a8.max.x;
  afStack_108[(uint)bVar21 * -2] = afStack_144[(uint)bVar21 * -2];
  afStack_108[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
       afStack_144[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
  uStack_b4 = uVar6;
  pfVar13 = afStack_108 + 0xb;
  afStack_108[2] = fStack_10c * _DAT_005f0fdd;
  afStack_108[3] = afStack_108[0] * _DAT_005f0fdd;
  fStack_f8 = afStack_108[1] * _DAT_005f0fdd;
  fStack_dc = fStack_10c * _DAT_005f0fdd;
  afStack_d8[(uint)bVar21 * -2] = afStack_108[(uint)bVar21 * -2 + 3];
  afStack_d8[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1] =
       afStack_108[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
  core_actor_cpp_FUN_00408b40(param_2,pfVar13);
  afStack_144[2] = afStack_18c[2];
  afStack_144[(uint)bVar21 * -2 + 3] = afStack_18c[(uint)bVar21 * -2 + 3];
  afStack_144[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4] =
       afStack_18c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 4];
  if (&fStack_190 != afStack_144 + 2) {
    fStack_190 = afStack_144[2];
    afStack_18c[0] = afStack_144[3];
    afStack_18c[1] = fStack_134;
  }
  if (uStack_b4 != _DAT_020b28f0) {
    iStack_b8 = param_1->camera_count;
    param_3 = 1;
    param_1->previous_best_camera_index = -1;
    _DAT_020b28ec = 0;
    param_1->previous_best_camera_timer = 0.0;
  }
  _DAT_020b28f0 = uStack_b4;
  _DAT_0269c7ac = (uint)(uStack_b4 == 0xffffffff);
  iVar8 = 0;
  do {
    iVar23 = iVar8 + 4;
    *(uint *)(&stack0xfffffc74 + iVar8) = *(uint *)(&DAT_01c4480c + iVar8);
    iVar8 = iVar23;
  } while (iVar23 != 0xc0);
  _DAT_0268ece8 = 0;
  iStack_20 = 0;
  pfStack_a8 = (float *)(_DAT_0060513c * _DAT_0060513c);
  pCStack_ac = &param_2->location;
  for (iVar8 = 0; iVar8 < g_CDemonSetPtr->actor_count; iVar8 = iVar8 + 1) {
    this_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_20);
    iVar23 = (*((this_ptr->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr);
    if (((iVar23 != 0) && (this_ptr != param_2)) &&
       (fVar5 = (this_ptr->location).position.x - *pfStack_a8,
       fVar2 = (this_ptr->location).position.y - pfStack_a8[1],
       fVar1 = (this_ptr->location).position.z - pfStack_a8[2],
       fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= fStack_a4)) {
      *(CDemonActor **)(&DAT_0268ecec + _DAT_0268ece8 * 4) = this_ptr;
      (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_fffffc6c);
      iVar9 = _DAT_0268ece8 * 0x18;
      puVar11 = auStack_22c;
      puVar15 = &uStack_214;
      for (iVar23 = 6; iVar23 != 0; iVar23 = iVar23 + -1) {
        *puVar15 = *puVar11;
        puVar11 = puVar11 + (uint)bVar21 * -2 + 1;
        puVar15 = puVar15 + (uint)bVar21 * -2 + 1;
      }
      if ((uint *)(iVar9 + 0x2690c2c) != &uStack_214) {
        *(uint *)(iVar9 + 0x2690c2c) = uStack_214;
        *(float *)(iVar9 + 0x2690c30) = fStack_210;
        *(float *)(iVar9 + 0x2690c34) = fStack_20c;
      }
      if ((float *)(iVar9 + 0x2690c38) != &fStack_208) {
        *(float *)(iVar9 + 0x2690c38) = fStack_208;
        *(float *)(iVar9 + 0x2690c3c) = fStack_204;
        *(float *)(iVar9 + 0x2690c40) = local_200;
      }
      _DAT_0268ece8 = _DAT_0268ece8 + 1;
    }
    iStack_20 = iStack_20 + 4;
  }
  pCStack_28 = &(param_2->location).position;
  fStack_40 = _DAT_0060513c * _DAT_0060513c;
  local_6c = _DAT_00605138 * _DAT_00605138;
  pCStack_98 = param_1->cameras;
  while ((0 < iStack_b8 && (_DAT_020b28ec < param_1->camera_count))) {
    uVar6 = param_1->cameras[_DAT_020b28ec].vdir_zone;
    if (uStack_b4 == uVar6) {
      pCStack_94 = param_2;
      pCVar12 = pCStack_98 + _DAT_020b28ec;
      pSStack_90 = (SMRGLPrimitivePoly *)&DAT_00622fdc;
      iStack_8c = _DAT_020b28ec;
      pCStack_88 = pCVar12;
      if ((pCVar12->enabled == 0) ||
         (fVar5 = (pCVar12->position).x - ((CVector3f *)&pCStack_28->x)->x,
         fVar2 = (pCVar12->position).y - pCStack_28->y,
         fVar1 = (pCVar12->position).z - pCStack_28->z,
         local_6c < fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5)) {
        fStack_84 = (float)(uStack_b4 ^ uVar6);
        fVar5 = fStack_84;
      }
      else {
        fVar5 = (float)core_setutil_cpp_FUN_0055c6f0(pCVar12,pCStack_28,fStack_58);
        if (fVar5 == 0.0) {
          fStack_84 = fVar5;
          fVar5 = fStack_84;
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
                    (DAT_00612560,&pCVar12->position);
          engine_drender_cpp_FUN_004839b0(DAT_00612560,pCVar12->projection_scale);
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
                    (DAT_00612560,&pCVar12->orientation);
          uStack_80 = 0x800000ff;
          uStack_7c = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                    (DAT_00612560,pCStack_28);
          CStack_124.x = (param_2->orient).vec.x;
          CStack_124.z = (param_2->orient).vec.z;
          CStack_124.y = (pCVar12->orientation).y;
          input = aCStack_2cc;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (DAT_00612560,&CStack_124,(CVector3f *)0x0);
          iVar8 = 0;
          do {
            engine_special_cpp_FUN_00580173
                      ((SProjectedVertex *)
                       ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iVar8),input);
            iVar23 = iVar8 + 0x30;
            input = input + 1;
            uVar6 = *(uint *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x +
                             iVar8);
            uStack_80 = uStack_80 & uVar6;
            uStack_7c = uStack_7c | uVar6;
            iVar8 = iVar23;
          } while (iVar23 != 0x180);
          if (((uStack_80 & 0x80000000) == 0) || ((char)uStack_80 == '\0')) {
            iVar8 = 0;
            pSVar16 = pSStack_90 + 3;
            iStack_78 = 0;
            pSVar7 = pSStack_90;
            do {
              *(SMRGLPrimitivePoly **)((int)auStack_1d8 + iVar8) = pSVar7;
              iVar8 = iVar8 + 4;
              iStack_78 = iStack_78 + 1;
              pSVar7 = (SMRGLPrimitivePoly *)(pSVar7->vertices + 4);
            } while (pSVar7 != (SMRGLPrimitivePoly *)(pSVar16->vertices + 4));
            iVar8 = 0;
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(pCStack_94);
            do {
              piVar17 = (int *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).
                                      transformed_x + iVar8);
              iVar23 = piVar17[2];
              if (0 < iVar23) {
                iVar9 = iVar23 + 0x80;
                *piVar17 = (int)(((longlong)*piVar17 * (longlong)iVar9) / (longlong)iVar23);
                piVar17[1] = (int)(((longlong)piVar17[1] * (longlong)iVar9) / (longlong)piVar17[2]);
                piVar17[2] = iVar9;
                engine_matrix_c_projectTransformedPoint_FUN_00507b50(piVar17);
              }
              iVar8 = iVar8 + 0x30;
            } while (iVar8 != 0x180);
            iVar8 = 0;
            fStack_390 = 1.0;
            do {
              if ((*(byte *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x +
                            iVar8 + 3) & 0x80) != 0) {
                dVar3 = _DAT_005f0ffd;
                if (0 < *(int *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).
                                       transformed_z + iVar8)) {
                  dVar3 = _DAT_005f0ff5;
                }
                fStack_390 = fStack_390 * (float)dVar3;
              }
              iVar8 = iVar8 + 0x30;
            } while (iVar8 != 0x180);
            iVar8 = 0;
            iStack_74 = 0;
            if (0 < _DAT_0268ece8) {
              iStack_18 = 0;
              piStack_2c = (int *)(&DAT_020b28f4 + iStack_8c * 0x3000);
              iStack_14 = 0x2690c2c;
              pCStack_44 = &pCStack_88->position;
              do {
                pCStack_54 = *(CDemonActor **)(&DAT_0268ecec + iStack_18);
                fVar5 = (pCStack_54->location).position.x - pCStack_44->x;
                fVar2 = (pCStack_54->location).position.y - pCStack_44->y;
                fVar1 = (pCStack_54->location).position.z - pCStack_44->z;
                if (fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= fStack_40) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(pCStack_54);
                  uStack_50 = 0x800000ff;
                  uStack_4c = 0;
                  iStack_48 = 0;
                  iStack_1c = 0x180;
                  iStack_30 = iStack_14;
                  do {
                    core_box_cpp_FUN_00420570(iStack_30,iStack_48);
                    fStack_178 = fStack_16c;
                    afStack_18c[(uint)bVar21 * -2 + 6] = afStack_18c[(uint)bVar21 * -2 + 9];
                    iVar23 = iStack_1c;
                    afStack_18c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 7] =
                         afStack_18c[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 10];
                    CStack_118.x = (int)ROUND(fStack_178 * _DAT_00605120);
                    CStack_118.y = (int)ROUND(fStack_174 * _DAT_00605120);
                    CStack_118.z = (int)ROUND(fStack_170 * _DAT_00605120);
                    engine_special_cpp_FUN_00580173
                              ((SProjectedVertex *)
                               ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).
                                      transformed_x + iStack_1c),&CStack_118);
                    iStack_1c = iVar23 + 0x30;
                    uVar6 = *(uint *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).
                                            screen_x + iVar23);
                    uStack_50 = uStack_50 & uVar6;
                    uStack_4c = uStack_4c | uVar6;
                    iStack_48 = iStack_48 + 1;
                  } while (iStack_48 < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(pCStack_54);
                  if (((uStack_50 & 0x80000000) == 0) || ((char)uStack_50 == '\0')) {
                    if (iStack_74 == 0) {
                      piVar17 = piStack_2c;
                      piVar20 = (int *)&DAT_020af8ec;
                      for (iVar23 = 0xc00; iVar23 != 0; iVar23 = iVar23 + -1) {
                        *piVar20 = *piVar17;
                        piVar17 = piVar17 + (uint)bVar21 * -2 + 1;
                        piVar20 = piVar20 + (uint)bVar21 * -2 + 1;
                      }
                      for (iVar23 = 0; iVar23 != 0; iVar23 = iVar23 + -1) {
                        *(char *)piVar20 = (char)*piVar17;
                        piVar17 = (int *)((int)piVar17 + (uint)bVar21 * -2 + 1);
                        piVar20 = (int *)((int)piVar20 + (uint)bVar21 * -2 + 1);
                      }
                      puVar10 = &DAT_020af8ec;
                      iStack_74 = 1;
                      iVar23 = 0;
                      do {
                        *(byte **)(&DAT_01c4480c + iVar23) = puVar10;
                        iVar23 = iVar23 + 4;
                        puVar10 = puVar10 + 0x100;
                      } while (iVar23 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80
                                (DAT_00612560,1);
                    }
                    SStack_260.base.count = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
                              (DAT_00612560,(uint)((uStack_4c & 0x80000000) != 0));
                    uStack_248 = 8;
                    uStack_244 = 0xc;
                    uStack_240 = 0xe;
                    uStack_23c = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_260);
                    uStack_248 = 9;
                    uStack_244 = 0xb;
                    uStack_240 = 0xf;
                    uStack_23c = 0xd;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_260);
                    uStack_244 = 9;
                    uStack_240 = 0xd;
                    uStack_248 = 8;
                    uStack_23c = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_260);
                    uStack_240 = 0xf;
                    uStack_248 = 10;
                    uStack_244 = 0xe;
                    uStack_23c = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_260);
                    uStack_248 = 8;
                    uStack_23c = 9;
                    uStack_244 = 10;
                    uStack_240 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_260);
                    uStack_248 = 0xc;
                    uStack_244 = 0xd;
                    uStack_240 = 0xf;
                    uStack_23c = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_260);
                  }
                }
                iStack_18 = iStack_18 + 4;
                iStack_14 = iStack_14 + 0x18;
                iVar8 = iVar8 + 1;
              } while (iVar8 < _DAT_0268ece8);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
            if (iStack_74 == 0) {
              puVar10 = &DAT_020b28f4 + iStack_8c * 0x3000;
              iVar8 = 0;
              do {
                *(byte **)(&DAT_01c4480c + iVar8) = puVar10;
                iVar8 = iVar8 + 4;
                puVar10 = puVar10 + 0x100;
              } while (iVar8 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
                      (DAT_00612560,(uint)((uStack_7c & 0x80000000) != 0));
            iStack_70 = 0;
            if (0 < iStack_78) {
              iVar8 = iStack_78 * 4;
              iVar23 = 0;
              do {
                iVar9 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
                                  (DAT_00612560,*(SMRGLPrimitivePoly **)((int)auStack_1d8 + iVar23))
                ;
                iVar23 = iVar23 + 4;
                iStack_70 = iStack_70 + iVar9;
              } while (iVar23 < iVar8);
            }
            if (g_CGamePtr->debug_toggle_flag != 0) {
              puVar11 = (uint *)(iStack_8c * 0x3000 + 0x23a08f4);
              iVar8 = 0;
              do {
                iVar9 = iVar8 + 4;
                puVar15 = *(uint **)(&DAT_01c4480c + iVar8);
                puVar19 = puVar11;
                for (iVar23 = 0x40; iVar23 != 0; iVar23 = iVar23 + -1) {
                  *puVar19 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar21 * -2 + 1;
                  puVar19 = puVar19 + (uint)bVar21 * -2 + 1;
                }
                for (iVar23 = 0; iVar23 != 0; iVar23 = iVar23 + -1) {
                  *(byte *)puVar19 = *(byte *)puVar15;
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar21 * -2 + 1);
                  puVar19 = (uint *)((int)puVar19 + (uint)bVar21 * -2 + 1);
                }
                *(uint **)(&DAT_01c4480c + iVar8) = puVar11;
                puVar11 = puVar11 + 0x40;
                iVar8 = iVar9;
              } while (iVar9 != 0xc0);
              iVar8 = 0;
              pSVar16 = pSStack_90;
              if (0 < iStack_78) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
                            (DAT_00612560,pSVar16);
                  iVar8 = iVar8 + 1;
                  pSVar16 = (SMRGLPrimitivePoly *)(pSVar16->vertices + 4);
                } while (iVar8 < iStack_78);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
            fStack_84 = (float)iStack_70 * fStack_390;
            fVar5 = fStack_84;
          }
          else {
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(pCStack_94);
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
      if (_DAT_020b28ec == param_1->selected_camera_index) {
        fVar5 = fVar5 * (float)_DAT_005f1005;
      }
      if (_DAT_020b28ec == param_1->previous_best_camera_index) {
        fVar5 = fVar5 * (float)_DAT_005f100d;
      }
    }
    *(float *)(&DAT_0268e900 + _DAT_020b28ec * 4) = fVar5;
    iStack_b8 = iStack_b8 + -1;
    _DAT_020b28ec = _DAT_020b28ec + 1;
  }
  iVar8 = 0;
  do {
    iVar23 = iVar8 + 4;
    *(uint *)(&DAT_01c4480c + iVar8) = *(uint *)(&stack0xfffffc74 + iVar8);
    iVar8 = iVar23;
  } while (iVar23 != 0xc0);
  engine_drender_cpp_popViewport_FUN_00483c40();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(DAT_00612560,iStack_5c);
  _DAT_01c50948 = uStack_b0;
  if (param_1->camera_count <= _DAT_020b28ec) {
    iVar8 = -1;
    iVar23 = 0;
    fVar5 = -1.0;
    if (0 < param_1->camera_count) {
      iVar9 = 0;
      do {
        if (fVar5 < *(float *)(&DAT_0268e900 + iVar9)) {
          fVar5 = *(float *)(&DAT_0268e900 + iVar9);
          iVar8 = iVar23;
        }
        iVar23 = iVar23 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar23 < param_1->camera_count);
    }
    if (-1 < iVar8) {
      if ((param_1->selected_camera_index < 0) ||
         (1 < param_3 || iVar8 != param_1->selected_camera_index && 0.0 < fVar5)) {
        param_1->last_switch_area_invalid = _DAT_0269c7ac;
        core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(param_1,iVar8);
        uStack_bc = 1;
      }
    }
    _DAT_020b28ec = 0;
  }
  return uStack_bc;
}
