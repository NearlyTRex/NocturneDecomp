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
  SMotion *motion_name;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  float fVar5;
  char *string_data;
  int iVar6;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  float *pfVar8;
  int in_stack_00000004;
  int in_stack_0000002c;
  char *in_stack_00000034;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_00000060;
  float in_stack_00000064;
  float in_stack_00000068;
  float in_stack_0000006c;
  float in_stack_00000070;
  char *in_stack_00000074;
  int in_stack_00000080;
  uint in_stack_00000090;
  float in_stack_00000094;
  int in_stack_000000b8;
  int in_stack_000000d0;
  int in_stack_000000d4;
  uint in_stack_000000e8;
  int in_stack_000000ec;
  uint in_stack_00000100;
  uint in_stack_00000118;
  uint in_stack_00000128;
  uint in_stack_00000130;
  int in_stack_0000014c;
  int in_stack_00000150;
  int in_stack_00000154;
  int in_stack_0000016c;
  CGame *in_stack_fffffaac;
  int in_stack_fffffad0;
  char **in_stack_fffffb48;
  CStrList_vtable *in_stack_fffffb4c;
  CStrList_vtable *in_stack_fffffb50;
  char **in_stack_fffffb54;
  CStrList_vtable *in_stack_fffffb58;
  char acStack_134 [4];
  char acStack_130 [64];
  char *pcStack_f0;
  char acStack_ec [4];
  char acStack_e8 [4];
  char acStack_e4 [144];
  float local_54;
  SMotion *local_50;
  int local_4c;
  uint local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_34;
  int iStack_30;
  uint local_2c;
  int local_28;
  CSkeleton *local_24;
  int iStack_1c;
  float *local_18;
  
  iVar1 = in_stack_00000004;
  local_2c = 1;
  local_40 = 1.4013e-45;
  local_54 = 1.4013e-45;
  local_50 = (SMotion *)0x1;
  local_4c = 0;
  local_48 = 0;
  local_28 = 0;
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
  local_24 = pCVar3;
  core_cloth_cpp_FUN_00439710();
  iStack_30 = in_stack_00000004 + 0x3ce90;
  local_4c = in_stack_00000004 + 0x56d8;
  local_50 = (pCVar3->motion_list).motions;
  local_28 = in_stack_00000004 + 0x3fe48;
  local_24 = (CSkeleton *)local_4c;
  do {
    local_44 = g_CGamePtr->delta_time_float;
    motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&g_CDeformableModelInstanceInstance.motion_controller);
    if (local_34 == 0) {
      local_54 = g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
      for (fVar5 = local_40 * motion_name->fps +
                   g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
          (float)motion_name->frame_count < fVar5; fVar5 = fVar5 - (float)motion_name->frame_count)
      {
      }
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&g_CDeformableModelInstanceInstance.motion_controller,motion_name->motion_name,
                 fVar5);
    }
    if (local_24 == (CSkeleton *)0x0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                (&g_CDeformableModelInstanceInstance);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&g_CDeformableModelInstanceInstance);
    *local_18 = *local_18 - g_CDeformableModelInstanceInstance.accumulated_root_motion.x;
    local_18[1] = local_18[1] - g_CDeformableModelInstanceInstance.accumulated_root_motion.y;
    local_18[2] = local_18[2] - g_CDeformableModelInstanceInstance.accumulated_root_motion.z;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.z = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.y = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.x = 0.0;
    if (iStack_1c == 0) {
      core_cloth_cpp_FUN_0043ab80();
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x104)) {
        iVar6 = 0;
        pfVar8 = (float *)(local_3c + 0xc0);
        do {
          piVar7 = (int *)(*(int *)(iVar1 + 0x10c) + iVar6);
          iVar4 = iVar4 + 1;
          *piVar7 = (int)ROUND(*pfVar8 * _DAT_0065bb3c);
          piVar7[1] = (int)ROUND(pfVar8[1] * _DAT_0065bb3c);
          piVar7[2] = (int)ROUND(pfVar8[2] * _DAT_0065bb3c);
          pfVar8 = pfVar8 + 0x47;
          iVar6 = iVar6 + 0xc;
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
    (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,in_stack_fffffad0);
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&DAT_00838e40);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&DAT_00838e4c,(CVector3i *)0x0);
    if (in_stack_00000004 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&g_CDeformableModelInstanceInstance,-1,0xffffffff,1,0);
      core_cloth_cpp_FUN_0043bae0();
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3e);
    if (iVar4 != 0) {
      DAT_0083b10c = DAT_0083b10c + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0083b110,"noc%d.pcx",DAT_0083b10c);
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_0083b110);
    }
    if (in_stack_0000002c != 0) {
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar2);
      in_stack_00000058 = 0.0;
      iVar4 = iVar1;
      if (0 < *(int *)(iVar1 + 0x3f028)) {
        do {
          in_stack_00000004 =
               (int)ROUND(*(float *)(*(int *)(iVar4 + 0x3f02c) * 0x11c + (int)in_stack_0000003c + 8)
                          * _DAT_0065bb3c);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,
                     (CVector3i *)&stack0xfffffffc);
          core_cloth_cpp_FUN_0043c6e0();
          in_stack_00000058 = (float)((int)in_stack_00000058 + 1);
          iVar4 = iVar4 + 4;
        } while ((int)in_stack_00000058 < *(int *)(iVar1 + 0x3f028));
      }
    }
    if ((0 < (int)in_stack_00000048) && (fVar5 = 0.0, 0 < *(int *)(iVar1 + 0x3ce8c))) {
      do {
        if ((in_stack_00000048 == 2.8026e-45) && (fVar5 == in_stack_0000004c)) {
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
        fVar5 = (float)((int)fVar5 + 1);
      } while ((int)fVar5 < *(int *)(iVar1 + 0x3ce8c));
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_134,"Model motion : %s frame %f",in_stack_00000054,
               (double)g_CDeformableModelInstanceInstance.motion_controller.current_frame_number);
    engine_2d_c_drawText_FUN_00401fd0(acStack_130,0,0);
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32);
    if (iVar4 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb40);
      in_stack_00000068 = -NAN;
      fVar5 = 0.0;
      string_data = in_stack_00000034;
      if (0 < *(int *)((int)in_stack_00000064 + 0x964)) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffb44,string_data);
          if (string_data == in_stack_00000074) {
            in_stack_00000068 = fVar5;
          }
          fVar5 = (float)((int)fVar5 + 1);
          string_data = string_data + 0x54c;
        } while ((int)fVar5 < *(int *)((int)in_stack_00000064 + 0x964));
      }
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffb44,"Select motion",
                         (int)in_stack_00000068,0);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (&g_CDeformableModelInstanceInstance.motion_controller,iVar4,0.0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffb4c,0,(uint)in_stack_fffffb48,(uint)in_stack_fffffb4c,
                 (uint)in_stack_fffffb50,(uint)in_stack_fffffb54,(uint)in_stack_fffffb58);
    }
    in_stack_fffffb48 = (char **)0x13;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar4 != 0) {
      shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
    }
    in_stack_fffffb54 = &pcStack_f0;
    in_stack_fffffb50 = (CStrList_vtable *)0x43cdb8;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)in_stack_fffffb54,"%f");
    in_stack_fffffb58 = (CStrList_vtable *)0x43cdda;
    engine_2d_c_drawTextRightAligned_FUN_004021c0
              (acStack_ec,g_WindowWidth + -2,g_WindowHeight + -0xd);
    engine_2d_c_drawText_FUN_00401fd0("1. Toggle bone drawing/editing",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2. Add bone",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("C. Toggle cloth render",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("S. Toggle skeleton render",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("P. Pause/unpause animation",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("H. Home pose toggle",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("L. Toggle locked vertices",0,99);
    engine_2d_c_drawText_FUN_00401fd0("Z. Restart cloth",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("M. Select motion",0,0x79);
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,2);
    if ((iVar4 != 0) && (in_stack_000000d0 = in_stack_000000d0 + 1, 2 < in_stack_000000d0)) {
      in_stack_000000d0 = 0;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,3);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_0043c430();
      in_stack_000000ec = *(int *)(iVar1 + 0x3ce8c) + -1;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x23);
    if (iVar4 != 0) {
      in_stack_000000e8 = 1 - in_stack_000000e8;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar4 != 0) {
      in_stack_000000e8 = (uint)(in_stack_000000e8 == 0);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f);
    if (iVar4 != 0) {
      in_stack_00000100 = (uint)(in_stack_00000100 == 0);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    if (iVar4 != 0) {
      in_stack_00000118 = (uint)(in_stack_00000118 == 0);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x26);
    if (iVar4 != 0) {
      in_stack_00000130 = (uint)(in_stack_00000130 == 0);
    }
    if (((in_stack_0000014c == 2) && (-1 < in_stack_00000150)) &&
       (in_stack_00000150 < *(int *)(iVar1 + 0x3ce8c))) {
      iVar6 = in_stack_00000150 * 0xac;
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      in_stack_fffffb48 = (char **)0x43d011;
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      in_stack_fffffb4c = (CStrList_vtable *)0x43d025;
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      in_stack_fffffb50 = (CStrList_vtable *)0x43d039;
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      in_stack_fffffb54 = (char **)0x43d04d;
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      iVar6 = iVar6 + in_stack_00000080;
      in_stack_fffffb58 = (CStrList_vtable *)0x43d07f;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e8,"Editing cylinder %d, on bone %s");
      engine_2d_c_drawText_FUN_00401fd0(acStack_e4,0,g_WindowHeight + -0x16);
      iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
      if (iVar4 == 0) {
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
      }
      else {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0x00000034);
        in_stack_00000068 = *(float *)(iVar6 + 0x1c) * 10f;
        in_stack_0000006c = *(float *)(iVar6 + 0x20) * 10f;
        in_stack_00000070 = 10f * *(float *)(iVar6 + 0x24);
        in_stack_00000090 = 0x41200000;
        if (&stack0x00000040 != &stack0x00000068) {
          in_stack_00000040 = in_stack_00000068;
          in_stack_00000044 = in_stack_0000006c;
          in_stack_00000048 = in_stack_00000070;
        }
        if (&stack0x0000004c != (float *)(iVar6 + 0x28)) {
          in_stack_0000004c = *(float *)(iVar6 + 0x28);
          in_stack_00000050 = *(float *)(iVar6 + 0x2c);
          in_stack_00000054 = *(float *)(iVar6 + 0x30);
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0x00000040);
        in_stack_00000068 = 1.0 / in_stack_00000094;
        in_stack_00000060 = in_stack_00000044 * in_stack_00000068;
        in_stack_00000064 = in_stack_00000048 * in_stack_00000068;
        in_stack_00000068 = in_stack_0000004c * in_stack_00000068;
        if ((float *)(iVar6 + 0x1c) != &stack0x00000060) {
          *(float *)(iVar6 + 0x1c) = in_stack_00000060;
          *(float *)(iVar6 + 0x20) = in_stack_00000064;
          *(float *)(iVar6 + 0x24) = in_stack_00000068;
        }
        if ((float *)(iVar6 + 0x28) != &stack0x00000050) {
          *(float *)(iVar6 + 0x28) = in_stack_00000050;
          *(float *)(iVar6 + 0x2c) = in_stack_00000054;
          *(float *)(iVar6 + 0x30) = in_stack_00000058;
        }
      }
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar4 != 0)) {
        iVar4 = *(int *)(iVar1 + 0x3ce8c) + -1;
        *(int *)(iVar1 + 0x3ce8c) = iVar4;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(in_stack_000000d4 * 0xac + in_stack_000000b8),
                   (void *)((in_stack_000000d4 + 1) * 0xac + in_stack_000000b8),
                   (iVar4 - in_stack_000000d4) * 0xac);
      }
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2d);
      if (iVar4 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter X radius",(float *)(iVar6 + 0x14),true,0.0,
                   9999.0,true);
      }
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x15);
      if (iVar4 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter Y radius",(float *)(iVar6 + 0x18),true,0.0,
                   9999.0,true);
      }
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x18);
      if (iVar4 != 0) {
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter cylinder length, 0 to use length of bone",(float *)(iVar6 + 0x34),
                   true,0.0,9999.0,true);
      }
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (&g_CDeformableModelInstanceInstance);
      core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
      if (iVar4 != 0) {
        iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar4 == 0) {
          in_stack_00000154 = in_stack_00000154 + 1;
        }
        else {
          in_stack_00000154 = in_stack_00000154 + -1;
        }
      }
    }
    else {
      shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2c);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_00439710();
    }
    if (in_stack_0000016c < 0) {
      in_stack_0000016c = *(int *)(iVar1 + 0x3ce8c) + -1;
    }
    if (*(int *)(iVar1 + 0x3ce8c) <= in_stack_0000016c) {
      in_stack_0000016c = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
  } while (iVar4 == 0);
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
