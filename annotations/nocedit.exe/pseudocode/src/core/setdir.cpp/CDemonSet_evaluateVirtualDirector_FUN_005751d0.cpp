// Name: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
// Address: 005751d0
// Address Range: [[005751d0, 00575afd]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)

#include "nocturne.h"

int __cdecl
core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
          (CDemonSet *this_ptr,CDemonActor *actor,int force_evaluation_mode)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  int *piVar2;
  CDemonRenderer *this_ptr_01;
  CVector3f *pCVar3;
  SMRGLPrimitiveQuad *pSVar4;
  SMRGLPrimitiveQuad *pSVar5;
  float fVar6;
  int iVar7;
  CBoundingBox3D *pCVar8;
  float fVar9;
  int iVar10;
  C3DSCamera *this_ptr_02;
  CZThumb *this_ptr_03;
  uint uVar11;
  int iVar12;
  double dVar13;
  float local_160;
  CVector3i aCStack_15c [7];
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  byte auStack_ec [20];
  byte auStack_d8 [16];
  float fStack_c8;
  CBoundingBox3D CStack_c4;
  CVector3f CStack_a8;
  byte auStack_9c [20];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_48;
  int local_44;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  uint uStack_28;
  C3DSCamera *pCStack_24;
  int iStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  CDemonActor *pCStack_14;
  float fVar14;
  
  local_40 = 0;
  if (actor == (CDemonActor *)0x0) {
    if (this_ptr->selected_camera_index < 0) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,0);
    }
    return 1;
  }
  if (this_ptr->selected_camera_index < 0) {
    force_evaluation_mode = 1;
  }
  else if (1 < force_evaluation_mode) goto LAB_0057523f;
  if (0.0 < this_ptr->camera_switch_cooldown) {
    fVar6 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar6;
    if (0.0 < fVar6) {
      iVar12 = this_ptr->pending_camera_index;
      if ((-1 < iVar12) && (iVar12 != this_ptr->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar12);
        return 1;
      }
      return 0;
    }
    force_evaluation_mode = 1;
  }
LAB_0057523f:
  this_ptr_01 = g_CDemonRendererPtr2;
  this_ptr->camera_switch_cooldown = 0.0;
  local_48 = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_44 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,0);
  (*((actor->vtable)._ub)->getBoundingBox)(actor,(CBoundingBox3D *)(auStack_d8 + 0xc));
  uVar11 = 0;
  piVar2 = (int *)&stack0xfffffe8c;
  do {
    pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       (&CStack_c4,(CVector3f *)(auStack_9c + 8),uVar11);
    uVar11 = uVar11 + 1;
    piVar2[3] = (int)ROUND(pCVar3->x * 256.0f);
    piVar2[4] = (int)ROUND(pCVar3->y * 256.0f);
    piVar2[5] = (int)ROUND(pCVar3->z * 256.0f);
    piVar2 = piVar2 + 3;
  } while ((int)uVar11 < 8);
  fStack_70 = CStack_c4.min.x + CStack_c4.max.x;
  fStack_88 = (CStack_c4.min.x + CStack_c4.max.x) * 0.5f;
  fStack_6c = CStack_c4.min.y + CStack_c4.max.y;
  fStack_84 = (CStack_c4.min.y + CStack_c4.max.y) * 0.5f;
  fStack_68 = CStack_c4.min.z + CStack_c4.max.z;
  fStack_80 = (CStack_c4.min.z + CStack_c4.max.z) * 0.5f;
  iStack_100 = (int)ROUND(fStack_88 * 256.0f);
  iStack_fc = (int)ROUND(fStack_84 * 256.0f);
  iStack_f8 = (int)ROUND(fStack_80 * 256.0f);
  pSVar4 = g_BoundingBoxQuadTemplates;
  do {
    iVar12 = pSVar4->vertices[0].vertex_index;
    pSVar5 = pSVar4 + 1;
    (pSVar4->base).surface_normal.D =
         aCStack_15c[iVar12].x * (pSVar4->base).surface_normal.B +
         (pSVar4->base).surface_normal.A * aCStack_15c[iVar12 + -1].z +
         (pSVar4->base).surface_normal.C * aCStack_15c[iVar12].y;
    pSVar4 = pSVar5;
  } while (pSVar5 != (SMRGLPrimitiveQuad *)&g_BoundingBoxQuadTemplateEnd);
  if (force_evaluation_mode == 0) {
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)(this_ptr->camera_count * 10) * g_CGamePtr->delta_time_float
                                ));
    iStack_60 = (int)ROUND(dVar13);
    if (iStack_60 < 3) {
      iStack_60 = 3;
    }
    if (this_ptr->camera_count < iStack_60) {
      iStack_60 = this_ptr->camera_count;
    }
    fVar6 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar6;
    if (fVar6 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    iStack_5c = this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    g_VDCameraIndex = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*((actor->vtable)._ub)->getBoundingBox)(actor,(CBoundingBox3D *)(auStack_ec + 0xc));
  fVar6 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060((CBoundingBox3D *)auStack_d8);
  fStack_78 = (float)auStack_d8._0_4_ + (float)auStack_d8._12_4_;
  CStack_a8.x = fStack_78 * 0.5f;
  fStack_74 = (float)auStack_d8._4_4_ + fStack_c8;
  fStack_70 = (float)auStack_d8._8_4_ + CStack_c4.min.x;
  CStack_a8.y = fStack_74 * 0.5f;
  CStack_a8.z = fStack_70 * 0.5f;
  fStack_2c = fVar6 * (float)1.5 + 1.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (actor,(CVector3f *)auStack_9c,&CStack_a8);
  uStack_28 = core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr);
  iVar12 = g_WindowHeight;
  g_VDIsActorAreaInvalid = (int)(uStack_28 == 0xffffffff);
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < iVar12) {
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 4;
      *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar10) =
           *(uint *)((int)g_ZBufferScanlineArray + iVar10);
      iVar10 = iVar7;
    } while (iVar7 < iVar12 * 4);
  }
  fStack_30 = 100.0f * 100.0f;
  g_VDNearbyActorCount = 0;
  iStack_20 = 0;
  for (iVar12 = 0; iVar12 < (int)g_CDemonSetPtr->actor_list_ptr; iVar12 = iVar12 + 1) {
    this_ptr_00 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_20);
    iVar10 = (*((this_ptr_00->vtable)._ub)->getBlockVirtualDirectorFlag)(this_ptr_00);
    if (((iVar10 != 0) && (this_ptr_00 != actor)) &&
       (fVar6 = (this_ptr_00->location).position.x - (actor->location).position.x,
       fVar9 = (this_ptr_00->location).position.y - (actor->location).position.y,
       fVar14 = (this_ptr_00->location).position.z - (actor->location).position.z,
       fVar14 * fVar14 + fVar9 * fVar9 + fVar6 * fVar6 <= fStack_2c)) {
      g_VDNearbyActorPointers[g_VDNearbyActorCount] = this_ptr_00;
      pCVar8 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                         (this_ptr_00,(CBoundingBox3D *)auStack_ec);
      iVar10 = g_VDNearbyActorCount;
      if (g_VDNearbyActorBoundingBoxes + g_VDNearbyActorCount != pCVar8) {
        g_VDNearbyActorBoundingBoxes[g_VDNearbyActorCount].min.x = (pCVar8->min).x;
        g_VDNearbyActorBoundingBoxes[iVar10].min.y = (pCVar8->min).y;
        g_VDNearbyActorBoundingBoxes[iVar10].min.z = (pCVar8->min).z;
      }
      if (&g_VDNearbyActorBoundingBoxes[iVar10].max != &pCVar8->max) {
        g_VDNearbyActorBoundingBoxes[iVar10].max.x = (pCVar8->max).x;
        g_VDNearbyActorBoundingBoxes[iVar10].max.y = (pCVar8->max).y;
        g_VDNearbyActorBoundingBoxes[iVar10].max.z = (pCVar8->max).z;
      }
      g_VDNearbyActorCount = g_VDNearbyActorCount + 1;
    }
    iStack_20 = iStack_20 + 4;
  }
  pCStack_1c = &(actor->location).position;
  fVar6 = 200.0f * 200.0f;
  pCStack_24 = this_ptr->cameras;
  while ((iVar10 = g_VDCameraIndex, iVar12 = g_WindowHeight, 0 < iStack_58 &&
         (g_VDCameraIndex < this_ptr->camera_count))) {
    uVar11 = this_ptr->cameras[g_VDCameraIndex].unk3;
    if (uStack_28 == uVar11) {
      this_ptr_02 = pCStack_24 + g_VDCameraIndex;
      pCStack_14 = actor;
      if (this_ptr_02->unk4 == 0) {
        fVar14 = (float)(uStack_28 ^ uVar11);
        fVar9 = fVar14;
      }
      else {
        fVar14 = (this_ptr_02->position).x - pCStack_1c->x;
        fVar1 = (this_ptr_02->position).y - pCStack_1c->y;
        fVar9 = (this_ptr_02->position).z - pCStack_1c->z;
        if (fVar9 * fVar9 + fVar1 * fVar1 + fVar14 * fVar14 <= fVar6) {
          iVar12 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                             (this_ptr_02,pCStack_1c,fStack_2c);
          fVar14 = 0.0;
          fVar9 = fVar14;
          if (iVar12 != 0) {
            this_ptr_03 = g_CZThumbPool + iVar10 * 6;
            if (this_ptr_02->is_panning == 0) {
              fVar14 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                 (this_ptr_03,actor,aCStack_15c,&g_BoundingBoxQuadTemplates[0].base,
                                  1);
              fVar9 = fVar14;
            }
            else {
              fVar14 = 0.0;
              do {
                fVar9 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                  (this_ptr_03,pCStack_14,aCStack_15c,
                                   &g_BoundingBoxQuadTemplates[0].base,0);
                fVar14 = fVar9 + fVar14;
                this_ptr_03 = this_ptr_03 + 1;
                fVar9 = fVar14;
              } while (this_ptr_03 != g_CZThumbPool + iVar10 * 6 + 6);
            }
          }
        }
        else {
          fStack_18 = 0.0;
          fVar14 = fStack_18;
          fVar9 = fStack_18;
        }
      }
    }
    else {
      fVar14 = -99999.9;
      fVar9 = fStack_18;
    }
    fStack_18 = fVar9;
    if ((force_evaluation_mode == 0) && (0.0 < fVar14)) {
      if (g_VDCameraIndex == this_ptr->selected_camera_index) {
        fVar14 = fVar14 * (float)3;
      }
      if (g_VDCameraIndex == this_ptr->previous_best_camera_index) {
        fVar14 = fVar14 * (float)0.20000000000000001;
      }
    }
    g_VDCameraScores[g_VDCameraIndex] = fVar14;
    iStack_58 = iStack_58 + -1;
    g_VDCameraIndex = g_VDCameraIndex + 1;
  }
  if (g_ZBufferScanlineArrayBackup[0] == (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x70;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - not saved!");
  }
  if (0 < iVar12) {
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 4;
      *(uint *)((int)g_ZBufferScanlineArray + iVar10) =
           *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar10);
      iVar10 = iVar7;
    } while (iVar7 < iVar12 * 4);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,iStack_38);
  g_UseExternalRenderer = iStack_3c;
  if (this_ptr->camera_count <= g_VDCameraIndex) {
    iVar12 = -1;
    iVar10 = 0;
    local_160 = -1.0;
    if (0 < this_ptr->camera_count) {
      iVar7 = 0;
      do {
        if (local_160 < *(float *)((int)g_VDCameraScores + iVar7)) {
          local_160 = *(float *)((int)g_VDCameraScores + iVar7);
          iVar12 = iVar10;
        }
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar10 < this_ptr->camera_count);
    }
    if (-1 < iVar12) {
      if ((this_ptr->selected_camera_index < 0) ||
         (1 < force_evaluation_mode || iVar12 != this_ptr->selected_camera_index && 0.0 < local_160)
         ) {
        this_ptr->last_switch_area_invalid = g_VDIsActorAreaInvalid;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar12);
        iStack_34 = 1;
      }
    }
    g_VDCameraIndex = 0;
  }
  return iStack_34;
}
