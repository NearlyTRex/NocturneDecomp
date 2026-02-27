// Name: core_cloth.cpp_CCloth_boneEditor_FUN_0043c880
// Address: 0043c880
// Address Range: [[0043c880, 0043cc73] [0043d413, 0043d540]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_boneEditor_FUN_0043c880(CCloth *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: core_slew.cpp_CSlew_init_FUN_005a2060 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl core_cloth_cpp_CCloth_boneEditor_FUN_0043c880(CCloth *this_ptr)

{
  CSkeleton *pCVar1;
  int iVar2;
  float *pfVar3;
  uint color;
  float fVar4;
  char *string_data;
  int iVar5;
  int *piVar6;
  char *unaff_EBP;
  int unaff_ESI;
  CCloth *pCVar7;
  CVector3f *pCVar8;
  int in_stack_00000010;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_0000003c;
  int in_stack_00000054;
  CKeys *in_stack_fffffac4;
  char acStack_1a0 [16];
  char acStack_190 [56];
  char acStack_158 [236];
  CVector3i local_6c;
  SClothVertex *local_60;
  float local_58;
  uint local_54;
  CSlew local_50;
  CSkeleton *local_34;
  float fStack_30;
  float local_2c;
  char *local_28;
  SMotion *local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  
  local_2c = 1.4013e-45;
  local_50.yaw = 1.4013e-45;
  local_54 = 1;
  local_50.position.x = 1.4013e-45;
  local_50.position.y = 0.0;
  local_50.position.z = 0.0;
  local_28 = (char *)0x0;
  CVector3f_00838e40.z = 0.0;
  CVector3f_00838e40.y = 0.0;
  CVector3f_00838e40.x = 0.0;
  CVector3f_00838e4c.z = 0.0;
  CVector3f_00838e4c.y = 0.0;
  CVector3f_00838e4c.x = 0.0;
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(g_CSpotViewPtr,0x1f);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
            (&g_CDeformableModelInstanceInstance.motion_controller,0,0.0);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_34 = pCVar1;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (this_ptr,&CVector3f_00838e40,&CVector3f_00838e4c,&g_CDeformableModelInstanceInstance);
  local_50.pitch = (float)this_ptr->collide_bones;
  local_60 = this_ptr->vertices;
  local_6c.z = (int)(pCVar1->motion_list).motions;
  local_50.roll = (float)&this_ptr->last_position;
  local_50.slew_rate = (float)local_60;
  do {
    fVar4 = g_CGamePtr->delta_time_float;
    local_58 = fVar4;
    local_24 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&g_CDeformableModelInstanceInstance.motion_controller);
    if ((SMotion *)local_50.position.y == (SMotion *)0x0) {
      local_6c.x = g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
      for (local_18 = local_58 * local_24->fps +
                      (float)g_CDeformableModelInstanceInstance.motion_controller.
                             current_frame_number; local_20 = (float)local_24->frame_count,
          local_20 < local_18; local_18 = local_18 - local_20) {
      }
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&g_CDeformableModelInstanceInstance.motion_controller,local_24->motion_name,
                 local_18);
    }
    if (local_50.yaw == 0.0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                (&g_CDeformableModelInstanceInstance);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&g_CDeformableModelInstanceInstance);
    *(float *)local_50.roll =
         *(float *)local_50.roll - g_CDeformableModelInstanceInstance.accumulated_root_motion.x;
    *(float *)((int)local_50.roll + 4) =
         *(float *)((int)local_50.roll + 4) -
         g_CDeformableModelInstanceInstance.accumulated_root_motion.y;
    *(float *)((int)local_50.roll + 8) =
         *(float *)((int)local_50.roll + 8) -
         g_CDeformableModelInstanceInstance.accumulated_root_motion.z;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.z = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.y = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.x = 0.0;
    if (local_50.yaw == 0.0) {
      core_cloth_cpp_CCloth_process_FUN_0043ab80
                (this_ptr,&CVector3f_00838e40,&CVector3f_00838e4c,fVar4,0.0,
                 &g_CDeformableModelInstanceInstance);
    }
    else {
      iVar2 = 0;
      if (0 < (this_ptr->model).vertex_count) {
        iVar5 = 0;
        pCVar8 = &local_60->offset_pos;
        do {
          piVar6 = (int *)((int)&((this_ptr->model).vertex_list)->x + iVar5);
          iVar2 = iVar2 + 1;
          *piVar6 = (int)ROUND(pCVar8->x * 256.0f);
          piVar6[1] = (int)ROUND(pCVar8->y * 256.0f);
          piVar6[2] = (int)ROUND(pCVar8->z * 256.0f);
          pCVar8 = (CVector3f *)((int)(pCVar8 + 0x17) + 8);
          iVar5 = iVar5 + 0xc;
        } while (iVar2 < (this_ptr->model).vertex_count);
      }
      iVar2 = 0;
      if (0 < this_ptr->collide_bone_count) {
        do {
          core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043a2b0
                    (this_ptr,iVar2,&g_CDeformableModelInstanceInstance);
          iVar2 = iVar2 + 1;
        } while (iVar2 < this_ptr->collide_bone_count);
      }
    }
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&CVector3f_00838e40);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&CVector3f_00838e4c,(CVector3i *)0x0);
    if ((SMotion *)local_50.position.y != (SMotion *)0x0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&g_CDeformableModelInstanceInstance,-1,0xffffffff,1,0);
    }
    if ((char *)local_50.position.x != (char *)0x0) {
      core_cloth_cpp_CCloth_render_FUN_0043bae0(this_ptr,0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4);
    if (iVar2 != 0) {
      g_ClothBoneScreenshotCounter = g_ClothBoneScreenshotCounter + 1;
      _sprintf(g_ClothBoneScreenshotFilename,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(g_ClothBoneScreenshotFilename);
    }
    if ((CVector3f *)local_50.roll != (CVector3f *)0x0) {
      g_ActiveRenderColor =
           shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
      unaff_EBP = (char *)0x0;
      pCVar7 = this_ptr;
      if (0 < this_ptr->locked_vertex_count) {
        do {
          pfVar3 = (float *)(pCVar7->locked_vertex_indices[0] * 0x11c + (int)local_2c);
          local_6c.x = (int)ROUND(*pfVar3 * 256.0f);
          local_6c.y = (int)ROUND(pfVar3[1] * 256.0f);
          local_6c.z = (int)ROUND(pfVar3[2] * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_6c);
          core_cloth_cpp_drawVertexMarker_FUN_0043c6e0(19999);
          unaff_EBP = unaff_EBP + 1;
          pCVar7 = (CCloth *)((pCVar7->model).model_filename + 4);
        } while ((int)unaff_EBP < this_ptr->locked_vertex_count);
      }
    }
    if ((0 < (int)local_20) && (fVar4 = 0.0, 0 < this_ptr->collide_bone_count)) {
      do {
        if ((local_20 == 2.8026e-45) && (fVar4 == fStack_1c)) {
          color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,color);
          iVar2 = 1;
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,0xff);
          iVar2 = 0;
        }
        core_cloth_cpp_CCloth_renderBone_FUN_0043b7e0(this_ptr,(int)fVar4,iVar2);
        fVar4 = (float)((int)fVar4 + 1);
      } while ((int)fVar4 < this_ptr->collide_bone_count);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    _sprintf
              (acStack_1a0,"Model motion : %s frame %f",local_18,
               (double)(float)g_CDeformableModelInstanceInstance.motion_controller.
                              current_frame_number);
    engine_2d_c_drawText_FUN_00401fd0(acStack_1a0,0,0);
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
    if (iVar2 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffac0);
      fStack_1c = -NAN;
      fVar4 = 0.0;
      string_data = (char *)local_50.position.x;
      if (0 < *(int *)((int)local_20 + 0x964)) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffac0,string_data);
          if (string_data == unaff_EBP) {
            fStack_1c = fVar4;
          }
          fVar4 = (float)((int)fVar4 + 1);
          string_data = string_data + 0x54c;
        } while ((int)fVar4 < *(int *)((int)local_20 + 0x964));
      }
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffac0,"Select motion",(int)fStack_1c,0);
      if (-1 < iVar2) {
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (&g_CDeformableModelInstanceInstance.motion_controller,iVar2,0.0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffffac0,0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar2 != 0) {
      shape_spotview_cpp_CSpotView_reset_FUN_005b9620(g_CSpotViewPtr,0x1f);
    }
    _sprintf
              (acStack_190,"%f",(double)(1.0 / (float)in_stack_fffffac4));
    engine_2d_c_drawTextRightAligned_FUN_004021c0
              (acStack_190,g_WindowHeight + -0xd,g_WindowWidth + -2);
    engine_2d_c_drawText_FUN_00401fd0("1. Toggle bone drawing/editing",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2. Add bone",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C. Toggle cloth render",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("S. Toggle skeleton render",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("P. Pause/unpause animation",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("H. Home pose toggle",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("L. Toggle locked vertices",0,99);
    engine_2d_c_drawText_FUN_00401fd0("Z. Restart cloth",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("M. Select motion",0,0x79);
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_1);
    if ((iVar2 != 0) && (unaff_ESI = unaff_ESI + 1, 2 < unaff_ESI)) {
      unaff_ESI = 0;
    }
    in_stack_fffffac4 = g_CKeysPtr;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_2);
    if (iVar2 != 0) {
      core_cloth_cpp_CCloth_addCollisionBone_FUN_0043c430(this_ptr);
    }
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H);
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    if (iVar2 != 0) {
      local_18 = (float)(uint)(local_18 == 0.0);
    }
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L);
    if (((in_stack_00000028 == 2) && (-1 < in_stack_0000002c)) &&
       (in_stack_0000002c < this_ptr->collide_bone_count)) {
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      iVar5 = in_stack_0000002c * 0xac + in_stack_00000010;
      _sprintf(acStack_158,"Editing cylinder %d, on bone %s");
      engine_2d_c_drawText_FUN_00401fd0(acStack_158,0,g_WindowHeight + -0x16);
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if (iVar2 == 0) {
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
      }
      else {
        local_50.position.z = 0.0;
        local_50.position.y = 0.0;
        local_50.position.x = 0.0;
        local_50.roll = 0.0;
        local_50.yaw = 0.0;
        local_50.pitch = 0.0;
        local_50.slew_rate = 28.0;
        local_28 = (char *)(*(float *)(iVar5 + 0x1c) * 10.0f);
        local_24 = (SMotion *)(*(float *)(iVar5 + 0x20) * 10.0f);
        local_20 = 10.0f * *(float *)(iVar5 + 0x24);
        if (&local_50 != (CSlew *)&local_28) {
          local_50.position.x = (float)local_28;
          local_50.position.y = (float)local_24;
          local_50.position.z = local_20;
        }
        if (&local_50.pitch != (float *)(iVar5 + 0x28)) {
          local_50.pitch = *(float *)(iVar5 + 0x28);
          local_50.yaw = *(float *)(iVar5 + 0x2c);
          local_50.roll = *(float *)(iVar5 + 0x30);
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_50);
        local_34 = (CSkeleton *)(local_50.position.x * 0.1);
        fStack_30 = local_50.position.y * 0.1;
        local_2c = local_50.position.z * 0.1;
        if ((CSkeleton **)(iVar5 + 0x1c) != &local_34) {
          *(CSkeleton **)(iVar5 + 0x1c) = local_34;
          *(float *)(iVar5 + 0x20) = fStack_30;
          *(float *)(iVar5 + 0x24) = local_2c;
        }
        if ((float *)(iVar5 + 0x28) != &local_50.pitch) {
          *(float *)(iVar5 + 0x28) = local_50.pitch;
          *(float *)(iVar5 + 0x2c) = local_50.yaw;
          *(float *)(iVar5 + 0x30) = local_50.roll;
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
      if ((iVar2 != 0) &&
         (iVar2 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar2 != 0)) {
        iVar2 = this_ptr->collide_bone_count + -1;
        this_ptr->collide_bone_count = iVar2;
        memmove
                  ((void *)(in_stack_0000003c * 0xac + in_stack_00000020),
                   (void *)((in_stack_0000003c + 1) * 0xac + in_stack_00000020),
                   (iVar2 - in_stack_0000003c) * 0xac);
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_X);
      if (iVar2 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter X radius",(float *)(iVar5 + 0x14),1,0.0,9999.0,
                   1);
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Y);
      if (iVar2 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter Y radius",(float *)(iVar5 + 0x18),1,0.0,9999.0,
                   1);
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
      if (iVar2 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter cylinder length, 0 to use length of bone",(float *)(iVar5 + 0x34),1,
                   0.0,9999.0,1);
      }
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (&g_CDeformableModelInstanceInstance);
      core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043a110
                (this_ptr,in_stack_00000054,&g_CDeformableModelInstanceInstance);
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
      if (iVar2 != 0) {
        (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      }
    }
    else {
      shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Z);
    if (iVar2 != 0) {
      core_cloth_cpp_CCloth_setup_FUN_00439710
                (this_ptr,&CVector3f_00838e40,&CVector3f_00838e4c,
                 &g_CDeformableModelInstanceInstance);
    }
    if (in_stack_00000034 < 0) {
      in_stack_00000034 = this_ptr->collide_bone_count + -1;
    }
    if (this_ptr->collide_bone_count <= in_stack_00000034) {
      in_stack_00000034 = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
  } while (iVar2 == 0);
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
