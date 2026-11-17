// Name: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_0053f940
// Address: 0053f940
// Address Range: [[0053f940, 00540b95]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_0053f940(CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_0053f940(CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_01;
  SMRGLTextureBasic *pSVar3;
  SMRGLTextureBasic *pSVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  SMRGLPrimitivePoly *pSVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  byte *puVar12;
  C3DSCamera *this_ptr_02;
  float *pfVar13;
  uint *puVar14;
  SProjectedVertex *point;
  uint *puVar15;
  SMRGLPrimitivePoly *pSVar16;
  CVector3i *input;
  uint *puVar17;
  char *pcVar18;
  byte bVar19;
  double dVar20;
  float afStackY_117c [880];
  CBoundingBox3D *in_stack_fffffc58;
  CBoundingBox3D *pCVar21;
  CVector3f *pCVar22;
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
  int iStack_b4;
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
  char *pcStack_30;
  CVector3f *pCStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  CBoundingBox3D *pCStack_18;
  int iStack_14;
  CBoundingBox3D *corner_index;
  
  bVar19 = 0;
  afStack_d4[2] = 0.0;
  if (actor == (CDemonActor *)0x0) {
    if (this_ptr->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_00534890(this_ptr,0);
    }
    return 1;
  }
  if (this_ptr->selected_camera_index < 0) {
    this_ptr->pending_camera_index = -1;
    this_ptr->camera_switch_cooldown = 0.0;
    force_evaluation_mode = 1;
  }
  else if (1 < force_evaluation_mode) goto LAB_0053f9af;
  if (0.0 < this_ptr->camera_switch_cooldown) {
    fVar5 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar5;
    if (0.0 < fVar5) {
      if ((-1 < this_ptr->pending_camera_index) &&
         (this_ptr->pending_camera_index != this_ptr->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890(this_ptr,this_ptr->pending_camera_index);
        return 1;
      }
      return 0;
    }
    force_evaluation_mode = 1;
  }
LAB_0053f9af:
  this_ptr_01 = g_CDemonRenderer_PTR_005f2afc;
  this_ptr->camera_switch_cooldown = 0.0;
  local_c0 = g_INT_01c6cee8;
  g_INT_01c6cee8 = 0;
  local_6c = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(g_CDemonRenderer_PTR_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
            (g_CDemonRenderer_PTR_005f2afc,0,0,0x40,0x30);
  (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffc58);
  corner_index = (CBoundingBox3D *)0x0;
  pCStack_2c = (CVector3f *)&iStack_2d4;
  pfVar13 = afStack_1f8;
  pCVar21 = &CStack_210;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    (pCVar21->min).x = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar19 * -2 + 1;
    pCVar21 = (CBoundingBox3D *)((int)pCVar21 + ((uint)bVar19 * -2 + 1) * 4);
  }
  do {
    pCVar21 = corner_index;
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041d8b0(&CStack_210,(uint)corner_index,&CStack_f0);
    CStack_e0.z = CStack_f0.x;
    afStack_d4[(uint)bVar19 * -2] = *(float *)((int)&CStack_f0 + (uint)bVar19 * -8 + 4);
    afStack_d4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         *(float *)((int)&CStack_f0 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    *(int *)pCStack_2c = (int)ROUND(CStack_e0.z * 256.0f);
    *(int *)((int)pCStack_2c + 4) = (int)ROUND(afStack_d4[0] * 256.0f);
    *(int *)((int)pCStack_2c + 8) = (int)ROUND(afStack_d4[1] * 256.0f);
    corner_index = (CBoundingBox3D *)((int)&(corner_index->min).x + 1);
    pCStack_2c = (CVector3f *)((int)pCStack_2c + 0xc);
  } while ((int)corner_index < 8);
  CStack_140.z = CStack_210.min.x + CStack_210.max.x;
  fStack_134 = CStack_210.min.y + CStack_210.max.y;
  fStack_130 = CStack_210.min.z + CStack_210.max.z;
  afStack_164[2] = CStack_210.min.x + CStack_210.max.x;
  afStack_164[(uint)bVar19 * -2 + 3] = afStack_164[(uint)bVar19 * -2 + 0xc];
  afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
       afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd];
  CStack_170.z = afStack_164[2] * 0.5f;
  afStack_164[0] = afStack_164[3] * 0.5f;
  afStack_164[1] = fStack_154 * 0.5f;
  fStack_fc = afStack_164[2] * 0.5f;
  afStack_10c[(uint)bVar19 * -2 + 5] = afStack_164[(uint)bVar19 * -2];
  afStack_10c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 6] =
       afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
  iStack_274 = (int)ROUND(fStack_fc * 256.0f);
  iStack_270 = (int)ROUND(fStack_f8 * 256.0f);
  iStack_26c = (int)ROUND(fStack_f4 * 256.0f);
  pSVar3 = (SMRGLTextureBasic *)&DAT_00603eec;
  do {
    iVar9 = pSVar3[1].base.type;
    pSVar4 = pSVar3 + 3;
    *(int *)(pSVar3->texture_name + 0xc) =
         aCStack_2d0[iVar9].x * *(int *)(pSVar3->texture_name + 4) +
         *(int *)pSVar3->texture_name * (&iStack_2d4)[iVar9 * 3] +
         *(int *)(pSVar3->texture_name + 8) * aCStack_2d0[iVar9].y;
    pSVar3 = pSVar4;
  } while (pSVar4 != &g_SMRGLTextureBasic_0060409c);
  if (force_evaluation_mode == 0) {
    pCVar21 = (CBoundingBox3D *)0x540073;
    dVar20 = round
                       ((double)((float)(this_ptr->camera_count * 10) * g_CGamePtr->delta_time_float
                                ));
    iStack_c4 = (int)ROUND(dVar20);
    if (iStack_c4 < 3) {
      iStack_c4 = 3;
    }
    if (this_ptr->camera_count < iStack_c4) {
      iStack_c4 = this_ptr->camera_count;
    }
    fVar5 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar5;
    if (fVar5 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    local_c0 = this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    g_INT_02125514 = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*((actor->vtable)._ub)->getBoundingBox)(actor,pCVar21);
  pfVar13 = afStack_1c4;
  pCVar21 = &CStack_1ac;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    (pCVar21->min).x = *pfVar13;
    pfVar13 = pfVar13 + (uint)bVar19 * -2 + 1;
    pCVar21 = (CBoundingBox3D *)((int)pCVar21 + ((uint)bVar19 * -2 + 1) * 4);
  }
  fVar5 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960(&CStack_1ac);
  pCVar22 = &CStack_194;
  fStack_5c = fVar5 * (float)1.5 + 1.0;
  puVar14 = (uint *)((int)actor + (uint)bVar19 * -8 + 0x24);
  CStack_194.x = (actor->location).position.x;
  *(uint *)((int)&CStack_194 + (uint)bVar19 * -8 + 4) = *puVar14;
  *(uint *)((int)&CStack_194 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8) =
       puVar14[(uint)bVar19 * -2 + 1];
  CStack_194.y = CStack_194.y + 3.0f;
  uVar6 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00541a20(this_ptr,pCVar22);
  fStack_14c = CStack_1ac.min.x + CStack_1ac.max.x;
  fStack_148 = CStack_1ac.min.y + CStack_1ac.max.y;
  fStack_144 = CStack_1ac.min.z + CStack_1ac.max.z;
  fStack_110 = CStack_1ac.min.x + CStack_1ac.max.x;
  afStack_10c[(uint)bVar19 * -2] = afStack_164[(uint)bVar19 * -2 + 7];
  afStack_10c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
       afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 8];
  uStack_b8 = uVar6;
  pCVar22 = &CStack_e0;
  afStack_10c[2] = fStack_110 * 0.5f;
  afStack_10c[3] = afStack_10c[0] * 0.5f;
  fStack_fc = afStack_10c[1] * 0.5f;
  CStack_e0.x = fStack_110 * 0.5f;
  afStack_d4[(uint)bVar19 * -2 + -2] = afStack_10c[(uint)bVar19 * -2 + 3];
  afStack_d4[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1] =
       afStack_10c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(actor,pCVar22,&CStack_188);
  CStack_140.x = CStack_188.x;
  afStack_164[(uint)bVar19 * -2 + 10] = *(float *)((int)&CStack_188 + (uint)bVar19 * -8 + 4);
  afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xb] =
       *(float *)((int)&CStack_188 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
  if (&CStack_194 != (CVector3f *)(afStack_164 + 9)) {
    CStack_194.x = CStack_140.x;
    CStack_194.y = CStack_140.y;
    CStack_194.z = CStack_140.z;
  }
  if (uStack_b8 != g_INT_02125518) {
    iStack_bc = this_ptr->camera_count;
    force_evaluation_mode = 1;
    this_ptr->previous_best_camera_index = -1;
    g_INT_02125514 = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  g_INT_02125518 = uStack_b8;
  g_INT_0270f3d4 = (int)(uStack_b8 == 0xffffffff);
  iVar9 = 0;
  do {
    iVar7 = iVar9 + 4;
    *(uint *)(&stack0xfffffc70 + iVar9) =
         *(uint *)((int)g_UINT_PTR_ARRAY_01c60dac + iVar9);
    iVar9 = iVar7;
  } while (iVar7 != 0xc0);
  g_FLOAT_ARRAY_02701528[0xfa] = 0.0;
  iStack_24 = 0;
  pfStack_ac = (float *)(100.0f * 100.0f);
  pCStack_b0 = &actor->location;
  for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->actor_count; iStack_14 = iStack_14 + 1) {
    this_ptr_00 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_24);
    iVar9 = (*((this_ptr_00->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr_00);
    if (((iVar9 != 0) && (this_ptr_00 != actor)) &&
       (fVar5 = (this_ptr_00->location).position.x - *pfStack_ac,
       fVar2 = (this_ptr_00->location).position.y - pfStack_ac[1],
       fVar1 = (this_ptr_00->location).position.z - pfStack_ac[2],
       fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= fStack_a8)) {
      g_INT_ARRAY_02701914[(int)g_FLOAT_ARRAY_02701528[0xfa]] = (int)this_ptr_00;
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffc68);
      iVar7 = (int)g_FLOAT_ARRAY_02701528[0xfa] * 0x18;
      puVar14 = auStack_230;
      puVar15 = &uStack_218;
      for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + (uint)bVar19 * -2 + 1;
        puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
      }
      if ((uint *)(iVar7 + 0x2703854) != &uStack_218) {
        *(uint *)(iVar7 + 0x2703854) = uStack_218;
        *(uint *)(iVar7 + 0x2703858) = uStack_214;
        *(float *)(iVar7 + 0x270385c) = CStack_210.min.x;
      }
      if ((float *)(iVar7 + 0x2703860) != &CStack_210.min.y) {
        *(float *)(iVar7 + 0x2703860) = CStack_210.min.y;
        *(float *)(iVar7 + 0x2703864) = CStack_210.min.z;
        *(float *)(iVar7 + 0x2703868) = CStack_210.max.x;
      }
      g_FLOAT_ARRAY_02701528[0xfa] = (float)((int)g_FLOAT_ARRAY_02701528[0xfa] + 1);
    }
    iStack_24 = iStack_24 + 4;
  }
  pCStack_2c = &(actor->location).position;
  fStack_44 = 100.0f * 100.0f;
  fStack_70 = 200.0f * 200.0f;
  pCStack_9c = this_ptr->cameras;
  while ((0 < iStack_bc && (g_INT_02125514 < this_ptr->camera_count))) {
    uVar6 = this_ptr->cameras[g_INT_02125514].vdir_zone;
    if (uStack_b8 == uVar6) {
      pCStack_98 = actor;
      this_ptr_02 = pCStack_9c + g_INT_02125514;
      pSStack_94 = (SMRGLPrimitivePoly *)&DAT_00603eec;
      iStack_90 = g_INT_02125514;
      pCStack_8c = this_ptr_02;
      if ((this_ptr_02->enabled == 0) ||
         (fVar5 = (this_ptr_02->position).x - pCStack_2c->x,
         fVar2 = (this_ptr_02->position).y - pCStack_2c->y,
         fVar1 = (this_ptr_02->position).z - pCStack_2c->z,
         fStack_70 < fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5)) {
        fStack_88 = (float)(uStack_b8 ^ uVar6);
        fVar5 = fStack_88;
      }
      else {
        fVar5 = (float)core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0
                                 (this_ptr_02,pCStack_2c,fStack_5c);
        if (fVar5 == 0.0) {
          fStack_88 = fVar5;
          fVar5 = fStack_88;
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
                    (g_CDemonRenderer_PTR_005f2afc,&this_ptr_02->position);
          engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
                    (g_CDemonRenderer_PTR_005f2afc,this_ptr_02->projection_scale);
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
                    (g_CDemonRenderer_PTR_005f2afc,&this_ptr_02->orientation);
          uStack_84 = 0x800000ff;
          uStack_80 = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                    (g_CDemonRenderer_PTR_005f2afc,pCStack_2c);
          CStack_128.x = (actor->orient).vec.x;
          CStack_128.z = (actor->orient).vec.z;
          CStack_128.y = (this_ptr_02->orientation).y;
          input = aCStack_2d0;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                    (g_CDemonRenderer_PTR_005f2afc,&CStack_128,(CVector3f *)0x0);
          iVar9 = 0;
          do {
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      ((SProjectedVertex *)
                       ((int)&(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex).
                              transformed_x + iVar9),input);
            iVar7 = iVar9 + 0x30;
            input = input + 1;
            uVar6 = *(uint *)((int)&(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->
                                    projected_vertex).screen_x + iVar9);
            uStack_84 = uStack_84 & uVar6;
            uStack_80 = uStack_80 | uVar6;
            iVar9 = iVar7;
          } while (iVar7 != 0x180);
          if (((uStack_84 & 0x80000000) == 0) || ((char)uStack_84 == '\0')) {
            iVar9 = 0;
            pSVar16 = pSStack_94 + 3;
            iStack_7c = 0;
            pSVar8 = pSStack_94;
            do {
              *(SMRGLPrimitivePoly **)((int)auStack_1dc + iVar9) = pSVar8;
              iVar9 = iVar9 + 4;
              iStack_7c = iStack_7c + 1;
              pSVar8 = (SMRGLPrimitivePoly *)(pSVar8->vertices + 4);
            } while (pSVar8 != (SMRGLPrimitivePoly *)(pSVar16->vertices + 4));
            iVar9 = 0;
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_98);
            do {
              point = (SProjectedVertex *)
                      ((int)&(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex).
                             transformed_x + iVar9);
              iVar7 = point->transformed_z;
              if (0 < iVar7) {
                iVar10 = iVar7 + 0x80;
                point->transformed_x =
                     (int)(((longlong)point->transformed_x * (longlong)iVar10) / (longlong)iVar7);
                point->transformed_y =
                     (int)(((longlong)point->transformed_y * (longlong)iVar10) /
                          (longlong)point->transformed_z);
                point->transformed_z = iVar10;
                engine_matrix_c_projectTransformedPoint_FUN_004e5590(point);
              }
              iVar9 = iVar9 + 0x30;
            } while (iVar9 != 0x180);
            iVar9 = 0;
            fStack_394 = 1.0;
            do {
              if ((*(byte *)((int)&(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->
                                   projected_vertex).screen_x + iVar9 + 3) & 0x80) != 0) {
                dVar20 = 0.0625;
                if (0 < *(int *)((int)&(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->
                                       projected_vertex).transformed_z + iVar9)) {
                  dVar20 = 0.5;
                }
                fStack_394 = fStack_394 * (float)dVar20;
              }
              iVar9 = iVar9 + 0x30;
            } while (iVar9 != 0x180);
            iVar9 = 0;
            iStack_78 = 0;
            if (0 < (int)g_FLOAT_ARRAY_02701528[0xfa]) {
              iStack_1c = 0;
              pcStack_30 = g_CHAR_ARRAY_0212551c + iStack_90 * 0x3000;
              pCStack_18 = (CBoundingBox3D *)0x2703854;
              pCStack_48 = &pCStack_8c->position;
              do {
                pCStack_58 = *(CDemonActor **)((int)g_INT_ARRAY_02701914 + iStack_1c);
                fVar5 = (pCStack_58->location).position.x - pCStack_48->x;
                fVar2 = (pCStack_58->location).position.y - pCStack_48->y;
                fVar1 = (pCStack_58->location).position.z - pCStack_48->z;
                if (fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5 <= fStack_44) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(pCStack_58);
                  uStack_54 = 0x800000ff;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  iStack_20 = 0x180;
                  pCStack_34 = pCStack_18;
                  do {
                    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041d8b0
                              (pCStack_34,uStack_4c,&CStack_170);
                    fStack_17c = CStack_170.x;
                    afStack_178[(uint)bVar19 * -2] = afStack_164[(uint)bVar19 * -2 + -2];
                    iVar7 = iStack_20;
                    afStack_178[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
                         afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + -1];
                    CStack_11c.x = (int)ROUND(fStack_17c * 256.0f);
                    CStack_11c.y = (int)ROUND(afStack_178[0] * 256.0f);
                    CStack_11c.z = (int)ROUND(afStack_178[1] * 256.0f);
                    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                              ((SProjectedVertex *)
                               ((int)&(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->
                                      projected_vertex).transformed_x + iStack_20),&CStack_11c);
                    iStack_20 = iVar7 + 0x30;
                    uVar6 = *(uint *)((int)&(g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->
                                            projected_vertex).screen_x + iVar7);
                    uStack_54 = uStack_54 & uVar6;
                    uStack_50 = uStack_50 | uVar6;
                    uStack_4c = uStack_4c + 1;
                  } while ((int)uStack_4c < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_58);
                  if (((uStack_54 & 0x80000000) == 0) || ((char)uStack_54 == '\0')) {
                    if (iStack_78 == 0) {
                      pcVar11 = pcStack_30;
                      pcVar18 = &DAT_02122514;
                      for (iVar7 = 0xc00; iVar7 != 0; iVar7 = iVar7 + -1) {
                        *(uint *)pcVar18 = *(uint *)pcVar11;
                        pcVar11 = pcVar11 + ((uint)bVar19 * -2 + 1) * 4;
                        pcVar18 = pcVar18 + ((uint)bVar19 * -2 + 1) * 4;
                      }
                      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                        *pcVar18 = *pcVar11;
                        pcVar11 = pcVar11 + (uint)bVar19 * -2 + 1;
                        pcVar18 = pcVar18 + (uint)bVar19 * -2 + 1;
                      }
                      puVar12 = &DAT_02122514;
                      iStack_78 = 1;
                      iVar7 = 0;
                      do {
                        *(byte **)((int)g_UINT_PTR_ARRAY_01c60dac + iVar7) = puVar12;
                        iVar7 = iVar7 + 4;
                        puVar12 = puVar12 + 0x100;
                      } while (iVar7 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460
                                (g_CDemonRenderer_PTR_005f2afc,1);
                    }
                    SStack_264.base.count = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                              (g_CDemonRenderer_PTR_005f2afc,(uint)((uStack_50 & 0x80000000) != 0));
                    uStack_24c = 8;
                    uStack_248 = 0xc;
                    uStack_244 = 0xe;
                    uStack_240 = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (g_CDemonRenderer_PTR_005f2afc,&SStack_264);
                    uStack_24c = 9;
                    uStack_248 = 0xb;
                    uStack_244 = 0xf;
                    uStack_240 = 0xd;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (g_CDemonRenderer_PTR_005f2afc,&SStack_264);
                    uStack_248 = 9;
                    uStack_244 = 0xd;
                    uStack_24c = 8;
                    uStack_240 = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (g_CDemonRenderer_PTR_005f2afc,&SStack_264);
                    uStack_244 = 0xf;
                    uStack_24c = 10;
                    uStack_248 = 0xe;
                    uStack_240 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (g_CDemonRenderer_PTR_005f2afc,&SStack_264);
                    uStack_24c = 8;
                    uStack_240 = 9;
                    uStack_248 = 10;
                    uStack_244 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (g_CDemonRenderer_PTR_005f2afc,&SStack_264);
                    uStack_24c = 0xc;
                    uStack_248 = 0xd;
                    uStack_244 = 0xf;
                    uStack_240 = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                              (g_CDemonRenderer_PTR_005f2afc,&SStack_264);
                  }
                }
                iStack_1c = iStack_1c + 4;
                pCStack_18 = pCStack_18 + 1;
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)g_FLOAT_ARRAY_02701528[0xfa]);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460
                      (g_CDemonRenderer_PTR_005f2afc,0);
            if (iStack_78 == 0) {
              pcVar11 = g_CHAR_ARRAY_0212551c + iStack_90 * 0x3000;
              iVar9 = 0;
              do {
                *(char **)((int)g_UINT_PTR_ARRAY_01c60dac + iVar9) = pcVar11;
                iVar9 = iVar9 + 4;
                pcVar11 = pcVar11 + 0x100;
              } while (iVar9 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460
                      (g_CDemonRenderer_PTR_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                      (g_CDemonRenderer_PTR_005f2afc,(uint)((uStack_80 & 0x80000000) != 0));
            iStack_74 = 0;
            if (0 < iStack_7c) {
              iVar9 = iStack_7c * 4;
              iVar7 = 0;
              do {
                iVar10 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
                                   (g_CDemonRenderer_PTR_005f2afc,
                                    *(SMRGLPrimitivePoly **)((int)auStack_1dc + iVar7));
                iVar7 = iVar7 + 4;
                iStack_74 = iStack_74 + iVar10;
              } while (iVar7 < iVar9);
            }
            if (g_CGamePtr->debug_toggle_flag != 0) {
              puVar14 = (uint *)(iStack_90 * 0x3000 + 0x241351c);
              iVar9 = 0;
              do {
                iVar10 = iVar9 + 4;
                puVar15 = *(uint **)((int)g_UINT_PTR_ARRAY_01c60dac + iVar9);
                puVar17 = puVar14;
                for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar17 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
                  puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(byte *)puVar17 = *(byte *)puVar15;
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar19 * -2 + 1);
                  puVar17 = (uint *)((int)puVar17 + (uint)bVar19 * -2 + 1);
                }
                *(uint **)((int)g_UINT_PTR_ARRAY_01c60dac + iVar9) = puVar14;
                puVar14 = puVar14 + 0x40;
                iVar9 = iVar10;
              } while (iVar10 != 0xc0);
              iVar9 = 0;
              pSVar16 = pSStack_94;
              if (0 < iStack_7c) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                            (g_CDemonRenderer_PTR_005f2afc,pSVar16);
                  iVar9 = iVar9 + 1;
                  pSVar16 = (SMRGLPrimitivePoly *)(pSVar16->vertices + 4);
                } while (iVar9 < iStack_7c);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                      (g_CDemonRenderer_PTR_005f2afc,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460
                      (g_CDemonRenderer_PTR_005f2afc,0);
            fStack_88 = (float)iStack_74 * fStack_394;
            fVar5 = fStack_88;
          }
          else {
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_98);
            fStack_88 = 0.0;
            fVar5 = fStack_88;
          }
        }
      }
    }
    else {
      fVar5 = -99999.9;
    }
    if ((force_evaluation_mode == 0) && (0.0 < fVar5)) {
      if (g_INT_02125514 == this_ptr->selected_camera_index) {
        fVar5 = fVar5 * (float)3;
      }
      if (g_INT_02125514 == this_ptr->previous_best_camera_index) {
        fVar5 = fVar5 * (float)0.20000000000000001;
      }
    }
    g_FLOAT_ARRAY_02701528[g_INT_02125514] = fVar5;
    iStack_bc = iStack_bc + -1;
    g_INT_02125514 = g_INT_02125514 + 1;
  }
  iVar9 = 0;
  do {
    iVar7 = iVar9 + 4;
    *(uint *)((int)g_UINT_PTR_ARRAY_01c60dac + iVar9) =
         *(uint *)(&stack0xfffffc70 + iVar9);
    iVar9 = iVar7;
  } while (iVar7 != 0xc0);
  engine_drender_cpp_popViewport_FUN_0046d320();
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520
            (g_CDemonRenderer_PTR_005f2afc,iStack_60);
  g_INT_01c6cee8 = iStack_b4;
  if (this_ptr->camera_count <= g_INT_02125514) {
    iVar9 = -1;
    iVar7 = 0;
    fVar5 = -1.0;
    if (0 < this_ptr->camera_count) {
      iVar10 = 0;
      do {
        if (fVar5 < *(float *)((int)g_FLOAT_ARRAY_02701528 + iVar10)) {
          fVar5 = *(float *)((int)g_FLOAT_ARRAY_02701528 + iVar10);
          iVar9 = iVar7;
        }
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar7 < this_ptr->camera_count);
    }
    if (-1 < iVar9) {
      if ((this_ptr->selected_camera_index < 0) ||
         (1 < force_evaluation_mode || iVar9 != this_ptr->selected_camera_index && 0.0 < fVar5)) {
        this_ptr->last_switch_area_invalid = g_INT_0270f3d4;
        core_set_cpp_CDemonSet_setCameraView_FUN_00534890(this_ptr,iVar9);
        local_c0 = 1;
      }
    }
    g_INT_02125514 = 0;
  }
  return local_c0;
}
