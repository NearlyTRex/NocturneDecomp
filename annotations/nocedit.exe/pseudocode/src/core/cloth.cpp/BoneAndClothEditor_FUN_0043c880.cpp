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
//   undefined4 g_CDeformableModelInstanceInstance.padding_0x0[8]
//   undefined4 g_CDeformableModelInstanceInstance.padding_0x0[8788]
//   undefined4 g_CDeformableModelInstanceInstance.padding_0x0[8792]
//   undefined4 g_CDeformableModelInstanceInstance.padding_0x0[8796]
//   undefined4 DAT_0083b10c
//   undefined4 DAT_0083b110
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_ActiveRenderColor
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field22_0x15ac80[0]
//   CSpotView g_CSpotViewInstance
// Function calls:
//   core_cloth.cpp_FUN_00439710
//   core_cloth.cpp_FUN_0043a2b0
//   core_cloth.cpp_FUN_0043ab80
//   core_cloth.cpp_FUN_0043b7e0
//   core_cloth.cpp_FUN_0043bae0
//   core_cloth.cpp_FUN_0043c6e0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052ddb0
//   core_motion.cpp_CMotionController_FUN_0052dde0
//   core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150
//   core_stairs.cpp_FUN_005b9620
//   core_stairs.cpp_FUN_005b9a20
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_BoneAndClothEditor(undefined4 param_1) */

void core_cloth_cpp_BoneAndClothEditor_FUN_0043c880
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5,
               int param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  CDemonSet *pCVar1;
  uchar uVar2;
  float fVar3;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  undefined3 extraout_var_00;
  char *string_data;
  int iVar6;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  char *unaff_EDI;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  CGame *in_stack_fffffaa8;
  CKeys *pCVar8;
  undefined4 uVar9;
  undefined8 in_stack_fffffac0;
  char *in_stack_fffffac8;
  CEditorTools *in_stack_fffffacc;
  char *in_stack_fffffad0;
  char acStack_19c [16];
  char acStack_18c [56];
  char acStack_154 [208];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char local_6c [4];
  CVector3i CStack_68;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  char *local_4c;
  int local_48;
  int local_44;
  int local_40;
  float *local_3c;
  float local_38;
  float local_34;
  undefined4 local_2c;
  int local_28;
  int local_24;
  float local_20;
  int iStack_1c;
  float local_18;
  uint uStack_14;
  
  local_2c = 1;
  local_40 = 1;
  local_54 = 1.4013e-45;
  local_50 = 1;
  local_4c = (char *)0x0;
  local_48 = 0;
  local_28 = 0;
  _DAT_00838e48 = 0;
  _DAT_00838e44 = 0;
  _DAT_00838e40 = 0;
  _DAT_00838e54 = 0;
  _DAT_00838e50 = 0;
  _DAT_00838e4c = 0;
  core_stairs_cpp_FUN_005b9620();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffaa8);
  core_motion_cpp_CMotionController_FUN_0052dde0();
  fVar3 = (float)core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  pCVar1 = g_CDemonSetPtr;
  pCVar1->field22_0x15ac80[0] = '\x01';
  pCVar1->field22_0x15ac80[1] = '\0';
  pCVar1->field22_0x15ac80[2] = '\0';
  pCVar1->field22_0x15ac80[3] = '\0';
  local_34 = fVar3;
  core_cloth_cpp_FUN_00439710();
  local_44 = param_5 + 0x3ce90;
  CStack_68.z = param_5 + 0x56d8;
  CStack_68.y = (int)fVar3 + 0x968;
  local_3c = (float *)(param_5 + 0x3fe48);
  local_38 = (float)CStack_68.z;
  do {
    fVar3 = g_CGamePtr->delta_time_float;
    local_58 = fVar3;
    local_24 = core_motion_cpp_CMotionController_FUN_0052dab0();
    if (local_4c == (char *)0x0) {
      local_6c[0] = g_CDeformableModelInstanceInstance.padding_0x0[8];
      local_6c[1] = g_CDeformableModelInstanceInstance.padding_0x0[9];
      local_6c[2] = g_CDeformableModelInstanceInstance.padding_0x0[10];
      local_6c[3] = g_CDeformableModelInstanceInstance.padding_0x0[0xb];
      for (local_18 = local_58 * *(float *)(local_24 + 0x20) +
                      (float)g_CDeformableModelInstanceInstance.padding_0x0._8_4_;
          local_20 = (float)*(int *)(local_24 + 100), local_20 < local_18;
          local_18 = local_18 - local_20) {
      }
      core_motion_cpp_CMotionController_FUN_0052ddb0();
    }
    if (local_40 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
    }
    else {
      core_skeleton_cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80();
    }
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
    *local_3c = *local_3c - (float)g_CDeformableModelInstanceInstance.padding_0x0._8788_4_;
    local_3c[1] = local_3c[1] - (float)g_CDeformableModelInstanceInstance.padding_0x0._8792_4_;
    local_3c[2] = local_3c[2] - (float)g_CDeformableModelInstanceInstance.padding_0x0._8796_4_;
    g_CDeformableModelInstanceInstance.padding_0x0[0x225c] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x225d] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x225e] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x225f] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x2258] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x2259] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x225a] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x225b] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x2254] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x2255] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x2256] = '\0';
    g_CDeformableModelInstanceInstance.padding_0x0[0x2257] = '\0';
    if (local_40 == 0) {
      core_cloth_cpp_FUN_0043ab80();
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(param_5 + 0x104)) {
        iVar6 = 0;
        pfVar5 = (float *)(CStack_68.z + 0xc0);
        do {
          piVar7 = (int *)(*(int *)(param_5 + 0x10c) + iVar6);
          iVar4 = iVar4 + 1;
          *piVar7 = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          piVar7[1] = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          piVar7[2] = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          pfVar5 = pfVar5 + 0x47;
          iVar6 = iVar6 + 0xc;
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
    (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,(int)fVar3);
    core_stairs_cpp_FUN_005b9a20();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&DAT_00838e40);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&DAT_00838e4c,(CVector3i *)0x0);
    if (local_48 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150();
    }
    if (local_4c != (char *)0x0) {
      core_cloth_cpp_FUN_0043bae0();
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3e);
    if (iVar4 != 0) {
      DAT_0083b10c = DAT_0083b10c + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0083b110,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_0083b110);
    }
    if (local_38 != 0.0) {
      uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      g_ActiveRenderColor = CONCAT31(extraout_var,uVar2);
      unaff_EDI = (char *)0x0;
      iVar4 = param_5;
      if (0 < *(int *)(param_5 + 0x3f028)) {
        do {
          pfVar5 = (float *)(*(int *)(iVar4 + 0x3f02c) * 0x11c + local_28);
          CStack_68.x = (int)ROUND(*pfVar5 * _DAT_0065bb3c);
          CStack_68.y = (int)ROUND(pfVar5[1] * _DAT_0065bb3c);
          CStack_68.z = (int)ROUND(pfVar5[2] * _DAT_0065bb3c);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&CStack_68);
          core_cloth_cpp_FUN_0043c6e0();
          unaff_EDI = unaff_EDI + 1;
          iVar4 = iVar4 + 4;
        } while ((int)unaff_EDI < *(int *)(param_5 + 0x3f028));
      }
    }
    if ((0 < iStack_1c) && (fVar3 = 0.0, 0 < *(int *)(param_5 + 0x3ce8c))) {
      do {
        if ((iStack_1c == 2) && (fVar3 == local_18)) {
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
        fVar3 = (float)((int)fVar3 + 1);
      } while ((int)fVar3 < *(int *)(param_5 + 0x3ce8c));
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_19c,"Model motion : %s frame %f",uStack_14,
               (double)(float)g_CDeformableModelInstanceInstance.padding_0x0._8_4_);
    engine_2d_c_drawText_FUN_00401fd0(acStack_19c,0,0);
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32);
    if (iVar4 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffac4);
      local_18 = -NAN;
      fVar3 = 0.0;
      string_data = local_4c;
      if (0 < *(int *)(iStack_1c + 0x964)) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffac4,string_data);
          if (string_data == unaff_EDI) {
            local_18 = fVar3;
          }
          fVar3 = (float)((int)fVar3 + 1);
          string_data = string_data + 0x54c;
        } while ((int)fVar3 < *(int *)(iStack_1c + 0x964));
      }
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffac4,"Select motion",(int)local_18,0);
      if (-1 < iVar4) {
        core_motion_cpp_CMotionController_FUN_0052dde0();
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffac4,0,(uint)in_stack_fffffac0,
                 (uint)((ulonglong)in_stack_fffffac0 >> 0x20),(uint)in_stack_fffffac8,
                 (uint)in_stack_fffffacc,(uint)in_stack_fffffad0);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar4 != 0) {
      core_stairs_cpp_FUN_005b9620();
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_18c,"%f",(double)(1.0 / (float)in_stack_fffffac8));
    engine_2d_c_drawTextRightAligned_FUN_004021c0
              (acStack_18c,g_WindowWidth + -2,g_WindowHeight + -0xd);
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
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,2);
    if ((iVar4 != 0) && (unaff_EBX = unaff_EBX + 1, 2 < unaff_EBX)) {
      unaff_EBX = 0;
    }
    in_stack_fffffac0 = CONCAT44(0x43ceb4,pCVar8);
    in_stack_fffffac8 = (char *)g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,3);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_0043c430();
      param_6 = *(int *)(param_5 + 0x3ce8c) + -1;
    }
    in_stack_fffffacc = (CEditorTools *)0x43cedf;
    in_stack_fffffad0 = (char *)g_CKeysPtr;
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x23);
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar4 != 0) {
      uStack_14 = (uint)(uStack_14 == 0);
    }
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f);
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x26);
    if (((in_stack_0000002c == 2) && (-1 < in_stack_00000030)) &&
       (in_stack_00000030 < *(int *)(param_5 + 0x3ce8c))) {
      engine_2d_c_drawText_FUN_00401fd0("Cylinder edit keys:",0,0x8f);
      uVar9 = (undefined4)in_stack_fffffac0;
      engine_2d_c_drawText_FUN_00401fd0("D. Delete cylinder",0,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("X. Adjust x radius",0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("Y. Adjust y radius",0,0xb0);
      engine_2d_c_drawText_FUN_00401fd0("O. Cylinder length override",0,0xbb);
      engine_2d_c_drawText_FUN_00401fd0("Use TAB/Shift-TAB to select cylinder",0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Use CTRL to slew cylinder",0,0xd1);
      iVar6 = in_stack_00000030 * 0xac + param_9;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_154,"Editing cylinder %d, on bone %s");
      engine_2d_c_drawText_FUN_00401fd0(acStack_154,0,g_WindowHeight + -0x16);
      iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
      if (iVar4 == 0) {
        core_stairs_cpp_FUN_005b9670();
      }
      else {
        core_skeleton_cpp_FUN_005a2060();
        fStack_5c = *(float *)(iVar6 + 0x1c) * _DAT_006188ba;
        local_58 = *(float *)(iVar6 + 0x20) * _DAT_006188ba;
        local_54 = _DAT_006188ba * *(float *)(iVar6 + 0x24);
        local_34 = 10.0;
        if (&fStack_84 != &fStack_5c) {
          fStack_84 = fStack_5c;
          fStack_80 = local_58;
          fStack_7c = local_54;
        }
        if (&uStack_78 != (undefined4 *)(iVar6 + 0x28)) {
          uStack_78 = *(undefined4 *)(iVar6 + 0x28);
          uStack_74 = *(undefined4 *)(iVar6 + 0x2c);
          uStack_70 = *(undefined4 *)(iVar6 + 0x30);
        }
        core_skeleton_cpp_FUN_005a20b0();
        CStack_68.z = (int)(1.0 / local_34);
        CStack_68.x = (int)(fStack_84 * (float)CStack_68.z);
        CStack_68.y = (int)(fStack_80 * (float)CStack_68.z);
        CStack_68.z = (int)(fStack_7c * (float)CStack_68.z);
        if ((CVector3i *)(iVar6 + 0x1c) != &CStack_68) {
          ((CVector3i *)(iVar6 + 0x1c))->x = CStack_68.x;
          *(int *)(iVar6 + 0x20) = CStack_68.y;
          *(int *)(iVar6 + 0x24) = CStack_68.z;
        }
        if ((undefined4 *)(iVar6 + 0x28) != &uStack_78) {
          *(undefined4 *)(iVar6 + 0x28) = uStack_78;
          *(undefined4 *)(iVar6 + 0x2c) = uStack_74;
          *(undefined4 *)(iVar6 + 0x30) = uStack_70;
        }
      }
      in_stack_fffffac0 = CONCAT44(0x43d213,uVar9);
      in_stack_fffffac8 = (char *)g_CKeysPtr;
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
      if ((iVar4 != 0) &&
         (iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                            (g_CEditorToolsPtr,"Delete this bone?"), iVar4 != 0)) {
        iVar4 = *(int *)(param_5 + 0x3ce8c) + -1;
        *(int *)(param_5 + 0x3ce8c) = iVar4;
        in_stack_fffffac8 = (char *)0x43d272;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)(param_6 * 0xac + uStack_14),(void *)((param_6 + 1) * 0xac + uStack_14),
                   (iVar4 - param_6) * 0xac);
      }
      in_stack_fffffacc = (CEditorTools *)0x43d282;
      in_stack_fffffad0 = (char *)g_CKeysPtr;
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2d);
      if (iVar4 != 0) {
        in_stack_fffffad0 = &DAT_00000001;
        in_stack_fffffacc = (CEditorTools *)(iVar6 + 0x14);
        in_stack_fffffac8 = "Enter X radius";
        in_stack_fffffac0 = CONCAT44(g_CEditorToolsPtr,0x43d2a9);
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter X radius",(float *)in_stack_fffffacc,true,0.0,
                   9999.0,true);
      }
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x15);
      if (iVar4 != 0) {
        in_stack_fffffad0 = "Enter Y radius";
        in_stack_fffffac8 = (char *)0x43d2e0;
        in_stack_fffffacc = g_CEditorToolsPtr;
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter Y radius",(float *)(iVar6 + 0x18),true,0.0,
                   9999.0,true);
      }
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x18);
      if (iVar4 != 0) {
        in_stack_fffffad0 = (char *)0x43d316;
        shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                  (g_CEditorToolsPtr,"Enter cylinder length, 0 to use length of bone",(float *)(iVar6 + 0x34),
                   true,0.0,9999.0,true);
      }
      core_skeleton_cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80();
      core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40();
      core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
      iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
      if (iVar4 != 0) {
        iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar4 == 0) {
          in_stack_00000030 = in_stack_00000030 + 1;
        }
        else {
          in_stack_00000030 = in_stack_00000030 + -1;
        }
      }
    }
    else {
      core_stairs_cpp_FUN_005b9670();
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2c);
    if (iVar4 != 0) {
      core_cloth_cpp_FUN_00439710();
    }
    if (in_stack_00000038 < 0) {
      in_stack_00000038 = *(int *)(param_5 + 0x3ce8c) + -1;
    }
    if (*(int *)(param_5 + 0x3ce8c) <= in_stack_00000038) {
      in_stack_00000038 = 0;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
  } while (iVar4 == 0);
  pCVar1 = g_CDemonSetPtr;
  pCVar1->field22_0x15ac80[0] = '\0';
  pCVar1->field22_0x15ac80[1] = '\0';
  pCVar1->field22_0x15ac80[2] = '\0';
  pCVar1->field22_0x15ac80[3] = '\0';
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
// 0043c8f5: CALL core_stairs.cpp_FUN_005b9620
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
// 0043c913: CALL core_motion.cpp_CMotionController_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 0043c918: ADD ESP,0xc
// 0043c91b: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c920: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
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
// 0043c9ae: CALL core_motion.cpp_CMotionController_FUN_0052dab0
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
// 0043c9df: CALL core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0043c9e4: ADD ESP,0x4
//   Label: LAB_0043c9e4
// 0043c9e7: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043c9ec: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
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
// 0043ca73: CALL core_stairs.cpp_FUN_005b9a20
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
// 0043cae4: CALL core_skeleton.cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150
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
// 0043d480: CALL core_motion.cpp_CMotionController_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 0043d485: ADD ESP,0xc
// 0043d488: JMP 0x0043c9cc
//   XREF to: 0043c9cc (UNCONDITIONAL_JUMP)
// 0043d48d: PUSH 0x838e58
//   Label: LAB_0043d48d
//   XREF to: 00838e58 (DATA)
// 0043d492: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
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
