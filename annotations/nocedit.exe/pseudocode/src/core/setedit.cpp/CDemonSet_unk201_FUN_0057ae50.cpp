// Name: core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
// Address: 0057ae50
// Address Range: [[0057ae50, 0057b402]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50()
// Cross-references:
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b465 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b500 (0057b500) at 0057b572 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b600 (0057b600) at 0057b85d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Position_light_Press_SPA_006476d7
//   TerminatedCString s_f_006476fe
//   TerminatedCString s_pos_4_1f_4_1f_4_1f_pbh_3_00647701
//   TerminatedCString s_Too_many_visible_lights__0064773f
//   TerminatedCString s_Edit_light_name_00647769
//   double DOUBLE_0064777d = 65536
//   double DOUBLE_00647785 = 0.318309886192889
//   double DOUBLE_0064778d = 180
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* PTR_DAT_00681ab8 = 03f48f84
//   CEditorTools g_CEditorToolsPtr
//   CDemonLight g_CDemonLightInstance
//   undefined4 g_CDemonLightInstance.base.base.position.x
//   undefined4 g_CDemonLightInstance.base.base.position.y
//   undefined4 g_CDemonLightInstance.base.base.position.z
//   undefined4 g_CDemonLightInstance.base.base.projection_scale
//   undefined4 g_CDemonLightInstance.base.max_distance
//   undefined4 g_CDemonLightInstance.light_enabled_flag
//   undefined4 g_CDemonLightInstance.transform_scale_factor
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   int g_ActiveLightCount
//   CSkeleton* g_SkeletonPoolEnd
//   undefined4 DAT_03f48f88
//   undefined4 DAT_03f48f8c
//   undefined4 DAT_03f48f90
//   undefined4 DAT_03f48f94
//   undefined4 DAT_03f48f98
//   undefined4 DAT_03f48f9c
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
//   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   core_set.cpp_CDemonSet_FUN_0056c1a0
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   core_setedit.cpp_CDemonSet_FUN_00577af0
//   core_skeleton.cpp_DoNothing_FUN_005a20a0
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_CDemonSet_unk201(undefined4 pSet, undefined4 param_2) */

undefined4
core_setedit_cpp_CDemonSet_unk201_FUN_0057ae50
          (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,CDemonSet *param_5
          ,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  int unaff_retaddr;
  CDemonLight *this_ptr;
  double in_stack_fffffe78;
  float intensity;
  char acStack_84 [24];
  char acStack_6c [24];
  char acStack_54 [16];
  char acStack_44 [36];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *(undefined4 *)(param_6 + 0x11e0);
  local_18 = 1;
  local_14 = 0;
  local_1c = 0;
  *(undefined4 *)(param_6 + 0x11e0) = 0;
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  g_CDemonLightInstance.base.max_distance = 255.0;
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(param_5,0);
  param_5->actor_list_ptr = (void *)0x0;
  core_skeleton_cpp_FUN_005a2060();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,SUB84(in_stack_fffffe78,0));
  pvVar2 = PTR_DAT_00681ab8;
  if ((undefined4 *)PTR_DAT_00681ab8 != (undefined4 *)(param_6 + 0x104)) {
    *(undefined4 *)PTR_DAT_00681ab8 = *(undefined4 *)(param_6 + 0x104);
    *(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)(param_6 + 0x108);
    *(undefined4 *)((int)pvVar2 + 8) = *(undefined4 *)(param_6 + 0x10c);
  }
  pvVar2 = PTR_DAT_00681ab8;
  if ((undefined4 *)((int)PTR_DAT_00681ab8 + 0xc) != (undefined4 *)(param_6 + 0x110)) {
    *(undefined4 *)((int)PTR_DAT_00681ab8 + 0xc) = *(undefined4 *)(param_6 + 0x110);
    *(undefined4 *)((int)pvVar2 + 0x10) = *(undefined4 *)(param_6 + 0x114);
    *(undefined4 *)((int)pvVar2 + 0x14) = *(undefined4 *)(param_6 + 0x118);
  }
  pcVar5 = acStack_84;
  pcVar4 = (char *)(param_6 + 4);
  *(undefined4 *)((int)PTR_DAT_00681ab8 + 0x18) = *(undefined4 *)(param_6 + 0x11c);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  if (0x1df < g_WindowHeight) {
    core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
  }
LAB_0057af67:
  iVar3 = SUB84(in_stack_fffffe78,0);
  if (0x1df < g_WindowHeight) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
  }
  (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,iVar3);
  core_skeleton_cpp_FUN_005a20b0();
  if (unaff_EBP != 0) {
    if ((CVector3i *)PTR_DAT_00681ab8 != &g_CDemonLightInstance.base.base.position) {
                    /* WARNING: Load size is inaccurate */
      g_CDemonLightInstance.base.base.position.x = *PTR_DAT_00681ab8;
      g_CDemonLightInstance.base.base.position.z = *(int *)((int)PTR_DAT_00681ab8 + 8);
      g_CDemonLightInstance.base.base.position.y = *(int *)((int)PTR_DAT_00681ab8 + 4);
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
               (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc));
    g_CDemonLightInstance.base.base.projection_scale = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
    fVar6 = (float10)*(float *)(param_6 + 0x120) * (float10)DOUBLE_0064777d;
    intensity = *(float *)(param_6 + 0x124);
    this_ptr = &g_CDemonLightInstance;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,param_6));
    g_CDemonLightInstance.transform_scale_factor = (int)ROUND(fVar6);
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(this_ptr,intensity);
    g_CDemonLightInstance.base.max_distance = 255.0;
    g_CDemonLightInstance.light_enabled_flag = 1;
    core_set_cpp_CDemonSet_FUN_0056c1a0(param_5);
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar3 != 0) {
      unaff_EBX = unaff_EBX + 1;
      if (param_5->camera_count <= unaff_EBX) {
        unaff_EBX = 0;
      }
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(param_5,unaff_EBX);
    }
  }
  if ((unaff_ESI == 0) || (0xf0 < g_WindowHeight)) {
    core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
              (&g_CDemonLightInstance,0x180,0,0x100);
  }
  iVar3 = core_setedit_cpp_CDemonSet_FUN_00577af0(param_5);
  if (iVar3 != -1) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(param_5,iVar3);
  }
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32);
  if ((iVar3 != 0) && (unaff_retaddr = 1 - unaff_retaddr, unaff_retaddr != 0)) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(param_5,(int)param_5);
  }
  engine_2d_c_drawText_FUN_00401fd0("Position light.  Press SPACE when done",0,0);
  engine_2d_c_drawText_FUN_00401fd0(acStack_6c,0,0xb);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffe94,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe94,0,g_WindowHeight + -0xb);
  in_stack_fffffe78 =
       (double)*(float *)((int)PTR_DAT_00681ab8 + 0x14) * DOUBLE_00647785 * DOUBLE_0064778d;
                    /* WARNING: Load size is inaccurate */
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffe94,"pos: %4.1f %4.1f %4.1f   pbh: %3.1f %3.1f %6.3f   fov : %2.1f",(double)*PTR_DAT_00681ab8,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 4),
             (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
             DOUBLE_0064778d * (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc) * DOUBLE_00647785,
             in_stack_fffffe78,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x10) * DOUBLE_00647785 * DOUBLE_0064778d,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x18));
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe94,0,0x16);
  wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
  if (iVar3 != 0) goto LAB_0057b3c9;
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x39);
  if ((iVar3 != 0) || (iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c), iVar3 != 0)) {
    pvVar2 = PTR_DAT_00681ab8;
    if (g_ActiveLightCount != 0x5f) goto LAB_0057b341;
    engine_2d_c_drawText_FUN_00401fd0("Too many visible lights in view!",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  }
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
              (g_CEditorToolsPtr,"Edit FOV",(float *)((int)PTR_DAT_00681ab8 + 0x18),true,
               0.0,100.0,true);
  }
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
              (g_CEditorToolsPtr,"Edit light name",acStack_44,100,1);
  }
  goto LAB_0057af67;
LAB_0057b341:
  if ((undefined4 *)(param_6 + 0x104) != (undefined4 *)PTR_DAT_00681ab8) {
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)(param_6 + 0x104) = *PTR_DAT_00681ab8;
    *(undefined4 *)(param_6 + 0x108) = *(undefined4 *)((int)pvVar2 + 4);
    *(undefined4 *)(param_6 + 0x10c) = *(undefined4 *)((int)pvVar2 + 8);
  }
  pvVar2 = PTR_DAT_00681ab8;
  if ((undefined4 *)(param_6 + 0x110) != (undefined4 *)((int)PTR_DAT_00681ab8 + 0xc)) {
    *(undefined4 *)(param_6 + 0x110) = *(undefined4 *)((int)PTR_DAT_00681ab8 + 0xc);
    *(undefined4 *)(param_6 + 0x114) = *(undefined4 *)((int)pvVar2 + 0x10);
    *(undefined4 *)(param_6 + 0x118) = *(undefined4 *)((int)pvVar2 + 0x14);
  }
  pcVar5 = acStack_54;
  param_9 = 1;
  pcVar4 = (char *)(param_6 + 4);
  *(undefined4 *)(param_6 + 0x11c) = *(undefined4 *)((int)PTR_DAT_00681ab8 + 0x18);
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
LAB_0057b3c9:
  core_skeleton_cpp_DoNothing_FUN_005a20a0();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonLightInstance.light_enabled_flag = 0;
  *(undefined4 *)(param_6 + 0x11e0) = param_8;
  return param_9;
}


// Assembly code:
// 0057ae50: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
// 0057ae51: PUSH ESI
// 0057ae52: PUSH EDI
// 0057ae53: PUSH EBP
// 0057ae54: MOV EBP,ESP
// 0057ae56: SUB ESP,0x178
// 0057ae5c: AND ESP,0xfffffff8
// 0057ae5f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057ae62: MOV EDX,0x1
// 0057ae67: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 0057ae6c: XOR ECX,ECX
// 0057ae6e: MOV EAX,dword ptr [EAX + 0x11e0]
// 0057ae74: MOV dword ptr [ESP + 0x174],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0057ae7b: MOV dword ptr [ESP + 0x16c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057ae82: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057ae85: MOV dword ptr [ESP + 0x178],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0057ae8c: MOV dword ptr [ESP + 0x170],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057ae93: MOV dword ptr [EAX + 0x11e0],0x0
// 0057ae9d: CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   XREF to: 004727c0 (UNCONDITIONAL_CALL)
// 0057aea2: ADD ESP,0x4
// 0057aea5: XOR EBX,EBX
// 0057aea7: PUSH EBX
// 0057aea8: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057aeab: MOV ESI,0x437f0000
// 0057aeb0: PUSH EDI
// 0057aeb1: MOV dword ptr [0x02d7ec30],ESI
//   XREF to: 02d7ec30 (WRITE)
// 0057aeb7: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0057aebc: ADD ESP,0x8
// 0057aebf: MOV EAX,[0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057aec4: PUSH EAX
//   XREF to: 03f48f84 (DATA)
// 0057aec5: MOV dword ptr [EDI + 0x14d154],EBX
// 0057aecb: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0057aed0: ADD ESP,0x4
// 0057aed3: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0057aed9: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 0057aeda: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0057aedf: ADD ESP,0x4
// 0057aee2: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057aee5: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057aeea: ADD EDX,0x104
// 0057aef0: CMP EAX,EDX
// 0057aef2: JNZ 0x0057b2e0
//   XREF to: 0057b2e0 (CONDITIONAL_JUMP)
// 0057aef8: MOV EDX,dword ptr [0x00681ab8]
//   Label: LAB_0057aef8
//   XREF to: 00681ab8 (READ)
// 0057aefe: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057af01: ADD EDX,0xc
// 0057af04: ADD EAX,0x110
// 0057af09: CMP EDX,EAX
// 0057af0b: JZ 0x0057af1d
//   XREF to: 0057af1d (CONDITIONAL_JUMP)
// 0057af0d: MOV ECX,dword ptr [EAX]
// 0057af0f: MOV dword ptr [EDX],ECX
//   XREF to: 03f48f90 (WRITE)
// 0057af11: MOV ECX,dword ptr [EAX + 0x4]
// 0057af14: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 03f48f94 (WRITE)
// 0057af17: MOV ECX,dword ptr [EAX + 0x8]
// 0057af1a: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 03f48f98 (WRITE)
// 0057af1d: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_0057af1d
//   XREF to: Stack[0x8] (READ)
// 0057af20: LEA EDI,[ESP + 0x104]
// 0057af27: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057af2c: FLD float ptr [EDX + 0x11c]
// 0057af32: LEA ESI,[EDX + 0x4]
// 0057af35: FSTP float ptr [EAX + 0x18]
//   XREF to: 03f48f9c (WRITE)
// 0057af38: PUSH EDI
// 0057af39: MOV AL,byte ptr [ESI]
//   Label: LAB_0057af39
// 0057af3b: MOV byte ptr [EDI],AL
// 0057af3d: CMP AL,0x0
// 0057af3f: JZ 0x0057af51
//   XREF to: 0057af51 (CONDITIONAL_JUMP)
// 0057af41: MOV AL,byte ptr [ESI + 0x1]
// 0057af44: ADD ESI,0x2
// 0057af47: MOV byte ptr [EDI + 0x1],AL
// 0057af4a: ADD EDI,0x2
// 0057af4d: CMP AL,0x0
// 0057af4f: JNZ 0x0057af39
//   XREF to: 0057af39 (CONDITIONAL_JUMP)
// 0057af51: POP EDI
//   Label: LAB_0057af51
// 0057af52: CMP dword ptr [0x00679398],0x1e0
//   XREF to: 00679398 (READ)
// 0057af5c: JGE 0x0057b2f5
//   XREF to: 0057b2f5 (CONDITIONAL_JUMP)
// 0057af62: MOV EDI,0x2d7eaf0
//   Label: LAB_0057af62
//   XREF to: 02d7eaf0 (DATA)
// 0057af67: CMP dword ptr [0x00679398],0x1e0
//   Label: LAB_0057af67
//   XREF to: 00679398 (READ)
// 0057af71: JL 0x0057af78
//   XREF to: 0057af78 (CONDITIONAL_JUMP)
// 0057af73: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0057af78: MOV EAX,[0x0067cf44]
//   Label: LAB_0057af78
//   XREF to: 0067cf44 (READ)
// 0057af7d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057af7e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057af80: CALL dword ptr [EDX + 0x8]
// 0057af83: ADD ESP,0x4
// 0057af86: MOV EAX,[0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057af8b: PUSH EAX
//   XREF to: 03f48f84 (DATA)
// 0057af8c: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0057af91: ADD ESP,0x4
// 0057af94: CMP dword ptr [ESP + 0x170],0x0
// 0057af9c: JZ 0x0057b081
//   XREF to: 0057b081 (CONDITIONAL_JUMP)
// 0057afa2: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057afa7: CMP EAX,0x2d7eaf4
//   XREF to: 02d7eaf4 (DATA)
// 0057afac: JZ 0x0057afc8
//   XREF to: 0057afc8 (CONDITIONAL_JUMP)
// 0057afae: FLD float ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057afb0: FLD float ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057afb3: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057afb6: MOV dword ptr [0x02d7eaf8],EDX
//   XREF to: 02d7eaf8 (WRITE)
// 0057afbc: FSTP float ptr [0x02d7eafc]
//   XREF to: 02d7eafc (WRITE)
// 0057afc2: FSTP float ptr [0x02d7eaf4]
//   XREF to: 02d7eaf4 (WRITE)
// 0057afc8: MOV EAX,[0x00681ab8]
//   Label: LAB_0057afc8
//   XREF to: 00681ab8 (READ)
// 0057afcd: ADD EAX,0xc
//   XREF to: 03f48f90 (PARAM)
// 0057afd0: PUSH EAX
//   XREF to: 03f48f90 (DATA)
// 0057afd1: PUSH 0x2d7eb00
//   XREF to: 02d7eb00 (DATA)
// 0057afd6: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0057afdb: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057afe0: ADD ESP,0x8
// 0057afe3: FLD float ptr [EAX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057afe6: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057afe9: FLD float ptr [EAX + 0x120]
// 0057afef: FMUL double ptr [0x0064777d]
//   XREF to: 0064777d (READ)
// 0057aff5: PUSH dword ptr [EAX + 0x124]
// 0057affb: FXCH
// 0057affd: FSTP float ptr [0x02d7eb28]
//   XREF to: 02d7eb28 (WRITE)
// 0057b003: PUSH EDI
//   XREF to: 02d7eaf0 (DATA)
// 0057b004: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0057b009: FISTP dword ptr [0x02d81a94]
//   XREF to: 02d81a94 (WRITE)
// 0057b00f: CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   XREF to: 004765e0 (UNCONDITIONAL_CALL)
// 0057b014: ADD ESP,0x8
// 0057b017: MOV EBX,0x437f0000
// 0057b01c: PUSH 0x0
// 0057b01e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057b021: MOV ECX,0x1
// 0057b026: PUSH ESI
// 0057b027: MOV dword ptr [0x02d7ec30],EBX
//   XREF to: 02d7ec30 (WRITE)
// 0057b02d: MOV dword ptr [0x02d807a4],ECX
//   XREF to: 02d807a4 (WRITE)
// 0057b033: CALL core_set.cpp_CDemonSet_FUN_0056c1a0
//   XREF to: 0056c1a0 (UNCONDITIONAL_CALL)
// 0057b038: ADD ESP,0x8
// 0057b03b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057b040: PUSH 0x2e
// 0057b042: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057b044: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057b045: CALL dword ptr [EDX + 0x4]
// 0057b048: ADD ESP,0x8
// 0057b04b: TEST EAX,EAX
// 0057b04d: JZ 0x0057b081
//   XREF to: 0057b081 (CONDITIONAL_JUMP)
// 0057b04f: MOV EDX,dword ptr [ESP + 0x174]
// 0057b056: INC EDX
// 0057b057: MOV EAX,dword ptr [ESI]
// 0057b059: MOV dword ptr [ESP + 0x174],EDX
// 0057b060: CMP EAX,EDX
// 0057b062: JG 0x0057b06d
//   XREF to: 0057b06d (CONDITIONAL_JUMP)
// 0057b064: XOR EBX,EBX
// 0057b066: MOV dword ptr [ESP + 0x174],EBX
// 0057b06d: MOV ESI,dword ptr [ESP + 0x174]
//   Label: LAB_0057b06d
// 0057b074: PUSH ESI
// 0057b075: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057b078: PUSH EAX
// 0057b079: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0057b07e: ADD ESP,0x8
// 0057b081: CMP dword ptr [ESP + 0x170],0x0
//   Label: LAB_0057b081
// 0057b089: JNZ 0x0057b30f
//   XREF to: 0057b30f (CONDITIONAL_JUMP)
// 0057b08f: PUSH 0x100
//   Label: LAB_0057b08f
// 0057b094: PUSH 0x0
// 0057b096: PUSH 0x180
// 0057b09b: PUSH EDI
//   XREF to: 02d7eaf0 (DATA)
// 0057b09c: CALL core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
//   XREF to: 00473390 (UNCONDITIONAL_CALL)
// 0057b0a1: ADD ESP,0x10
// 0057b0a4: PUSH 0x0
//   Label: LAB_0057b0a4
// 0057b0a6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057b0a9: PUSH EBX
// 0057b0aa: CALL core_setedit.cpp_CDemonSet_FUN_00577af0
//   XREF to: 00577af0 (UNCONDITIONAL_CALL)
// 0057b0af: ADD ESP,0x8
// 0057b0b2: CMP EAX,-0x1
// 0057b0b5: JZ 0x0057b0c1
//   XREF to: 0057b0c1 (CONDITIONAL_JUMP)
// 0057b0b7: PUSH EAX
// 0057b0b8: PUSH EBX
// 0057b0b9: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0057b0be: ADD ESP,0x8
// 0057b0c1: PUSH 0x32
//   Label: LAB_0057b0c1
// 0057b0c3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057b0c8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057b0c9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057b0cb: CALL dword ptr [EDX + 0x4]
// 0057b0ce: ADD ESP,0x8
// 0057b0d1: TEST EAX,EAX
// 0057b0d3: JZ 0x0057b100
//   XREF to: 0057b100 (CONDITIONAL_JUMP)
// 0057b0d5: MOV EAX,0x1
// 0057b0da: MOV EDX,dword ptr [ESP + 0x170]
// 0057b0e1: SUB EAX,EDX
// 0057b0e3: MOV dword ptr [ESP + 0x170],EAX
// 0057b0ea: JZ 0x0057b100
//   XREF to: 0057b100 (CONDITIONAL_JUMP)
// 0057b0ec: MOV EBX,dword ptr [ESP + 0x174]
// 0057b0f3: PUSH EBX
// 0057b0f4: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057b0f7: PUSH ESI
// 0057b0f8: CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
//   XREF to: 0056ae50 (UNCONDITIONAL_CALL)
// 0057b0fd: ADD ESP,0x8
// 0057b100: PUSH 0x0
//   Label: LAB_0057b100
// 0057b102: PUSH 0x0
// 0057b104: PUSH 0x6476d7
//   XREF to: 006476d7 (DATA)
// 0057b109: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057b10e: ADD ESP,0xc
// 0057b111: PUSH 0xb
// 0057b113: PUSH 0x0
// 0057b115: LEA EAX,[ESP + 0x10c]
// 0057b11c: PUSH EAX
// 0057b11d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057b122: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0057b127: ADD ESP,0xc
// 0057b12a: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0057b130: MOV dword ptr [ESP],EAX
// 0057b133: FLD float ptr [ESP]
// 0057b136: FLD1
// 0057b138: FDIVRP
// 0057b13a: SUB ESP,0x8
// 0057b13d: FSTP double ptr [ESP]
// 0057b140: PUSH 0x6476fe
//   XREF to: 006476fe (DATA)
// 0057b145: LEA EAX,[ESP + 0x10]
// 0057b149: PUSH EAX
// 0057b14a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057b14f: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057b154: ADD ESP,0x10
// 0057b157: SUB EAX,0xb
// 0057b15a: PUSH EAX
// 0057b15b: PUSH 0x0
// 0057b15d: LEA EAX,[ESP + 0xc]
// 0057b161: PUSH EAX
// 0057b162: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057b167: ADD ESP,0xc
// 0057b16a: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057b16f: SUB ESP,0x8
// 0057b172: FLD float ptr [EAX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057b175: FSTP double ptr [ESP]
// 0057b178: FLD double ptr [0x00647785]
//   XREF to: 00647785 (READ)
// 0057b17e: FLD float ptr [EAX + 0x10]
//   XREF to: 03f48f94 (READ)
// 0057b181: FMUL ST1
// 0057b183: FLD double ptr [0x0064778d]
//   XREF to: 0064778d (READ)
// 0057b189: FXCH
// 0057b18b: FMUL ST1
// 0057b18d: SUB ESP,0x8
// 0057b190: FSTP double ptr [ESP]
// 0057b193: FLD float ptr [EAX + 0x14]
//   XREF to: 03f48f98 (READ)
// 0057b196: FMUL ST2
// 0057b198: FMUL ST1
// 0057b19a: SUB ESP,0x8
// 0057b19d: FSTP double ptr [ESP]
// 0057b1a0: FLD float ptr [EAX + 0xc]
//   XREF to: 03f48f90 (READ)
// 0057b1a3: FMULP ST2
// 0057b1a5: FMULP
// 0057b1a7: SUB ESP,0x8
// 0057b1aa: FSTP double ptr [ESP]
// 0057b1ad: SUB ESP,0x8
// 0057b1b0: FLD float ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057b1b3: FSTP double ptr [ESP]
// 0057b1b6: SUB ESP,0x8
// 0057b1b9: FLD float ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057b1bc: FSTP double ptr [ESP]
// 0057b1bf: SUB ESP,0x8
// 0057b1c2: FLD float ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057b1c4: FSTP double ptr [ESP]
// 0057b1c7: PUSH 0x647701
//   XREF to: 00647701 (DATA)
// 0057b1cc: LEA EAX,[ESP + 0x40]
// 0057b1d0: PUSH EAX
// 0057b1d1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057b1d6: ADD ESP,0x40
// 0057b1d9: PUSH 0x16
// 0057b1db: PUSH 0x0
// 0057b1dd: LEA EAX,[ESP + 0xc]
// 0057b1e1: PUSH EAX
// 0057b1e2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057b1e7: ADD ESP,0xc
// 0057b1ea: CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
//   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)
// 0057b1ef: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0057b1f4: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0057b1f9: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 0057b1fa: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0057b1ff: ADD ESP,0x4
// 0057b202: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057b207: PUSH 0x1
// 0057b209: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057b20b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057b20c: CALL dword ptr [EDX]
// 0057b20e: ADD ESP,0x8
// 0057b211: TEST EAX,EAX
// 0057b213: JNZ 0x0057b3c9
//   XREF to: 0057b3c9 (CONDITIONAL_JUMP)
// 0057b219: PUSH 0x39
// 0057b21b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057b220: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057b221: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057b223: CALL dword ptr [EDX + 0x4]
// 0057b226: ADD ESP,0x8
// 0057b229: TEST EAX,EAX
// 0057b22b: JZ 0x0057b324
//   XREF to: 0057b324 (CONDITIONAL_JUMP)
// 0057b231: CMP dword ptr [0x03276f30],0x5f
//   Label: LAB_0057b231
//   XREF to: 03276f30 (READ)
// 0057b238: JNZ 0x0057b341
//   XREF to: 0057b341 (CONDITIONAL_JUMP)
// 0057b23e: PUSH 0x0
// 0057b240: PUSH 0x0
// 0057b242: PUSH 0x64773f
//   XREF to: 0064773f (DATA)
// 0057b247: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057b24c: ADD ESP,0xc
// 0057b24f: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0057b254: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0057b259: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 0057b25f: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 0057b260: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 0057b265: ADD ESP,0x4
// 0057b268: PUSH 0x21
//   Label: LAB_0057b268
// 0057b26a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057b26f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057b270: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057b272: CALL dword ptr [EDX + 0x4]
// 0057b275: ADD ESP,0x8
// 0057b278: TEST EAX,EAX
// 0057b27a: JZ 0x0057b2a4
//   XREF to: 0057b2a4 (CONDITIONAL_JUMP)
// 0057b27c: PUSH 0x1
// 0057b27e: PUSH 0x42c80000
// 0057b283: PUSH 0x0
// 0057b285: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057b28a: PUSH 0x1
// 0057b28c: ADD EAX,0x18
//   XREF to: 03f48f9c (PARAM)
// 0057b28f: PUSH EAX
//   XREF to: 03f48f9c (DATA)
// 0057b290: PUSH 0x647760
//   XREF to: 00647760 (DATA)
// 0057b295: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057b29b: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0057b29c: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057b2a1: ADD ESP,0x1c
// 0057b2a4: PUSH 0x31
//   Label: LAB_0057b2a4
// 0057b2a6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057b2ab: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057b2ac: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057b2ae: CALL dword ptr [EDX + 0x4]
// 0057b2b1: ADD ESP,0x8
// 0057b2b4: TEST EAX,EAX
// 0057b2b6: JZ 0x0057af67
//   XREF to: 0057af67 (CONDITIONAL_JUMP)
// 0057b2bc: PUSH 0x1
// 0057b2be: PUSH 0x64
// 0057b2c0: LEA EAX,[ESP + 0x10c]
// 0057b2c7: PUSH EAX
// 0057b2c8: PUSH 0x647769
//   XREF to: 00647769 (DATA)
// 0057b2cd: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057b2d2: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057b2d3: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0057b2d8: ADD ESP,0x14
// 0057b2db: JMP 0x0057af67
//   XREF to: 0057af67 (UNCONDITIONAL_JUMP)
// 0057b2e0: MOV ECX,dword ptr [EDX]
//   Label: LAB_0057b2e0
// 0057b2e2: MOV dword ptr [EAX],ECX
//   XREF to: 03f48f84 (WRITE)
// 0057b2e4: MOV ECX,dword ptr [EDX + 0x4]
// 0057b2e7: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 03f48f88 (WRITE)
// 0057b2ea: MOV ECX,dword ptr [EDX + 0x8]
// 0057b2ed: MOV dword ptr [EAX + 0x8],ECX
//   XREF to: 03f48f8c (WRITE)
// 0057b2f0: JMP 0x0057aef8
//   XREF to: 0057aef8 (UNCONDITIONAL_JUMP)
// 0057b2f5: PUSH 0xf0
//   Label: LAB_0057b2f5
// 0057b2fa: PUSH 0x0
// 0057b2fc: PUSH 0x0
// 0057b2fe: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057b301: PUSH EBX
// 0057b302: CALL core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)
// 0057b307: ADD ESP,0x10
// 0057b30a: JMP 0x0057af62
//   XREF to: 0057af62 (UNCONDITIONAL_JUMP)
// 0057b30f: CMP dword ptr [0x00679398],0xf0
//   Label: LAB_0057b30f
//   XREF to: 00679398 (READ)
// 0057b319: JG 0x0057b08f
//   XREF to: 0057b08f (CONDITIONAL_JUMP)
// 0057b31f: JMP 0x0057b0a4
//   XREF to: 0057b0a4 (UNCONDITIONAL_JUMP)
// 0057b324: PUSH 0x1c
//   Label: LAB_0057b324
// 0057b326: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057b32b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057b32c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057b32e: CALL dword ptr [EDX + 0x4]
// 0057b331: ADD ESP,0x8
// 0057b334: TEST EAX,EAX
// 0057b336: JNZ 0x0057b231
//   XREF to: 0057b231 (CONDITIONAL_JUMP)
// 0057b33c: JMP 0x0057b268
//   XREF to: 0057b268 (UNCONDITIONAL_JUMP)
// 0057b341: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0057b341
//   XREF to: Stack[0x8] (READ)
// 0057b344: MOV EDX,dword ptr [0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057b34a: ADD EAX,0x104
// 0057b34f: CMP EAX,EDX
// 0057b351: JZ 0x0057b363
//   XREF to: 0057b363 (CONDITIONAL_JUMP)
// 0057b353: MOV ECX,dword ptr [EDX]
//   XREF to: 03f48f84 (READ)
// 0057b355: MOV dword ptr [EAX],ECX
// 0057b357: MOV ECX,dword ptr [EDX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057b35a: MOV dword ptr [EAX + 0x4],ECX
// 0057b35d: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057b360: MOV dword ptr [EAX + 0x8],ECX
// 0057b363: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0057b363
//   XREF to: Stack[0x8] (READ)
// 0057b366: MOV EDX,dword ptr [0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057b36c: ADD EAX,0x110
// 0057b371: ADD EDX,0xc
// 0057b374: CMP EAX,EDX
// 0057b376: JZ 0x0057b388
//   XREF to: 0057b388 (CONDITIONAL_JUMP)
// 0057b378: MOV ECX,dword ptr [EDX]
//   XREF to: 03f48f90 (READ)
// 0057b37a: MOV dword ptr [EAX],ECX
// 0057b37c: MOV ECX,dword ptr [EDX + 0x4]
//   XREF to: 03f48f94 (READ)
// 0057b37f: MOV dword ptr [EAX + 0x4],ECX
// 0057b382: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 03f48f98 (READ)
// 0057b385: MOV dword ptr [EAX + 0x8],ECX
// 0057b388: MOV EAX,[0x00681ab8]
//   Label: LAB_0057b388
//   XREF to: 00681ab8 (READ)
// 0057b38d: LEA ESI,[ESP + 0x104]
// 0057b394: MOV ECX,0x1
// 0057b399: FLD float ptr [EAX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057b39c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057b39f: MOV dword ptr [ESP + 0x16c],ECX
// 0057b3a6: LEA EDI,[EAX + 0x4]
// 0057b3a9: FSTP float ptr [EAX + 0x11c]
// 0057b3af: PUSH EDI
// 0057b3b0: MOV AL,byte ptr [ESI]
//   Label: LAB_0057b3b0
// 0057b3b2: MOV byte ptr [EDI],AL
// 0057b3b4: CMP AL,0x0
// 0057b3b6: JZ 0x0057b3c8
//   XREF to: 0057b3c8 (CONDITIONAL_JUMP)
// 0057b3b8: MOV AL,byte ptr [ESI + 0x1]
// 0057b3bb: ADD ESI,0x2
// 0057b3be: MOV byte ptr [EDI + 0x1],AL
// 0057b3c1: ADD EDI,0x2
// 0057b3c4: CMP AL,0x0
// 0057b3c6: JNZ 0x0057b3b0
//   XREF to: 0057b3b0 (CONDITIONAL_JUMP)
// 0057b3c8: POP EDI
//   Label: LAB_0057b3c8
// 0057b3c9: MOV EDX,dword ptr [0x00681ab8]
//   Label: LAB_0057b3c9
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057b3cf: PUSH EDX
//   XREF to: 03f48f84 (DATA)
// 0057b3d0: CALL core_skeleton.cpp_DoNothing_FUN_005a20a0
//   XREF to: 005a20a0 (UNCONDITIONAL_CALL)
// 0057b3d5: ADD ESP,0x4
// 0057b3d8: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0057b3dd: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057b3e0: XOR ECX,ECX
// 0057b3e2: MOV EAX,dword ptr [ESP + 0x168]
// 0057b3e9: MOV dword ptr [0x02d807a4],ECX
//   XREF to: 02d807a4 (WRITE)
// 0057b3ef: MOV dword ptr [EDX + 0x11e0],EAX
// 0057b3f5: MOV EAX,dword ptr [ESP + 0x16c]
// 0057b3fc: MOV ESP,EBP
// 0057b3fe: POP EBP
// 0057b3ff: POP EDI
// 0057b400: POP ESI
// 0057b401: POP EBX
// 0057b402: RET
