// Name: core_setdir.cpp_CDemonSet_FUN_005125a0
// Address: 005125a0
// Address Range: [[005125a0, 005135c3]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_CDemonSet_FUN_005125a0(CDemonSet *this_ptr,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_setdir_cpp_CDemonSet_FUN_005125a0(CDemonSet *this_ptr,CDemonActor *param_2,int param_3)

{
  CDemonActor *this_ptr_00;
  uint uVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_01;
  CVector3f *pCVar4;
  byte *puVar5;
  int iVar6;
  CBoundingBox3D *pCVar7;
  SMRGLPrimitivePoly *pSVar8;
  int iVar9;
  C3DSCamera *this_ptr_02;
  uint *puVar10;
  SMRGLPrimitivePoly *pSVar11;
  uint uVar12;
  int iVar13;
  SProjectedVertex *point;
  byte *puVar14;
  uint *puVar15;
  int *piVar16;
  CVector3i *input;
  uint *puVar17;
  byte bVar18;
  double dVar19;
  float fVar20;
  float fStack_2ec;
  uint auStack_2e8 [48];
  CVector3i CStack_228;
  int aiStack_21c [22];
  int iStack_1c4;
  int iStack_1c0;
  SMRGLHeaderPrimitive SStack_1bc;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint auStack_194 [6];
  CBoundingBox3D CStack_17c;
  byte local_160 [48];
  float fStack_130;
  float fStack_12c;
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  float fStack_100;
  float fStack_fc;
  CVector3f CStack_f8;
  CVector3i CStack_ec;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  CVector3f CStack_d0;
  int local_bc;
  int local_b8;
  float local_b4;
  int iStack_b0;
  float fStack_ac;
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
  float fStack_74;
  float fStack_70;
  CDemonActor *pCStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  CVector3f *pCStack_50;
  float fStack_4c;
  CBoundingBox3D *pCStack_3c;
  uint *puStack_38;
  CVector3f *pCStack_34;
  int iStack_30;
  int iStack_2c;
  CBoundingBox3D *pCStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  
  bVar18 = 0;
  local_bc = 0;
  if (param_2 == (CDemonActor *)0x0) {
    if (this_ptr->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(this_ptr,0);
    }
    return 1;
  }
  if (this_ptr->selected_camera_index < 0) {
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_0051260f;
  if (0.0 < this_ptr->camera_switch_cooldown) {
    fVar20 = this_ptr->camera_switch_cooldown - g_CGame_PTR_005b9354->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar20;
    if (0.0 < fVar20) {
      if ((-1 < this_ptr->pending_camera_index) &&
         (this_ptr->pending_camera_index != this_ptr->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(this_ptr,this_ptr->pending_camera_index);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_0051260f:
  this_ptr_01 = g_CDemonRenderer_PTR_005ae704;
  this_ptr->camera_switch_cooldown = 0.0;
  local_b8 = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_b4 = (float)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
            (g_CDemonRenderer_PTR_005ae704,0,0,0x40,0x30);
  uVar12 = 0;
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,(CBoundingBox3D *)local_160);
  piVar16 = &CStack_228.y;
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                       ((CBoundingBox3D *)local_160,&CStack_d0,uVar12);
    uVar12 = uVar12 + 1;
    *piVar16 = (int)ROUND(pCVar4->x * _DAT_005a1a70);
    piVar16[1] = (int)ROUND(pCVar4->y * _DAT_005a1a70);
    piVar16[2] = (int)ROUND(pCVar4->z * _DAT_005a1a70);
    piVar16 = piVar16 + 3;
  } while ((int)uVar12 < 8);
  fStack_130 = (float)local_160._0_4_ + (float)local_160._12_4_;
  fStack_100 = ((float)local_160._0_4_ + (float)local_160._12_4_) * 0.5f;
  fStack_12c = (float)local_160._4_4_ + (float)local_160._16_4_;
  fStack_fc = ((float)local_160._4_4_ + (float)local_160._16_4_) * 0.5f;
  CStack_128.x = (float)local_160._8_4_ + (float)local_160._20_4_;
  CStack_f8.x = ((float)local_160._8_4_ + (float)local_160._20_4_) * 0.5f;
  iStack_1c4 = (int)ROUND(fStack_100 * _DAT_005a1a70);
  iStack_1c0 = (int)ROUND(fStack_fc * _DAT_005a1a70);
  SStack_1bc.base.type = (int)ROUND(CStack_f8.x * _DAT_005a1a70);
  puVar14 = &DAT_005be774;
  do {
    iVar13 = *(int *)(puVar14 + 0x18);
    puVar5 = puVar14 + 0x48;
    *(int *)(puVar14 + 0x14) =
         aiStack_21c[iVar13 * 3 + -1] * *(int *)(puVar14 + 0xc) +
         *(int *)(puVar14 + 8) * aiStack_21c[iVar13 * 3 + -2] +
         *(int *)(puVar14 + 0x10) * aiStack_21c[iVar13 * 3];
    puVar14 = puVar5;
  } while (puVar5 != &DAT_005be924);
  if (param_3 == 0) {
    iStack_18 = this_ptr->camera_count * 10;
    dVar19 = round
                       ((double)((float)iStack_18 * g_CGame_PTR_005b9354->delta_time_float));
    iStack_54 = (int)ROUND(dVar19);
    if (iStack_54 < 3) {
      iStack_54 = 3;
    }
    if (this_ptr->camera_count < iStack_54) {
      iStack_54 = this_ptr->camera_count;
    }
    fVar20 = this_ptr->previous_best_camera_timer - g_CGame_PTR_005b9354->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar20;
    if (fVar20 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    pCStack_50 = (CVector3f *)this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    _DAT_020875f4 = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&CStack_17c);
  fStack_1c = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70(&CStack_17c);
  fStack_e0 = CStack_17c.min.x + CStack_17c.max.x;
  CStack_11c.x = fStack_e0 * 0.5f;
  fStack_dc = CStack_17c.min.y + CStack_17c.max.y;
  fStack_d8 = CStack_17c.min.z + CStack_17c.max.z;
  CStack_11c.y = fStack_dc * 0.5f;
  CStack_11c.z = fStack_d8 * 0.5f;
  local_b4 = fStack_1c * (float)1.5 + 1.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,&CStack_110,&CStack_11c);
  iStack_b0 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(this_ptr,&CStack_110);
  _DAT_026714b0 = (uint)(iStack_b0 == -1);
  iVar13 = 0;
  do {
    iVar6 = iVar13 + 4;
    *(uint *)((int)auStack_2e8 + iVar13) =
         *(uint *)((int)g_ZBufferScanlineArray + iVar13);
    iVar13 = iVar6;
  } while (iVar6 != 0xc0);
  iVar13 = 0;
  _DAT_026639ec = 0;
  fStack_ac = 100.0f * 100.0f;
  for (iStack_24 = 0; iStack_24 < g_CDemonSet_PTR_005be368->actor_count; iStack_24 = iStack_24 + 1)
  {
    this_ptr_00 = *(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar13);
    iVar6 = (*((this_ptr_00->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr_00);
    if (((iVar6 != 0) && (this_ptr_00 != param_2)) &&
       (fVar20 = (this_ptr_00->location).position.x - (param_2->location).position.x,
       fVar3 = (this_ptr_00->location).position.y - (param_2->location).position.y,
       fVar2 = (this_ptr_00->location).position.z - (param_2->location).position.z,
       fVar2 * fVar2 + fVar3 * fVar3 + fVar20 * fVar20 <= fStack_ac)) {
      *(CDemonActor **)(&DAT_026639f0 + _DAT_026639ec * 4) = this_ptr_00;
      pCVar7 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                         (this_ptr_00,(CBoundingBox3D *)(local_160 + 0x14));
      iVar6 = _DAT_026639ec;
      if (g_CBoundingBox3D_ARRAY_02665930 + _DAT_026639ec != pCVar7) {
        g_CBoundingBox3D_ARRAY_02665930[_DAT_026639ec].min.x = (pCVar7->min).x;
        g_CBoundingBox3D_ARRAY_02665930[iVar6].min.y = (pCVar7->min).y;
        g_CBoundingBox3D_ARRAY_02665930[iVar6].min.z = (pCVar7->min).z;
      }
      if (&g_CBoundingBox3D_ARRAY_02665930[iVar6].max != &pCVar7->max) {
        g_CBoundingBox3D_ARRAY_02665930[iVar6].max.x = (pCVar7->max).x;
        g_CBoundingBox3D_ARRAY_02665930[iVar6].max.y = (pCVar7->max).y;
        g_CBoundingBox3D_ARRAY_02665930[iVar6].max.z = (pCVar7->max).z;
      }
      _DAT_026639ec = _DAT_026639ec + 1;
    }
    iVar13 = iVar13 + 4;
  }
  pCStack_34 = &(param_2->location).position;
  fStack_4c = 100.0f * 100.0f;
  fStack_70 = 200.0f * 200.0f;
  pCStack_9c = this_ptr->cameras;
  do {
    if ((iStack_54 < 1) || (this_ptr->camera_count <= _DAT_020875f4)) {
      iVar13 = 0;
      do {
        iVar6 = iVar13 + 4;
        *(uint *)((int)g_ZBufferScanlineArray + iVar13) =
             *(uint *)((int)auStack_2e8 + iVar13);
        iVar13 = iVar6;
      } while (iVar6 != 0xc0);
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(g_CDemonRenderer_PTR_005ae704);
      engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070
                (g_CDemonRenderer_PTR_005ae704,(int)local_b4);
      g_UseExternalRenderer = local_b8;
      if (this_ptr->camera_count <= _DAT_020875f4) {
        fStack_2ec = -1.0;
        iVar13 = -1;
        iVar6 = 0;
        if (0 < this_ptr->camera_count) {
          iVar9 = 0;
          do {
            if (fStack_2ec < *(float *)(&DAT_02663604 + iVar9)) {
              fStack_2ec = *(float *)(&DAT_02663604 + iVar9);
              iVar13 = iVar6;
            }
            iVar6 = iVar6 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar6 < this_ptr->camera_count);
        }
        if (-1 < iVar13) {
          if ((this_ptr->selected_camera_index < 0) ||
             (1 < param_3 || iVar13 != this_ptr->selected_camera_index && 0.0 < fStack_2ec)) {
            this_ptr->last_switch_area_invalid = _DAT_026714b0;
            core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(this_ptr,iVar13);
            local_bc = 1;
          }
        }
        _DAT_020875f4 = 0;
      }
      return local_bc;
    }
    if (iStack_b0 == this_ptr->cameras[_DAT_020875f4].vdir_zone) {
      pCStack_98 = param_2;
      pSStack_94 = (SMRGLPrimitivePoly *)&DAT_005be774;
      this_ptr_02 = pCStack_9c + _DAT_020875f4;
      pCStack_8c = this_ptr_02;
      iStack_90 = _DAT_020875f4;
      if ((float)this_ptr_02->enabled == 0.0) {
        fStack_88 = (float)this_ptr_02->enabled;
        fVar20 = fStack_88;
      }
      else {
        fVar20 = (this_ptr_02->position).x - pCStack_34->x;
        fVar3 = (this_ptr_02->position).y - pCStack_34->y;
        fVar2 = (this_ptr_02->position).z - pCStack_34->z;
        if ((fVar2 * fVar2 + fVar3 * fVar3 + fVar20 * fVar20 <= fStack_70) &&
           (iVar13 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
                               (this_ptr_02,pCStack_34,local_b4), iVar13 != 0)) {
          engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
                    (g_CDemonRenderer_PTR_005ae704,&this_ptr_02->position);
          engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
                    (g_CDemonRenderer_PTR_005ae704,this_ptr_02->projection_scale);
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
                    (g_CDemonRenderer_PTR_005ae704,&this_ptr_02->orientation);
          uStack_84 = 0x800000ff;
          uStack_80 = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                    (g_CDemonRenderer_PTR_005ae704,pCStack_34);
          CStack_f8.x = (param_2->orient).vec.x;
          CStack_f8.z = (param_2->orient).vec.z;
          CStack_f8.y = (this_ptr_02->orientation).y;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (g_CDemonRenderer_PTR_005ae704,&CStack_f8,(CVector3f *)0x0);
          input = &CStack_228;
          iVar13 = 0;
          do {
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      ((SProjectedVertex *)
                       ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                              transformed_x + iVar13),input);
            iVar6 = iVar13 + 0x30;
            input = input + 1;
            uVar12 = *(uint *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->
                                     projected_vertex).screen_x + iVar13);
            uStack_84 = uStack_84 & uVar12;
            uStack_80 = uStack_80 | uVar12;
            iVar13 = iVar6;
          } while (iVar6 != 0x180);
          if (((uStack_84 & 0x80000000) == 0) || ((char)uStack_84 == '\0')) {
            iVar13 = 0;
            pSVar11 = pSStack_94 + 3;
            iStack_7c = 0;
            pSVar8 = pSStack_94;
            do {
              *(SMRGLPrimitivePoly **)((int)auStack_194 + iVar13) = pSVar8;
              iVar13 = iVar13 + 4;
              iStack_7c = iStack_7c + 1;
              pSVar8 = (SMRGLPrimitivePoly *)(pSVar8->vertices + 4);
            } while (pSVar8 != (SMRGLPrimitivePoly *)(pSVar11->vertices + 4));
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(pCStack_98);
            iStack_30 = 0;
            do {
              point = (SProjectedVertex *)
                      ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).
                             transformed_x + iStack_30);
              iVar13 = point->transformed_z;
              if (0 < iVar13) {
                iVar6 = iVar13 + 0x80;
                point->transformed_x =
                     (int)(((longlong)point->transformed_x * (longlong)iVar6) / (longlong)iVar13);
                point->transformed_y =
                     (int)(((longlong)point->transformed_y * (longlong)iVar6) /
                          (longlong)point->transformed_z);
                point->transformed_z = iVar6;
                engine_matrix_c_projectTransformedPoint_FUN_004cd260(point);
              }
              iStack_30 = iStack_30 + 0x30;
            } while (iStack_30 != 0x180);
            iVar13 = 0;
            fStack_2ec = 1.0;
            do {
              if ((*(byte *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->
                                   projected_vertex).screen_x + iVar13 + 3) & 0x80) != 0) {
                dVar19 = 0.0625;
                if (0 < *(int *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->
                                       projected_vertex).transformed_z + iVar13)) {
                  dVar19 = 0.5;
                }
                fStack_2ec = fStack_2ec * (float)dVar19;
              }
              iVar13 = iVar13 + 0x30;
            } while (iVar13 != 0x180);
            iStack_20 = 0;
            iStack_78 = 0;
            iStack_30 = 0x180;
            if (0 < _DAT_026639ec) {
              iStack_2c = 0;
              puStack_38 = (uint *)(&DAT_020875f8 + iStack_90 * 0x3000);
              pCStack_28 = g_CBoundingBox3D_ARRAY_02665930;
              pCStack_50 = &pCStack_8c->position;
              do {
                pCStack_60 = *(CDemonActor **)(&DAT_026639f0 + iStack_2c);
                fVar20 = (pCStack_60->location).position.x - pCStack_50->x;
                fVar3 = (pCStack_60->location).position.y - pCStack_50->y;
                fVar2 = (pCStack_60->location).position.z - pCStack_50->z;
                if (fVar2 * fVar2 + fVar3 * fVar3 + fVar20 * fVar20 <= fStack_4c) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(pCStack_60);
                  uVar12 = 0;
                  uStack_5c = 0x800000ff;
                  uStack_58 = 0;
                  pCStack_3c = pCStack_28;
                  iVar13 = 0x180;
                  do {
                    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                              (pCStack_3c,&CStack_128,uVar12);
                    CStack_ec.x = (int)ROUND(CStack_128.x * _DAT_005a1a70);
                    CStack_ec.y = (int)ROUND(CStack_128.y * _DAT_005a1a70);
                    CStack_ec.z = (int)ROUND(CStack_128.z * _DAT_005a1a70);
                    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                              ((SProjectedVertex *)
                               ((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->
                                      projected_vertex).transformed_x + iVar13),&CStack_ec);
                    uVar12 = uVar12 + 1;
                    uVar1 = *(uint *)((int)&(g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->
                                            projected_vertex).screen_x + iVar13);
                    uStack_5c = uStack_5c & uVar1;
                    uStack_58 = uStack_58 | uVar1;
                    iVar13 = iVar13 + 0x30;
                  } while ((int)uVar12 < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(pCStack_60);
                  if (((uStack_5c & 0x80000000) == 0) || ((char)uStack_5c == '\0')) {
                    if (iStack_78 == 0) {
                      iStack_78 = 1;
                      puVar10 = puStack_38;
                      puVar15 = (uint *)&DAT_020845f4;
                      for (iVar13 = 0xc00; iVar13 != 0; iVar13 = iVar13 + -1) {
                        *puVar15 = *puVar10;
                        puVar10 = puVar10 + (uint)bVar18 * -2 + 1;
                        puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
                      }
                      for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
                        *(byte *)puVar15 = *(byte *)puVar10;
                        puVar10 = (uint *)((int)puVar10 + (uint)bVar18 * -2 + 1);
                        puVar15 = (uint *)((int)puVar15 + (uint)bVar18 * -2 + 1);
                      }
                      puVar14 = &DAT_020845f4;
                      iVar13 = 0;
                      do {
                        *(byte **)((int)g_ZBufferScanlineArray + iVar13) = puVar14;
                        iVar13 = iVar13 + 4;
                        puVar14 = puVar14 + 0x100;
                      } while (iVar13 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                                (g_CDemonRenderer_PTR_005ae704,1);
                    }
                    SStack_1bc.base.count = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                              (g_CDemonRenderer_PTR_005ae704,(uint)((uStack_58 & 0x80000000) != 0));
                    uStack_19c = 0xe;
                    uStack_1a4 = 8;
                    uStack_1a0 = 0xc;
                    uStack_198 = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (g_CDemonRenderer_PTR_005ae704,&SStack_1bc);
                    uStack_198 = 0xd;
                    uStack_1a4 = 9;
                    uStack_1a0 = 0xb;
                    uStack_19c = 0xf;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (g_CDemonRenderer_PTR_005ae704,&SStack_1bc);
                    uStack_1a4 = 8;
                    uStack_1a0 = 9;
                    uStack_19c = 0xd;
                    uStack_198 = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (g_CDemonRenderer_PTR_005ae704,&SStack_1bc);
                    uStack_1a4 = 10;
                    uStack_1a0 = 0xe;
                    uStack_19c = 0xf;
                    uStack_198 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (g_CDemonRenderer_PTR_005ae704,&SStack_1bc);
                    uStack_1a4 = 8;
                    uStack_19c = 0xb;
                    uStack_1a0 = 10;
                    uStack_198 = 9;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (g_CDemonRenderer_PTR_005ae704,&SStack_1bc);
                    uStack_1a0 = 0xd;
                    uStack_1a4 = 0xc;
                    uStack_19c = 0xf;
                    uStack_198 = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (g_CDemonRenderer_PTR_005ae704,&SStack_1bc);
                  }
                }
                iStack_2c = iStack_2c + 4;
                pCStack_28 = pCStack_28 + 1;
                iStack_20 = iStack_20 + 1;
              } while (iStack_20 < _DAT_026639ec);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                      (g_CDemonRenderer_PTR_005ae704,0);
            if (iStack_78 == 0) {
              puVar14 = &DAT_020875f8 + iStack_90 * 0x3000;
              iVar13 = 0;
              do {
                *(byte **)((int)g_ZBufferScanlineArray + iVar13) = puVar14;
                iVar13 = iVar13 + 4;
                puVar14 = puVar14 + 0x100;
              } while (iVar13 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                      (g_CDemonRenderer_PTR_005ae704,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                      (g_CDemonRenderer_PTR_005ae704,(uint)((uStack_80 & 0x80000000) != 0));
            fStack_74 = 0.0;
            if (0 < iStack_7c) {
              iVar13 = iStack_7c * 4;
              iVar6 = 0;
              do {
                iVar9 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
                                  (g_CDemonRenderer_PTR_005ae704,
                                   *(SMRGLPrimitivePoly **)((int)auStack_194 + iVar6));
                iVar6 = iVar6 + 4;
                fStack_74 = (float)((int)fStack_74 + iVar9);
              } while (iVar6 < iVar13);
            }
            if (g_CGame_PTR_005b9354->debug_toggle_flag != 0) {
              puVar10 = (uint *)(iStack_90 * 0x3000 + 0x23755f8);
              iVar13 = 0;
              do {
                iVar9 = iVar13 + 4;
                puVar15 = *(uint **)((int)g_ZBufferScanlineArray + iVar13);
                puVar17 = puVar10;
                for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar17 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
                  puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar17 = *(byte *)puVar15;
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar18 * -2 + 1);
                  puVar17 = (uint *)((int)puVar17 + (uint)bVar18 * -2 + 1);
                }
                *(uint **)((int)g_ZBufferScanlineArray + iVar13) = puVar10;
                puVar10 = puVar10 + 0x40;
                iVar13 = iVar9;
              } while (iVar9 != 0xc0);
              iVar13 = 0;
              pSVar11 = pSStack_94;
              if (0 < iStack_7c) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                            (g_CDemonRenderer_PTR_005ae704,pSVar11);
                  iVar13 = iVar13 + 1;
                  pSVar11 = (SMRGLPrimitivePoly *)(pSVar11->vertices + 4);
                } while (iVar13 < iStack_7c);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                      (g_CDemonRenderer_PTR_005ae704,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                      (g_CDemonRenderer_PTR_005ae704,0);
            fStack_1c = fStack_74;
            fStack_88 = (float)(int)fStack_74 * fStack_2ec;
            fVar20 = fStack_88;
            goto LAB_00512d30;
          }
          core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(pCStack_98);
        }
        fStack_88 = 0.0;
        fVar20 = fStack_88;
      }
    }
    else {
      fVar20 = -99999.9;
    }
LAB_00512d30:
    if ((param_3 == 0) && (0.0 < fVar20)) {
      if (_DAT_020875f4 == this_ptr->selected_camera_index) {
        fVar20 = fVar20 * (float)3;
      }
      if (_DAT_020875f4 == this_ptr->previous_best_camera_index) {
        fVar20 = fVar20 * (float)0.20000000000000001;
      }
    }
    *(float *)(&DAT_02663604 + _DAT_020875f4 * 4) = fVar20;
    iStack_54 = iStack_54 + -1;
    _DAT_020875f4 = _DAT_020875f4 + 1;
  } while( true );
}
