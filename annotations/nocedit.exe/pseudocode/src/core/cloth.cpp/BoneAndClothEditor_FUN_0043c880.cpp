// Name: core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
// Address: 0043c880
// Address Range: [[0043c880, 0043cc73] [0043d413, 0043d540]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_BoneAndClothEditor_FUN_0043c880()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_cloth.cpp_BoneAndClothEditor(uint param_1) */

void core_cloth_cpp_BoneAndClothEditor_FUN_0043c880
               (uint param_1,uint param_2,float unaff_EBX,uint param_4,int param_5
               ,uint param_6,char *param_7,uint param_8,uint param_9,int param_10)

{
  int iVar1;
  uchar uVar2;
  CSkeleton *pCVar3;
  SMotion *motion_name;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  undefined3 extraout_var_00;
  float fVar6;
  char *string_data;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar8;
  float in_stack_0000002c;
  int in_stack_00000050;
  int in_stack_00000068;
  int in_stack_0000006c;
  float in_stack_000000f4;
  int in_stack_000000f8;
  int in_stack_00000100;
  int iStack00000104;
  int in_stack_00000118;
  float *in_stack_0000011c;
  char **in_stack_fffffae0;
  CStrList_vtable *in_stack_fffffae4;
  CStrList_vtable *in_stack_fffffae8;
  char **in_stack_fffffaec;
  CStrList_vtable *in_stack_fffffaf0;
  CGame *in_stack_fffffbe0;
  char acStack_19c [4];
  char acStack_198 [64];
  char *pcStack_158;
  char acStack_154 [4];
  char acStack_150 [4];
  char acStack_14c [224];
  CVector3i local_6c [2];
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  int local_3c;
  CSlew local_34;
  float local_18;
  uint uStack_14;
  
  local_34.position.z = 1.4013e-45;
  local_40 = 1;
  local_54 = 1;
  local_50 = 1;
  local_4c = 0;
  local_48 = 0;
  local_34.pitch = 0.0;
  _DAT_00838e48 = 0;
  _DAT_00838e44 = 0;
  _DAT_00838e40 = 0;
  _DAT_00838e54 = 0;
  _DAT_00838e50 = 0;
  _DAT_00838e4c = 0;
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffbe0);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
            (&g_CDeformableModelInstanceInstance.motion_controller,0,0.0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  g_CDemonSetPtr->lighting_quality_mode = 1;
  core_cloth_cpp_FUN_00439710();
  iStack00000104 = param_5 + 0x3ce90;
  iVar1 = param_5 + 0x56d8;
  do {
    motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&g_CDeformableModelInstanceInstance.motion_controller);
    if (in_stack_00000100 == 0) {
      for (fVar6 = in_stack_000000f4 * motion_name->fps +
                   g_CDeformableModelInstanceInstance.motion_controller.current_frame_number;
          (float)motion_name->frame_count < fVar6; fVar6 = fVar6 - (float)motion_name->frame_count)
      {
      }
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&g_CDeformableModelInstanceInstance.motion_controller,motion_name->motion_name,
                 fVar6);
    }
    if (iVar1 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                (&g_CDeformableModelInstanceInstance);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
                (&g_CDeformableModelInstanceInstance);
    }
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
              (&g_CDeformableModelInstanceInstance);
    *in_stack_0000011c =
         *in_stack_0000011c - g_CDeformableModelInstanceInstance.accumulated_root_motion.x;
    in_stack_0000011c[1] =
         in_stack_0000011c[1] - g_CDeformableModelInstanceInstance.accumulated_root_motion.y;
    in_stack_0000011c[2] =
         in_stack_0000011c[2] - g_CDeformableModelInstanceInstance.accumulated_root_motion.z;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.z = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.y = 0.0;
    g_CDeformableModelInstanceInstance.accumulated_root_motion.x = 0.0;
    if (in_stack_00000118 == 0) {
      core_cloth_cpp_FUN_0043ab80();
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(param_5 + 0x104)) {
        iVar8 = 0;
        pfVar5 = (float *)(in_stack_000000f8 + 0xc0);
        do {
          piVar7 = (int *)(*(int *)(param_5 + 0x10c) + iVar8);
          iVar4 = iVar4 + 1;
          *piVar7 = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          piVar7[1] = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          piVar7[2] = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          pfVar5 = pfVar5 + 0x47;
          iVar8 = iVar8 + 0xc;
        } while (iVar4 < *(int *)(param_5 + 0x104));
      }
      iVar4 = 0;
      if (0 < *(int *)(param_5 + 0x3ce8c)) {
        do {
          core_cloth_cpp_FUN_0043a2b0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_5 + 0x3ce8c));
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
    if ((char *)local_34.position.x != (char *)0x0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (&g_CDeformableModelInstanceInstance,-1,0xffffffff,1,0);
    }
    if ((char *)local_34.position.x != (char *)0x0) {
      core_cloth_cpp_FUN_0043bae0();
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
    if (iVar4 != 0) {
      DAT_0083b10c = DAT_0083b10c + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0083b110,"noc%d.pcx",DAT_0083b10c);
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_0083b110);
    }
    if (local_3c != 0) {
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31 /* combine 2-byte values */(extraout_var,uVar2);
      unaff_EBP = 0;
      iVar4 = param_5;
      if (0 < *(int *)(param_5 + 0x3f028)) {
        do {
          pfVar5 = (float *)(*(int *)(iVar4 + 0x3f02c) * 0x11c + (int)local_34.position.z);
          local_6c[0].x = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          local_6c[0].y = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          local_6c[0].z = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,local_6c);
          core_cloth_cpp_FUN_0043c6e0();
          unaff_EBP = unaff_EBP + 1;
          iVar4 = iVar4 + 4;
        } while (unaff_EBP < *(int *)(param_5 + 0x3f028));
      }
    }
    if ((0 < (int)local_34.roll) && (fVar6 = 0.0, 0 < *(int *)(param_5 + 0x3ce8c))) {
      do {
        if ((local_34.roll == 2.8026e-45) && (fVar6 == local_34.slew_rate)) {
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
        fVar6 = (float)((int)fVar6 + 1);
      } while ((int)fVar6 < *(int *)(param_5 + 0x3ce8c));
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_19c,"Model motion : %s frame %f",uStack_14,
               (double)g_CDeformableModelInstanceInstance.motion_controller.current_frame_number);
    engine_2d_c_drawText_FUN_00401fd0(acStack_198,0,0);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
    if (iVar4 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffad8);
      iVar4 = -1;
      iVar8 = 0;
      string_data = (char *)local_34.position.x;
      if (0 < *(int *)((int)unaff_EBX + 0x964)) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffadc,string_data);
          if (string_data == param_7) {
            iVar4 = iVar8;
          }
          iVar8 = iVar8 + 1;
          string_data = string_data + 0x54c;
        } while (iVar8 < *(int *)((int)unaff_EBX + 0x964));
      }
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffadc,"Select motion",iVar4,0);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (&g_CDeformableModelInstanceInstance.motion_controller,iVar4,0.0);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffae4,0,(uint)in_stack_fffffae0,(uint)in_stack_fffffae4,
                 (uint)in_stack_fffffae8,(uint)in_stack_fffffaec,(uint)in_stack_fffffaf0);
    }
    in_stack_fffffae0 = (char **)0x13;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar4 != 0) {
      shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
    }
    in_stack_fffffaec = &pcStack_158;
    in_stack_fffffae8 = (CStrList_vtable *)0x43cdb8;
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)in_stack_fffffaec,"%f");
    in_stack_fffffaf0 = (CStrList_vtable *)0x43cdda;
    engine_2d_c_drawTextRightAligned_FUN_004021c0
              (acStack_154,g_WindowWidth + -2,g_WindowHeight + -0xd);
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
    if ((iVar4 != 0) && (in_stack_00000068 = in_stack_00000068 + 1, 2 < in_stack_00000068)) {
      in_stack_00000068 = 0;
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
    if (((pCVar3 == (CSkeleton *)0xfffff69a) && (-1 < iVar1)) &&
       (iVar1 < *(int *)(param_5 + 0x3ce8c))) {
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      in_stack_fffffae0 = (char **)0x43d011;
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      in_stack_fffffae4 = (CStrList_vtable *)0x43d025;
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      in_stack_fffffae8 = (CStrList_vtable *)0x43d039;
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      in_stack_fffffaec = (char **)0x43d04d;
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      iVar8 = iVar1 * 0xac + param_10;
      in_stack_fffffaf0 = (CStrList_vtable *)0x43d07f;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_150,"Editing cylinder %d, on bone %s");
      engine_2d_c_drawText_FUN_00401fd0(acStack_14c,0,g_WindowHeight + -0x16);
      iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if (iVar4 == 0) {
        shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
      }
      else {
        core_slew_cpp_CSlew_init_FUN_005a2060(&local_34);
        if (&local_34.pitch != (float *)&stack0x00000000) {
          local_34.pitch = *(float *)(iVar8 + 0x1c) * 10f;
          local_34.yaw = *(float *)(iVar8 + 0x20) * 10f;
          local_34.roll = 10f * *(float *)(iVar8 + 0x24);
        }
        if (&local_34.slew_rate != (float *)(iVar8 + 0x28)) {
          local_34.slew_rate = *(float *)(iVar8 + 0x28);
          local_18 = *(float *)(iVar8 + 0x2c);
          uStack_14 = *(uint *)(iVar8 + 0x30);
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&local_34.pitch);
        fVar6 = 1.0 / in_stack_0000002c;
        unaff_EBX = local_34.roll * fVar6;
        if ((float *)(iVar8 + 0x1c) != (float *)&stack0xfffffff8) {
          *(float *)(iVar8 + 0x1c) = local_34.yaw * fVar6;
          *(float *)(iVar8 + 0x20) = unaff_EBX;
          *(float *)(iVar8 + 0x24) = local_34.slew_rate * fVar6;
        }
        if ((float *)(iVar8 + 0x28) != &local_18) {
          *(float *)(iVar8 + 0x28) = local_18;
          *(uint *)(iVar8 + 0x2c) = uStack_14;
          *(int *)(iVar8 + 0x30) = unaff_EBP;
        }
      }
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar4 != 0)) {
        iVar4 = *(int *)(param_5 + 0x3ce8c) + -1;
        *(int *)(param_5 + 0x3ce8c) = iVar4;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(in_stack_0000006c * 0xac + in_stack_00000050),
                   (void *)((in_stack_0000006c + 1) * 0xac + in_stack_00000050),
                   (iVar4 - in_stack_0000006c) * 0xac);
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
    if (iStack00000104 < 0) {
      iStack00000104 = *(int *)(param_5 + 0x3ce8c) + -1;
    }
    if (*(int *)(param_5 + 0x3ce8c) <= iStack00000104) {
      iStack00000104 = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
  } while (iVar4 == 0);
  g_CDemonSetPtr->lighting_quality_mode = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
