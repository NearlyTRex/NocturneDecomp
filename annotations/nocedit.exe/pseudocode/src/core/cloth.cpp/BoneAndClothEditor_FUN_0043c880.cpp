// Name: core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
// Address: 0043c880
// Address Range: [[0043c880, 0043cc73] [0043d413, 0043d540]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_BoneAndClothEditor_FUN_0043c880()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_cloth.cpp_BoneAndClothEditor(uint param_1) */

void core_cloth_cpp_BoneAndClothEditor_FUN_0043c880(void)

{
  int iVar1;
  uchar uVar2;
  CSkeleton *pCVar3;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  undefined3 extraout_var_00;
  float fVar6;
  char *string_data;
  int iVar7;
  int *piVar8;
  char *unaff_EBP;
  int unaff_ESI;
  int in_stack_00000004;
  int in_stack_00000010;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  CGame *in_stack_fffffaa8;
  CKeys *pCVar9;
  uint uVar10;
  ulonglong in_stack_fffffabc;
  char *in_stack_fffffac4;
  CEditorTools *in_stack_fffffac8;
  char *in_stack_fffffacc;
  char acStack_1a0 [16];
  char acStack_190 [56];
  char acStack_158 [236];
  CVector3i local_6c;
  float local_60;
  float local_58;
  uint local_54;
  byte local_50 [8];
  float local_48;
  float local_44;
  float local_40;
  float *local_3c;
  float local_38;
  CSkeleton *local_34;
  float fStack_30;
  float local_2c;
  float local_28;
  SMotion *local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  
  iVar1 = in_stack_00000004;
  local_2c = 1.4013e-45;
  local_40 = 1.4013e-45;
  local_54 = 1;
  local_50._0_4_ = (char *)0x1;
  local_50._4_4_ = (SMotion *)0x0;
  local_48 = 0.0;
  local_28 = 0.0;
  _DAT_00838e48 = 0;
  _DAT_00838e44 = 0;
  _DAT_00838e40 = 0;
  _DAT_00838e54 = 0;
  _DAT_00838e50 = 0;
  _DAT_00838e4c = 0;
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffaa8);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
            (&g_CDeformableModelInstanceInstance.motion_controller,0,0.0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_34 = pCVar3;
  core_cloth_cpp_FUN_00439710();
  local_44 = (float)(in_stack_00000004 + 0x3ce90);
  local_60 = (float)(in_stack_00000004 + 0x56d8);
  local_6c.z = (int)(pCVar3->motion_list).motions;
  local_3c = (float *)(in_stack_00000004 + 0x3fe48);
  local_38 = local_60;
  do {
    local_58 = g_CGamePtr->delta_time_float;
    local_24 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&g_CDeformableModelInstanceInstance.motion_controller);
    if ((SMotion *)local_50._4_4_ == (SMotion *)0x0) {
      local_6c.x = (int)g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
      for (local_18 = local_58 * local_24->fps +
                      g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
          local_20 = (float)local_24->frame_count, local_20 < local_18;
          local_18 = local_18 - local_20) {
      }
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&g_CDeformableModelInstanceInstance.motion_controller,local_24->motion_name,
                 local_18);
    }
    if (local_40 == 0.0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                (&g_CDeformableModelInstanceInstance);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&g_CDeformableModelInstanceInstance);
    *local_3c = *local_3c - g_CDeformableModelInstanceInstance.accumulated_root_motion.x;
    local_3c[1] = local_3c[1] - g_CDeformableModelInstanceInstance.accumulated_root_motion.y;
    local_3c[2] = local_3c[2] - g_CDeformableModelInstanceInstance.accumulated_root_motion.z;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.z = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.y = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.x = 0.0;
    if (local_40 == 0.0) {
      core_cloth_cpp_FUN_0043ab80();
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x104)) {
        iVar7 = 0;
        pfVar5 = (float *)((int)local_60 + 0xc0);
        do {
          piVar8 = (int *)(*(int *)(iVar1 + 0x10c) + iVar7);
          iVar4 = iVar4 + 1;
          *piVar8 = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          piVar8[1] = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          piVar8[2] = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          pfVar5 = pfVar5 + 0x47;
          iVar7 = iVar7 + 0xc;
        } while (iVar4 < *(int *)(iVar1 + 0x104));
      }
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x3ce8c)) {
        do {
          core_cloth_cpp_FUN_0043a2b0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar1 + 0x3ce8c));
      }
    }
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,(CVector3f *)&DAT_00838e40);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&DAT_00838e4c,(CVector3i *)0x0);
    if ((SMotion *)local_50._4_4_ != (SMotion *)0x0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&g_CDeformableModelInstanceInstance,-1,0xffffffff,1,0);
    }
    if ((char *)local_50._0_4_ != (char *)0x0) {
      core_cloth_cpp_FUN_0043bae0();
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
    if (iVar4 != 0) {
      DAT_0083b10c = DAT_0083b10c + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0083b110,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_0083b110);
    }
    if (local_3c != (float *)0x0) {
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31(extraout_var,uVar2);
      unaff_EBP = (char *)0x0;
      iVar4 = iVar1;
      if (0 < *(int *)(iVar1 + 0x3f028)) {
        do {
          pfVar5 = (float *)(*(int *)(iVar4 + 0x3f02c) * 0x11c + (int)local_2c);
          local_6c.x = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          local_6c.y = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          local_6c.z = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[19999].projected_vertex,&local_6c);
          core_cloth_cpp_FUN_0043c6e0();
          unaff_EBP = unaff_EBP + 1;
          iVar4 = iVar4 + 4;
        } while ((int)unaff_EBP < *(int *)(iVar1 + 0x3f028));
      }
    }
    if ((0 < (int)local_20) && (fVar6 = 0.0, 0 < *(int *)(iVar1 + 0x3ce8c))) {
      do {
        if ((local_20 == 2.8026e-45) && (fVar6 == fStack_1c)) {
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,CONCAT31(extraout_var_00,uVar2));
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,0xff);
        }
        core_cloth_cpp_FUN_0043b7e0();
        fVar6 = (float)((int)fVar6 + 1);
      } while ((int)fVar6 < *(int *)(iVar1 + 0x3ce8c));
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1a0,"Model motion : %s frame %f",local_18,
               (double)g_CDeformableModelInstanceInstance.motion_controller.current_frame_number);
    engine_2d_c_drawText_FUN_00401fd0(acStack_1a0,0,0);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
    if (iVar4 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffac0);
      fStack_1c = -NAN;
      fVar6 = 0.0;
      string_data = (char *)local_50._0_4_;
      if (0 < *(int *)((int)local_20 + 0x964)) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffac0,string_data);
          if (string_data == unaff_EBP) {
            fStack_1c = fVar6;
          }
          fVar6 = (float)((int)fVar6 + 1);
          string_data = string_data + 0x54c;
        } while ((int)fVar6 < *(int *)((int)local_20 + 0x964));
      }
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffac0,"Select motion",(int)fStack_1c,0);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (&g_CDeformableModelInstanceInstance.motion_controller,iVar4,0.0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffac0,0,(uint)in_stack_fffffabc,
                 (uint)((ulonglong)in_stack_fffffabc >> 0x20),(uint)in_stack_fffffac4,
                 (uint)in_stack_fffffac8,(uint)in_stack_fffffacc);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar4 != 0) {
      shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
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
    pCVar9 = g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,2);
    if ((iVar4 != 0) && (unaff_ESI = unaff_ESI + 1, 2 < unaff_ESI)) {
      unaff_ESI = 0;
    }
    in_stack_fffffabc = CONCAT44(0x43ceb4,pCVar9);
    in_stack_fffffac4 = (char *)g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,3);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_0043c430();
      in_stack_00000004 = *(int *)(iVar1 + 0x3ce8c) + -1;
    }
    in_stack_fffffac8 = (CEditorTools *)0x43cedf;
    in_stack_fffffacc = (char *)g_CKeysPtr;
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x23);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar4 != 0) {
      local_18 = (float)(uint)(local_18 == 0.0);
    }
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x26);
    if (((in_stack_00000028 == 2) && (-1 < in_stack_0000002c)) &&
       (in_stack_0000002c < *(int *)(iVar1 + 0x3ce8c))) {
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      uVar10 = (uint)in_stack_fffffabc;
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      iVar7 = in_stack_0000002c * 0xac + in_stack_00000010;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_158,"Editing cylinder %d, on bone %s");
      engine_2d_c_drawText_FUN_00401fd0(acStack_158,0,g_WindowHeight + -0x16);
      iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if (iVar4 == 0) {
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
      }
      else {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_50);
        local_24 = (SMotion *)(*(float *)(iVar7 + 0x1c) * 10.0f);
        local_20 = *(float *)(iVar7 + 0x20) * 10.0f;
        fStack_1c = 10.0f * *(float *)(iVar7 + 0x24);
        in_stack_00000004 = 0x41200000;
        if ((SMotion **)(local_50 + 4) != &local_24) {
          local_50._4_4_ = local_24;
          local_48 = local_20;
          local_44 = fStack_1c;
        }
        if (&local_40 != (float *)(iVar7 + 0x28)) {
          local_40 = *(float *)(iVar7 + 0x28);
          local_3c = *(float **)(iVar7 + 0x2c);
          local_38 = *(float *)(iVar7 + 0x30);
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)(local_50 + 4));
        fStack_30 = (float)local_50._4_4_ * 0.1;
        local_2c = local_48 * 0.1;
        local_28 = local_44 * 0.1;
        if ((float *)(iVar7 + 0x1c) != &fStack_30) {
          *(float *)(iVar7 + 0x1c) = fStack_30;
          *(float *)(iVar7 + 0x20) = local_2c;
          *(float *)(iVar7 + 0x24) = local_28;
        }
        if ((float *)(iVar7 + 0x28) != &local_40) {
          *(float *)(iVar7 + 0x28) = local_40;
          *(float **)(iVar7 + 0x2c) = local_3c;
          *(float *)(iVar7 + 0x30) = local_38;
        }
      }
      in_stack_fffffabc = CONCAT44(0x43d213,uVar10);
      in_stack_fffffac4 = (char *)g_CKeysPtr;
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar4 != 0)) {
        iVar4 = *(int *)(iVar1 + 0x3ce8c) + -1;
        *(int *)(iVar1 + 0x3ce8c) = iVar4;
        in_stack_fffffac4 = (char *)0x43d272;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(in_stack_00000004 * 0xac + (int)local_18),
                   (void *)((in_stack_00000004 + 1) * 0xac + (int)local_18),
                   (iVar4 - in_stack_00000004) * 0xac);
      }
      in_stack_fffffac8 = (CEditorTools *)0x43d282;
      in_stack_fffffacc = (char *)g_CKeysPtr;
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
      if (iVar4 != 0) {
        in_stack_fffffacc = (char *)0x1;
        in_stack_fffffac8 = (CEditorTools *)(iVar7 + 0x14);
        in_stack_fffffac4 = "Enter X radius";
        in_stack_fffffabc = CONCAT44(g_CEditorToolsPtr,0x43d2a9);
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter X radius",(float *)in_stack_fffffac8,1,0.0,
                   9999.0,1);
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar4 != 0) {
        in_stack_fffffacc = "Enter Y radius";
        in_stack_fffffac4 = (char *)0x43d2e0;
        in_stack_fffffac8 = g_CEditorToolsPtr;
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter Y radius",(float *)(iVar7 + 0x18),1,0.0,9999.0,
                   1);
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
      if (iVar4 != 0) {
        in_stack_fffffacc = (char *)0x43d316;
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter cylinder length, 0 to use length of bone",(float *)(iVar7 + 0x34),1,
                   0.0,9999.0,1);
      }
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (&g_CDeformableModelInstanceInstance);
      core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
      if (iVar4 != 0) {
        iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar4 == 0) {
          in_stack_0000002c = in_stack_0000002c + 1;
        }
        else {
          in_stack_0000002c = in_stack_0000002c + -1;
        }
      }
    }
    else {
      shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2c);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_00439710();
    }
    if (in_stack_00000034 < 0) {
      in_stack_00000034 = *(int *)(iVar1 + 0x3ce8c) + -1;
    }
    if (*(int *)(iVar1 + 0x3ce8c) <= in_stack_00000034) {
      in_stack_00000034 = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
  } while (iVar4 == 0);
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
