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
  float fVar1;
  uchar uVar2;
  CSkeleton *pCVar3;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  undefined3 extraout_var_00;
  SMotion *pSVar6;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  int iVar8;
  int in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_00000014;
  float in_stack_00000028;
  int in_stack_0000004c;
  int in_stack_00000064;
  int in_stack_00000068;
  int in_stack_000000e0;
  int in_stack_000000e4;
  int in_stack_00000100;
  CGame *in_stack_fffffaac;
  char **in_stack_fffffadc;
  CStrList_vtable *in_stack_fffffae0;
  CStrList_vtable *in_stack_fffffae4;
  char **in_stack_fffffae8;
  CStrList_vtable *in_stack_fffffaec;
  char acStack_1a0 [4];
  char acStack_19c [64];
  char *pcStack_15c;
  char acStack_158 [4];
  char acStack_154 [4];
  char acStack_150 [220];
  CVector3i CStack_74;
  float fStack_68;
  SMotion *local_60;
  float fStack_5c;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  byte local_38 [16];
  float local_28;
  float local_24;
  SMotion *local_20;
  float fStack_1c;
  int local_18;
  float fStack_14;
  
  local_28 = 1.4013e-45;
  local_3c = 1;
  local_50 = 1;
  local_4c = 1;
  local_48 = 0;
  local_44 = 0;
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
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_38._8_4_ = pCVar3;
  core_cloth_cpp_FUN_00439710();
  local_40 = in_stack_00000004 + 0x3ce90;
  fStack_5c = (float)(in_stack_00000004 + 0x56d8);
  local_60 = (pCVar3->motion_list).motions;
  local_38._0_4_ = in_stack_00000004 + 0x3fe48;
  local_38._4_4_ = fStack_5c;
  do {
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
    if (local_44 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                (&g_CDeformableModelInstanceInstance);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&g_CDeformableModelInstanceInstance);
    *(float *)local_38._0_4_ =
         *(float *)local_38._0_4_ - g_CDeformableModelInstanceInstance.accumulated_root_motion.x;
    *(float *)(local_38._0_4_ + 4) =
         *(float *)(local_38._0_4_ + 4) -
         g_CDeformableModelInstanceInstance.accumulated_root_motion.y;
    *(float *)(local_38._0_4_ + 8) =
         *(float *)(local_38._0_4_ + 8) -
         g_CDeformableModelInstanceInstance.accumulated_root_motion.z;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.z = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.y = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.x = 0.0;
    if (local_3c == 0) {
      core_cloth_cpp_FUN_0043ab80();
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x104)) {
        iVar8 = 0;
        pfVar5 = (float *)((int)fStack_5c + 0xc0);
        do {
          piVar7 = (int *)(*(int *)(in_stack_00000004 + 0x10c) + iVar8);
          iVar4 = iVar4 + 1;
          *piVar7 = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          piVar7[1] = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          piVar7[2] = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          pfVar5 = pfVar5 + 0x47;
          iVar8 = iVar8 + 0xc;
        } while (iVar4 < *(int *)(in_stack_00000004 + 0x104));
      }
      iVar4 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
        do {
          core_cloth_cpp_FUN_0043a2b0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(in_stack_00000004 + 0x3ce8c));
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
    if (local_4c != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&g_CDeformableModelInstanceInstance,-1,0xffffffff,1,0);
    }
    if (local_50 != 0) {
      core_cloth_cpp_FUN_0043bae0();
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
    if (iVar4 != 0) {
      DAT_0083b10c = DAT_0083b10c + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0083b110,"noc%d.pcx",DAT_0083b10c);
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_0083b110);
    }
    if (local_44 != 0) {
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar2);
      local_18 = 0;
      iVar4 = in_stack_00000004;
      if (0 < *(int *)(in_stack_00000004 + 0x3f028)) {
        do {
          pfVar5 = (float *)(*(int *)(iVar4 + 0x3f02c) * 0x11c + local_38._4_4_);
          CStack_74.x = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          CStack_74.y = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          CStack_74.z = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&CStack_74);
          core_cloth_cpp_FUN_0043c6e0();
          local_18 = local_18 + 1;
          iVar4 = iVar4 + 4;
        } while (local_18 < *(int *)(in_stack_00000004 + 0x3f028));
      }
    }
    if ((0 < (int)local_28) && (pSVar6 = (SMotion *)0x0, 0 < *(int *)(in_stack_00000004 + 0x3ce8c)))
    {
      do {
        if ((local_24 == 2.8026e-45) && (pSVar6 == local_20)) {
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,CONCAT31 /* combine 2-byte values */(extraout_var_00,uVar2));
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,0xff);
        }
        core_cloth_cpp_FUN_0043b7e0();
        pSVar6 = (SMotion *)(pSVar6->motion_name + 1);
      } while ((int)pSVar6 < *(int *)(in_stack_00000004 + 0x3ce8c));
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1a0,"Model motion : %s frame %f",local_18,
               (double)g_CDeformableModelInstanceInstance.motion_controller.current_frame_number);
    engine_2d_c_drawText_FUN_00401fd0(acStack_19c,0,0);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
    if (iVar4 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffad4);
      iVar4 = -1;
      iVar8 = 0;
      pfVar5 = (float *)local_38._0_4_;
      if (0 < *(int *)((int)unaff_ESI + 0x964)) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffad8,(char *)pfVar5);
          if (pfVar5 == in_stack_00000008) {
            iVar4 = iVar8;
          }
          iVar8 = iVar8 + 1;
          pfVar5 = pfVar5 + 0x153;
        } while (iVar8 < *(int *)((int)unaff_ESI + 0x964));
      }
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffad8,"Select motion",iVar4,0);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (&g_CDeformableModelInstanceInstance.motion_controller,iVar4,0.0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffae0,0,(uint)in_stack_fffffadc,(uint)in_stack_fffffae0,
                 (uint)in_stack_fffffae4,(uint)in_stack_fffffae8,(uint)in_stack_fffffaec);
    }
    in_stack_fffffadc = (char **)0x13;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar4 != 0) {
      shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
    }
    in_stack_fffffae8 = &pcStack_15c;
    in_stack_fffffae4 = (CStrList_vtable *)0x43cdb8;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)in_stack_fffffae8,"%f");
    in_stack_fffffaec = (CStrList_vtable *)0x43cdda;
    engine_2d_c_drawTextRightAligned_FUN_004021c0
              (acStack_158,g_WindowWidth + -2,g_WindowHeight + -0xd);
    engine_2d_c_drawText_FUN_00401fd0("1. Toggle bone drawing/editing",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2. Add bone",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C. Toggle cloth render",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("S. Toggle skeleton render",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("P. Pause/unpause animation",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("H. Home pose toggle",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("L. Toggle locked vertices",0,99);
    engine_2d_c_drawText_FUN_00401fd0("Z. Restart cloth",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("M. Select motion",0,0x79);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,2);
    if ((iVar4 != 0) && (in_stack_00000064 = in_stack_00000064 + 1, 2 < in_stack_00000064)) {
      in_stack_00000064 = 0;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,3);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_0043c430();
    }
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x23);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x19);
    (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x26);
    if (((in_stack_000000e0 == 2) && (-1 < in_stack_000000e4)) &&
       (in_stack_000000e4 < *(int *)(in_stack_00000004 + 0x3ce8c))) {
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      in_stack_fffffadc = (char **)0x43d011;
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      in_stack_fffffae0 = (CStrList_vtable *)0x43d025;
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      in_stack_fffffae4 = (CStrList_vtable *)0x43d039;
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      in_stack_fffffae8 = (char **)0x43d04d;
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      iVar8 = in_stack_000000e4 * 0xac + in_stack_00000014;
      in_stack_fffffaec = (CStrList_vtable *)0x43d07f;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_154,"Editing cylinder %d, on bone %s");
      engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,g_WindowHeight + -0x16);
      iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if (iVar4 == 0) {
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
      }
      else {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_38);
        if (local_38 + 0xc != &stack0xfffffffc) {
          local_38._12_4_ = *(float *)(iVar8 + 0x1c) * 10f;
          local_28 = *(float *)(iVar8 + 0x20) * 10f;
          local_24 = 10f * *(float *)(iVar8 + 0x24);
        }
        if (&local_20 != (SMotion **)(iVar8 + 0x28)) {
          local_20 = *(SMotion **)(iVar8 + 0x28);
          fStack_1c = *(float *)(iVar8 + 0x2c);
          local_18 = *(int *)(iVar8 + 0x30);
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)(local_38 + 0xc));
        fVar1 = 1.0 / in_stack_00000028;
        unaff_ESI = local_24 * fVar1;
        if ((float *)(iVar8 + 0x1c) != (float *)&stack0xfffffff4) {
          *(float *)(iVar8 + 0x1c) = local_28 * fVar1;
          *(float *)(iVar8 + 0x20) = unaff_ESI;
          *(float *)(iVar8 + 0x24) = (float)local_20 * fVar1;
        }
        if ((float *)(iVar8 + 0x28) != &fStack_1c) {
          *(float *)(iVar8 + 0x28) = fStack_1c;
          *(int *)(iVar8 + 0x2c) = local_18;
          *(float *)(iVar8 + 0x30) = fStack_14;
        }
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar4 != 0)) {
        iVar4 = *(int *)(in_stack_00000004 + 0x3ce8c) + -1;
        *(int *)(in_stack_00000004 + 0x3ce8c) = iVar4;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(in_stack_00000068 * 0xac + in_stack_0000004c),
                   (void *)((in_stack_00000068 + 1) * 0xac + in_stack_0000004c),
                   (iVar4 - in_stack_00000068) * 0xac);
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2d);
      if (iVar4 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter X radius",(float *)(iVar8 + 0x14),true,0.0,
                   9999.0,true);
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x15);
      if (iVar4 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter Y radius",(float *)(iVar8 + 0x18),true,0.0,
                   9999.0,true);
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x18);
      if (iVar4 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter cylinder length, 0 to use length of bone",(float *)(iVar8 + 0x34),
                   true,0.0,9999.0,true);
      }
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (&g_CDeformableModelInstanceInstance);
      core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
      if (iVar4 != 0) {
        (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      }
    }
    else {
      shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2c);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_00439710();
    }
    if (in_stack_00000100 < 0) {
      in_stack_00000100 = *(int *)(in_stack_00000004 + 0x3ce8c) + -1;
    }
    if (*(int *)(in_stack_00000004 + 0x3ce8c) <= in_stack_00000100) {
      in_stack_00000100 = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
  } while (iVar4 == 0);
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
