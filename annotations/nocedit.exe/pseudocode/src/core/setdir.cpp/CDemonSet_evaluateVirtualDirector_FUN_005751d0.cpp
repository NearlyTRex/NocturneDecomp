// Name: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
// Address: 005751d0
// Address Range: [[005751d0, 00575afd]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e367c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db292 [UNCONDITIONAL_CALL]
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 (004dc3e0) at 004dc962 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd39d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e48a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005393c6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 (0053c140) at 0053c19f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055da35 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setdir_cpp_006463fe
//   TerminatedCString s_saveZBufferTable_already_00646411
//   TerminatedCString s_core_setdir_cpp_00646433
//   TerminatedCString s_saveZBufferTable_not_sav_00646446
//   float g_VDHalfExtentMultiplier = 0.5
//   double g_VDBBoxExpansionFactor = 1.5
//   double g_VDCurrentCameraBonus = 3
//   double g_VDPreviousCameraBonus = 0.200000000000000
//   float g_VDCoordinateScaleFactor = 256
//   float g_VDCameraDistanceRadius = 200
//   float g_VDNearbyActorRadius = 100
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   SMRGLPrimitiveQuad[6] g_BoundingBoxQuadTemplates
//   undefined4 DAT_006814dc
//   undefined4 DAT_006814e0
//   undefined4 DAT_006814e4
//   undefined4 DAT_006814e8
//   undefined4 DAT_006814ec
//   undefined4 DAT_00681524
//   undefined4 DAT_00681528
//   undefined4 DAT_0068152c
//   undefined4 DAT_00681534
//   SMRGLPrimitiveQuad* g_BoundingBoxQuadTemplateEnd = 00000000
//   CDemonRenderer g_CDemonRendererInstance
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   int g_UseExternalRenderer
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   int g_VDCameraIndex
//   float[250] g_VDCameraScores
//   undefined4 DAT_03346d24
//   CZThumb[1500] g_CZThumbPool
//   undefined4 DAT_03347130
//   undefined4 DAT_033471f8
//   int g_VDNearbyActorCount
//   CDemonActor*[2000] g_VDNearbyActorPointers
//   CBoundingBox3D[2000] g_VDNearbyActorBoundingBoxes
//   undefined4 DAT_03357ab0
//   undefined4 DAT_03357ab4
//   undefined4 DAT_03357ab8
//   undefined4 DAT_03357abc
//   undefined4 DAT_03357ac0
//   uint*[1024] g_ZBufferScanlineArrayBackup
//   undefined4 DAT_03363630
//   int g_VDIsActorAreaInvalid
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_setdir.cpp_CDemonSet_FUN_00576870
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
//   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0

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
  undefined1 auStack_c4 [20];
  undefined1 auStack_b0 [8];
  CBoundingBox3D CStack_a8;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
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
  (*((actor->metadata).vtable)->getBoundingBox)(actor,(CBoundingBox3D *)auStack_c4);
  uVar12 = 0;
  piVar3 = (int *)&stack0xfffffe94;
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)auStack_b0,&CStack_80,uVar12);
    uVar12 = uVar12 + 1;
    piVar3[3] = (int)ROUND(pCVar4->x * g_VDCoordinateScaleFactor);
    piVar3[4] = (int)ROUND(pCVar4->y * g_VDCoordinateScaleFactor);
    piVar3[5] = (int)ROUND(pCVar4->z * g_VDCoordinateScaleFactor);
    piVar3 = piVar3 + 3;
  } while ((int)uVar12 < 8);
  fStack_58 = (float)auStack_b0._4_4_ + CStack_a8.min.z;
  fStack_70 = ((float)auStack_b0._4_4_ + CStack_a8.min.z) * g_VDHalfExtentMultiplier;
  fStack_54 = CStack_a8.min.x + CStack_a8.max.x;
  fStack_6c = (CStack_a8.min.x + CStack_a8.max.x) * g_VDHalfExtentMultiplier;
  fStack_50 = CStack_a8.min.y + CStack_a8.max.y;
  fStack_68 = (CStack_a8.min.y + CStack_a8.max.y) * g_VDHalfExtentMultiplier;
  iStack_e8 = (int)ROUND(fStack_70 * g_VDCoordinateScaleFactor);
  iStack_e4 = (int)ROUND(fStack_6c * g_VDCoordinateScaleFactor);
  iStack_e0 = (int)ROUND(fStack_68 * g_VDCoordinateScaleFactor);
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
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr->camera_count,g_CGamePtr));
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
  (*((actor->metadata).vtable)->getBoundingBox)(actor,(CBoundingBox3D *)(auStack_c4 + 4));
  pCStack00000028 =
       (CDemonActor *)
       core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060((CBoundingBox3D *)(auStack_b0 + 4));
  local_48 = CStack_a8.min.x + CStack_a8.max.x;
  CStack_80.z = local_48 * g_VDHalfExtentMultiplier;
  local_44 = CStack_a8.min.y + CStack_a8.max.y;
  local_40 = CStack_a8.min.z + CStack_a8.max.z;
  fStack_74 = local_44 * g_VDHalfExtentMultiplier;
  fStack_70 = local_40 * g_VDHalfExtentMultiplier;
  this_ptr_00 = (CDemonSet *)((float)pCStack00000028 * (float)g_VDBBoxExpansionFactor + 1.0);
  aiStack_148[1] = 0x5754ce;
  core_actor_cpp_CDemonActor_FUN_00408ec0(actor);
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
      *(undefined4 *)((int)g_ZBufferScanlineArrayBackup + iVar11) =
           *(undefined4 *)((int)g_ZBufferScanlineArray + iVar11);
      iVar11 = iVar7;
    } while (iVar7 < iVar13 * 4);
  }
  fVar1 = g_VDNearbyActorRadius * g_VDNearbyActorRadius;
  g_VDNearbyActorCount = 0;
  iStack0000001c = 0;
  for (iVar13 = 0; iVar13 < (int)g_CDemonSetPtr->actor_list_ptr; iVar13 = iVar13 + 1) {
    pCVar9 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack0000001c);
    iVar11 = (*((pCVar9->metadata).vtable)->getBlockVirtualDirectorFlag)(pCVar9);
    if (((iVar11 != 0) && (pCVar9 != actor)) &&
       (fVar15 = (pCVar9->location).position.x - (actor->location).position.x,
       fVar2 = (pCVar9->location).position.y - (actor->location).position.y,
       fVar10 = (pCVar9->location).position.z - (actor->location).position.z,
       fVar10 * fVar10 + fVar2 * fVar2 + fVar15 * fVar15 <= in_stack_00000018)) {
      g_VDNearbyActorPointers[g_VDNearbyActorCount] = pCVar9;
      pCVar8 = (*((pCVar9->metadata).vtable)->getBoundingBox)(pCVar9,&CStack_a8);
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
  pCStack00000030 = (CDemonActor *)(g_VDCameraDistanceRadius * g_VDCameraDistanceRadius);
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
        fVar15 = fVar15 * (float)g_VDCurrentCameraBonus;
      }
      if (g_VDCameraIndex == this_ptr_00->previous_best_camera_index) {
        fVar15 = fVar15 * (float)g_VDPreviousCameraBonus;
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
      *(undefined4 *)((int)g_ZBufferScanlineArray + iVar11) =
           *(undefined4 *)((int)g_ZBufferScanlineArrayBackup + iVar11);
      iVar11 = iVar7;
    } while (SBORROW4(iVar7,iVar13 * 4) != iVar7 + iVar13 * -4 < 0);
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


// Assembly code:
// 005751d0: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
// 005751d1: PUSH ESI
// 005751d2: PUSH EDI
// 005751d3: PUSH EBP
// 005751d4: MOV EBP,ESP
// 005751d6: SUB ESP,0x160
// 005751dc: AND ESP,0xfffffff8
// 005751df: XOR EDX,EDX
// 005751e1: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005751e4: MOV dword ptr [ESP + 0x130],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 005751eb: TEST ECX,ECX
// 005751ed: JNZ 0x00575213
//   XREF to: 00575213 (CONDITIONAL_JUMP)
// 005751ef: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005751f2: CMP dword ptr [EAX + 0x15aea4],0x0
// 005751f9: JL 0x00575207
//   XREF to: 00575207 (CONDITIONAL_JUMP)
// 005751fb: MOV EAX,0x1
//   Label: LAB_005751fb
// 00575200: MOV ESP,EBP
// 00575202: POP EBP
// 00575203: POP EDI
// 00575204: POP ESI
// 00575205: POP EBX
// 00575206: RET
// 00575207: PUSH EDX
//   Label: LAB_00575207
// 00575208: PUSH EAX
// 00575209: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0057520e: ADD ESP,0x8
// 00575211: JMP 0x005751fb
//   XREF to: 005751fb (UNCONDITIONAL_JUMP)
// 00575213: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00575213
//   XREF to: Stack[0x4] (READ)
// 00575216: CMP dword ptr [EAX + 0x15aea4],0x0
// 0057521d: JL 0x00575719
//   XREF to: 00575719 (CONDITIONAL_JUMP)
// 00575223: CMP dword ptr [EBP + 0x1c],0x2
//   XREF to: Stack[0xc] (READ)
// 00575227: JGE 0x0057523f
//   XREF to: 0057523f (CONDITIONAL_JUMP)
// 00575229: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00575229
//   XREF to: Stack[0x4] (READ)
// 0057522c: FLD float ptr [EAX + 0x15aeb4]
// 00575232: FLDZ
// 00575234: FCOMPP
// 00575236: FNSTSW AX
// 00575238: SAHF
// 00575239: JC 0x00575725
//   XREF to: 00575725 (CONDITIONAL_JUMP)
// 0057523f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057523f
//   XREF to: Stack[0x4] (READ)
// 00575242: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00575248: XOR EDX,EDX
// 0057524a: MOV dword ptr [EAX + 0x15aeb4],0x0
// 00575254: MOV EAX,[0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 00575259: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0057525a: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00575261: MOV dword ptr [0x02d03e94],EDX
//   XREF to: 02d03e94 (WRITE)
// 00575267: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0057526c: ADD ESP,0x4
// 0057526f: PUSH 0x0
// 00575271: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00575277: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00575278: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0057527f: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 00575284: ADD ESP,0x8
// 00575287: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0xcc] (DATA)
// 0057528e: PUSH EAX
// 0057528f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00575292: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00575295: PUSH ESI
// 00575296: MOV EDX,dword ptr [EDX + 0x154]
// 0057529c: LEA EDI,[ESP + 0x10]
//   XREF to: Stack[-0x168] (DATA)
// 005752a0: CALL dword ptr [EDX + 0x14]
// 005752a3: ADD ESP,0x8
// 005752a6: XOR ESI,ESI
// 005752a8: PUSH ESI
//   Label: LAB_005752a8
// 005752a9: LEA EAX,[ESP + 0xd8]
// 005752b0: PUSH EAX
// 005752b1: LEA EAX,[ESP + 0xac]
// 005752b8: PUSH EAX
// 005752b9: MOV EBX,EDI
// 005752bb: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 005752c0: ADD ESP,0xc
// 005752c3: ADD EDI,0xc
// 005752c6: INC ESI
// 005752c7: FLD float ptr [EAX]
// 005752c9: FMUL float ptr [0x006629bc]
//   XREF to: 006629bc (READ)
// 005752cf: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x168] (DATA)
// 005752d1: FLD float ptr [EAX + 0x4]
// 005752d4: FMUL float ptr [0x006629bc]
//   XREF to: 006629bc (READ)
// 005752da: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x164] (WRITE)
// 005752dd: FLD float ptr [EAX + 0x8]
// 005752e0: FMUL float ptr [0x006629bc]
//   XREF to: 006629bc (READ)
// 005752e6: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x160] (WRITE)
// 005752e9: CMP ESI,0x8
// 005752ec: JL 0x005752a8
//   XREF to: 005752a8 (CONDITIONAL_JUMP)
// 005752ee: FLD float ptr [ESP + 0xa4]
// 005752f5: FADD float ptr [ESP + 0xb0]
// 005752fc: FST float ptr [ESP + 0xf8]
// 00575303: FLD float ptr [0x006464be]
//   XREF to: 006464be (READ)
// 00575309: FXCH
// 0057530b: FMUL ST1
// 0057530d: FLD float ptr [ESP + 0xac]
// 00575314: FLD float ptr [ESP + 0xa8]
// 0057531b: FADD float ptr [ESP + 0xb4]
// 00575322: FXCH
// 00575324: FADD float ptr [ESP + 0xb8]
// 0057532b: FXCH
// 0057532d: FST float ptr [ESP + 0xfc]
// 00575334: FMUL ST3
// 00575336: FXCH
// 00575338: FST float ptr [ESP + 0x100]
// 0057533f: FMULP ST3
// 00575341: LEA EBX,[ESP + 0x68]
// 00575345: LEA EAX,[ESP + 0xe0]
// 0057534c: FXCH
// 0057534e: FSTP float ptr [ESP + 0xe0]
// 00575355: FSTP float ptr [ESP + 0xe4]
// 0057535c: FSTP float ptr [ESP + 0xe8]
// 00575363: FLD float ptr [EAX]
// 00575365: FMUL float ptr [0x006629bc]
//   XREF to: 006629bc (READ)
// 0057536b: FISTP dword ptr [EBX]
// 0057536d: FLD float ptr [EAX + 0x4]
// 00575370: FMUL float ptr [0x006629bc]
//   XREF to: 006629bc (READ)
// 00575376: FISTP dword ptr [EBX + 0x4]
// 00575379: FLD float ptr [EAX + 0x8]
// 0057537c: FMUL float ptr [0x006629bc]
//   XREF to: 006629bc (READ)
// 00575382: FISTP dword ptr [EBX + 0x8]
// 00575385: MOV EAX,0x6814d4
//   XREF to: 006814d4 (DATA)
// 0057538a: LEA ECX,[EAX + 0x1b0]
//   XREF to: 00681684 (DATA)
// 00575390: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_00575390
//   XREF to: 006814ec (READ)
//   XREF to: 00681534 (READ)
// 00575393: LEA EBX,[ESI*0x4 + 0x0]
// 0057539a: SUB EBX,ESI
// 0057539c: LEA ESI,[ESP + 0x8]
// 005753a0: SHL EBX,0x2
// 005753a3: ADD ESI,EBX
// 005753a5: MOV EBX,dword ptr [EAX + 0xc]
//   XREF to: 006814e0 (READ)
//   XREF to: 00681528 (READ)
// 005753a8: MOV EDX,dword ptr [ESI + 0x4]
// 005753ab: IMUL EDX,EBX
// 005753ae: MOV EDI,dword ptr [ESI]
// 005753b0: MOV EBX,dword ptr [EAX + 0x8]
//   XREF to: 006814dc (READ)
//   XREF to: 00681524 (READ)
// 005753b3: IMUL EBX,EDI
// 005753b6: MOV EDI,dword ptr [ESI + 0x8]
// 005753b9: ADD EDX,EBX
// 005753bb: MOV EBX,dword ptr [EAX + 0x10]
//   XREF to: 006814e4 (READ)
//   XREF to: 0068152c (READ)
// 005753be: IMUL EBX,EDI
// 005753c1: ADD EAX,0x48
// 005753c4: ADD EDX,EBX
// 005753c6: MOV dword ptr [EAX + -0x34],EDX
//   XREF to: 006814e8 (WRITE)
// 005753c9: CMP EAX,ECX
// 005753cb: JNZ 0x00575390
//   XREF to: 00575390 (CONDITIONAL_JUMP)
// 005753cd: CMP dword ptr [EBP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 005753d1: JZ 0x00575789
//   XREF to: 00575789 (CONDITIONAL_JUMP)
// 005753d7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005753da: MOV EAX,dword ptr [EAX]
// 005753dc: MOV dword ptr [ESP + 0x10c],EAX
// 005753e3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005753e6: XOR ESI,ESI
// 005753e8: MOV dword ptr [EAX + 0x15aea8],0xffffffff
// 005753f2: MOV dword ptr [0x03346d10],ESI
//   XREF to: 03346d10 (WRITE)
// 005753f8: MOV dword ptr [EAX + 0x15aeac],ESI
// 005753fe: LEA EAX,[ESP + 0x8c]
//   Label: LAB_005753fe
// 00575405: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00575408: PUSH EAX
// 00575409: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057540c: MOV EDX,dword ptr [EDX + 0x154]
// 00575412: PUSH EDI
// 00575413: CALL dword ptr [EDX + 0x14]
// 00575416: ADD ESP,0x8
// 00575419: LEA EAX,[ESP + 0x8c]
// 00575420: PUSH EAX
// 00575421: CALL core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060
//   XREF to: 00421060 (UNCONDITIONAL_CALL)
// 00575426: MOV dword ptr [ESP + 0x160],EAX
// 0057542d: FLD float ptr [ESP + 0x160]
// 00575434: ADD ESP,0x4
// 00575437: FLD float ptr [ESP + 0x8c]
// 0057543e: FADD float ptr [ESP + 0x98]
// 00575445: FXCH
// 00575447: FMUL double ptr [0x006464c6]
//   XREF to: 006464c6 (READ)
// 0057544d: FXCH
// 0057544f: FST float ptr [ESP + 0xec]
// 00575456: FLD float ptr [0x006464be]
//   XREF to: 006464be (READ)
// 0057545c: FXCH
// 0057545e: FMUL ST1
// 00575460: FLD float ptr [ESP + 0x94]
// 00575467: FLD float ptr [ESP + 0x90]
// 0057546e: FADD float ptr [ESP + 0x9c]
// 00575475: FXCH
// 00575477: FADD float ptr [ESP + 0xa0]
// 0057547e: FXCH
// 00575480: FST float ptr [ESP + 0xf0]
// 00575487: FMUL ST3
// 00575489: FXCH
// 0057548b: FST float ptr [ESP + 0xf4]
// 00575492: FMULP ST3
// 00575494: LEA EAX,[ESP + 0xbc]
// 0057549b: FLD1
// 0057549d: PUSH EAX
// 0057549e: LEA EAX,[ESP + 0xcc]
// 005754a5: FADDP ST4,ST0
// 005754a7: PUSH EAX
// 005754a8: FXCH ST3
// 005754aa: FSTP float ptr [ESP + 0x140]
// 005754b1: PUSH EDI
// 005754b2: FSTP float ptr [ESP + 0xc8]
// 005754b9: FXCH
// 005754bb: FSTP float ptr [ESP + 0xcc]
// 005754c2: FSTP float ptr [ESP + 0xd0]
// 005754c9: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005754ce: ADD ESP,0xc
// 005754d1: LEA EAX,[ESP + 0xc8]
// 005754d8: PUSH EAX
// 005754d9: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005754dc: PUSH EDX
// 005754dd: CALL core_setdir.cpp_CDemonSet_FUN_00576870
//   XREF to: 00576870 (UNCONDITIONAL_CALL)
// 005754e2: ADD ESP,0x8
// 005754e5: MOV dword ptr [ESP + 0x13c],EAX
// 005754ec: CMP EAX,-0x1
// 005754ef: SETZ AL
// 005754f2: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005754f8: AND EAX,0xff
// 005754fd: MOV ECX,dword ptr [0x0336362c]
//   XREF to: 0336362c (READ)
// 00575503: MOV [0x033648f4],EAX
//   XREF to: 033648f4 (WRITE)
// 00575508: TEST ECX,ECX
// 0057550a: JZ 0x0057552f
//   XREF to: 0057552f (CONDITIONAL_JUMP)
// 0057550c: MOV EBX,0x6463fe
//   XREF to: 006463fe (PARAM)
// 00575511: MOV ESI,0x67
// 00575516: PUSH 0x646411
//   XREF to: 00646411 (DATA)
// 0057551b: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00575521: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00575527: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057552c: ADD ESP,0x4
// 0057552f: TEST EDI,EDI
//   Label: LAB_0057552f
// 00575531: JLE 0x00575550
//   XREF to: 00575550 (CONDITIONAL_JUMP)
// 00575533: SHL EDI,0x2
// 00575536: XOR EAX,EAX
// 00575538: ADD EAX,0x4
//   Label: LAB_00575538
// 0057553b: MOV EBX,dword ptr [EAX + 0x2cf7d58]
//   XREF to: 02cf7d5c (READ)
//   XREF to: 02cf7d60 (READ)
// 00575541: MOV dword ptr [EAX + 0x3363628],EBX
//   XREF to: 0336362c (WRITE)
//   XREF to: 03363630 (WRITE)
// 00575547: CMP EAX,EDI
// 00575549: JL 0x00575538
//   XREF to: 00575538 (CONDITIONAL_JUMP)
// 0057554b: LEA EAX,[EAX]
// 0057554e: MOV ECX,ECX
// 00575550: FLD float ptr [0x006629d8]
//   Label: LAB_00575550
//   XREF to: 006629d8 (READ)
// 00575556: FMUL ST0
// 00575558: XOR EDI,EDI
// 0057555a: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057555d: MOV dword ptr [0x03355b68],EDI
//   XREF to: 03355b68 (WRITE)
// 00575563: ADD ESI,0x20
// 00575566: MOV dword ptr [ESP + 0x144],EDI
// 0057556d: FSTP float ptr [ESP + 0x134]
// 00575574: MOV EAX,[0x006810c8]
//   Label: LAB_00575574
//   XREF to: 006810c8 (READ)
// 00575579: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0057557f: JL 0x0057582e
//   XREF to: 0057582e (CONDITIONAL_JUMP)
// 00575585: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00575588: FLD float ptr [0x006629d4]
//   XREF to: 006629d4 (READ)
// 0057558e: FLD ST0
// 00575590: ADD EAX,0x20
// 00575593: FMULP
// 00575595: MOV dword ptr [ESP + 0x148],EAX
// 0057559c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057559f: ADD EAX,0x4
// 005755a2: FSTP float ptr [ESP + 0x158]
// 005755a9: MOV dword ptr [ESP + 0x140],EAX
// 005755b0: CMP dword ptr [ESP + 0x10c],0x0
//   Label: LAB_005755b0
// 005755b8: JLE 0x005755ca
//   XREF to: 005755ca (CONDITIONAL_JUMP)
// 005755ba: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005755bd: MOV EAX,[0x03346d10]
//   XREF to: 03346d10 (READ)
// 005755c2: CMP EAX,dword ptr [EDX]
// 005755c4: JL 0x005758fe
//   XREF to: 005758fe (CONDITIONAL_JUMP)
// 005755ca: MOV ESI,dword ptr [0x0336362c]
//   Label: LAB_005755ca
//   XREF to: 0336362c (READ)
// 005755d0: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005755d6: TEST ESI,ESI
// 005755d8: JNZ 0x005755fc
//   XREF to: 005755fc (CONDITIONAL_JUMP)
// 005755da: MOV EDI,0x646433
//   XREF to: 00646433 (DATA)
// 005755df: MOV EAX,0x70
// 005755e4: PUSH 0x646446
//   XREF to: 00646446 (DATA)
// 005755e9: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005755ef: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005755f4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005755f9: ADD ESP,0x4
// 005755fc: TEST EBX,EBX
//   Label: LAB_005755fc
// 005755fe: JLE 0x00575620
//   XREF to: 00575620 (CONDITIONAL_JUMP)
// 00575600: LEA EDX,[EBX*0x4 + 0x0]
// 00575607: XOR EAX,EAX
// 00575609: ADD EAX,0x4
//   Label: LAB_00575609
// 0057560c: MOV EBX,dword ptr [EAX + 0x3363628]
//   XREF to: 0336362c (READ)
//   XREF to: 03363630 (READ)
// 00575612: MOV dword ptr [EAX + 0x2cf7d58],EBX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 00575618: CMP EAX,EDX
// 0057561a: JL 0x00575609
//   XREF to: 00575609 (CONDITIONAL_JUMP)
// 0057561c: LEA EAX,[EAX]
// 00575620: MOV ECX,dword ptr [ESP + 0x12c]
//   Label: LAB_00575620
// 00575627: PUSH ECX
// 00575628: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057562e: XOR EDX,EDX
// 00575630: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00575631: MOV dword ptr [0x0336362c],EDX
//   XREF to: 0336362c (WRITE)
// 00575637: CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
//   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
// 0057563c: ADD ESP,0x8
// 0057563f: MOV EAX,dword ptr [ESP + 0x128]
// 00575646: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00575649: MOV [0x02d03e94],EAX
//   XREF to: 02d03e94 (WRITE)
// 0057564e: MOV ESI,dword ptr [EDX]
// 00575650: CMP ESI,dword ptr [0x03346d10]
//   XREF to: 03346d10 (READ)
// 00575656: JG 0x0057570b
//   XREF to: 0057570b (CONDITIONAL_JUMP)
// 0057565c: MOV EDI,0xbf800000
// 00575661: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00575664: MOV EDX,0xffffffff
// 00575669: XOR EBX,EBX
// 0057566b: MOV ECX,dword ptr [EAX]
// 0057566d: MOV dword ptr [ESP + 0x4],EDI
// 00575671: TEST ECX,ECX
// 00575673: JLE 0x0057569f
//   XREF to: 0057569f (CONDITIONAL_JUMP)
// 00575675: XOR ESI,ESI
// 00575677: FLD float ptr [ESI + 0x3346d20]
//   Label: LAB_00575677
//   XREF to: 03346d20 (READ)
//   XREF to: 03346d24 (READ)
// 0057567d: FCOMP float ptr [ESP + 0x4]
// 00575681: FNSTSW AX
// 00575683: SAHF
// 00575684: JBE 0x00575692
//   XREF to: 00575692 (CONDITIONAL_JUMP)
// 00575686: MOV EAX,dword ptr [ESI + 0x3346d20]
//   XREF to: 03346d20 (READ)
//   XREF to: 03346d24 (READ)
// 0057568c: MOV EDX,EBX
// 0057568e: MOV dword ptr [ESP + 0x4],EAX
// 00575692: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00575692
//   XREF to: Stack[0x4] (READ)
// 00575695: INC EBX
// 00575696: MOV EDI,dword ptr [EAX]
// 00575698: ADD ESI,0x4
// 0057569b: CMP EBX,EDI
// 0057569d: JL 0x00575677
//   XREF to: 00575677 (CONDITIONAL_JUMP)
// 0057569f: TEST EDX,EDX
//   Label: LAB_0057569f
// 005756a1: JL 0x00575703
//   XREF to: 00575703 (CONDITIONAL_JUMP)
// 005756a3: FLD float ptr [ESP + 0x4]
// 005756a7: MOV ECX,0x1
// 005756ac: FLDZ
// 005756ae: FCOMPP
// 005756b0: FNSTSW AX
// 005756b2: SAHF
// 005756b3: JC 0x005756b7
//   XREF to: 005756b7 (CONDITIONAL_JUMP)
// 005756b5: XOR ECX,ECX
// 005756b7: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005756b7
//   XREF to: Stack[0x4] (READ)
// 005756ba: CMP EDX,dword ptr [EAX + 0x15aea4]
// 005756c0: JNZ 0x005756c4
//   XREF to: 005756c4 (CONDITIONAL_JUMP)
// 005756c2: XOR ECX,ECX
// 005756c4: CMP dword ptr [EBP + 0x1c],0x1
//   Label: LAB_005756c4
//   XREF to: Stack[0xc] (READ)
// 005756c8: JLE 0x005756cf
//   XREF to: 005756cf (CONDITIONAL_JUMP)
// 005756ca: MOV ECX,0x1
// 005756cf: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005756cf
//   XREF to: Stack[0x4] (READ)
// 005756d2: CMP dword ptr [EAX + 0x15aea4],0x0
// 005756d9: JL 0x005756df
//   XREF to: 005756df (CONDITIONAL_JUMP)
// 005756db: TEST ECX,ECX
// 005756dd: JZ 0x00575703
//   XREF to: 00575703 (CONDITIONAL_JUMP)
// 005756df: PUSH EDX
//   Label: LAB_005756df
// 005756e0: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005756e3: MOV EAX,[0x033648f4]
//   XREF to: 033648f4 (READ)
// 005756e8: PUSH ECX
// 005756e9: MOV dword ptr [ECX + 0x15ae48],EAX
// 005756ef: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 005756f4: MOV EDX,0x1
// 005756f9: ADD ESP,0x8
// 005756fc: MOV dword ptr [ESP + 0x130],EDX
// 00575703: XOR ECX,ECX
//   Label: LAB_00575703
// 00575705: MOV dword ptr [0x03346d10],ECX
//   XREF to: 03346d10 (WRITE)
// 0057570b: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_0057570b
// 00575712: MOV ESP,EBP
// 00575714: POP EBP
// 00575715: POP EDI
// 00575716: POP ESI
// 00575717: POP EBX
// 00575718: RET
// 00575719: MOV dword ptr [EBP + 0x1c],0x1
//   Label: LAB_00575719
//   XREF to: Stack[0xc] (WRITE)
// 00575720: JMP 0x00575229
//   XREF to: 00575229 (UNCONDITIONAL_JUMP)
// 00575725: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_00575725
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0057572b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057572e: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00575734: FSUBR float ptr [EAX + 0x15aeb4]
// 0057573a: FST float ptr [EAX + 0x15aeb4]
// 00575740: FLDZ
// 00575742: FCOMPP
// 00575744: FNSTSW AX
// 00575746: SAHF
// 00575747: JNC 0x0057577d
//   XREF to: 0057577d (CONDITIONAL_JUMP)
// 00575749: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057574c: MOV EDI,dword ptr [EAX + 0x15aeb0]
// 00575752: TEST EDI,EDI
// 00575754: JL 0x0057575e
//   XREF to: 0057575e (CONDITIONAL_JUMP)
// 00575756: CMP EDI,dword ptr [EAX + 0x15aea4]
// 0057575c: JNZ 0x00575767
//   XREF to: 00575767 (CONDITIONAL_JUMP)
// 0057575e: XOR EAX,EAX
//   Label: LAB_0057575e
// 00575760: MOV ESP,EBP
// 00575762: POP EBP
// 00575763: POP EDI
// 00575764: POP ESI
// 00575765: POP EBX
// 00575766: RET
// 00575767: PUSH EDI
//   Label: LAB_00575767
// 00575768: PUSH EAX
// 00575769: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0057576e: MOV EAX,0x1
// 00575773: ADD ESP,0x8
// 00575776: MOV ESP,EBP
// 00575778: POP EBP
// 00575779: POP EDI
// 0057577a: POP ESI
// 0057577b: POP EBX
// 0057577c: RET
// 0057577d: MOV dword ptr [EBP + 0x1c],0x1
//   Label: LAB_0057577d
//   XREF to: Stack[0xc] (WRITE)
// 00575784: JMP 0x0057523f
//   XREF to: 0057523f (UNCONDITIONAL_JUMP)
// 00575789: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00575789
//   XREF to: Stack[0x4] (READ)
// 0057578c: MOV EDX,dword ptr [EDX]
// 0057578e: LEA EAX,[EDX*0x4 + 0x0]
// 00575795: ADD EAX,EDX
// 00575797: ADD EAX,EAX
// 00575799: MOV dword ptr [ESP + 0x15c],EAX
// 005757a0: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005757a5: FILD dword ptr [ESP + 0x15c]
// 005757ac: FMUL float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005757b2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005757b7: FISTP dword ptr [ESP + 0x10c]
// 005757be: CMP dword ptr [ESP + 0x10c],0x3
// 005757c6: JGE 0x005757d3
//   XREF to: 005757d3 (CONDITIONAL_JUMP)
// 005757c8: MOV dword ptr [ESP + 0x10c],0x3
// 005757d3: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_005757d3
//   XREF to: Stack[0x4] (READ)
// 005757d6: MOV EAX,dword ptr [ESP + 0x10c]
// 005757dd: MOV EBX,dword ptr [EDX]
// 005757df: CMP EAX,EBX
// 005757e1: JLE 0x005757ea
//   XREF to: 005757ea (CONDITIONAL_JUMP)
// 005757e3: MOV dword ptr [ESP + 0x10c],EBX
// 005757ea: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_005757ea
//   XREF to: 0067b654 (READ)
// 005757f0: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005757f3: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005757f9: FSUBR float ptr [EAX + 0x15aeac]
// 005757ff: FST float ptr [EAX + 0x15aeac]
// 00575805: FLDZ
// 00575807: FCOMPP
// 00575809: FNSTSW AX
// 0057580b: SAHF
// 0057580c: JC 0x005753fe
//   XREF to: 005753fe (CONDITIONAL_JUMP)
// 00575812: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00575815: MOV dword ptr [EAX + 0x15aea8],0xffffffff
// 0057581f: MOV dword ptr [EAX + 0x15aeac],0x0
// 00575829: JMP 0x005753fe
//   XREF to: 005753fe (UNCONDITIONAL_JUMP)
// 0057582e: ADD EAX,dword ptr [ESP + 0x144]
//   Label: LAB_0057582e
// 00575835: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
// 0057583b: PUSH EBX
// 0057583c: MOV EAX,dword ptr [EBX + 0x154]
// 00575842: CALL dword ptr [EAX + 0x40]
// 00575845: ADD ESP,0x4
// 00575848: TEST EAX,EAX
// 0057584a: JZ 0x005758e7
//   XREF to: 005758e7 (CONDITIONAL_JUMP)
// 00575850: CMP EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00575853: JZ 0x005758e7
//   XREF to: 005758e7 (CONDITIONAL_JUMP)
// 00575859: LEA EAX,[EBX + 0x20]
// 0057585c: FLD float ptr [EAX]
// 0057585e: FSUB float ptr [ESI]
// 00575860: FMUL ST0
// 00575862: FLD float ptr [EAX + 0x4]
// 00575865: FSUB float ptr [ESI + 0x4]
// 00575868: FMUL ST0
// 0057586a: FLD float ptr [EAX + 0x8]
// 0057586d: FXCH
// 0057586f: FADDP ST2,ST0
// 00575871: FSUB float ptr [ESI + 0x8]
// 00575874: FMUL ST0
// 00575876: FADDP
// 00575878: FCOMP float ptr [ESP + 0x134]
// 0057587f: FNSTSW AX
// 00575881: SAHF
// 00575882: JA 0x005758e7
//   XREF to: 005758e7 (CONDITIONAL_JUMP)
// 00575884: MOV EAX,[0x03355b68]
//   XREF to: 03355b68 (READ)
// 00575889: MOV dword ptr [EAX*0x4 + 0x3355b6c],EBX
//   XREF to: 03355b6c (WRITE)
// 00575890: LEA EAX,[ESP + 0x74]
// 00575894: PUSH EAX
// 00575895: MOV EDX,dword ptr [EBX + 0x154]
// 0057589b: PUSH EBX
// 0057589c: CALL dword ptr [EDX + 0x14]
// 0057589f: IMUL EBX,dword ptr [0x03355b68],0x18
//   XREF to: 03355b68 (READ)
// 005758a6: ADD ESP,0x8
// 005758a9: ADD EBX,0x3357aac
//   XREF to: 03357aac (DATA)
// 005758af: MOV EDX,EAX
// 005758b1: MOV ECX,EBX
// 005758b3: CMP EBX,EAX
// 005758b5: JZ 0x005758c7
//   XREF to: 005758c7 (CONDITIONAL_JUMP)
// 005758b7: FLD float ptr [EAX]
// 005758b9: FSTP float ptr [EBX]
//   XREF to: 03357aac (WRITE)
// 005758bb: FLD float ptr [EAX + 0x4]
// 005758be: FSTP float ptr [EBX + 0x4]
//   XREF to: 03357ab0 (WRITE)
// 005758c1: FLD float ptr [EAX + 0x8]
// 005758c4: FSTP float ptr [EBX + 0x8]
//   XREF to: 03357ab4 (WRITE)
// 005758c7: LEA EAX,[EDX + 0xc]
//   Label: LAB_005758c7
// 005758ca: LEA EBX,[ECX + 0xc]
//   XREF to: 03357ab8 (DATA)
// 005758cd: CMP EBX,EAX
// 005758cf: JZ 0x005758e1
//   XREF to: 005758e1 (CONDITIONAL_JUMP)
// 005758d1: MOV EDX,dword ptr [EAX]
// 005758d3: MOV dword ptr [EBX],EDX
//   XREF to: 03357ab8 (WRITE)
// 005758d5: MOV EDX,dword ptr [EAX + 0x4]
// 005758d8: MOV dword ptr [EBX + 0x4],EDX
//   XREF to: 03357abc (WRITE)
// 005758db: MOV EDX,dword ptr [EAX + 0x8]
// 005758de: MOV dword ptr [EBX + 0x8],EDX
//   XREF to: 03357ac0 (WRITE)
// 005758e1: INC dword ptr [0x03355b68]
//   Label: LAB_005758e1
//   XREF to: 03355b68 (READ_WRITE)
// 005758e7: MOV EBX,dword ptr [ESP + 0x144]
//   Label: LAB_005758e7
// 005758ee: ADD EBX,0x4
// 005758f1: INC EDI
// 005758f2: MOV dword ptr [ESP + 0x144],EBX
// 005758f9: JMP 0x00575574
//   XREF to: 00575574 (UNCONDITIONAL_JUMP)
// 005758fe: IMUL EBX,EAX,0x1a4
//   Label: LAB_005758fe
// 00575904: MOV EAX,EDX
// 00575906: MOV EDX,dword ptr [ESP + 0x13c]
// 0057590d: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x1a0]
// 00575914: CMP EDX,ECX
// 00575916: JNZ 0x00575a9b
//   XREF to: 00575a9b (CONDITIONAL_JUMP)
// 0057591c: MOV ESI,dword ptr [ESP + 0x140]
// 00575923: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00575926: ADD EBX,ESI
// 00575928: LEA EDI,[ESP + 0x8]
// 0057592c: MOV dword ptr [ESP + 0x150],EAX
// 00575933: MOV EAX,dword ptr [EBX + 0x1a0]
// 00575939: MOV ESI,dword ptr [0x03346d10]
//   XREF to: 03346d10 (READ)
// 0057593f: TEST EAX,EAX
// 00575941: JZ 0x005759c5
//   XREF to: 005759c5 (CONDITIONAL_JUMP)
// 00575947: LEA EAX,[EBX + 0x100]
// 0057594d: MOV EDX,dword ptr [ESP + 0x148]
// 00575954: FLD float ptr [EAX]
// 00575956: FSUB float ptr [EDX]
// 00575958: FMUL ST0
// 0057595a: FLD float ptr [EAX + 0x4]
// 0057595d: FSUB float ptr [EDX + 0x4]
// 00575960: FMUL ST0
// 00575962: FLD float ptr [EAX + 0x8]
// 00575965: FXCH
// 00575967: FADDP ST2,ST0
// 00575969: FSUB float ptr [EDX + 0x8]
// 0057596c: FMUL ST0
// 0057596e: FADDP
// 00575970: FCOMP float ptr [ESP + 0x158]
// 00575977: FNSTSW AX
// 00575979: SAHF
// 0057597a: JBE 0x005759d0
//   XREF to: 005759d0 (CONDITIONAL_JUMP)
// 0057597c: XOR ECX,ECX
// 0057597e: MOV dword ptr [ESP + 0x14c],ECX
// 00575985: MOV EAX,dword ptr [ESP + 0x14c]
//   Label: LAB_00575985
// 0057598c: MOV dword ptr [ESP],EAX
// 0057598f: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_0057598f
//   XREF to: Stack[0xc] (READ)
// 00575993: JZ 0x00575aa7
//   XREF to: 00575aa7 (CONDITIONAL_JUMP)
// 00575999: MOV EAX,[0x03346d10]
//   Label: LAB_00575999
//   XREF to: 03346d10 (READ)
// 0057599e: MOV EDX,dword ptr [ESP]
// 005759a1: LEA EDI,[EAX + 0x1]
// 005759a4: MOV dword ptr [EAX*0x4 + 0x3346d20],EDX
//   XREF to: 03346d20 (WRITE)
// 005759ab: MOV EAX,dword ptr [ESP + 0x10c]
// 005759b2: DEC EAX
// 005759b3: MOV dword ptr [0x03346d10],EDI
//   XREF to: 03346d10 (WRITE)
// 005759b9: MOV dword ptr [ESP + 0x10c],EAX
// 005759c0: JMP 0x005755b0
//   XREF to: 005755b0 (UNCONDITIONAL_JUMP)
// 005759c5: XOR EDX,ECX
//   Label: LAB_005759c5
// 005759c7: MOV dword ptr [ESP + 0x14c],EDX
// 005759ce: JMP 0x00575985
//   XREF to: 00575985 (UNCONDITIONAL_JUMP)
// 005759d0: PUSH dword ptr [ESP + 0x138]
//   Label: LAB_005759d0
// 005759d7: PUSH EDX
// 005759d8: PUSH EBX
// 005759d9: CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
//   XREF to: 00585970 (UNCONDITIONAL_CALL)
// 005759de: ADD ESP,0xc
// 005759e1: TEST EAX,EAX
// 005759e3: JZ 0x00575a4e
//   XREF to: 00575a4e (CONDITIONAL_JUMP)
// 005759e5: IMUL EAX,ESI,0xf0
// 005759eb: MOV ESI,dword ptr [EBX + 0x140]
// 005759f1: ADD EAX,0x3347108
//   XREF to: 03347108 (PARAM)
// 005759f6: TEST ESI,ESI
// 005759f8: JZ 0x00575a5a
//   XREF to: 00575a5a (CONDITIONAL_JUMP)
// 005759fa: MOV EBX,EAX
//   XREF to: 03347108 (PARAM)
// 005759fc: XOR EDX,EDX
// 005759fe: LEA ESI,[EAX + 0xf0]
//   XREF to: 033471f8 (DATA)
// 00575a04: MOV dword ptr [ESP + 0x154],EDX
// 00575a0b: PUSH 0x0
//   Label: LAB_00575a0b
// 00575a0d: PUSH 0x6814d4
//   XREF to: 006814d4 (DATA)
// 00575a12: PUSH EDI
// 00575a13: MOV EDX,dword ptr [ESP + 0x15c]
// 00575a1a: PUSH EDX
// 00575a1b: PUSH EBX
//   XREF to: 03347108 (DATA)
//   XREF to: 03347130 (DATA)
// 00575a1c: CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
//   XREF to: 00574ba0 (UNCONDITIONAL_CALL)
// 00575a21: MOV dword ptr [ESP + 0x170],EAX
// 00575a28: FLD float ptr [ESP + 0x170]
// 00575a2f: ADD ESP,0x14
// 00575a32: FADD float ptr [ESP + 0x154]
// 00575a39: ADD EBX,0x28
//   XREF to: 03347130 (PARAM)
// 00575a3c: FSTP float ptr [ESP + 0x154]
// 00575a43: CMP EBX,ESI
// 00575a45: JNZ 0x00575a0b
//   XREF to: 00575a0b (CONDITIONAL_JUMP)
// 00575a47: MOV EAX,dword ptr [ESP + 0x154]
// 00575a4e: MOV dword ptr [ESP + 0x14c],EAX
//   Label: LAB_00575a4e
// 00575a55: JMP 0x00575985
//   XREF to: 00575985 (UNCONDITIONAL_JUMP)
// 00575a5a: PUSH 0x1
//   Label: LAB_00575a5a
// 00575a5c: PUSH 0x6814d4
//   XREF to: 006814d4 (DATA)
// 00575a61: LEA EBX,[ESP + 0x10]
// 00575a65: PUSH EBX
// 00575a66: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00575a69: PUSH EDI
// 00575a6a: PUSH EAX
//   XREF to: 03347108 (DATA)
// 00575a6b: CALL core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
//   XREF to: 00574ba0 (UNCONDITIONAL_CALL)
// 00575a70: MOV dword ptr [ESP + 0x170],EAX
// 00575a77: FLD float ptr [ESP + 0x170]
// 00575a7e: ADD ESP,0x14
// 00575a81: FSTP float ptr [ESP + 0x154]
// 00575a88: MOV EAX,dword ptr [ESP + 0x154]
// 00575a8f: MOV dword ptr [ESP + 0x14c],EAX
// 00575a96: JMP 0x00575985
//   XREF to: 00575985 (UNCONDITIONAL_JUMP)
// 00575a9b: MOV dword ptr [ESP],0xc7c34ff3
//   Label: LAB_00575a9b
// 00575aa2: JMP 0x0057598f
//   XREF to: 0057598f (UNCONDITIONAL_JUMP)
// 00575aa7: FLDZ
//   Label: LAB_00575aa7
// 00575aa9: FCOMP float ptr [ESP]
// 00575aac: FNSTSW AX
// 00575aae: SAHF
// 00575aaf: JNC 0x00575999
//   XREF to: 00575999 (CONDITIONAL_JUMP)
// 00575ab5: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00575ab8: MOV EAX,[0x03346d10]
//   XREF to: 03346d10 (READ)
// 00575abd: CMP EAX,dword ptr [EDX + 0x15aea4]
// 00575ac3: JNZ 0x00575ad5
//   XREF to: 00575ad5 (CONDITIONAL_JUMP)
// 00575ac5: FLD float ptr [ESP]
// 00575ac8: FLD ST0
// 00575aca: FMUL double ptr [0x006464ce]
//   XREF to: 006464ce (READ)
// 00575ad0: FSTP ST1
// 00575ad2: FSTP float ptr [ESP]
// 00575ad5: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00575ad5
//   XREF to: Stack[0x4] (READ)
// 00575ad8: MOV EAX,[0x03346d10]
//   XREF to: 03346d10 (READ)
// 00575add: CMP EAX,dword ptr [EDX + 0x15aea8]
// 00575ae3: JNZ 0x00575999
//   XREF to: 00575999 (CONDITIONAL_JUMP)
// 00575ae9: FLD float ptr [ESP]
// 00575aec: FLD ST0
// 00575aee: FMUL double ptr [0x006464d6]
//   XREF to: 006464d6 (READ)
// 00575af4: FSTP ST1
// 00575af6: FSTP float ptr [ESP]
// 00575af9: JMP 0x00575999
//   XREF to: 00575999 (UNCONDITIONAL_JUMP)
