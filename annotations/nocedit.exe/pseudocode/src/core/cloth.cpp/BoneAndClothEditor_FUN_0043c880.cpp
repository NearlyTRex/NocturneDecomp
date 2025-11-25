// Name: core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
// Address: 0043c880
// Address Range: [[0043c880, 0043cc73] [0043d413, 0043d540]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_BoneAndClothEditor_FUN_0043c880()
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043dfd0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_noc_d_pcx_00618693
//   undefined4 DAT_0065bb3c
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSpotView* g_CSpotViewPtr = 03f6b9e0
//   undefined4 DAT_00838e40
//   undefined4 DAT_00838e44
//   undefined4 DAT_00838e48
//   undefined4 DAT_00838e4c
//   undefined4 DAT_00838e50
//   undefined4 DAT_00838e54
//   CDeformableModelInstance g_CDeformableModelInstanceInstance
//   undefined4 g_CDeformableModelInstanceInstance.motion_controller.current_frame_number
//   undefined4 g_CDeformableModelInstanceInstance.accumulated_root_motion.x
//   undefined4 g_CDeformableModelInstanceInstance.accumulated_root_motion.y
//   undefined4 g_CDeformableModelInstanceInstance.accumulated_root_motion.z
//   undefined4 DAT_0083b10c
//   undefined4 DAT_0083b110
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_ActiveRenderColor
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.lighting_quality_mode
//   CSpotView g_CSpotViewInstance
// Function calls:
//   core_cloth.cpp_FUN_00439710
//   core_cloth.cpp_FUN_0043a2b0
//   core_cloth.cpp_FUN_0043ab80
//   core_cloth.cpp_FUN_0043b7e0
//   core_cloth.cpp_FUN_0043bae0
//   core_cloth.cpp_FUN_0043c6e0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
//   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_spotview.cpp_CSpotView_FUN_005b9620
//   shape_spotview.cpp_CSpotView_FUN_005b9a20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_BoneAndClothEditor(undefined4 param_1) */

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
  undefined4 in_stack_00000090;
  float in_stack_00000094;
  int in_stack_000000b8;
  int in_stack_000000d0;
  int in_stack_000000d4;
  uint in_stack_000000e8;
  int in_stack_000000ec;
  uint in_stack_00000100;
  uint in_stack_00000118;
  undefined4 in_stack_00000128;
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
  undefined4 local_48;
  float local_44;
  float local_40;
  int local_3c;
  int local_34;
  int iStack_30;
  undefined4 local_2c;
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
      g_ActiveRenderColor = CONCAT31(extraout_var,uVar2);
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
                    (g_CDemonRendererPtr,CONCAT31(extraout_var_00,uVar2));
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
        in_stack_00000068 = *(float *)(iVar6 + 0x1c) * FLOAT_006188ba;
        in_stack_0000006c = *(float *)(iVar6 + 0x20) * FLOAT_006188ba;
        in_stack_00000070 = FLOAT_006188ba * *(float *)(iVar6 + 0x24);
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


// Assembly code:
// 0043c880: PUSH EBX
//   Label: core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
// 0043c881: PUSH ESI
// 0043c882: PUSH EDI
// 0043c883: PUSH EBP
// 0043c884: MOV EBP,ESP
// 0043c886: SUB ESP,0x544
// 0043c88c: AND ESP,0xfffffff8
// 0043c88f: MOV ESI,dword ptr [EBP + 0x14]
// 0043c892: MOV EDX,0x1
// 0043c897: PUSH 0x1f
// 0043c899: MOV EDI,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
// 0043c89f: XOR EAX,EAX
// 0043c8a1: MOV dword ptr [ESP + 0x530],EDX
// 0043c8a8: MOV dword ptr [ESP + 0x51c],EDX
// 0043c8af: MOV EBX,EDX
// 0043c8b1: MOV dword ptr [ESP + 0x508],EDX
// 0043c8b8: MOV dword ptr [ESP + 0x50c],EDX
// 0043c8bf: MOV dword ptr [ESP + 0x510],EAX
// 0043c8c6: MOV dword ptr [ESP + 0x514],EAX
// 0043c8cd: MOV dword ptr [ESP + 0x534],EAX
// 0043c8d4: MOV [0x00838e48],EAX
//   XREF to: 00838e48 (WRITE)
// 0043c8d9: MOV [0x00838e44],EAX
//   XREF to: 00838e44 (WRITE)
// 0043c8de: MOV [0x00838e40],EAX
//   XREF to: 00838e40 (WRITE)
// 0043c8e3: MOV [0x00838e54],EAX
//   XREF to: 00838e54 (WRITE)
// 0043c8e8: MOV [0x00838e50],EAX
//   XREF to: 00838e50 (WRITE)
// 0043c8ed: PUSH EDI
//   XREF to: 03f6b9e0 (DATA)
// 0043c8ee: MOV [0x00838e4c],EAX
//   XREF to: 00838e4c (WRITE)
// 0043c8f3: XOR EBX,EDX
// 0043c8f5: CALL shape_spotview.cpp_CSpotView_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 0043c8fa: ADD ESP,0x8
// 0043c8fd: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0043c902: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 0043c903: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0043c908: ADD ESP,0x4
// 0043c90b: PUSH 0x0
// 0043c90d: PUSH EBX
// 0043c90e: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c913: CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 0043c918: ADD ESP,0xc
// 0043c91b: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c920: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0043c925: ADD ESP,0x4
// 0043c928: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c92d: PUSH 0x838e4c
//   XREF to: 00838e4c (DATA)
// 0043c932: MOV EBX,EAX
// 0043c934: PUSH 0x838e40
//   XREF to: 00838e40 (DATA)
// 0043c939: MOV dword ptr [ESP + 0x530],EAX
// 0043c940: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0043c945: PUSH ESI
// 0043c946: MOV dword ptr [EAX + 0x15ac80],0x1
//   XREF to: 0326eef8 (WRITE)
// 0043c950: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 0043c955: ADD ESP,0x10
// 0043c958: LEA EAX,[ESI + 0x3ce90]
// 0043c95e: MOV dword ptr [ESP + 0x514],EAX
// 0043c965: LEA EAX,[ESI + 0x56d8]
// 0043c96b: ADD EBX,0x968
// 0043c971: MOV dword ptr [ESP + 0x520],EAX
// 0043c978: MOV dword ptr [ESP + 0x4f8],EAX
// 0043c97f: LEA EAX,[ESI + 0x3fe48]
// 0043c985: MOV dword ptr [ESP + 0x4f4],EBX
// 0043c98c: MOV dword ptr [ESP + 0x51c],EAX
// 0043c993: MOV EAX,[0x0067b654]
//   Label: LAB_0043c993
//   XREF to: 0067b654 (READ)
// 0043c998: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0043c99e: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c9a3: MOV dword ptr [ESP + 0x504],EAX
// 0043c9aa: MOV dword ptr [ESP + 0x4],EAX
// 0043c9ae: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0043c9b3: ADD ESP,0x4
// 0043c9b6: MOV EDX,dword ptr [ESP + 0x50c]
// 0043c9bd: MOV dword ptr [ESP + 0x534],EAX
// 0043c9c4: TEST EDX,EDX
// 0043c9c6: JZ 0x0043d413
//   XREF to: 0043d413 (CONDITIONAL_JUMP)
// 0043c9cc: CMP dword ptr [ESP + 0x518],0x0
//   Label: LAB_0043c9cc
// 0043c9d4: JZ 0x0043d48d
//   XREF to: 0043d48d (CONDITIONAL_JUMP)
// 0043c9da: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c9df: CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0043c9e4: ADD ESP,0x4
//   Label: LAB_0043c9e4
// 0043c9e7: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c9ec: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0043c9f1: ADD ESP,0x4
// 0043c9f4: MOV EAX,dword ptr [ESP + 0x51c]
// 0043c9fb: FLD float ptr [0x0083b0ac]
//   XREF to: 0083b0ac (READ)
// 0043ca01: FSUBR float ptr [EAX]
// 0043ca03: FSTP float ptr [EAX]
// 0043ca05: FLD float ptr [0x0083b0b0]
//   XREF to: 0083b0b0 (READ)
// 0043ca0b: FSUBR float ptr [EAX + 0x4]
// 0043ca0e: XOR EDI,EDI
// 0043ca10: FSTP float ptr [EAX + 0x4]
// 0043ca13: FLD float ptr [0x0083b0b4]
//   XREF to: 0083b0b4 (READ)
// 0043ca19: FSUBR float ptr [EAX + 0x8]
// 0043ca1c: MOV ECX,dword ptr [ESP + 0x518]
// 0043ca23: FSTP float ptr [EAX + 0x8]
// 0043ca26: MOV dword ptr [0x0083b0b4],EDI
//   XREF to: 0083b0b4 (WRITE)
// 0043ca2c: MOV dword ptr [0x0083b0b0],EDI
//   XREF to: 0083b0b0 (WRITE)
// 0043ca32: MOV dword ptr [0x0083b0ac],EDI
//   XREF to: 0083b0ac (WRITE)
// 0043ca38: TEST ECX,ECX
// 0043ca3a: JNZ 0x0043d49c
//   XREF to: 0043d49c (CONDITIONAL_JUMP)
// 0043ca40: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043ca45: PUSH 0x0
// 0043ca47: PUSH dword ptr [ESP + 0x8]
// 0043ca4b: PUSH 0x838e4c
//   XREF to: 00838e4c (DATA)
// 0043ca50: PUSH 0x838e40
//   XREF to: 00838e40 (DATA)
// 0043ca55: PUSH ESI
// 0043ca56: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 0043ca5b: ADD ESP,0x18
// 0043ca5e: MOV EAX,[0x0067cf44]
//   Label: LAB_0043ca5e
//   XREF to: 0067cf44 (READ)
// 0043ca63: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0043ca64: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0043ca66: CALL dword ptr [EDX + 0x8]
// 0043ca69: ADD ESP,0x4
// 0043ca6c: MOV EBX,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
//   XREF to: 03f6b9e0 (PARAM)
// 0043ca72: PUSH EBX
//   XREF to: 03f6b9e0 (DATA)
// 0043ca73: CALL shape_spotview.cpp_CSpotView_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0043ca78: ADD ESP,0x4
// 0043ca7b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0043ca80: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0043ca85: PUSH 0xf8
// 0043ca8a: DEC EAX
// 0043ca8b: PUSH EAX
// 0043ca8c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0043ca91: DEC EAX
// 0043ca92: PUSH EAX
// 0043ca93: PUSH 0x0
// 0043ca95: PUSH 0x0
// 0043ca97: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0043ca9c: ADD ESP,0x14
// 0043ca9f: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0043caa4: PUSH 0x838e40
//   XREF to: 00838e40 (DATA)
// 0043caa9: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043caaf: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0043cab0: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0043cab5: ADD ESP,0x8
// 0043cab8: PUSH 0x0
// 0043caba: PUSH 0x838e4c
//   XREF to: 00838e4c (DATA)
// 0043cabf: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0043cac4: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0043cac5: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0043caca: ADD ESP,0xc
// 0043cacd: CMP dword ptr [ESP + 0x508],0x0
// 0043cad5: JZ 0x0043caec
//   XREF to: 0043caec (CONDITIONAL_JUMP)
// 0043cad7: PUSH 0x0
// 0043cad9: PUSH 0x1
// 0043cadb: PUSH -0x1
// 0043cadd: PUSH -0x1
// 0043cadf: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043cae4: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 0043cae9: ADD ESP,0x14
// 0043caec: CMP dword ptr [ESP + 0x504],0x0
//   Label: LAB_0043caec
// 0043caf4: JZ 0x0043cb01
//   XREF to: 0043cb01 (CONDITIONAL_JUMP)
// 0043caf6: PUSH 0x0
// 0043caf8: PUSH ESI
// 0043caf9: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 0043cafe: ADD ESP,0x8
// 0043cb01: PUSH 0x3e
//   Label: LAB_0043cb01
// 0043cb03: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0043cb08: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0043cb09: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0043cb0b: CALL dword ptr [EDX + 0x4]
// 0043cb0e: ADD ESP,0x8
// 0043cb11: TEST EAX,EAX
// 0043cb13: JZ 0x0043cb42
//   XREF to: 0043cb42 (CONDITIONAL_JUMP)
// 0043cb15: MOV EBX,dword ptr [0x0083b10c]
//   XREF to: 0083b10c (READ)
// 0043cb1b: INC EBX
// 0043cb1c: PUSH EBX
// 0043cb1d: PUSH 0x618693
//   XREF to: 00618693 (DATA)
// 0043cb22: PUSH 0x83b110
//   XREF to: 0083b110 (DATA)
// 0043cb27: MOV dword ptr [0x0083b10c],EBX
//   XREF to: 0083b10c (WRITE)
// 0043cb2d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043cb32: ADD ESP,0xc
// 0043cb35: PUSH 0x83b110
//   XREF to: 0083b110 (DATA)
// 0043cb3a: CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   XREF to: 005490c0 (UNCONDITIONAL_CALL)
// 0043cb3f: ADD ESP,0x4
// 0043cb42: CMP dword ptr [ESP + 0x510],0x0
//   Label: LAB_0043cb42
// 0043cb4a: JZ 0x0043cc04
//   XREF to: 0043cc04 (CONDITIONAL_JUMP)
// 0043cb50: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043cb56: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0043cb57: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0043cb5c: ADD ESP,0x4
// 0043cb5f: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0043cb64: XOR ECX,ECX
// 0043cb66: MOV EBX,dword ptr [ESI + 0x3f028]
// 0043cb6c: MOV dword ptr [ESP + 0x53c],ECX
// 0043cb73: TEST EBX,EBX
// 0043cb75: JLE 0x0043cc04
//   XREF to: 0043cc04 (CONDITIONAL_JUMP)
// 0043cb7b: MOV EDI,ESI
// 0043cb7d: IMUL EAX,dword ptr [EDI + 0x3f02c],0x11c
//   Label: LAB_0043cb7d
// 0043cb87: MOV ECX,dword ptr [ESP + 0x520]
// 0043cb8e: LEA EBX,[ESP + 0x4e0]
// 0043cb95: ADD EAX,ECX
// 0043cb97: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043cb9d: FLD float ptr [EAX]
// 0043cb9f: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043cba5: FISTP dword ptr [EBX]
// 0043cba7: FLD float ptr [EAX + 0x4]
// 0043cbaa: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043cbb0: FISTP dword ptr [EBX + 0x4]
// 0043cbb3: FLD float ptr [EAX + 0x8]
// 0043cbb6: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043cbbc: FISTP dword ptr [EBX + 0x8]
// 0043cbbf: LEA EAX,[ESP + 0x4e0]
// 0043cbc6: PUSH EAX
// 0043cbc7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043cbc9: ADD EAX,0xea5d0
// 0043cbce: PUSH EAX
// 0043cbcf: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0043cbd4: ADD ESP,0x8
// 0043cbd7: PUSH 0x4e1f
// 0043cbdc: CALL core_cloth.cpp_FUN_0043c6e0
//   XREF to: 0043c6e0 (UNCONDITIONAL_CALL)
// 0043cbe1: ADD ESP,0x4
// 0043cbe4: MOV EBX,dword ptr [ESP + 0x53c]
// 0043cbeb: ADD EDI,0x4
// 0043cbee: INC EBX
// 0043cbef: MOV EDX,dword ptr [ESI + 0x3f028]
// 0043cbf5: MOV dword ptr [ESP + 0x53c],EBX
// 0043cbfc: CMP EBX,EDX
// 0043cbfe: JL 0x0043cb7d
//   XREF to: 0043cb7d (CONDITIONAL_JUMP)
// 0043cc04: CMP dword ptr [ESP + 0x52c],0x0
//   Label: LAB_0043cc04
// 0043cc0c: JLE 0x0043cc68
//   XREF to: 0043cc68 (CONDITIONAL_JUMP)
// 0043cc0e: MOV EDI,dword ptr [ESI + 0x3ce8c]
// 0043cc14: XOR EBX,EBX
// 0043cc16: TEST EDI,EDI
// 0043cc18: JLE 0x0043cc68
//   XREF to: 0043cc68 (CONDITIONAL_JUMP)
// 0043cc1a: CMP dword ptr [ESP + 0x52c],0x2
//   Label: LAB_0043cc1a
// 0043cc22: JNZ 0x0043d526
//   XREF to: 0043d526 (CONDITIONAL_JUMP)
// 0043cc28: CMP EBX,dword ptr [ESP + 0x530]
// 0043cc2f: JNZ 0x0043d526
//   XREF to: 0043d526 (CONDITIONAL_JUMP)
// 0043cc35: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043cc3a: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0043cc3b: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 0043cc40: ADD ESP,0x4
// 0043cc43: PUSH EAX
// 0043cc44: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043cc4a: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0043cc4b: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0043cc50: ADD ESP,0x8
// 0043cc53: PUSH 0x1
// 0043cc55: PUSH EBX
//   Label: LAB_0043cc55
// 0043cc56: PUSH ESI
// 0043cc57: CALL core_cloth.cpp_FUN_0043b7e0
//   XREF to: 0043b7e0 (UNCONDITIONAL_CALL)
// 0043cc5c: ADD ESP,0xc
// 0043cc5f: INC EBX
// 0043cc60: CMP EBX,dword ptr [ESI + 0x3ce8c]
// 0043cc66: JL 0x0043cc1a
//   XREF to: 0043cc1a (CONDITIONAL_JUMP)
// 0043cc68: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_0043cc68
//   XREF to: 006703ec (READ)
// 0043cc6e: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0043cc6f: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 0043d413: FLD float ptr [ESP + 0x500]
//   Label: LAB_0043d413
// 0043d41a: MOV EDX,dword ptr [0x00838e60]
//   XREF to: 00838e60 (READ)
// 0043d420: FMUL float ptr [EAX + 0x20]
// 0043d423: MOV dword ptr [ESP + 0x4ec],EDX
// 0043d42a: FADD float ptr [ESP + 0x4ec]
// 0043d431: FSTP float ptr [ESP + 0x540]
//   Label: LAB_0043d431
// 0043d438: MOV EAX,dword ptr [ESP + 0x534]
// 0043d43f: FLD float ptr [ESP + 0x540]
// 0043d446: FILD dword ptr [EAX + 0x64]
// 0043d449: FSTP float ptr [ESP + 0x538]
// 0043d450: FCOMP float ptr [ESP + 0x538]
// 0043d457: FNSTSW AX
// 0043d459: SAHF
// 0043d45a: JBE 0x0043d46c
//   XREF to: 0043d46c (CONDITIONAL_JUMP)
// 0043d45c: FLD float ptr [ESP + 0x540]
// 0043d463: FSUB float ptr [ESP + 0x538]
// 0043d46a: JMP 0x0043d431
//   XREF to: 0043d431 (UNCONDITIONAL_JUMP)
// 0043d46c: MOV ECX,dword ptr [ESP + 0x534]
//   Label: LAB_0043d46c
// 0043d473: PUSH dword ptr [ESP + 0x540]
// 0043d47a: PUSH ECX
// 0043d47b: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043d480: CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 0043d485: ADD ESP,0xc
// 0043d488: JMP 0x0043c9cc
//   XREF to: 0043c9cc (UNCONDITIONAL_JUMP)
// 0043d48d: PUSH 0x838e58
//   Label: LAB_0043d48d
//   XREF to: 00838e58 (DATA)
// 0043d492: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0043d497: JMP 0x0043c9e4
//   XREF to: 0043c9e4 (UNCONDITIONAL_JUMP)
// 0043d49c: MOV EBX,dword ptr [ESI + 0x104]
//   Label: LAB_0043d49c
// 0043d4a2: XOR EDX,EDX
// 0043d4a4: TEST EBX,EBX
// 0043d4a6: JLE 0x0043d4f7
//   XREF to: 0043d4f7 (CONDITIONAL_JUMP)
// 0043d4a8: MOV EDI,dword ptr [ESP + 0x4f8]
// 0043d4af: XOR ECX,ECX
// 0043d4b1: ADD EDI,0xc0
// 0043d4b7: MOV EBX,dword ptr [ESI + 0x10c]
//   Label: LAB_0043d4b7
// 0043d4bd: MOV EAX,EDI
// 0043d4bf: ADD EBX,ECX
// 0043d4c1: INC EDX
// 0043d4c2: FLD float ptr [EAX]
// 0043d4c4: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043d4ca: FISTP dword ptr [EBX]
// 0043d4cc: FLD float ptr [EAX + 0x4]
// 0043d4cf: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043d4d5: FISTP dword ptr [EBX + 0x4]
// 0043d4d8: FLD float ptr [EAX + 0x8]
// 0043d4db: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043d4e1: FISTP dword ptr [EBX + 0x8]
// 0043d4e4: ADD EDI,0x11c
// 0043d4ea: MOV EAX,dword ptr [ESI + 0x104]
// 0043d4f0: ADD ECX,0xc
// 0043d4f3: CMP EDX,EAX
// 0043d4f5: JL 0x0043d4b7
//   XREF to: 0043d4b7 (CONDITIONAL_JUMP)
// 0043d4f7: MOV EDX,dword ptr [ESI + 0x3ce8c]
//   Label: LAB_0043d4f7
// 0043d4fd: XOR EBX,EBX
// 0043d4ff: TEST EDX,EDX
// 0043d501: JLE 0x0043ca5e
//   XREF to: 0043ca5e (CONDITIONAL_JUMP)
// 0043d507: PUSH 0x838e58
//   Label: LAB_0043d507
//   XREF to: 00838e58 (DATA)
// 0043d50c: PUSH EBX
// 0043d50d: PUSH ESI
// 0043d50e: CALL core_cloth.cpp_FUN_0043a2b0
//   XREF to: 0043a2b0 (UNCONDITIONAL_CALL)
// 0043d513: INC EBX
// 0043d514: MOV ECX,dword ptr [ESI + 0x3ce8c]
// 0043d51a: ADD ESP,0xc
// 0043d51d: CMP EBX,ECX
// 0043d51f: JL 0x0043d507
//   XREF to: 0043d507 (CONDITIONAL_JUMP)
// 0043d521: JMP 0x0043ca5e
//   XREF to: 0043ca5e (UNCONDITIONAL_JUMP)
// 0043d526: PUSH 0xff
//   Label: LAB_0043d526
// 0043d52b: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043d531: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0043d532: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0043d537: ADD ESP,0x8
// 0043d53a: PUSH 0x0
// 0043d53c: JMP 0x0043cc55
//   XREF to: 0043cc55 (UNCONDITIONAL_JUMP)
