// Name: core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
// Address: 0043c880
// Address Range: [[0043c880, 0043cc73] [0043d413, 0043d540]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_BoneAndClothEditor_FUN_0043c880()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_cloth.cpp_BoneAndClothEditor(uint param_1) */

void core_cloth_cpp_BoneAndClothEditor_FUN_0043c880
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
               int param_6)

{
  uchar uVar1;
  CSkeleton *pCVar2;
  int iVar3;
  undefined3 extraout_var;
  float *pfVar4;
  undefined3 extraout_var_00;
  float fVar5;
  char *string_data;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  CGame *in_stack_fffffaac;
  CKeys *pCVar8;
  uint uVar9;
  ulonglong in_stack_fffffab4;
  char *in_stack_fffffabc;
  CEditorTools *in_stack_fffffac0;
  char *in_stack_fffffac4;
  char acStack_1a8 [16];
  char acStack_198 [56];
  char acStack_160 [236];
  CVector3i CStack_74;
  float fStack_68;
  SMotion *local_60;
  float fStack_5c;
  byte local_58 [8];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float *local_38;
  float local_34;
  CSkeleton *pCStack_30;
  float local_2c;
  float local_28;
  float local_24;
  SMotion *local_20;
  float fStack_1c;
  char *local_18;
  float fStack_14;
  
  local_28 = 1.4013e-45;
  local_3c = 1;
  local_50 = 1.4013e-45;
  local_4c = 1.4013e-45;
  local_48 = 0.0;
  local_44 = 0.0;
  local_24 = 0.0;
  _DAT_00838e48 = 0;
  _DAT_00838e44 = 0;
  _DAT_00838e40 = 0;
  _DAT_00838e54 = 0;
  _DAT_00838e50 = 0;
  _DAT_00838e4c = 0;
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffaac);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
            (&g_CDeformableModelInstanceInstance.motion_controller,0,0.0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  pCStack_30 = pCVar2;
  core_cloth_cpp_FUN_00439710();
  local_40 = (float)(param_5 + 0x3ce90);
  fStack_5c = (float)(param_5 + 0x56d8);
  local_60 = (pCVar2->motion_list).motions;
  local_38 = (float *)(param_5 + 0x3fe48);
  local_34 = fStack_5c;
  do {
    local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&g_CDeformableModelInstanceInstance.motion_controller);
    if (local_48 == 0.0) {
      fStack_68 = g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
      for (fStack_14 = (float)local_58._4_4_ * local_20->fps +
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
    *local_38 = *local_38 - g_CDeformableModelInstanceInstance.accumulated_root_motion.x;
    local_38[1] = local_38[1] - g_CDeformableModelInstanceInstance.accumulated_root_motion.y;
    local_38[2] = local_38[2] - g_CDeformableModelInstanceInstance.accumulated_root_motion.z;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.z = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.y = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.x = 0.0;
    if (local_3c == 0) {
      core_cloth_cpp_FUN_0043ab80();
    }
    else {
      iVar3 = 0;
      if (0 < *(int *)(param_5 + 0x104)) {
        iVar6 = 0;
        pfVar4 = (float *)((int)fStack_5c + 0xc0);
        do {
          piVar7 = (int *)(*(int *)(param_5 + 0x10c) + iVar6);
          iVar3 = iVar3 + 1;
          *piVar7 = (int)ROUND(*pfVar4 * _DAT_0065bb3c);
          piVar7[1] = (int)ROUND(pfVar4[1] * _DAT_0065bb3c);
          piVar7[2] = (int)ROUND(pfVar4[2] * _DAT_0065bb3c);
          pfVar4 = pfVar4 + 0x47;
          iVar6 = iVar6 + 0xc;
        } while (iVar3 < *(int *)(param_5 + 0x104));
      }
      iVar3 = 0;
      if (0 < *(int *)(param_5 + 0x3ce8c)) {
        do {
          core_cloth_cpp_FUN_0043a2b0();
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_5 + 0x3ce8c));
      }
    }
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&DAT_00838e40);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&DAT_00838e4c,(CVector3i *)0x0);
    if (local_4c != 0.0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&g_CDeformableModelInstanceInstance,-1,0xffffffff,1,0);
    }
    if (local_50 != 0.0) {
      core_cloth_cpp_FUN_0043bae0();
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
    if (iVar3 != 0) {
      DAT_0083b10c = DAT_0083b10c + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0083b110,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_0083b110);
    }
    if (local_44 != 0.0) {
      uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar1);
      local_18 = (char *)0x0;
      iVar3 = param_5;
      if (0 < *(int *)(param_5 + 0x3f028)) {
        do {
          pfVar4 = (float *)(*(int *)(iVar3 + 0x3f02c) * 0x11c + (int)local_34);
          CStack_74.x = (int)ROUND(*pfVar4 * _DAT_0065bb3c);
          CStack_74.y = (int)ROUND(pfVar4[1] * _DAT_0065bb3c);
          CStack_74.z = (int)ROUND(pfVar4[2] * _DAT_0065bb3c);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&CStack_74);
          core_cloth_cpp_FUN_0043c6e0();
          local_18 = local_18 + 1;
          iVar3 = iVar3 + 4;
        } while ((int)local_18 < *(int *)(param_5 + 0x3f028));
      }
    }
    if ((0 < (int)local_28) && (fVar5 = 0.0, 0 < *(int *)(param_5 + 0x3ce8c))) {
      do {
        if ((local_28 == 2.8026e-45) && (fVar5 == local_24)) {
          uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar1));
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,0xff);
        }
        core_cloth_cpp_FUN_0043b7e0();
        fVar5 = (float)((int)fVar5 + 1);
      } while ((int)fVar5 < *(int *)(param_5 + 0x3ce8c));
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1a8,"Model motion : %s frame %f",local_20,
               (double)g_CDeformableModelInstanceInstance.motion_controller.current_frame_number);
    engine_2d_c_drawText_FUN_00401fd0(acStack_1a8,0,0);
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
    if (iVar3 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffab8);
      local_24 = -NAN;
      fVar5 = 0.0;
      string_data = (char *)local_58._0_4_;
      if (0 < *(int *)((int)local_28 + 0x964)) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffab8,string_data);
          if (string_data == local_18) {
            local_24 = fVar5;
          }
          fVar5 = (float)((int)fVar5 + 1);
          string_data = string_data + 0x54c;
        } while ((int)fVar5 < *(int *)((int)local_28 + 0x964));
      }
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffab8,"Select motion",(int)local_24,0);
      if (-1 < iVar3) {
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (&g_CDeformableModelInstanceInstance.motion_controller,iVar3,0.0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffab8,0,(uint)in_stack_fffffab4,
                 (uint)((ulonglong)in_stack_fffffab4 >> 0x20),(uint)in_stack_fffffabc,
                 (uint)in_stack_fffffac0,(uint)in_stack_fffffac4);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar3 != 0) {
      shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_198,"%f",(double)(1.0 / (float)in_stack_fffffabc));
    engine_2d_c_drawTextRightAligned_FUN_004021c0
              (acStack_198,g_WindowWidth + -2,g_WindowHeight + -0xd);
    engine_2d_c_drawText_FUN_00401fd0("1. Toggle bone drawing/editing",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2. Add bone",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C. Toggle cloth render",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("S. Toggle skeleton render",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("P. Pause/unpause animation",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("H. Home pose toggle",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("L. Toggle locked vertices",0,99);
    engine_2d_c_drawText_FUN_00401fd0("Z. Restart cloth",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("M. Select motion",0,0x79);
    pCVar8 = g_CKeysPtr;
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,2);
    if ((iVar3 != 0) && (unaff_EBP = unaff_EBP + 1, 2 < unaff_EBP)) {
      unaff_EBP = 0;
    }
    in_stack_fffffab4 = CONCAT44 /* combine 2-byte values */(0x43ceb4,pCVar8);
    in_stack_fffffabc = (char *)g_CKeysPtr;
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,3);
    if (iVar3 != 0) {
      core_cloth_cpp_FUN_0043c430();
      unaff_EBX = *(int *)(param_5 + 0x3ce8c) + -1;
    }
    in_stack_fffffac0 = (CEditorTools *)0x43cedf;
    in_stack_fffffac4 = (char *)g_CKeysPtr;
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x23);
    if (iVar3 != 0) {
      fStack_14 = (float)(1 - (int)fStack_14);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar3 != 0) {
      local_20 = (SMotion *)(uint)(local_20 == (SMotion *)0x0);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
    if (iVar3 != 0) {
      fStack_14 = (float)(uint)(fStack_14 == 0.0);
    }
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x26);
    if (((in_stack_00000020 == 2) && (-1 < in_stack_00000024)) &&
       (in_stack_00000024 < *(int *)(param_5 + 0x3ce8c))) {
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      uVar9 = (uint)in_stack_fffffab4;
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      iVar6 = in_stack_00000024 * 0xac + param_6;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_160,"Editing cylinder %d, on bone %s");
      engine_2d_c_drawText_FUN_00401fd0(acStack_160,0,g_WindowHeight + -0x16);
      iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if (iVar3 == 0) {
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
      }
      else {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_58);
        local_2c = *(float *)(iVar6 + 0x1c) * 10f;
        local_28 = *(float *)(iVar6 + 0x20) * 10f;
        local_24 = 10f * *(float *)(iVar6 + 0x24);
        unaff_EBX = 0x41200000;
        if ((float *)(local_58 + 4) != &local_2c) {
          local_58._4_4_ = local_2c;
          local_50 = local_28;
          local_4c = local_24;
        }
        if (&local_48 != (float *)(iVar6 + 0x28)) {
          local_48 = *(float *)(iVar6 + 0x28);
          local_44 = *(float *)(iVar6 + 0x2c);
          local_40 = *(float *)(iVar6 + 0x30);
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)(local_58 + 4));
        local_38 = (float *)((float)local_58._4_4_ * 0.1);
        local_34 = local_50 * 0.1;
        pCStack_30 = (CSkeleton *)(local_4c * 0.1);
        if ((float **)(iVar6 + 0x1c) != &local_38) {
          *(float **)(iVar6 + 0x1c) = local_38;
          *(float *)(iVar6 + 0x20) = local_34;
          *(CSkeleton **)(iVar6 + 0x24) = pCStack_30;
        }
        if ((float *)(iVar6 + 0x28) != &local_48) {
          *(float *)(iVar6 + 0x28) = local_48;
          *(float *)(iVar6 + 0x2c) = local_44;
          *(float *)(iVar6 + 0x30) = local_40;
        }
      }
      in_stack_fffffab4 = CONCAT44 /* combine 2-byte values */(0x43d213,uVar9);
      in_stack_fffffabc = (char *)g_CKeysPtr;
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
      if ((iVar3 != 0) &&
         (iVar3 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar3 != 0)) {
        iVar3 = *(int *)(param_5 + 0x3ce8c) + -1;
        *(int *)(param_5 + 0x3ce8c) = iVar3;
        in_stack_fffffabc = (char *)0x43d272;
        crt_string_c_memmove_FUN_005fe5e0
                  (local_20->motion_name + unaff_EBX * 0xac,
                   (void *)((int)local_20->transitions + unaff_EBX * 0xac + 0x40),
                   (iVar3 - unaff_EBX) * 0xac);
      }
      in_stack_fffffac0 = (CEditorTools *)0x43d282;
      in_stack_fffffac4 = (char *)g_CKeysPtr;
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
      if (iVar3 != 0) {
        in_stack_fffffac4 = &DAT_00000001;
        in_stack_fffffac0 = (CEditorTools *)(iVar6 + 0x14);
        in_stack_fffffabc = "Enter X radius";
        in_stack_fffffab4 = CONCAT44 /* combine 2-byte values */(g_CEditorToolsPtr,0x43d2a9);
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter X radius",(float *)in_stack_fffffac0,true,0.0,
                   9999.0,true);
      }
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar3 != 0) {
        in_stack_fffffac4 = "Enter Y radius";
        in_stack_fffffabc = (char *)0x43d2e0;
        in_stack_fffffac0 = g_CEditorToolsPtr;
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter Y radius",(float *)(iVar6 + 0x18),true,0.0,
                   9999.0,true);
      }
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
      if (iVar3 != 0) {
        in_stack_fffffac4 = (char *)0x43d316;
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter cylinder length, 0 to use length of bone",(float *)(iVar6 + 0x34),
                   true,0.0,9999.0,true);
      }
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (&g_CDeformableModelInstanceInstance);
      core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
      iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
      if (iVar3 != 0) {
        iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar3 == 0) {
          in_stack_00000024 = in_stack_00000024 + 1;
        }
        else {
          in_stack_00000024 = in_stack_00000024 + -1;
        }
      }
    }
    else {
      shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2c);
    if (iVar3 != 0) {
      core_cloth_cpp_FUN_00439710();
    }
    if (in_stack_0000002c < 0) {
      in_stack_0000002c = *(int *)(param_5 + 0x3ce8c) + -1;
    }
    if (*(int *)(param_5 + 0x3ce8c) <= in_stack_0000002c) {
      in_stack_0000002c = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
  } while (iVar3 == 0);
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
