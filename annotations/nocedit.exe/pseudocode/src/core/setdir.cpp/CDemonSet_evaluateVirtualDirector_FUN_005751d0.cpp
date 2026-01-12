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
  float fVar2;
  int *piVar3;
  CDemonRenderer *this_ptr_01;
  CVector3f *pCVar4;
  SMRGLPrimitiveQuad *pSVar5;
  SMRGLPrimitiveQuad *pSVar6;
  float fVar7;
  int iVar8;
  CBoundingBox3D *pCVar9;
  int iVar10;
  C3DSCamera *this_ptr_02;
  CZThumb *this_ptr_03;
  BADSPACEBASE *in_ESP;
  uint uVar11;
  int iVar12;
  double dVar13;
  float fStack_170;
  float fStack_16c;
  CVector3i local_168 [8];
  int iStack_108;
  int iStack_104;
  int iStack_100;
  byte auStack_fc [24];
  CBoundingBox3D CStack_e4;
  CBoundingBox3D local_cc;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_68;
  int iStack_64;
  int local_48;
  int local_44;
  int local_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  C3DSCamera *pCStack_30;
  int iStack_2c;
  CVector3f *pCStack_28;
  float fStack_24;
  CDemonActor *pCStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
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
    fVar7 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar7;
    if (0.0 < fVar7) {
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
  this_ptr_01 = g_CDemonRendererPtr;
  this_ptr->camera_switch_cooldown = 0.0;
  local_48 = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_44 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  (*actor->vtable->getBoundingBox)(actor,&local_cc);
  uVar11 = 0;
  piVar3 = (int *)&stack0xfffffe8c;
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_cc,&CStack_9c,uVar11);
    uVar11 = uVar11 + 1;
    piVar3[3] = (int)ROUND(pCVar4->x * 256f);
    piVar3[4] = (int)ROUND(pCVar4->y * 256f);
    piVar3[5] = (int)ROUND(pCVar4->z * 256f);
    piVar3 = piVar3 + 3;
  } while ((int)uVar11 < 8);
  fStack_78 = local_cc.min.x + local_cc.max.x;
  fStack_90 = (local_cc.min.x + local_cc.max.x) * 0.5f;
  fStack_74 = local_cc.min.y + local_cc.max.y;
  fStack_8c = (local_cc.min.y + local_cc.max.y) * 0.5f;
  fStack_70 = local_cc.min.z + local_cc.max.z;
  fStack_88 = (local_cc.min.z + local_cc.max.z) * 0.5f;
  iStack_108 = (int)ROUND(fStack_90 * 256f);
  iStack_104 = (int)ROUND(fStack_8c * 256f);
  iStack_100 = (int)ROUND(fStack_88 * 256f);
  pSVar5 = g_BoundingBoxQuadTemplates;
  do {
    iVar12 = pSVar5->vertices[0].vertex_index;
    pSVar6 = pSVar5 + 1;
    (pSVar5->base).surface_normal.D =
         local_168[iVar12].y * (pSVar5->base).surface_normal.B +
         (pSVar5->base).surface_normal.A * local_168[iVar12].x +
         (pSVar5->base).surface_normal.C * local_168[iVar12].z;
    pSVar5 = pSVar6;
  } while (pSVar6 != (SMRGLPrimitiveQuad *)&g_BoundingBoxQuadTemplateEnd);
  if (force_evaluation_mode == 0) {
    iStack_14 = this_ptr->camera_count * 10;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)iStack_14 * g_CGamePtr->delta_time_float));
    iStack_68 = (int)ROUND(dVar13);
    if (iStack_68 < 3) {
      iStack_68 = 3;
    }
    if (this_ptr->camera_count < iStack_68) {
      iStack_68 = this_ptr->camera_count;
    }
    fVar7 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar7;
    if (fVar7 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    iStack_64 = this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    g_VDCameraIndex = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*actor->vtable->getBoundingBox)(actor,(CBoundingBox3D *)(auStack_fc + 0x14));
  fVar7 = core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(&CStack_e4);
  fStack_84 = CStack_e4.min.x + CStack_e4.max.x;
  CStack_b4.x = fStack_84 * 0.5f;
  fStack_80 = CStack_e4.min.y + CStack_e4.max.y;
  fStack_7c = CStack_e4.min.z + CStack_e4.max.z;
  CStack_b4.y = fStack_80 * 0.5f;
  CStack_b4.z = fStack_7c * 0.5f;
  fStack_38 = fVar7 * (float)1.5 + 1.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor,&CStack_a8,&CStack_b4);
  uStack_34 = core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr);
  iVar12 = g_WindowHeight;
  g_VDIsActorAreaInvalid = (int)(uStack_34 == 0xffffffff);
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < iVar12) {
    iVar10 = 0;
    do {
      iVar8 = iVar10 + 4;
      *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar10) =
           *(uint *)((int)g_ZBufferScanlineArray + iVar10);
      iVar10 = iVar8;
    } while (iVar8 < iVar12 * 4);
  }
  fStack_3c = 100f * 100f;
  g_VDNearbyActorCount = 0;
  iStack_2c = 0;
  for (iVar12 = 0; iVar12 < (int)g_CDemonSetPtr->actor_list_ptr; iVar12 = iVar12 + 1) {
    this_ptr_00 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_2c);
    iVar10 = (*this_ptr_00->vtable->getBlockVirtualDirectorFlag)(this_ptr_00);
    if (((iVar10 != 0) && (this_ptr_00 != actor)) &&
       (fVar7 = (this_ptr_00->location).position.x - (actor->location).position.x,
       fVar2 = (this_ptr_00->location).position.y - (actor->location).position.y,
       fVar1 = (this_ptr_00->location).position.z - (actor->location).position.z,
       fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7 <= fStack_3c)) {
      g_VDNearbyActorPointers[g_VDNearbyActorCount] = this_ptr_00;
      pCVar9 = (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,(CBoundingBox3D *)auStack_fc);
      iVar10 = g_VDNearbyActorCount;
      if (g_VDNearbyActorBoundingBoxes + g_VDNearbyActorCount != pCVar9) {
        g_VDNearbyActorBoundingBoxes[g_VDNearbyActorCount].min.x = (pCVar9->min).x;
        g_VDNearbyActorBoundingBoxes[iVar10].min.y = (pCVar9->min).y;
        g_VDNearbyActorBoundingBoxes[iVar10].min.z = (pCVar9->min).z;
      }
      if (&g_VDNearbyActorBoundingBoxes[iVar10].max != &pCVar9->max) {
        g_VDNearbyActorBoundingBoxes[iVar10].max.x = (pCVar9->max).x;
        g_VDNearbyActorBoundingBoxes[iVar10].max.y = (pCVar9->max).y;
        g_VDNearbyActorBoundingBoxes[iVar10].max.z = (pCVar9->max).z;
      }
      g_VDNearbyActorCount = g_VDNearbyActorCount + 1;
    }
    iStack_2c = iStack_2c + 4;
  }
  pCStack_28 = &(actor->location).position;
  fStack_18 = 200f * 200f;
  pCStack_30 = this_ptr->cameras;
  while ((iVar10 = g_VDCameraIndex, iVar12 = g_WindowHeight, 0 < iStack_64 &&
         (g_VDCameraIndex < this_ptr->camera_count))) {
    uVar11 = this_ptr->cameras[g_VDCameraIndex].field16_0x19c;
    if (uStack_34 == uVar11) {
      this_ptr_02 = pCStack_30 + g_VDCameraIndex;
      pCStack_20 = actor;
      if (this_ptr_02->field17_0x1a0 == 0) {
        fVar7 = (float)(uStack_34 ^ uVar11);
      }
      else {
        fVar7 = (this_ptr_02->position).x - pCStack_28->x;
        fVar2 = (this_ptr_02->position).y - pCStack_28->y;
        fVar1 = (this_ptr_02->position).z - pCStack_28->z;
        if (fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7 <= fStack_18) {
          iVar12 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                             (this_ptr_02,pCStack_28,fStack_38);
          fVar7 = 0.0;
          if (iVar12 != 0) {
            this_ptr_03 = g_CZThumbPool + iVar10 * 6;
            if (this_ptr_02->is_panning == 0) {
              fStack_1c = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                    (this_ptr_03,actor,local_168,&g_BoundingBoxQuadTemplates[0].base
                                     ,1);
              fVar7 = fStack_1c;
            }
            else {
              fStack_1c = 0.0;
              do {
                fVar7 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                  (this_ptr_03,pCStack_20,local_168,
                                   &g_BoundingBoxQuadTemplates[0].base,0);
                fStack_1c = fVar7 + fStack_1c;
                this_ptr_03 = this_ptr_03 + 1;
                fVar7 = fStack_1c;
              } while (this_ptr_03 != g_CZThumbPool + iVar10 * 6 + 6);
            }
          }
        }
        else {
          fStack_24 = 0.0;
          fVar7 = fStack_24;
        }
      }
      fStack_24 = fVar7;
      fStack_170 = fStack_24;
    }
    else {
      fStack_170 = -99999.9;
    }
    if ((force_evaluation_mode == 0) && (0.0 < fStack_170)) {
      if (g_VDCameraIndex == this_ptr->selected_camera_index) {
        fStack_170 = fStack_170 * (float)3;
      }
      if (g_VDCameraIndex == this_ptr->previous_best_camera_index) {
        fStack_170 = fStack_170 * (float)0.20000000000000001;
      }
    }
    g_VDCameraScores[g_VDCameraIndex] = fStack_170;
    iStack_64 = iStack_64 + -1;
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
      iVar8 = iVar10 + 4;
      *(uint *)((int)g_ZBufferScanlineArray + iVar10) =
           *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar10);
      iVar10 = iVar8;
    } while (iVar8 < iVar12 * 4);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,local_44);
  g_UseExternalRenderer = local_48;
  if (this_ptr->camera_count <= g_VDCameraIndex) {
    iVar12 = -1;
    iVar10 = 0;
    fStack_16c = -1.0;
    if (0 < this_ptr->camera_count) {
      iVar8 = 0;
      do {
        if (fStack_16c < *(float *)((int)g_VDCameraScores + iVar8)) {
          fStack_16c = *(float *)((int)g_VDCameraScores + iVar8);
          iVar12 = iVar10;
        }
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar10 < this_ptr->camera_count);
    }
    if (-1 < iVar12) {
      if ((this_ptr->selected_camera_index < 0) ||
         (1 < force_evaluation_mode || iVar12 != this_ptr->selected_camera_index && 0.0 < fStack_16c
         )) {
        this_ptr->last_switch_area_invalid = g_VDIsActorAreaInvalid;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar12);
        local_40 = 1;
      }
    }
    g_VDCameraIndex = 0;
  }
  return local_40;
}
