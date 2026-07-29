// Name: core_setdir.cpp_FUN_005125a0
// Address: 005125a0
// Address Range: [[005125a0, 005135c3]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_005125a0(CDemonSet *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_setdir_cpp_FUN_005125a0(CDemonSet *param_1,CDemonActor *param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr;
  CVector3f *pCVar4;
  byte *puVar5;
  int iVar6;
  CBoundingBox3D *pCVar7;
  SMRGLPrimitivePoly *pSVar8;
  int iVar9;
  CDemonActor *pCVar10;
  CDemonActor *pCVar11;
  C3DSCamera *this_ptr_00;
  uint *puVar12;
  SMRGLPrimitivePoly *pSVar13;
  uint uVar14;
  int iVar15;
  SProjectedVertex *point;
  byte *puVar16;
  uint *puVar17;
  int *piVar18;
  CVector3i *input;
  uint *puVar19;
  byte bVar20;
  double dVar21;
  float fVar22;
  float fStack_2f0;
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
  uint uStack_c0;
  uint local_bc;
  int local_b8;
  float local_b4;
  int iStack_b0;
  float fStack_ac;
  C3DSCamera *pCStack_9c;
  CDemonActor *pCStack_98;
  SMRGLPrimitivePoly *pSStack_94;
  CDemonActor *pCStack_90;
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
  
  bVar20 = 0;
  local_bc = 0;
  if (param_2 == (CDemonActor *)0x0) {
    if ((int)param_1->renderable_actors[0x773] < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(param_1,0);
    }
    return 1;
  }
  if ((int)param_1->renderable_actors[0x773] < 0) {
    param_3 = 1;
  }
  else if (1 < param_3) goto LAB_0051260f;
  if (0.0 < (float)param_1->renderable_actors[0x777]) {
    pCVar10 = (CDemonActor *)
              ((float)param_1->renderable_actors[0x777] - *(float *)(0x01C775EC + 0x264));
    param_1->renderable_actors[0x777] = pCVar10;
    if (0.0 < (float)pCVar10) {
      if ((-1 < (int)param_1->renderable_actors[0x776]) &&
         (param_1->renderable_actors[0x776] != param_1->renderable_actors[0x773])) {
        core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                  (param_1,(int)param_1->renderable_actors[0x776]);
        return 1;
      }
      return 0;
    }
    param_3 = 1;
  }
LAB_0051260f:
  this_ptr = DAT_005ae704;
  param_1->renderable_actors[0x777] = (CDemonActor *)0x0;
  local_b8 = _DAT_01c02594;
  _DAT_01c02594 = 0;
  local_b4 = (float)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(this_ptr);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40(DAT_005ae704,0,0,0x40,0x30);
  uVar14 = 0;
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,(CBoundingBox3D *)local_160);
  piVar18 = &CStack_228.y;
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                       ((CBoundingBox3D *)local_160,&CStack_d0,uVar14);
    uVar14 = uVar14 + 1;
    *piVar18 = (int)ROUND(pCVar4->x * _DAT_005a1a70);
    piVar18[1] = (int)ROUND(pCVar4->y * _DAT_005a1a70);
    piVar18[2] = (int)ROUND(pCVar4->z * _DAT_005a1a70);
    piVar18 = piVar18 + 3;
  } while ((int)uVar14 < 8);
  fStack_130 = (float)local_160._0_4_ + (float)local_160._12_4_;
  fStack_100 = ((float)local_160._0_4_ + (float)local_160._12_4_) * 0.5f;
  fStack_12c = (float)local_160._4_4_ + (float)local_160._16_4_;
  fStack_fc = ((float)local_160._4_4_ + (float)local_160._16_4_) * 0.5f;
  CStack_128.x = (float)local_160._8_4_ + (float)local_160._20_4_;
  CStack_f8.x = ((float)local_160._8_4_ + (float)local_160._20_4_) * 0.5f;
  iStack_1c4 = (int)ROUND(fStack_100 * _DAT_005a1a70);
  iStack_1c0 = (int)ROUND(fStack_fc * _DAT_005a1a70);
  SStack_1bc.base.type = (int)ROUND(CStack_f8.x * _DAT_005a1a70);
  puVar16 = &DAT_005be774;
  do {
    iVar15 = *(int *)(puVar16 + 0x18);
    puVar5 = puVar16 + 0x48;
    *(int *)(puVar16 + 0x14) =
         aiStack_21c[iVar15 * 3 + -1] * *(int *)(puVar16 + 0xc) +
         *(int *)(puVar16 + 8) * aiStack_21c[iVar15 * 3 + -2] +
         *(int *)(puVar16 + 0x10) * aiStack_21c[iVar15 * 3];
    puVar16 = puVar5;
  } while (puVar5 != &DAT_005be924);
  if (param_3 == 0) {
    iStack_18 = param_1->camera_count * 10;
    dVar21 = round
                       ((double)((float)iStack_18 * *(float *)(0x01C775EC + 0x264)));
    iStack_54 = (int)ROUND(dVar21);
    if (iStack_54 < 3) {
      iStack_54 = 3;
    }
    if (param_1->camera_count < iStack_54) {
      iStack_54 = param_1->camera_count;
    }
    pCVar10 = (CDemonActor *)
              ((float)param_1->renderable_actors[0x775] - *(float *)(0x01C775EC + 0x264));
    param_1->renderable_actors[0x775] = pCVar10;
    if ((float)pCVar10 <= 0.0) {
      param_1->renderable_actors[0x774] = (CDemonActor *)0xffffffff;
      param_1->renderable_actors[0x775] = (CDemonActor *)0x0;
    }
  }
  else {
    pCStack_50 = (CVector3f *)param_1->camera_count;
    param_1->renderable_actors[0x774] = (CDemonActor *)0xffffffff;
    _DAT_020875f4 = (CDemonActor *)0x0;
    param_1->renderable_actors[0x775] = (CDemonActor *)0x0;
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
  iStack_b0 = core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(param_1,&CStack_110);
  _DAT_026714b0 = (CDemonActor *)(uint)(iStack_b0 == -1);
  iVar15 = 0;
  do {
    iVar6 = iVar15 + 4;
    *(uint *)((int)auStack_2e8 + iVar15) = *(uint *)(&DAT_01bd4260 + iVar15);
    iVar15 = iVar6;
  } while (iVar6 != 0xc0);
  iVar15 = 0;
  _DAT_026639ec = 0;
  fStack_ac = 100.0f * 100.0f;
  for (iStack_24 = 0; iStack_24 < *(int *)(0x01E57284 + 0x14cd6c); iStack_24 = iStack_24 + 1) {
    pCVar10 = *(CDemonActor **)(iVar15 + 0x14cd70 + 0x01E57284);
    iVar6 = (*((pCVar10->vtable)._ub)->getBlockVirtualDirectorFlag)(pCVar10);
    if (((iVar6 != 0) && (pCVar10 != param_2)) &&
       (fVar22 = (pCVar10->location).position.x - (param_2->location).position.x,
       fVar3 = (pCVar10->location).position.y - (param_2->location).position.y,
       fVar2 = (pCVar10->location).position.z - (param_2->location).position.z,
       fVar2 * fVar2 + fVar3 * fVar3 + fVar22 * fVar22 <= fStack_ac)) {
      *(CDemonActor **)(&DAT_026639f0 + _DAT_026639ec * 4) = pCVar10;
      pCVar7 = (*((pCVar10->vtable)._ub)->getBoundingBox)
                         (pCVar10,(CBoundingBox3D *)(local_160 + 0x14));
      iVar6 = _DAT_026639ec * 0x18;
      if ((CBoundingBox3D *)(iVar6 + 0x2665930) != pCVar7) {
        (((CBoundingBox3D *)(iVar6 + 0x2665930))->min).x = (pCVar7->min).x;
        *(float *)(iVar6 + 0x2665934) = (pCVar7->min).y;
        *(float *)(iVar6 + 0x2665938) = (pCVar7->min).z;
      }
      if ((CVector3f *)(iVar6 + 0x266593c) != &pCVar7->max) {
        *(float *)(iVar6 + 0x266593c) = (pCVar7->max).x;
        *(float *)(iVar6 + 0x2665940) = (pCVar7->max).y;
        *(float *)(iVar6 + 0x2665944) = (pCVar7->max).z;
      }
      _DAT_026639ec = _DAT_026639ec + 1;
    }
    iVar15 = iVar15 + 4;
  }
  pCStack_34 = &(param_2->location).position;
  fStack_4c = 100.0f * 100.0f;
  fStack_70 = 200.0f * 200.0f;
  pCStack_9c = param_1->cameras;
  do {
    if ((iStack_54 < 1) || (param_1->camera_count <= (int)_DAT_020875f4)) {
      iVar15 = 0;
      do {
        iVar6 = iVar15 + 4;
        *(uint *)(&DAT_01bd4260 + iVar15) = *(uint *)((int)auStack_2e8 + iVar15);
        iVar15 = iVar6;
      } while (iVar6 != 0xc0);
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70();
      engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,local_b8);
      _DAT_01c02594 = local_bc;
      if (param_1->camera_count <= (int)_DAT_020875f4) {
        fStack_2f0 = -1.0;
        pCVar10 = (CDemonActor *)0xffffffff;
        pCVar11 = (CDemonActor *)0x0;
        if (0 < param_1->camera_count) {
          iVar15 = 0;
          do {
            if (fStack_2f0 < *(float *)(&DAT_02663604 + iVar15)) {
              fStack_2f0 = *(float *)(&DAT_02663604 + iVar15);
              pCVar10 = pCVar11;
            }
            pCVar11 = (CDemonActor *)(pCVar11->actor_name + 1);
            iVar15 = iVar15 + 4;
          } while ((int)pCVar11 < param_1->camera_count);
        }
        if (-1 < (int)pCVar10) {
          if (((int)param_1->renderable_actors[0x773] < 0) ||
             (1 < param_3 || pCVar10 != param_1->renderable_actors[0x773] && 0.0 < fStack_2f0)) {
            param_1->renderable_actors[0x75c] = _DAT_026714b0;
            core_set_cpp_CDemonSet_setCameraView_FUN_005088f0(param_1,(int)pCVar10);
            uStack_c0 = 1;
          }
        }
        _DAT_020875f4 = (CDemonActor *)0x0;
      }
      return uStack_c0;
    }
    if (iStack_b0 ==
        *(int *)((int)&param_1->cameras[0].rotation_matrix + (int)_DAT_020875f4 * 0x1a0 + 0x80)) {
      pCStack_98 = param_2;
      pSStack_94 = (SMRGLPrimitivePoly *)&DAT_005be774;
      this_ptr_00 = (C3DSCamera *)(pCStack_9c->name + (int)_DAT_020875f4 * 0x1a0);
      pCStack_8c = this_ptr_00;
      pCStack_90 = _DAT_020875f4;
      if ((float)this_ptr_00->vdir_zone == 0.0) {
        fStack_88 = (float)this_ptr_00->vdir_zone;
        fVar22 = fStack_88;
      }
      else {
        fVar22 = (this_ptr_00->position).x - pCStack_34->x;
        fVar3 = (this_ptr_00->position).y - pCStack_34->y;
        fVar2 = (this_ptr_00->position).z - pCStack_34->z;
        if ((fVar2 * fVar2 + fVar3 * fVar3 + fVar22 * fVar22 <= fStack_70) &&
           (iVar15 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
                               (this_ptr_00,pCStack_34,local_b4), iVar15 != 0)) {
          engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
                    (DAT_005ae704,&this_ptr_00->position);
          engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
                    (DAT_005ae704,(float)this_ptr_00->is_panning);
          engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
                    (DAT_005ae704,&this_ptr_00->orientation);
          uStack_84 = 0x800000ff;
          uStack_80 = 0;
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                    (DAT_005ae704,pCStack_34);
          CStack_f8.x = (param_2->orient).vec.x;
          CStack_f8.z = (param_2->orient).vec.z;
          CStack_f8.y = (this_ptr_00->orientation).y;
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                    (DAT_005ae704,&CStack_f8,(CVector3f *)0x0);
          input = &CStack_228;
          iVar15 = 0;
          do {
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      ((SProjectedVertex *)
                       ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iVar15),input);
            iVar6 = iVar15 + 0x30;
            input = input + 1;
            uVar14 = *(uint *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x +
                              iVar15);
            uStack_84 = uStack_84 & uVar14;
            uStack_80 = uStack_80 | uVar14;
            iVar15 = iVar6;
          } while (iVar6 != 0x180);
          if (((uStack_84 & 0x80000000) == 0) || ((char)uStack_84 == '\0')) {
            iVar15 = 0;
            pSVar13 = pSStack_94 + 3;
            iStack_7c = 0;
            pSVar8 = pSStack_94;
            do {
              *(SMRGLPrimitivePoly **)((int)auStack_194 + iVar15) = pSVar8;
              iVar15 = iVar15 + 4;
              iStack_7c = iStack_7c + 1;
              pSVar8 = (SMRGLPrimitivePoly *)(pSVar8->vertices + 4);
            } while (pSVar8 != (SMRGLPrimitivePoly *)(pSVar13->vertices + 4));
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(pCStack_98);
            iStack_30 = 0;
            do {
              point = (SProjectedVertex *)
                      ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x +
                      iStack_30);
              iVar15 = point->transformed_z;
              if (0 < iVar15) {
                iVar6 = iVar15 + 0x80;
                point->transformed_x =
                     (int)(((longlong)point->transformed_x * (longlong)iVar6) / (longlong)iVar15);
                point->transformed_y =
                     (int)(((longlong)point->transformed_y * (longlong)iVar6) /
                          (longlong)point->transformed_z);
                point->transformed_z = iVar6;
                engine_matrix_c_projectTransformedPoint_FUN_004cd260(point);
              }
              iStack_30 = iStack_30 + 0x30;
            } while (iStack_30 != 0x180);
            iVar15 = 0;
            fStack_2ec = 1.0;
            do {
              if ((*(byte *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x +
                            iVar15 + 3) & 0x80) != 0) {
                dVar21 = 0.0625;
                if (0 < *(int *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).
                                       transformed_z + iVar15)) {
                  dVar21 = 0.5;
                }
                fStack_2ec = fStack_2ec * (float)dVar21;
              }
              iVar15 = iVar15 + 0x30;
            } while (iVar15 != 0x180);
            iStack_20 = 0;
            iStack_78 = 0;
            iStack_30 = 0x180;
            if (0 < _DAT_026639ec) {
              iStack_2c = 0;
              puStack_38 = (uint *)(&DAT_020875f8 + (int)pCStack_90 * 0x3000);
              pCStack_28 = (CBoundingBox3D *)0x2665930;
              pCStack_50 = &pCStack_8c->position;
              do {
                pCStack_60 = *(CDemonActor **)(&DAT_026639f0 + iStack_2c);
                fVar22 = (pCStack_60->location).position.x - pCStack_50->x;
                fVar3 = (pCStack_60->location).position.y - pCStack_50->y;
                fVar2 = (pCStack_60->location).position.z - pCStack_50->z;
                if (fVar2 * fVar2 + fVar3 * fVar3 + fVar22 * fVar22 <= fStack_4c) {
                  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(pCStack_60);
                  uVar14 = 0;
                  uStack_5c = 0x800000ff;
                  uStack_58 = 0;
                  pCStack_3c = pCStack_28;
                  iVar15 = 0x180;
                  do {
                    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                              (pCStack_3c,&CStack_128,uVar14);
                    CStack_ec.x = (int)ROUND(CStack_128.x * _DAT_005a1a70);
                    CStack_ec.y = (int)ROUND(CStack_128.y * _DAT_005a1a70);
                    CStack_ec.z = (int)ROUND(CStack_128.z * _DAT_005a1a70);
                    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                              ((SProjectedVertex *)
                               ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).
                                      transformed_x + iVar15),&CStack_ec);
                    uVar14 = uVar14 + 1;
                    uVar1 = *(uint *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).
                                            screen_x + iVar15);
                    uStack_5c = uStack_5c & uVar1;
                    uStack_58 = uStack_58 | uVar1;
                    iVar15 = iVar15 + 0x30;
                  } while ((int)uVar14 < 8);
                  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(pCStack_60);
                  if (((uStack_5c & 0x80000000) == 0) || ((char)uStack_5c == '\0')) {
                    if (iStack_78 == 0) {
                      iStack_78 = 1;
                      puVar12 = puStack_38;
                      puVar17 = (uint *)&DAT_020845f4;
                      for (iVar15 = 0xc00; iVar15 != 0; iVar15 = iVar15 + -1) {
                        *puVar17 = *puVar12;
                        puVar12 = puVar12 + (uint)bVar20 * -2 + 1;
                        puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
                      }
                      for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
                        *(byte *)puVar17 = *(byte *)puVar12;
                        puVar12 = (uint *)((int)puVar12 + (uint)bVar20 * -2 + 1);
                        puVar17 = (uint *)((int)puVar17 + (uint)bVar20 * -2 + 1);
                      }
                      puVar16 = &DAT_020845f4;
                      iVar15 = 0;
                      do {
                        *(byte **)(&DAT_01bd4260 + iVar15) = puVar16;
                        iVar15 = iVar15 + 4;
                        puVar16 = puVar16 + 0x100;
                      } while (iVar15 != 0xc0);
                      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                                (DAT_005ae704,1);
                    }
                    SStack_1bc.base.count = 4;
                    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                              (DAT_005ae704,(uint)((uStack_58 & 0x80000000) != 0));
                    uStack_19c = 0xe;
                    uStack_1a4 = 8;
                    uStack_1a0 = 0xc;
                    uStack_198 = 10;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,&SStack_1bc);
                    uStack_198 = 0xd;
                    uStack_1a4 = 9;
                    uStack_1a0 = 0xb;
                    uStack_19c = 0xf;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,&SStack_1bc);
                    uStack_1a4 = 8;
                    uStack_1a0 = 9;
                    uStack_19c = 0xd;
                    uStack_198 = 0xc;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,&SStack_1bc);
                    uStack_1a4 = 10;
                    uStack_1a0 = 0xe;
                    uStack_19c = 0xf;
                    uStack_198 = 0xb;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,&SStack_1bc);
                    uStack_1a4 = 8;
                    uStack_19c = 0xb;
                    uStack_1a0 = 10;
                    uStack_198 = 9;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,&SStack_1bc);
                    uStack_1a0 = 0xd;
                    uStack_1a4 = 0xc;
                    uStack_19c = 0xf;
                    uStack_198 = 0xe;
                    engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                              (DAT_005ae704,&SStack_1bc);
                  }
                }
                iStack_2c = iStack_2c + 4;
                pCStack_28 = pCStack_28 + 1;
                iStack_20 = iStack_20 + 1;
              } while (iStack_20 < _DAT_026639ec);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
            if (iStack_78 == 0) {
              puVar16 = &DAT_020875f8 + (int)pCStack_90 * 0x3000;
              iVar15 = 0;
              do {
                *(byte **)(&DAT_01bd4260 + iVar15) = puVar16;
                iVar15 = iVar15 + 4;
                puVar16 = puVar16 + 0x100;
              } while (iVar15 != 0xc0);
            }
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                      (DAT_005ae704,(uint)((uStack_80 & 0x80000000) != 0));
            fStack_74 = 0.0;
            if (0 < iStack_7c) {
              iVar15 = iStack_7c * 4;
              iVar6 = 0;
              do {
                iVar9 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
                                  (DAT_005ae704,*(SMRGLPrimitivePoly **)((int)auStack_194 + iVar6));
                iVar6 = iVar6 + 4;
                fStack_74 = (float)((int)fStack_74 + iVar9);
              } while (iVar6 < iVar15);
            }
            if (*(int *)(0x01C775EC + 0x1e8) != 0) {
              puVar12 = (uint *)((int)pCStack_90 * 0x3000 + 0x23755f8);
              iVar15 = 0;
              do {
                iVar9 = iVar15 + 4;
                puVar17 = *(uint **)(&DAT_01bd4260 + iVar15);
                puVar19 = puVar12;
                for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar19 = *puVar17;
                  puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
                  puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar19 = *(byte *)puVar17;
                  puVar17 = (uint *)((int)puVar17 + (uint)bVar20 * -2 + 1);
                  puVar19 = (uint *)((int)puVar19 + (uint)bVar20 * -2 + 1);
                }
                *(uint **)(&DAT_01bd4260 + iVar15) = puVar12;
                puVar12 = puVar12 + 0x40;
                iVar15 = iVar9;
              } while (iVar9 != 0xc0);
              iVar15 = 0;
              pSVar13 = pSStack_94;
              if (0 < iStack_7c) {
                do {
                  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                            (DAT_005ae704,pSVar13);
                  iVar15 = iVar15 + 1;
                  pSVar13 = (SMRGLPrimitivePoly *)(pSVar13->vertices + 4);
                } while (iVar15 < iStack_7c);
              }
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
            engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
            fStack_1c = fStack_74;
            fStack_88 = (float)(int)fStack_74 * fStack_2ec;
            fVar22 = fStack_88;
            goto LAB_00512d30;
          }
          core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(pCStack_98);
        }
        fStack_88 = 0.0;
        fVar22 = fStack_88;
      }
    }
    else {
      fVar22 = -99999.9;
    }
LAB_00512d30:
    if ((param_3 == 0) && (0.0 < fVar22)) {
      if (_DAT_020875f4 == param_1->renderable_actors[0x773]) {
        fVar22 = fVar22 * (float)3;
      }
      if (_DAT_020875f4 == param_1->renderable_actors[0x774]) {
        fVar22 = fVar22 * (float)0.20000000000000001;
      }
    }
    *(float *)(&DAT_02663604 + (int)_DAT_020875f4 * 4) = fVar22;
    iStack_54 = iStack_54 + -1;
    _DAT_020875f4 = (CDemonActor *)(_DAT_020875f4->actor_name + 1);
  } while( true );
}
