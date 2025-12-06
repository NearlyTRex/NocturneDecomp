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
  float fVar1;
  float fVar2;
  int *piVar3;
  CDemonSet *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CVector3f *pCVar4;
  SMRGLPrimitiveQuad *pSVar5;
  SMRGLPrimitiveQuad *pSVar6;
  int iVar7;
  CBoundingBox3D *pCVar8;
  CDemonActor *pCVar9;
  float fVar10;
  int iVar11;
  C3DSCamera *this_ptr_02;
  CZThumb *this_ptr_03;
  BADSPACEBASE *in_ESP;
  uint uVar12;
  int iVar13;
  float10 fVar14;
  float fStack00000010;
  uint in_stack_00000014;
  float in_stack_00000018;
  int iStack0000001c;
  CVector3f *pCStack00000020;
  float in_stack_00000024;
  CDemonActor *pCStack00000028;
  CDemonActor *in_stack_0000002c;
  CDemonActor *pCStack00000030;
  int aiStack_148 [2];
  float fVar15;
  CVector3i aCStack_11c [4];
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  byte auStack_c4 [20];
  byte auStack_b0 [8];
  CBoundingBox3D CStack_a8;
  byte auStack_80 [12];
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_48;
  float local_44;
  float local_40;
  int iStack_1c;
  
  local_40 = 0.0;
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
    fVar1 = this_ptr->camera_switch_cooldown - g_CGamePtr->delta_time_float;
    this_ptr->camera_switch_cooldown = fVar1;
    if (0.0 < fVar1) {
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
  this_ptr_01 = g_CDemonRendererPtr;
  this_ptr->camera_switch_cooldown = 0.0;
  local_48 = (float)g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_40 = (float)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_01);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  (*actor->vtable->getBoundingBox)(actor,(CBoundingBox3D *)auStack_c4);
  uVar12 = 0;
  piVar3 = (int *)&stack0xfffffe94;
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)auStack_b0,(CVector3f *)auStack_80,uVar12);
    uVar12 = uVar12 + 1;
    piVar3[3] = (int)ROUND(pCVar4->x * 256f);
    piVar3[4] = (int)ROUND(pCVar4->y * 256f);
    piVar3[5] = (int)ROUND(pCVar4->z * 256f);
    piVar3 = piVar3 + 3;
  } while ((int)uVar12 < 8);
  fStack_58 = (float)auStack_b0._4_4_ + CStack_a8.min.z;
  fStack_70 = ((float)auStack_b0._4_4_ + CStack_a8.min.z) * 0.5f;
  fStack_54 = CStack_a8.min.x + CStack_a8.max.x;
  CStack_6c.x = (CStack_a8.min.x + CStack_a8.max.x) * 0.5f;
  fStack_50 = CStack_a8.min.y + CStack_a8.max.y;
  CStack_6c.y = (CStack_a8.min.y + CStack_a8.max.y) * 0.5f;
  iStack_e8 = (int)ROUND(fStack_70 * 256f);
  iStack_e4 = (int)ROUND(CStack_6c.x * 256f);
  iStack_e0 = (int)ROUND(CStack_6c.y * 256f);
  pSVar5 = g_BoundingBoxQuadTemplates;
  do {
    iVar13 = pSVar5->vertices[0].vertex_index;
    pSVar6 = pSVar5 + 1;
    (pSVar5->base).surface_normal.D =
         aiStack_148[iVar13 * 3 + 1] * (pSVar5->base).surface_normal.B +
         (pSVar5->base).surface_normal.A * aiStack_148[iVar13 * 3] +
         (pSVar5->base).surface_normal.C * *(int *)(&stack0xfffffec0 + iVar13 * 0xc);
    pSVar5 = pSVar6;
  } while (pSVar6 != (SMRGLPrimitiveQuad *)&g_BoundingBoxQuadTemplateEnd);
  if (force_evaluation_mode == 0) {
    fVar14 = (float10)(this_ptr->camera_count * 10) * (float10)g_CGamePtr->delta_time_float;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr->camera_count,g_CGamePtr));
    local_40 = (float)(int)ROUND(fVar14);
    if ((int)local_40 < 3) {
      local_40 = 4.2039e-45;
    }
    if (this_ptr->camera_count < (int)local_40) {
      local_40 = (float)this_ptr->camera_count;
    }
    fVar1 = this_ptr->previous_best_camera_timer - g_CGamePtr->delta_time_float;
    this_ptr->previous_best_camera_timer = fVar1;
    if (fVar1 <= 0.0) {
      this_ptr->previous_best_camera_index = -1;
      this_ptr->previous_best_camera_timer = 0.0;
    }
  }
  else {
    local_44 = (float)this_ptr->camera_count;
    this_ptr->previous_best_camera_index = -1;
    g_VDCameraIndex = 0;
    this_ptr->previous_best_camera_timer = 0.0;
  }
  (*actor->vtable->getBoundingBox)(actor,(CBoundingBox3D *)(auStack_c4 + 4));
  pCStack00000028 =
       (CDemonActor *)
       core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060((CBoundingBox3D *)(auStack_b0 + 4));
  local_48 = CStack_a8.min.x + CStack_a8.max.x;
  auStack_80._8_4_ = local_48 * 0.5f;
  local_44 = CStack_a8.min.y + CStack_a8.max.y;
  local_40 = CStack_a8.min.z + CStack_a8.max.z;
  fStack_74 = local_44 * 0.5f;
  fStack_70 = local_40 * 0.5f;
  this_ptr_00 = (CDemonSet *)((float)pCStack00000028 * (float)1.5 + 1.0);
  aiStack_148[1] = 0x5754ce;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (actor,&CStack_6c,(CVector3f *)(auStack_80 + 8));
  fStack00000010 = (float)core_setdir_cpp_CDemonSet_FUN_00576870(this_ptr_00);
  iVar13 = g_WindowHeight;
  g_VDIsActorAreaInvalid = (int)(fStack00000010 == -NAN);
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < iVar13) {
    iVar11 = 0;
    do {
      iVar7 = iVar11 + 4;
      *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar11) =
           *(uint *)((int)g_ZBufferScanlineArray + iVar11);
      iVar11 = iVar7;
    } while (iVar7 < iVar13 * 4);
  }
  fVar1 = 100f * 100f;
  g_VDNearbyActorCount = 0;
  iStack0000001c = 0;
  for (iVar13 = 0; iVar13 < (int)g_CDemonSetPtr->actor_list_ptr; iVar13 = iVar13 + 1) {
    pCVar9 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack0000001c);
    iVar11 = (*pCVar9->vtable->getBlockVirtualDirectorFlag)(pCVar9);
    if (((iVar11 != 0) && (pCVar9 != actor)) &&
       (fVar15 = (pCVar9->location).position.x - (actor->location).position.x,
       fVar2 = (pCVar9->location).position.y - (actor->location).position.y,
       fVar10 = (pCVar9->location).position.z - (actor->location).position.z,
       fVar10 * fVar10 + fVar2 * fVar2 + fVar15 * fVar15 <= in_stack_00000018)) {
      g_VDNearbyActorPointers[g_VDNearbyActorCount] = pCVar9;
      pCVar8 = (*pCVar9->vtable->getBoundingBox)(pCVar9,&CStack_a8);
      iVar11 = g_VDNearbyActorCount;
      if (g_VDNearbyActorBoundingBoxes + g_VDNearbyActorCount != pCVar8) {
        g_VDNearbyActorBoundingBoxes[g_VDNearbyActorCount].min.x = (pCVar8->min).x;
        g_VDNearbyActorBoundingBoxes[iVar11].min.y = (pCVar8->min).y;
        g_VDNearbyActorBoundingBoxes[iVar11].min.z = (pCVar8->min).z;
      }
      if (&g_VDNearbyActorBoundingBoxes[iVar11].max != &pCVar8->max) {
        g_VDNearbyActorBoundingBoxes[iVar11].max.x = (pCVar8->max).x;
        g_VDNearbyActorBoundingBoxes[iVar11].max.y = (pCVar8->max).y;
        g_VDNearbyActorBoundingBoxes[iVar11].max.z = (pCVar8->max).z;
      }
      g_VDNearbyActorCount = g_VDNearbyActorCount + 1;
    }
    iStack0000001c = iStack0000001c + 4;
  }
  pCStack00000020 = &(actor->location).position;
  pCStack00000030 = (CDemonActor *)(200f * 200f);
  while ((iVar11 = g_VDCameraIndex, iVar13 = g_WindowHeight, 0 < iStack_1c &&
         (g_VDCameraIndex < this_ptr_00->camera_count))) {
    uVar12 = this_ptr_00->cameras[g_VDCameraIndex].field16_0x19c;
    if (in_stack_00000014 == uVar12) {
      this_ptr_02 = this_ptr_00->cameras + g_VDCameraIndex;
      pCStack00000028 = actor;
      pCVar9 = pCStack00000028;
      if (this_ptr_02->field17_0x1a0 == 0) {
        in_stack_00000024 = (float)(in_stack_00000014 ^ uVar12);
        fVar15 = in_stack_00000024;
      }
      else {
        fVar15 = (this_ptr_02->position).x - pCStack00000020->x;
        fVar2 = (this_ptr_02->position).y - pCStack00000020->y;
        fVar10 = (this_ptr_02->position).z - pCStack00000020->z;
        if (fVar10 * fVar10 + fVar2 * fVar2 + fVar15 * fVar15 <= (float)pCStack00000030) {
          pCVar9 = (CDemonActor *)
                   core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                             (this_ptr_02,pCStack00000020,fStack00000010);
          fVar15 = in_stack_00000024;
          if (pCVar9 != (CDemonActor *)0x0) {
            this_ptr_03 = g_CZThumbPool + iVar11 * 6;
            if (this_ptr_02->is_panning == 0) {
              in_stack_0000002c =
                   (CDemonActor *)
                   core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                             (this_ptr_03,actor,aCStack_11c,&g_BoundingBoxQuadTemplates[0].base,1);
              pCVar9 = pCStack00000028;
            }
            else {
              pCStack00000030 = (CDemonActor *)0x0;
              do {
                fVar10 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                                   (this_ptr_03,in_stack_0000002c,(CVector3i *)&stack0xfffffee0,
                                    &g_BoundingBoxQuadTemplates[0].base,0);
                pCStack00000030 = (CDemonActor *)(fVar10 + (float)pCStack00000030);
                this_ptr_03 = this_ptr_03 + 1;
                pCVar9 = pCStack00000030;
              } while (this_ptr_03 != g_CZThumbPool + iVar11 * 6 + 6);
            }
          }
        }
        else {
          in_stack_00000024 = 0.0;
          fVar15 = in_stack_00000024;
        }
      }
    }
    else {
      pCVar9 = pCStack00000028;
      fVar15 = -99999.9;
    }
    pCStack00000028 = pCVar9;
    if ((fVar1 == 0.0) && (0.0 < fVar15)) {
      if (g_VDCameraIndex == this_ptr_00->selected_camera_index) {
        fVar15 = fVar15 * (float)3;
      }
      if (g_VDCameraIndex == this_ptr_00->previous_best_camera_index) {
        fVar15 = fVar15 * (float)0.20000000000000001;
      }
    }
    g_VDCameraScores[g_VDCameraIndex] = fVar15;
    iStack_1c = iStack_1c + -1;
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
      iVar7 = iVar11 + 4;
      *(uint *)((int)g_ZBufferScanlineArray + iVar11) =
           *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar11);
      iVar11 = iVar7;
    } while (SBORROW /* signed borrow */4(iVar7,iVar13 * 4) != iVar7 + iVar13 * -4 < 0);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,(int)this_ptr_00);
  g_UseExternalRenderer = (int)this_ptr_00;
  if (this_ptr_00->camera_count <= g_VDCameraIndex) {
    iVar13 = -1;
    iVar11 = 0;
    fVar15 = -1.0;
    if (0 < this_ptr_00->camera_count) {
      iVar7 = 0;
      do {
        if (fVar15 < *(float *)((int)g_VDCameraScores + iVar7)) {
          fVar15 = *(float *)((int)g_VDCameraScores + iVar7);
          iVar13 = iVar11;
        }
        iVar11 = iVar11 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar11 < this_ptr_00->camera_count);
    }
    if (-1 < iVar13) {
      if ((this_ptr_00->selected_camera_index < 0) ||
         (1 < (int)fVar1 || iVar13 != this_ptr_00->selected_camera_index && 0.0 < fVar15)) {
        this_ptr_00->last_switch_area_invalid = g_VDIsActorAreaInvalid;
        core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr_00,iVar13);
        fStack00000010 = 1.4013e-45;
      }
    }
    g_VDCameraIndex = 0;
  }
  return (int)fStack00000010;
}
