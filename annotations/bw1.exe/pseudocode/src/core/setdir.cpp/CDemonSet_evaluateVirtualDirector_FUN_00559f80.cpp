// Name: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_00559f80
// Address: 00559f80
// Address Range: [[00559f80, 0055b1d5]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00559f80(CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_00559f80(CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_01;
  byte *puVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  SMRGLPrimitivePoly *pSVar7;
  int iVar8;
  int iVar9;
  byte *puVar10;
  C3DSCamera *this_ptr_02;
  float *pfVar11;
  uint *puVar12;
  SProjectedVertex *point;
  uint *puVar13;
  SMRGLPrimitivePoly *pSVar14;
  CVector3i *input;
  uint *puVar15;
  byte bVar16;
  double dVar17;
  float afStackY_117c [880];
  CBoundingBox3D *in_stack_fffffc58;
  CBoundingBox3D *pCVar18;
  CVector3f *pCVar19;
  CBoundingBox3D *in_stack_fffffc68;
  float fStack_394;
  int iStack_2d4;
  CVector3i aCStack_2d0 [7];
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  SMRGLHeaderPrimitive SStack_264;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint uStack_240;
  uint auStack_230 [6];
  uint uStack_218;
  uint uStack_214;
  CBoundingBox3D CStack_210;
  float afStack_1f8 [7];
  uint auStack_1dc [6];
  float afStack_1c4 [6];
  CBoundingBox3D CStack_1ac;
  CVector3f CStack_194;
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [2];
  CVector3f CStack_170;
  float afStack_164 [4];
  float fStack_154;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  CVector3f CStack_140;
  float fStack_134;
  float fStack_130;
  CVector3f CStack_128;
  CVector3i CStack_11c;
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  CVector3f CStack_e0;
  float afStack_d4 [4];
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  CLocation *pCStack_b0;
  float *pfStack_ac;
  float fStack_a8;
  C3DSCamera *pCStack_9c;
  CDemonActor *pCStack_98;
  SMRGLPrimitivePoly *pSStack_94;
  int iStack_90;
  C3DSCamera *pCStack_8c;
  float fStack_88;
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float fStack_70;
  int local_6c;
  int iStack_60;
  float fStack_5c;
  CDemonActor *pCStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  CVector3f *pCStack_48;
  float fStack_44;
  CBoundingBox3D *pCStack_34;
  uint *puStack_30;
  CVector3f *pCStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  CBoundingBox3D *pCStack_18;
  int iStack_14;
  CBoundingBox3D *corner_index;
  
  bVar16 = 0;
  afStack_d4[2] = 0.0;
  if (actor == (CDemonActor *)0x0) {
    if (this_ptr->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(this_ptr,0);
    }
    return 1;
  }
  if (this_ptr->selected_camera_index < 0) {
    this_ptr->pending_camera_index = -1;
    this_ptr->camera_switch_cooldown = 0.0;
    force_evaluation_mode = 1;
  }
  else if (1 < force_evaluation_mode) goto LAB_00559fef;
  if (0.0 < this_ptr->camera_switch_cooldown) {
    fVar4 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar4;
    if (0.0 < fVar4) {
      if ((-1 < this_ptr->pending_camera_index) &&
         (this_ptr->pending_camera_index != this_ptr->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(this_ptr,this_ptr->pending_camera_index);
        return 1;
      }
      return 0;
    }
    force_evaluation_mode = 1;
  }
LAB_00559fef:
  this_ptr_01 = DAT_00612560;
  this_ptr->camera_switch_cooldown = 0.0;
  local_c0 = _DAT_01c50948;
  _DAT_01c50948 = 0;
  local_6c = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00483c10(DAT_00612560,0,0,0x40,0x30);
  (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffc58);
  corner_index = (CBoundingBox3D *)0x0;
  pCStack_2c = (CVector3f *)&iStack_2d4;
  pfVar11 = afStack_1f8;
  pCVar18 = &CStack_210;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pCVar18->min).x = *pfVar11;
    pfVar11 = pfVar11 + (uint)bVar16 * -2 + 1;
    pCVar18 = (CBoundingBox3D *)((int)pCVar18 + ((uint)bVar16 * -2 + 1) * 4);
  }
  do {
    pCVar18 = corner_index;
    core_box_cpp_CBoundingBox3D_getCorner_FUN_00420570(&CStack_210,(uint)corner_index,&CStack_f0);
    CStack_e0.z = CStack_f0.x;
    afStack_d4[(uint)bVar16 * -2] = *(float *)((int)&CStack_f0 + (uint)bVar16 * -8 + 4);
    afStack_d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         *(float *)((int)&CStack_f0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    *(int *)pCStack_2c = (int)ROUND(CStack_e0.z * _DAT_00605120);
    *(int *)((int)pCStack_2c + 4) = (int)ROUND(afStack_d4[0] * _DAT_00605120);
    *(int *)((int)pCStack_2c + 8) = (int)ROUND(afStack_d4[1] * _DAT_00605120);
    corner_index = (CBoundingBox3D *)((int)&(corner_index->min).x + 1);
    pCStack_2c = (CVector3f *)((int)pCStack_2c + 0xc);
  } while ((int)corner_index < 8);
  CStack_140.z = CStack_210.min.x + CStack_210.max.x;
  fStack_134 = CStack_210.min.y + CStack_210.max.y;
  fStack_130 = CStack_210.min.z + CStack_210.max.z;
  afStack_164[2] = CStack_210.min.x + CStack_210.max.x;
  afStack_164[(uint)bVar16 * -2 + 3] = afStack_164[(uint)bVar16 * -2 + 0xc];
  afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
       afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
  CStack_170.z = afStack_164[2] * _DAT_005f0fdd;
  afStack_164[0] = afStack_164[3] * _DAT_005f0fdd;
  afStack_164[1] = fStack_154 * _DAT_005f0fdd;
  fStack_fc = afStack_164[2] * _DAT_005f0fdd;
  afStack_10c[(uint)bVar16 * -2 + 5] = afStack_164[(uint)bVar16 * -2];
  afStack_10c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 6] =
       afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
  iStack_274 = (int)ROUND(fStack_fc * _DAT_00605120);
  iStack_270 = (int)ROUND(fStack_f8 * _DAT_00605120);
  iStack_26c = (int)ROUND(fStack_f4 * _DAT_00605120);
  puVar10 = &DAT_00622fdc;
  do {
    iVar8 = *(int *)(puVar10 + 0x18);
    puVar3 = puVar10 + 0x48;
    *(int *)(puVar10 + 0x14) =
         aCStack_2d0[iVar8].x * *(int *)(puVar10 + 0xc) +
         *(int *)(puVar10 + 8) * (&iStack_2d4)[iVar8 * 3] +
         *(int *)(puVar10 + 0x10) * aCStack_2d0[iVar8].y;
    puVar10 = puVar3;
  } while (puVar3 != &DAT_0062318c);
  if (force_evaluation_mode == 0) {
    pCVar18 = (CBoundingBox3D *)0x55a6b3;
    dVar17 = round
                       ((double)((float)(this_ptr->camera_count * 10) * g_CGamePtr->delta_time_float
                                ));
    iStack_c4 = (int)ROUND(dVar17);
    if (iStack_c4 < 3) {
      iStack_c4 = 3;
    }
    if (this_ptr->camera_count < iStack_c4) {
      iStack_c4 = this_ptr->camera_count;
    }
    fVar4 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar4;
    if (fVar4 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    local_c0 = this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    _DAT_020b28ec = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*((actor->vtable)._ub)->getBoundingBox)(actor,pCVar18);
  pfVar11 = afStack_1c4;
  pCVar18 = &CStack_1ac;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pCVar18->min).x = *pfVar11;
    pfVar11 = pfVar11 + (uint)bVar16 * -2 + 1;
    pCVar18 = (CBoundingBox3D *)((int)pCVar18 + ((uint)bVar16 * -2 + 1) * 4);
  }
  fVar4 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421620(&CStack_1ac);
  pCVar19 = &CStack_194;
  fStack_5c = fVar4 * (float)_DAT_005f0fe5 + 1.0;
  puVar12 = (uint *)((int)actor + (uint)bVar16 * -8 + 0x24);
  CStack_194.x = (actor->location).position.x;
  *(uint *)((int)&CStack_194 + (uint)bVar16 * -8 + 4) = *puVar12;
  *(uint *)((int)&CStack_194 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
       puVar12[(uint)bVar16 * -2 + 1];
  CStack_194.y = CStack_194.y + _DAT_005f0fed;
  uVar5 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_0055c060(this_ptr,pCVar19);
  fStack_14c = CStack_1ac.min.x + CStack_1ac.max.x;
  fStack_148 = CStack_1ac.min.y + CStack_1ac.max.y;
  fStack_144 = CStack_1ac.min.z + CStack_1ac.max.z;
  fStack_110 = CStack_1ac.min.x + CStack_1ac.max.x;
  afStack_10c[(uint)bVar16 * -2] = afStack_164[(uint)bVar16 * -2 + 7];
  afStack_10c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
       afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 8];
  uStack_b8 = uVar5;
  pCVar19 = &CStack_e0;
  afStack_10c[2] = fStack_110 * _DAT_005f0fdd;
  afStack_10c[3] = afStack_10c[0] * _DAT_005f0fdd;
  fStack_fc = afStack_10c[1] * _DAT_005f0fdd;
  CStack_e0.x = fStack_110 * _DAT_005f0fdd;
  afStack_d4[(uint)bVar16 * -2 + -2] = afStack_10c[(uint)bVar16 * -2 + 3];
  afStack_d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + -1] =
       afStack_10c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(actor,pCVar19,&CStack_188);
  CStack_140.x = CStack_188.x;
  afStack_164[(uint)bVar16 * -2 + 10] = *(float *)((int)&CStack_188 + (uint)bVar16 * -8 + 4);
  afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xb] =
       *(float *)((int)&CStack_188 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
  if (&CStack_194 != (CVector3f *)(afStack_164 + 9)) {
    CStack_194.x = CStack_140.x;
    CStack_194.y = CStack_140.y;
    CStack_194.z = CStack_140.z;
  }
  if (uStack_b8 != _DAT_020b28f0) {
    iStack_bc = this_ptr->camera_count;
    force_evaluation_mode = 1;
    this_ptr->previous_best_camera_index = -1;
    _DAT_020b28ec = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  _DAT_020b28f0 = uStack_b8;
  _DAT_0269c7ac = (uint)(uStack_b8 == 0xffffffff);
  iVar8 = 0;
  do {
    iVar6 = iVar8 + 4;
    *(uint *)(&stack0xfffffc70 + iVar8) = *(uint *)(&DAT_01c4480c + iVar8);
    iVar8 = iVar6;
  } while (iVar6 != 0xc0);
  _DAT_0268ece8 = 0;
  iStack_24 = 0;
  pfStack_ac = (float *)(_DAT_0060513c * _DAT_0060513c);
  pCStack_b0 = &actor->location;
  for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->actor_count; iStack_14 = iStack_14 + 1) {
    this_ptr_00 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_24);
    iVar8 = (*((this_ptr_00->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr_00);
    if (((iVar8 != 0) && (this_ptr_00 != actor)) &&
       (fVar4 = (this_ptr_00->location).position.x - *pfStack_ac,
       fVar2 = (this_ptr_00->location).position.y - pfStack_ac[1],
       fVar1 = (this_ptr_00->location).position.z - pfStack_ac[2],
       fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <= fStack_a8)) {
      *(CDemonActor **)(&DAT_0268ecec + _DAT_0268ece8 * 4) = this_ptr_00;
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffc68);
      iVar6 = _DAT_0268ece8 * 0x18;
      puVar12 = auStack_230;
      puVar13 = &uStack_218;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + (uint)bVar16 * -2 + 1;
        puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
      }
      if ((uint *)(iVar6 + 0x2690c2c) != &uStack_218) {
        *(uint *)(iVar6 + 0x2690c2c) = uStack_218;
        *(uint *)(iVar6 + 0x2690c30) = uStack_214;
        *(float *)(iVar6 + 0x2690c34) = CStack_210.min.x;
      }
      if ((float *)(iVar6 + 0x2690c38) != &CStack_210.min.y) {
        *(float *)(iVar6 + 0x2690c38) = CStack_210.min.y;
        *(float *)(iVar6 + 0x2690c3c) = CStack_210.min.z;
        *(float *)(iVar6 + 0x2690c40) = CStack_210.max.x;
      }
      _DAT_0268ece8 = _DAT_0268ece8 + 1;
    }
    iStack_24 = iStack_24 + 4;
  }
  pCStack_2c = &(actor->location).position;
  fStack_44 = _DAT_0060513c * _DAT_0060513c;
  fStack_70 = _DAT_00605138 * _DAT_00605138;
  pCStack_9c = this_ptr->cameras;
  while ((0 < iStack_bc && (_DAT_020b28ec < this_ptr->camera_count))) {
    uVar5 = this_ptr->cameras[_DAT_020b28ec].vdir_zone;
    if (uStack_b8 == uVar5) {
      pCStack_98 = actor;
      this_ptr_02 = pCStack_9c + _DAT_020b28ec;
      pSStack_94 = (SMRGLPrimitivePoly *)&DAT_00622fdc;
      iStack_90 = _DAT_020b28ec;
      pCStack_8c = this_ptr_02;
      if ((this_ptr_02->enabled == 0) ||
         (fVar4 = (this_ptr_02->position).x - pCStack_2c->x,
         fVar2 = (this_ptr_02->position).y - pCStack_2c->y,
         fVar1 = (this_ptr_02->position).z - pCStack_2c->z,
         fStack_70 < fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4)) {
        fStack_88 = (float)(uStack_b8 ^ uVar5);
        fVar4 = fStack_88;
      }
      else {
        fVar4 = (float)core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0055c6f0
                                 (this_ptr_02,pCStack_2c,fStack_5c);
        if (fVar4 == 0.0) {
          fStack_88 = fVar4;
          fVar4 = fStack_88;
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
                    (DAT_00612560,&this_ptr_02->position);
          engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
                    (DAT_00612560,this_ptr_02->projection_scale);
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
                    (DAT_00612560,&this_ptr_02->orientation);
          uStack_84 = 0x800000ff;
          uStack_80 = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                    (DAT_00612560,pCStack_2c);
          CStack_128.x = (actor->orient).vec.x;
          CStack_128.z = (actor->orient).vec.z;
          CStack_128.y = (this_ptr_02->orientation).y;
          input = aCStack_2d0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (DAT_00612560,&CStack_128,(CVector3f *)0x0);
          iVar8 = 0;
          do {
            engine_special_cpp_transformAndProjectPoint_FUN_00580173
                      ((SProjectedVertex *)
                       ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iVar8),input);
            iVar6 = iVar8 + 0x30;
            input = input + 1;
            uVar5 = *(uint *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x +
                             iVar8);
            uStack_84 = uStack_84 & uVar5;
            uStack_80 = uStack_80 | uVar5;
            iVar8 = iVar6;
          } while (iVar6 != 0x180);
          if (((uStack_84 & 0x80000000) == 0) || ((char)uStack_84 == '\0')) {
            iVar8 = 0;
            pSVar14 = pSStack_94 + 3;
            iStack_7c = 0;
            pSVar7 = pSStack_94;
            do {
              *(SMRGLPrimitivePoly **)((int)auStack_1dc + iVar8) = pSVar7;
              iVar8 = iVar8 + 4;
              iStack_7c = iStack_7c + 1;
              pSVar7 = (SMRGLPrimitivePoly *)(pSVar7->vertices + 4);
            } while (pSVar7 != (SMRGLPrimitivePoly *)(pSVar14->vertices + 4));
            iVar8 = 0;
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(pCStack_98);
            do {
              point = (SProjectedVertex *)
                      ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x +
                      iVar8);
              iVar6 = point->transformed_z;
              if (0 < iVar6) {
                iVar9 = iVar6 + 0x80;
                point->transformed_x =
                     (int)(((longlong)point->transformed_x * (longlong)iVar9) / (longlong)iVar6);
                point->transformed_y =
                     (int)(((longlong)point->transformed_y * (longlong)iVar9) /
                          (longlong)point->transformed_z);
                point->transformed_z = iVar9;
                engine_matrix_c_projectTransformedPoint_FUN_00507b50(point);
              }
              iVar8 = iVar8 + 0x30;
            } while (iVar8 != 0x180);
            iVar8 = 0;
            fStack_394 = 1.0;
            do {
              if ((*(byte *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x +
                            iVar8 + 3) & 0x80) != 0) {
                dVar17 = _DAT_005f0ffd;
                if (0 < *(int *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).
                                       transformed_z + iVar8)) {
                  dVar17 = _DAT_005f0ff5;
                }
                fStack_394 = fStack_394 * (float)dVar17;
              }
              iVar8 = iVar8 + 0x30;
            } while (iVar8 != 0x180);
            iVar8 = 0;
            iStack_78 = 0;
            if (0 < _DAT_0268ece8) {
              iStack_1c = 0;
              puStack_30 = (uint *)(&DAT_020b28f4 + iStack_90 * 0x3000);
              pCStack_18 = (CBoundingBox3D *)0x2690c2c;
              pCStack_48 = &pCStack_8c->position;
              do {
                pCStack_58 = *(CDemonActor **)(&DAT_0268ecec + iStack_1c);
                fVar4 = (pCStack_58->location).position.x - pCStack_48->x;
                fVar2 = (pCStack_58->location).position.y - pCStack_48->y;
                fVar1 = (pCStack_58->location).position.z - pCStack_48->z;
                if (fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <= fStack_44) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(pCStack_58);
                  uStack_54 = 0x800000ff;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  iStack_20 = 0x180;
                  pCStack_34 = pCStack_18;
                  do {
                    core_box_cpp_CBoundingBox3D_getCorner_FUN_00420570
                              (pCStack_34,uStack_4c,&CStack_170);
                    fStack_17c = CStack_170.x;
                    afStack_178[(uint)bVar16 * -2] = afStack_164[(uint)bVar16 * -2 + -2];
                    iVar6 = iStack_20;
                    afStack_178[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                         afStack_164[(uint)bVar16 * -2 + (uint)bVar16 * -2 + -1];
                    CStack_11c.x = (int)ROUND(fStack_17c * _DAT_00605120);
                    CStack_11c.y = (int)ROUND(afStack_178[0] * _DAT_00605120);
                    CStack_11c.z = (int)ROUND(afStack_178[1] * _DAT_00605120);
                    engine_special_cpp_transformAndProjectPoint_FUN_00580173
                              ((SProjectedVertex *)
                               ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).
                                      transformed_x + iStack_20),&CStack_11c);
                    iStack_20 = iVar6 + 0x30;
                    uVar5 = *(uint *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).
                                            screen_x + iVar6);
                    uStack_54 = uStack_54 & uVar5;
                    uStack_50 = uStack_50 | uVar5;
                    uStack_4c = uStack_4c + 1;
                  } while ((int)uStack_4c < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(pCStack_58);
                  if (((uStack_54 & 0x80000000) == 0) || ((char)uStack_54 == '\0')) {
                    if (iStack_78 == 0) {
                      puVar12 = puStack_30;
                      puVar13 = (uint *)&DAT_020af8ec;
                      for (iVar6 = 0xc00; iVar6 != 0; iVar6 = iVar6 + -1) {
                        *puVar13 = *puVar12;
                        puVar12 = puVar12 + (uint)bVar16 * -2 + 1;
                        puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      }
                      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                        *(byte *)puVar13 = *(byte *)puVar12;
                        puVar12 = (uint *)((int)puVar12 + (uint)bVar16 * -2 + 1);
                        puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      }
                      puVar10 = &DAT_020af8ec;
                      iStack_78 = 1;
                      iVar6 = 0;
                      do {
                        *(byte **)(&DAT_01c4480c + iVar6) = puVar10;
                        iVar6 = iVar6 + 4;
                        puVar10 = puVar10 + 0x100;
                      } while (iVar6 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80
                                (DAT_00612560,1);
                    }
                    SStack_264.base.count = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
                              (DAT_00612560,(uint)((uStack_50 & 0x80000000) != 0));
                    uStack_24c = 8;
                    uStack_248 = 0xc;
                    uStack_244 = 0xe;
                    uStack_240 = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_264);
                    uStack_24c = 9;
                    uStack_248 = 0xb;
                    uStack_244 = 0xf;
                    uStack_240 = 0xd;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_264);
                    uStack_248 = 9;
                    uStack_244 = 0xd;
                    uStack_24c = 8;
                    uStack_240 = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_264);
                    uStack_244 = 0xf;
                    uStack_24c = 10;
                    uStack_248 = 0xe;
                    uStack_240 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_264);
                    uStack_24c = 8;
                    uStack_240 = 9;
                    uStack_248 = 10;
                    uStack_244 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_264);
                    uStack_24c = 0xc;
                    uStack_248 = 0xd;
                    uStack_244 = 0xf;
                    uStack_240 = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                              (DAT_00612560,&SStack_264);
                  }
                }
                iStack_1c = iStack_1c + 4;
                pCStack_18 = pCStack_18 + 1;
                iVar8 = iVar8 + 1;
              } while (iVar8 < _DAT_0268ece8);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
            if (iStack_78 == 0) {
              puVar10 = &DAT_020b28f4 + iStack_90 * 0x3000;
              iVar8 = 0;
              do {
                *(byte **)(&DAT_01c4480c + iVar8) = puVar10;
                iVar8 = iVar8 + 4;
                puVar10 = puVar10 + 0x100;
              } while (iVar8 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
                      (DAT_00612560,(uint)((uStack_80 & 0x80000000) != 0));
            iStack_74 = 0;
            if (0 < iStack_7c) {
              iVar8 = iStack_7c * 4;
              iVar6 = 0;
              do {
                iVar9 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
                                  (DAT_00612560,*(SMRGLPrimitivePoly **)((int)auStack_1dc + iVar6));
                iVar6 = iVar6 + 4;
                iStack_74 = iStack_74 + iVar9;
              } while (iVar6 < iVar8);
            }
            if (g_CGamePtr->debug_toggle_flag != 0) {
              puVar12 = (uint *)(iStack_90 * 0x3000 + 0x23a08f4);
              iVar8 = 0;
              do {
                iVar9 = iVar8 + 4;
                puVar13 = *(uint **)(&DAT_01c4480c + iVar8);
                puVar15 = puVar12;
                for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar15 = *puVar13;
                  puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                  puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar15 = *(byte *)puVar13;
                  puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                }
                *(uint **)(&DAT_01c4480c + iVar8) = puVar12;
                puVar12 = puVar12 + 0x40;
                iVar8 = iVar9;
              } while (iVar9 != 0xc0);
              iVar8 = 0;
              pSVar14 = pSStack_94;
              if (0 < iStack_7c) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
                            (DAT_00612560,pSVar14);
                  iVar8 = iVar8 + 1;
                  pSVar14 = (SMRGLPrimitivePoly *)(pSVar14->vertices + 4);
                } while (iVar8 < iStack_7c);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
            fStack_88 = (float)iStack_74 * fStack_394;
            fVar4 = fStack_88;
          }
          else {
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(pCStack_98);
            fStack_88 = 0.0;
            fVar4 = fStack_88;
          }
        }
      }
    }
    else {
      fVar4 = -99999.9;
    }
    if ((force_evaluation_mode == 0) && (0.0 < fVar4)) {
      if (_DAT_020b28ec == this_ptr->selected_camera_index) {
        fVar4 = fVar4 * (float)_DAT_005f1005;
      }
      if (_DAT_020b28ec == this_ptr->previous_best_camera_index) {
        fVar4 = fVar4 * (float)_DAT_005f100d;
      }
    }
    *(float *)(&DAT_0268e900 + _DAT_020b28ec * 4) = fVar4;
    iStack_bc = iStack_bc + -1;
    _DAT_020b28ec = _DAT_020b28ec + 1;
  }
  iVar8 = 0;
  do {
    iVar6 = iVar8 + 4;
    *(uint *)(&DAT_01c4480c + iVar8) = *(uint *)(&stack0xfffffc70 + iVar8);
    iVar8 = iVar6;
  } while (iVar6 != 0xc0);
  engine_drender_cpp_popViewport_FUN_00483c40();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(DAT_00612560,iStack_60);
  _DAT_01c50948 = uStack_b4;
  if (this_ptr->camera_count <= _DAT_020b28ec) {
    iVar8 = -1;
    iVar6 = 0;
    fVar4 = -1.0;
    if (0 < this_ptr->camera_count) {
      iVar9 = 0;
      do {
        if (fVar4 < *(float *)(&DAT_0268e900 + iVar9)) {
          fVar4 = *(float *)(&DAT_0268e900 + iVar9);
          iVar8 = iVar6;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar6 < this_ptr->camera_count);
    }
    if (-1 < iVar8) {
      if ((this_ptr->selected_camera_index < 0) ||
         (1 < force_evaluation_mode || iVar8 != this_ptr->selected_camera_index && 0.0 < fVar4)) {
        this_ptr->last_switch_area_invalid = _DAT_0269c7ac;
        core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(this_ptr,iVar8);
        local_c0 = 1;
      }
    }
    _DAT_020b28ec = 0;
  }
  return local_c0;
}
