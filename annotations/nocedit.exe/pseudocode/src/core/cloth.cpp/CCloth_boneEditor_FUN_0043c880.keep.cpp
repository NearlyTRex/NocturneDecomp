// Name: core_cloth.cpp_CCloth_boneEditor_FUN_0043c880
// Address: 0043c880
// MANUAL RECONSTRUCTION
// Address Range: [[0043c880, 0043d589]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_boneEditor_FUN_0043c880(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_boneEditor_FUN_0043c880(CCloth *this_ptr)

{
  CSkeleton *pCVar1;
  int iVar2;
  SClothVertex *pSVar3;
  uint color;
  SMotion *string_data;
  SClothBone *pSVar4;
  int iVar8;
  float delta_time;
  CPickList CStack_54c;
  char sprintf_buf[512];
  CSlew CStack_a8;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f local_80;
  CVector3i CStack_74;
  SMotion *local_60;
  SClothVertex *pSStack_5c;
  float local_58;
  float local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  SClothBone *local_40;
  int local_3c;
  CVector3f *local_38;
  SClothVertex *local_34;
  CSkeleton *pCStack_30;
  int local_2c;
  int local_28;
  int local_24;
  SMotion *local_20;
  float fStack_1c;
  int local_18;
  float fStack_14;
  float fStack_68;
  
  local_28 = 1;
  local_3c = 1;
  local_50 = 1;
  local_4c = 1;
  local_48 = 0;
  local_44 = 0;
  local_24 = 0;
  UNION_UVector3_00838e40.f.z = 0.0;
  UNION_UVector3_00838e40.f.y = 0.0;
  UNION_UVector3_00838e40.f.x = 0.0;
  UNION_UVector3_00838e4c.f.z = 0.0;
  UNION_UVector3_00838e4c.f.y = 0.0;
  UNION_UVector3_00838e4c.f.x = 0.0;
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(g_CSpotViewPtr,0x1f);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
            (&g_CDeformableModelInstanceInstance.motion_controller,0,0.0);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  pCStack_30 = pCVar1;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (this_ptr,&UNION_UVector3_00838e40.f,&UNION_UVector3_00838e4c.f,
             &g_CDeformableModelInstanceInstance);
  local_40 = this_ptr->collide_bones;
  pSStack_5c = this_ptr->vertices;
  local_60 = (pCVar1->motion_list).motions;
  local_38 = &this_ptr->last_position;
  local_34 = pSStack_5c;
  do {
    delta_time = g_CGamePtr->delta_time_float;
    local_54 = delta_time;
    local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&g_CDeformableModelInstanceInstance.motion_controller);
    if (local_48 == 0) {
      fStack_68 = g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
      for (fStack_14 = local_54 * local_20->fps +
                       g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
          fStack_1c = (float)local_20->frame_count, fStack_1c < fStack_14;
          fStack_14 = fStack_14 - fStack_1c) {
      }
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&g_CDeformableModelInstanceInstance.motion_controller,local_20->motion_name,
                 fStack_14);
    }
    if (local_3c == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                (&g_CDeformableModelInstanceInstance);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&g_CDeformableModelInstanceInstance);
    local_38->x = local_38->x - g_CDeformableModelInstanceInstance.accumulated_root_motion.x;
    local_38->y = local_38->y - g_CDeformableModelInstanceInstance.accumulated_root_motion.y;
    local_38->z = local_38->z - g_CDeformableModelInstanceInstance.accumulated_root_motion.z;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.z = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.y = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.x = 0.0;
    if (local_3c == 0) {
      core_cloth_cpp_CCloth_process_FUN_0043ab80
                (this_ptr,&UNION_UVector3_00838e40.f,&UNION_UVector3_00838e4c.f,delta_time,0.0,
                 &g_CDeformableModelInstanceInstance);
    }
    else {
      iVar2 = 0;
      if (0 < (this_ptr->model).vertex_count) {
        do {
          (this_ptr->model).vertex_list[iVar2].x = (int)ROUND(pSStack_5c[iVar2].offset_pos.x * 256.0f);
          (this_ptr->model).vertex_list[iVar2].y = (int)ROUND(pSStack_5c[iVar2].offset_pos.y * 256.0f);
          (this_ptr->model).vertex_list[iVar2].z = (int)ROUND(pSStack_5c[iVar2].offset_pos.z * 256.0f);
          iVar2 = iVar2 + 1;
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
    wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&UNION_UVector3_00838e40.f);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,&UNION_UVector3_00838e4c.f,(CVector3f *)0x0);
    if (local_4c != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&g_CDeformableModelInstanceInstance,-1,0xffffffff,1,0);
    }
    if (local_50 != 0) {
      core_cloth_cpp_CCloth_render_FUN_0043bae0(this_ptr,0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4);
    if (iVar2 != 0) {
      g_ClothBoneScreenshotCounter = g_ClothBoneScreenshotCounter + 1;
      _sprintf
                (g_ClothBoneScreenshotFilename,"noc%d.pcx",g_ClothBoneScreenshotCounter);
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(g_ClothBoneScreenshotFilename);
    }
    if (local_44 != 0) {
      g_ActiveRenderColor =
           shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr);
      local_18 = 0;
      if (0 < this_ptr->locked_vertex_count) {
        do {
          pSVar3 = local_34 + this_ptr->locked_vertex_indices[local_18];
          CStack_74.x = (int)ROUND((pSVar3->position).x * 256.0f);
          CStack_74.y = (int)ROUND((pSVar3->position).y * 256.0f);
          CStack_74.z = (int)ROUND((pSVar3->position).z * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&CStack_74);
          core_cloth_cpp_drawVertexMarker_FUN_0043c6e0(19999);
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr->locked_vertex_count);
      }
    }
    if ((0 < local_28) && (iVar2 = 0, 0 < this_ptr->collide_bone_count)) {
      do {
        if ((local_28 == 2) && (iVar2 == local_24)) {
          color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,color);
          iVar8 = 1;
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,0xff);
          iVar8 = 0;
        }
        core_cloth_cpp_CCloth_renderBone_FUN_0043b7e0(this_ptr,iVar2,iVar8);
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->collide_bone_count);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    _sprintf
              (sprintf_buf,"Model motion : %s frame %f",
               local_20->motion_name,
               (double)g_CDeformableModelInstanceInstance.motion_controller.
                       current_frame_number);
    engine_2d_c_drawText_FUN_00401fd0(sprintf_buf,0,0);
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
    if (iVar2 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_54c);
      local_2c = -1;
      iVar2 = 0;
      string_data = local_60;
      if (0 < (pCStack_30->motion_list).motion_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_54c.base,string_data->motion_name);
          if (string_data == local_20) {
            local_2c = iVar2;
          }
          iVar2 = iVar2 + 1;
          string_data = string_data + 1;
        } while (iVar2 < (pCStack_30->motion_list).motion_count);
      }
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_54c,"Select motion",local_2c,0);
      if (-1 < iVar2) {
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (&g_CDeformableModelInstanceInstance.motion_controller,iVar2,0.0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_54c,0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar2 != 0) {
      shape_spotview_cpp_CSpotView_reset_FUN_005b9620(g_CSpotViewPtr,0x1f);
    }
    _sprintf
              (sprintf_buf,"%f",
               (double)(1.0 / delta_time));
    engine_2d_c_drawTextRightAligned_FUN_004021c0
              (sprintf_buf,g_WindowWidth + -2,g_WindowHeight + -0xd);
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
    if ((iVar2 != 0) && (local_28 = local_28 + 1, 2 < local_28)) {
      local_28 = 0;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_2);
    if (iVar2 != 0) {
      core_cloth_cpp_CCloth_addCollisionBone_FUN_0043c430(this_ptr);
      local_24 = this_ptr->collide_bone_count + -1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H);
    if (iVar2 != 0) {
      local_3c = 1 - local_3c;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
    if (iVar2 != 0) {
      local_50 = (uint)(local_50 == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
    if (iVar2 != 0) {
      local_4c = (uint)(local_4c == 0);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_P);
    if (iVar2 != 0) {
      local_48 = (uint)(local_48 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L);
    iVar2 = local_24;
    if (iVar8 != 0) {
      local_44 = (uint)(local_44 == 0);
    }
    if (((local_28 == 2) && (-1 < local_24)) && (local_24 < this_ptr->collide_bone_count)) {
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      pSVar4 = local_40 + iVar2;
      _sprintf
                (sprintf_buf,"Editing cylinder %d, on bone %s",iVar2,
                 pSVar4->name);
      engine_2d_c_drawText_FUN_00401fd0
                (sprintf_buf,0,g_WindowHeight + -0x16);
      iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if (iVar2 == 0) {
        shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
      }
      else {
        core_slew_cpp_CSlew_init_FUN_005a2060(&CStack_a8);
        local_80.x = (pSVar4->euler1).x * 10.0f;
        local_80.y = (pSVar4->euler1).y * 10.0f;
        local_80.z = 10.0f * (pSVar4->euler1).z;
        local_58 = 10.0;
        if (&CStack_a8 != (CSlew *)&local_80) {
          CStack_a8.position = local_80;
        }
        if (&CStack_a8.orientation.vec != &pSVar4->euler2) {
          CStack_a8.orientation.vec = pSVar4->euler2;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(&CStack_a8);
        fStack_84 = 1.0 / local_58;
        fStack_8c = CStack_a8.position.x * fStack_84;
        fStack_88 = CStack_a8.position.y * fStack_84;
        fStack_84 = CStack_a8.position.z * fStack_84;
        if (&pSVar4->euler1 != (CVector3f *)&fStack_8c) {
          (pSVar4->euler1).x = fStack_8c;
          (pSVar4->euler1).y = fStack_88;
          (pSVar4->euler1).z = fStack_84;
        }
        if (&pSVar4->euler2 != &CStack_a8.orientation.vec) {
          pSVar4->euler2 = CStack_a8.orientation.vec;
        }
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
      if ((iVar2 != 0) &&
         (iVar2 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar2 != 0)) {
        iVar2 = this_ptr->collide_bone_count + -1;
        this_ptr->collide_bone_count = iVar2;
        memmove
                  (local_40 + local_24,local_40 + local_24 + 1,(iVar2 - local_24) * sizeof(*local_40));
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_X);
      if (iVar2 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter X radius",&pSVar4->radius1,1,0.0,9999.0,1);
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Y);
      if (iVar2 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter Y radius",&pSVar4->radius2,1,0.0,9999.0,1);
      }
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_O);
      if (iVar2 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter cylinder length, 0 to use length of bone",&pSVar4->length,1,0.0,
                   9999.0,1);
      }
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (&g_CDeformableModelInstanceInstance);
      core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043a110
                (this_ptr,local_24,&g_CDeformableModelInstanceInstance);
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
      if (iVar2 != 0) {
        iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar2 == 0) {
          local_20 = (SMotion *)(local_20->motion_name + 1);
        }
        else {
          local_24 = local_24 + -1;
        }
      }
    }
    else {
      shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Z);
    if (iVar2 != 0) {
      core_cloth_cpp_CCloth_setup_FUN_00439710
                (this_ptr,&UNION_UVector3_00838e40.f,&UNION_UVector3_00838e4c.f,
                 &g_CDeformableModelInstanceInstance);
    }
    if (local_24 < 0) {
      local_20 = (SMotion *)(this_ptr->collide_bone_count + -1);
    }
    if (this_ptr->collide_bone_count <= local_24) {
      local_24 = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
  } while (iVar2 == 0);
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
