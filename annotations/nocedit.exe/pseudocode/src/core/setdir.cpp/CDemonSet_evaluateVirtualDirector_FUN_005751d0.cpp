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
  CDemonActor *pCVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  CDemonRenderer *this_ptr_00;
  CVector3f *pCVar5;
  SMRGLPrimitiveQuad *pSVar6;
  SMRGLPrimitiveQuad *pSVar7;
  int iVar8;
  CBoundingBox3D *pCVar9;
  float fVar10;
  int iVar11;
  C3DSCamera *this_ptr_01;
  CZThumb *this_ptr_02;
  BADSPACEBASE *in_ESP;
  uint uVar12;
  int iVar13;
  double dVar14;
  byte local_168 [8];
  int local_160 [23];
  int iStack_104;
  int iStack_100;
  CBoundingBox3D CStack_fc;
  CBoundingBox3D CStack_e4;
  byte local_cc [12];
  CVector3f CStack_c0;
  CVector3f aCStack_b4 [2];
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int iStack_64;
  int iStack_60;
  int local_48;
  float local_44;
  int local_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  C3DSCamera *pCStack_30;
  int iStack_2c;
  CVector3f *pCStack_28;
  float fStack_24;
  CDemonActor *pCStack_20;
  CDemonActor *pCStack_1c;
  CDemonActor *pCStack_18;
  CDemonActor *pCStack_14;
  
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
    fVar10 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar10;
    if (0.0 < fVar10) {
      iVar13 = this_ptr->pending_camera_index;
      if ((-1 < iVar13) && (iVar13 != this_ptr->selected_camera_index)) {
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar13);
        return 1;
      }
      return 0;
    }
    force_evaluation_mode = 1;
  }
LAB_0057523f:
  this_ptr_00 = g_CDemonRendererPtr;
  this_ptr->camera_switch_cooldown = 0.0;
  local_48 = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_40 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  (*actor->vtable->getBoundingBox)(actor,(CBoundingBox3D *)(local_cc + 8));
  uVar12 = 0;
  piVar4 = (int *)&stack0xfffffe94;
  do {
    pCVar5 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)local_cc,&CStack_9c,uVar12);
    uVar12 = uVar12 + 1;
    piVar4[3] = (int)ROUND(pCVar5->x * 256f);
    piVar4[4] = (int)ROUND(pCVar5->y * 256f);
    piVar4[5] = (int)ROUND(pCVar5->z * 256f);
    piVar4 = piVar4 + 3;
  } while ((int)uVar12 < 8);
  fStack_74 = (float)local_cc._4_4_ + CStack_c0.y;
  fStack_8c = ((float)local_cc._4_4_ + CStack_c0.y) * 0.5f;
  fStack_70 = (float)local_cc._8_4_ + CStack_c0.z;
  fStack_88 = ((float)local_cc._8_4_ + CStack_c0.z) * 0.5f;
  fStack_6c = CStack_c0.x + aCStack_b4[0].x;
  fStack_84 = (CStack_c0.x + aCStack_b4[0].x) * 0.5f;
  iStack_104 = (int)ROUND(fStack_8c * 256f);
  iStack_100 = (int)ROUND(fStack_88 * 256f);
  CStack_fc.min.x = (float)(int)ROUND(fStack_84 * 256f);
  pSVar6 = g_BoundingBoxQuadTemplates;
  do {
    iVar13 = pSVar6->vertices[0].vertex_index;
    pSVar7 = pSVar6 + 1;
    (pSVar6->base).surface_normal.D =
         local_160[iVar13 * 3] * (pSVar6->base).surface_normal.B +
         (pSVar6->base).surface_normal.A * *(int *)(local_168 + iVar13 * 0xc + 4) +
         (pSVar6->base).surface_normal.C * local_160[iVar13 * 3 + 1];
    pSVar6 = pSVar7;
  } while (pSVar7 != (SMRGLPrimitiveQuad *)&g_BoundingBoxQuadTemplateEnd);
  if (force_evaluation_mode == 0) {
    dVar14 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)(this_ptr->camera_count * 10) * g_CGamePtr->delta_time_float
                                ));
    iStack_64 = (int)ROUND(dVar14);
    if (iStack_64 < 3) {
      iStack_64 = 3;
    }
    if (this_ptr->camera_count < iStack_64) {
      iStack_64 = this_ptr->camera_count;
    }
    fVar10 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar10;
    if (fVar10 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    iStack_60 = this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    g_VDCameraIndex = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*actor->vtable->getBoundingBox)(actor,&CStack_e4);
  pCStack_20 = (CDemonActor *)core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(&CStack_e4);
  fStack_90 = CStack_fc.max.x + CStack_e4.min.x;
  CStack_c0.x = fStack_90 * 0.5f;
  fStack_8c = CStack_fc.max.y + CStack_e4.min.y;
  fStack_88 = CStack_fc.max.z + CStack_e4.min.z;
  CStack_c0.y = fStack_8c * 0.5f;
  CStack_c0.z = fStack_88 * 0.5f;
  local_44 = (float)pCStack_20 * (float)1.5 + 1.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor,aCStack_b4,&CStack_c0);
  fStack_38 = (float)core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr);
  iVar13 = g_WindowHeight;
  g_VDIsActorAreaInvalid = (int)(fStack_38 == -NAN);
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < iVar13) {
    iVar11 = 0;
    do {
      iVar8 = iVar11 + 4;
      *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar11) =
           *(uint *)((int)g_ZBufferScanlineArray + iVar11);
      iVar11 = iVar8;
    } while (iVar8 < iVar13 * 4);
  }
  fStack_3c = 100f * 100f;
  g_VDNearbyActorCount = 0;
  iStack_2c = 0;
  for (iVar13 = 0; iVar13 < (int)g_CDemonSetPtr->actor_list_ptr; iVar13 = iVar13 + 1) {
    pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_2c);
    iVar11 = (*pCVar1->vtable->getBlockVirtualDirectorFlag)(pCVar1);
    if (((iVar11 != 0) && (pCVar1 != actor)) &&
       (fVar10 = (pCVar1->location).position.x - (actor->location).position.x,
       fVar3 = (pCVar1->location).position.y - (actor->location).position.y,
       fVar2 = (pCVar1->location).position.z - (actor->location).position.z,
       fVar2 * fVar2 + fVar3 * fVar3 + fVar10 * fVar10 <= fStack_3c)) {
      g_VDNearbyActorPointers[g_VDNearbyActorCount] = pCVar1;
      pCVar9 = (*pCVar1->vtable->getBoundingBox)(pCVar1,&CStack_fc);
      iVar11 = g_VDNearbyActorCount;
      if (g_VDNearbyActorBoundingBoxes + g_VDNearbyActorCount != pCVar9) {
        g_VDNearbyActorBoundingBoxes[g_VDNearbyActorCount].min.x = (pCVar9->min).x;
        g_VDNearbyActorBoundingBoxes[iVar11].min.y = (pCVar9->min).y;
        g_VDNearbyActorBoundingBoxes[iVar11].min.z = (pCVar9->min).z;
      }
      if (&g_VDNearbyActorBoundingBoxes[iVar11].max != &pCVar9->max) {
        g_VDNearbyActorBoundingBoxes[iVar11].max.x = (pCVar9->max).x;
        g_VDNearbyActorBoundingBoxes[iVar11].max.y = (pCVar9->max).y;
        g_VDNearbyActorBoundingBoxes[iVar11].max.z = (pCVar9->max).z;
      }
      g_VDNearbyActorCount = g_VDNearbyActorCount + 1;
    }
    iStack_2c = iStack_2c + 4;
  }
  pCStack_28 = &(actor->location).position;
  pCStack_18 = (CDemonActor *)(200f * 200f);
  pCStack_30 = this_ptr->cameras;
  while ((iVar11 = g_VDCameraIndex, iVar13 = g_WindowHeight, 0 < iStack_64 &&
         (g_VDCameraIndex < this_ptr->camera_count))) {
    uVar12 = this_ptr->cameras[g_VDCameraIndex].field16_0x19c;
    if (uStack_34 == uVar12) {
      this_ptr_01 = pCStack_30 + g_VDCameraIndex;
      pCStack_20 = actor;
      pCVar1 = pCStack_20;
      if (this_ptr_01->field17_0x1a0 == 0) {
        fStack_24 = (float)(uStack_34 ^ uVar12);
        fVar10 = fStack_24;
      }
      else {
        fVar10 = (this_ptr_01->position).x - pCStack_28->x;
        fVar3 = (this_ptr_01->position).y - pCStack_28->y;
        fVar2 = (this_ptr_01->position).z - pCStack_28->z;
        if (fVar2 * fVar2 + fVar3 * fVar3 + fVar10 * fVar10 <= (float)pCStack_18) {
          iVar13 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                             (this_ptr_01,pCStack_28,fStack_38);
          fVar10 = fStack_24;
          pCVar1 = (CDemonActor *)0x0;
          if (iVar13 != 0) {
            this_ptr_02 = g_CZThumbPool + iVar11 * 6;
            if (this_ptr_01->is_panning == 0) {
              pCStack_1c = (CDemonActor *)
                           core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                     (this_ptr_02,actor,(CVector3i *)(local_168 + 4),
                                      &g_BoundingBoxQuadTemplates[0].base,1);
              fVar10 = fStack_24;
              pCVar1 = pCStack_20;
              pCStack_14 = pCStack_1c;
            }
            else {
              pCStack_18 = (CDemonActor *)0x0;
              do {
                fVar10 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                   (this_ptr_02,pCStack_1c,(CVector3i *)local_168,
                                    &g_BoundingBoxQuadTemplates[0].base,0);
                pCStack_18 = (CDemonActor *)(fVar10 + (float)pCStack_18);
                this_ptr_02 = this_ptr_02 + 1;
                fVar10 = fStack_24;
                pCVar1 = pCStack_18;
              } while (this_ptr_02 != g_CZThumbPool + iVar11 * 6 + 6);
            }
          }
        }
        else {
          fStack_24 = 0.0;
          fVar10 = fStack_24;
        }
      }
    }
    else {
      fVar10 = -99999.9;
      pCVar1 = pCStack_20;
    }
    pCStack_20 = pCVar1;
    if ((force_evaluation_mode == 0) && (0.0 < fVar10)) {
      if (g_VDCameraIndex == this_ptr->selected_camera_index) {
        fVar10 = fVar10 * (float)3;
      }
      if (g_VDCameraIndex == this_ptr->previous_best_camera_index) {
        fVar10 = fVar10 * (float)0.20000000000000001;
      }
    }
    g_VDCameraScores[g_VDCameraIndex] = fVar10;
    iStack_64 = iStack_64 + -1;
    g_VDCameraIndex = g_VDCameraIndex + 1;
  }
  if (g_ZBufferScanlineArrayBackup[0] == (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x70;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - not saved!");
  }
  if (0 < iVar13) {
    iVar11 = 0;
    do {
      iVar8 = iVar11 + 4;
      *(uint *)((int)g_ZBufferScanlineArray + iVar11) =
           *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar11);
      iVar11 = iVar8;
    } while (iVar8 < iVar13 * 4);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,(int)local_44);
  g_UseExternalRenderer = (int)local_44;
  if (this_ptr->camera_count <= g_VDCameraIndex) {
    iVar13 = -1;
    iVar11 = 0;
    local_168._0_4_ = -1.0;
    if (0 < this_ptr->camera_count) {
      iVar8 = 0;
      do {
        if ((float)local_168._0_4_ < *(float *)((int)g_VDCameraScores + iVar8)) {
          local_168._0_4_ = *(float *)((int)g_VDCameraScores + iVar8);
          iVar13 = iVar11;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar11 < this_ptr->camera_count);
    }
    if (-1 < iVar13) {
      if ((this_ptr->selected_camera_index < 0) ||
         (1 < force_evaluation_mode ||
          iVar13 != this_ptr->selected_camera_index && 0.0 < (float)local_168._0_4_)) {
        this_ptr->last_switch_area_invalid = g_VDIsActorAreaInvalid;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar13);
        fStack_38 = 1.4013e-45;
      }
    }
    g_VDCameraIndex = 0;
  }
  return (int)fStack_38;
}
