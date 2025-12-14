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
  int *piVar3;
  CDemonSet *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CVector3f *pCVar4;
  SMRGLPrimitiveQuad *pSVar5;
  SMRGLPrimitiveQuad *pSVar6;
  int iVar7;
  CBoundingBox3D *pCVar8;
  float fVar9;
  int iVar10;
  C3DSCamera *this_ptr_02;
  CZThumb *this_ptr_03;
  BADSPACEBASE *in_ESP;
  uint uVar11;
  int iVar12;
  double dVar13;
  float in_stack_00000010;
  int iStack00000014;
  CVector3f *pCStack00000018;
  float in_stack_0000001c;
  CDemonActor *pCStack00000020;
  CDemonActor *in_stack_00000024;
  CDemonActor *pCStack00000028;
  float fVar14;
  float fVar15;
  CVector3i aCStack_124 [5];
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  byte auStack_c8 [20];
  byte auStack_b4 [8];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  int local_44;
  int local_40;
  int iStack_24;
  
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
    fVar15 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar15;
    if (0.0 < fVar15) {
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
  local_48 = (float)g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_40 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  (*actor->vtable->getBoundingBox)(actor,(CBoundingBox3D *)(auStack_c8 + 4));
  uVar11 = 0;
  piVar3 = (int *)&stack0xfffffe94;
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)(auStack_b4 + 4),&CStack_80,uVar11);
    uVar11 = uVar11 + 1;
    piVar3[3] = (int)ROUND(pCVar4->x * 256f);
    piVar3[4] = (int)ROUND(pCVar4->y * 256f);
    piVar3[5] = (int)ROUND(pCVar4->z * 256f);
    piVar3 = piVar3 + 3;
  } while ((int)uVar11 < 8);
  fStack_58 = fStack_ac + fStack_a0;
  CStack_74.y = (fStack_ac + fStack_a0) * 0.5f;
  fStack_54 = fStack_a8 + fStack_9c;
  CStack_74.z = (fStack_a8 + fStack_9c) * 0.5f;
  fStack_50 = fStack_a4 + fStack_98;
  fStack_68 = (fStack_a4 + fStack_98) * 0.5f;
  iStack_e8 = (int)ROUND(CStack_74.y * 256f);
  iStack_e4 = (int)ROUND(CStack_74.z * 256f);
  iStack_e0 = (int)ROUND(fStack_68 * 256f);
  pSVar5 = g_BoundingBoxQuadTemplates;
  do {
    iVar12 = pSVar5->vertices[0].vertex_index;
    pSVar6 = pSVar5 + 1;
    (pSVar5->base).surface_normal.D =
         aCStack_124[iVar12 + -3].y * (pSVar5->base).surface_normal.B +
         (pSVar5->base).surface_normal.A * *(int *)(&stack0xfffffeb8 + iVar12 * 0xc) +
         (pSVar5->base).surface_normal.C * aCStack_124[iVar12 + -3].z;
    pSVar5 = pSVar6;
  } while (pSVar6 != (SMRGLPrimitiveQuad *)&g_BoundingBoxQuadTemplateEnd);
  if (force_evaluation_mode == 0) {
    force_evaluation_mode = this_ptr->camera_count * 10;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)force_evaluation_mode * g_CGamePtr->delta_time_float));
    local_48 = (float)(int)ROUND(dVar13);
    if ((int)local_48 < 3) {
      local_48 = 4.2039e-45;
    }
    if (this_ptr->camera_count < (int)local_48) {
      local_48 = (float)this_ptr->camera_count;
    }
    fVar15 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar15;
    if (fVar15 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    local_44 = this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    g_VDCameraIndex = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*actor->vtable->getBoundingBox)(actor,(CBoundingBox3D *)auStack_c8);
  pCStack00000020 =
       (CDemonActor *)
       core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060((CBoundingBox3D *)auStack_b4);
  fStack_50 = (float)auStack_b4._4_4_ + fStack_a4;
  CStack_80.x = fStack_50 * 0.5f;
  fStack_4c = fStack_ac + fStack_a0;
  local_48 = fStack_a8 + fStack_9c;
  CStack_80.y = fStack_4c * 0.5f;
  CStack_80.z = local_48 * 0.5f;
  fVar15 = (float)pCStack00000020 * (float)1.5 + 1.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor,&CStack_74,&CStack_80);
  actor = (CDemonActor *)core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr);
  iVar12 = g_WindowHeight;
  g_VDIsActorAreaInvalid = (int)(actor == (CDemonActor *)0xffffffff);
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
  this_ptr_00 = (CDemonSet *)(100f * 100f);
  g_VDNearbyActorCount = 0;
  iStack00000014 = 0;
  for (iVar12 = 0; iVar12 < (int)g_CDemonSetPtr->actor_list_ptr; iVar12 = iVar12 + 1) {
    pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack00000014);
    iVar10 = (*pCVar1->vtable->getBlockVirtualDirectorFlag)(pCVar1);
    if (((iVar10 != 0) && (pCVar1 != actor)) &&
       (fVar14 = (pCVar1->location).position.x - (actor->location).position.x,
       fVar2 = (pCVar1->location).position.y - (actor->location).position.y,
       fVar9 = (pCVar1->location).position.z - (actor->location).position.z,
       fVar9 * fVar9 + fVar2 * fVar2 + fVar14 * fVar14 <= in_stack_00000010)) {
      g_VDNearbyActorPointers[g_VDNearbyActorCount] = pCVar1;
      pCVar8 = (*pCVar1->vtable->getBoundingBox)(pCVar1,(CBoundingBox3D *)(auStack_b4 + 4));
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
    iStack00000014 = iStack00000014 + 4;
  }
  pCStack00000018 = &(actor->location).position;
  pCStack00000028 = (CDemonActor *)(200f * 200f);
  while ((iVar10 = g_VDCameraIndex, iVar12 = g_WindowHeight, 0 < iStack_24 &&
         (g_VDCameraIndex < this_ptr_00->camera_count))) {
    uVar11 = this_ptr_00->cameras[g_VDCameraIndex].field16_0x19c;
    if (force_evaluation_mode == uVar11) {
      this_ptr_02 = this_ptr_00->cameras + g_VDCameraIndex;
      if (this_ptr_02->field17_0x1a0 == 0) {
        in_stack_0000001c = (float)(force_evaluation_mode ^ uVar11);
        pCVar1 = actor;
        fVar14 = in_stack_0000001c;
      }
      else {
        fVar14 = (this_ptr_02->position).x - pCStack00000018->x;
        fVar2 = (this_ptr_02->position).y - pCStack00000018->y;
        fVar9 = (this_ptr_02->position).z - pCStack00000018->z;
        if (fVar9 * fVar9 + fVar2 * fVar2 + fVar14 * fVar14 <= (float)pCStack00000028) {
          pCStack00000020 = actor;
          iVar12 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                             (this_ptr_02,pCStack00000018,(float)actor);
          pCVar1 = (CDemonActor *)0x0;
          fVar14 = in_stack_0000001c;
          if (iVar12 != 0) {
            this_ptr_03 = g_CZThumbPool + iVar10 * 6;
            if (this_ptr_02->is_panning == 0) {
              in_stack_00000024 =
                   (CDemonActor *)
                   core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                             (this_ptr_03,actor,aCStack_124,&g_BoundingBoxQuadTemplates[0].base,1);
              pCVar1 = pCStack00000020;
            }
            else {
              pCStack00000028 = (CDemonActor *)0x0;
              do {
                fVar9 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                  (this_ptr_03,in_stack_00000024,(CVector3i *)&stack0xfffffed8,
                                   &g_BoundingBoxQuadTemplates[0].base,0);
                pCStack00000028 = (CDemonActor *)(fVar9 + (float)pCStack00000028);
                this_ptr_03 = this_ptr_03 + 1;
                pCVar1 = pCStack00000028;
              } while (this_ptr_03 != g_CZThumbPool + iVar10 * 6 + 6);
            }
          }
        }
        else {
          in_stack_0000001c = 0.0;
          pCVar1 = actor;
          fVar14 = in_stack_0000001c;
        }
      }
    }
    else {
      pCVar1 = pCStack00000020;
      fVar14 = -99999.9;
    }
    pCStack00000020 = pCVar1;
    if ((force_evaluation_mode == 0) && (0.0 < fVar14)) {
      if (g_VDCameraIndex == this_ptr_00->selected_camera_index) {
        fVar14 = fVar14 * (float)3;
      }
      if (g_VDCameraIndex == this_ptr_00->previous_best_camera_index) {
        fVar14 = fVar14 * (float)0.20000000000000001;
      }
    }
    g_VDCameraScores[g_VDCameraIndex] = fVar14;
    iStack_24 = iStack_24 + -1;
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
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,(int)fVar15);
  g_UseExternalRenderer = (int)fVar15;
  if (this_ptr_00->camera_count <= g_VDCameraIndex) {
    iVar12 = -1;
    iVar10 = 0;
    fVar15 = -1.0;
    if (0 < this_ptr_00->camera_count) {
      iVar7 = 0;
      do {
        if (fVar15 < *(float *)((int)g_VDCameraScores + iVar7)) {
          fVar15 = *(float *)((int)g_VDCameraScores + iVar7);
          iVar12 = iVar10;
        }
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar10 < this_ptr_00->camera_count);
    }
    if (-1 < iVar12) {
      if ((this_ptr_00->selected_camera_index < 0) ||
         (1 < force_evaluation_mode || iVar12 != this_ptr_00->selected_camera_index && 0.0 < fVar15)
         ) {
        this_ptr_00->last_switch_area_invalid = g_VDIsActorAreaInvalid;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr_00,iVar12);
        actor = (CDemonActor *)&DAT_00000001;
      }
    }
    g_VDCameraIndex = 0;
  }
  return (int)actor;
}
