// Name: core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
// Address: 0057ae50
// Address Range: [[0057ae50, 0057b402]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_CDemonSet_unk201(uint pSet, uint param_2) */

uint core_setedit_cpp_CDemonSet_unk201_FUN_0057ae50(void)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000001c;
  int in_stack_00000044;
  int in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_000000c0;
  uint in_stack_000000c4;
  uint in_stack_000000c8;
  CGame *in_stack_fffffe8c;
  int in_stack_fffffe94;
  CDemonLight *this_ptr;
  float in_stack_fffffeb0;
  char acStack_f8 [8];
  char acStack_6c [76];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_20 = *(uint *)(in_stack_00000008 + 0x11e0);
  local_18 = 1;
  local_14 = 0;
  local_1c = 0;
  *(uint *)(in_stack_00000008 + 0x11e0) = 0;
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  g_CDemonLightInstance.base.max_distance = 255.0;
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,0);
  pvVar2 = PTR_DAT_00681ab8;
  in_stack_00000004->actor_list_ptr = (void *)0x0;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)pvVar2);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffe8c);
  pvVar2 = PTR_DAT_00681ab8;
  if ((uint *)PTR_DAT_00681ab8 != (uint *)(in_stack_00000008 + 0x104)) {
    *(uint *)PTR_DAT_00681ab8 = *(uint *)(in_stack_00000008 + 0x104);
    *(uint *)((int)pvVar2 + 4) = *(uint *)(in_stack_00000008 + 0x108);
    *(uint *)((int)pvVar2 + 8) = *(uint *)(in_stack_00000008 + 0x10c);
  }
  pvVar2 = PTR_DAT_00681ab8;
  if ((uint *)((int)PTR_DAT_00681ab8 + 0xc) != (uint *)(in_stack_00000008 + 0x110)) {
    *(uint *)((int)PTR_DAT_00681ab8 + 0xc) = *(uint *)(in_stack_00000008 + 0x110);
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)(in_stack_00000008 + 0x114);
    *(uint *)((int)pvVar2 + 0x14) = *(uint *)(in_stack_00000008 + 0x118);
  }
  pcVar5 = acStack_6c;
  pcVar4 = (char *)(in_stack_00000008 + 4);
  *(uint *)((int)PTR_DAT_00681ab8 + 0x18) = *(uint *)(in_stack_00000008 + 0x11c);
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
  if (0x1df < g_WindowHeight) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
  }
  (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,in_stack_fffffe94);
  core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)PTR_DAT_00681ab8);
  if (in_stack_0000001c != 0) {
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
    fVar6 = (float10)*(float *)(in_stack_00000008 + 0x120) * (float10)65536;
    this_ptr = *(CDemonLight **)(in_stack_00000008 + 0x124);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,in_stack_00000008));
    g_CDemonLightInstance.transform_scale_factor = (int)ROUND(fVar6);
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(this_ptr,in_stack_fffffeb0);
    g_CDemonLightInstance.base.max_distance = 255.0;
    g_CDemonLightInstance.light_enabled_flag = 1;
    core_set_cpp_CDemonSet_FUN_0056c1a0(in_stack_00000004);
    in_stack_fffffeb0 = 8.052926e-39;
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar3 != 0) {
      in_stack_00000044 = in_stack_00000044 + 1;
      if (in_stack_00000004->camera_count <= in_stack_00000044) {
        in_stack_00000044 = 0;
      }
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,in_stack_00000044);
    }
  }
  if ((in_stack_00000044 == 0) || (0xf0 < g_WindowHeight)) {
    core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
              (&g_CDemonLightInstance,0x180,0,0x100);
  }
  iVar3 = core_setedit_cpp_CDemonSet_FUN_00577af0(in_stack_00000004);
  if (iVar3 != -1) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,iVar3);
  }
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32);
  if ((iVar3 != 0) && (in_stack_00000060 = 1 - in_stack_00000060, in_stack_00000060 != 0)) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(in_stack_00000004,in_stack_00000064);
  }
  engine_2d_c_drawText_FUN_00401fd0("Position light.  Press SPACE when done",0,0);
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffffc,0,0xb);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xffffff00,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff04,0,g_WindowHeight + -0xb);
                    /* WARNING: Load size is inaccurate */
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_f8,"pos: %4.1f %4.1f %4.1f   pbh: %3.1f %3.1f %6.3f   fov : %2.1f",(double)*PTR_DAT_00681ab8,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 4),
             (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
             180 * (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc) * 0.31830988619288902,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x14) * 0.31830988619288902 * 180,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x10) * 0.31830988619288902 * 180,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x18));
  engine_2d_c_drawText_FUN_00401fd0(acStack_f8 + 4,0,0x16);
  acStack_f8[0] = -0x11;
  acStack_f8[1] = -0x4f;
  acStack_f8[2] = 'W';
  acStack_f8[3] = '\0';
  wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
  acStack_f8[4] = -0xc;
  acStack_f8[5] = -0x4f;
  acStack_f8[6] = 'W';
  acStack_f8[7] = '\0';
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  acStack_f8[4] = -1;
  acStack_f8[5] = -0x4f;
  acStack_f8[6] = 'W';
  acStack_f8[7] = '\0';
  core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
  acStack_f8[4] = '\x0e';
  acStack_f8[5] = -0x4e;
  acStack_f8[6] = 'W';
  acStack_f8[7] = '\0';
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
              (g_CEditorToolsPtr,"Edit light name",&stack0x00000084,100,1);
  }
  goto LAB_0057af67;
LAB_0057b341:
  if ((uint *)(in_stack_00000008 + 0x104) != (uint *)PTR_DAT_00681ab8) {
                    /* WARNING: Load size is inaccurate */
    *(uint *)(in_stack_00000008 + 0x104) = *PTR_DAT_00681ab8;
    *(uint *)(in_stack_00000008 + 0x108) = *(uint *)((int)pvVar2 + 4);
    *(uint *)(in_stack_00000008 + 0x10c) = *(uint *)((int)pvVar2 + 8);
  }
  pvVar2 = PTR_DAT_00681ab8;
  if ((uint *)(in_stack_00000008 + 0x110) != (uint *)((int)PTR_DAT_00681ab8 + 0xc)) {
    *(uint *)(in_stack_00000008 + 0x110) = *(uint *)((int)PTR_DAT_00681ab8 + 0xc);
    *(uint *)(in_stack_00000008 + 0x114) = *(uint *)((int)pvVar2 + 0x10);
    *(uint *)(in_stack_00000008 + 0x118) = *(uint *)((int)pvVar2 + 0x14);
  }
  pcVar5 = &stack0x00000058;
  in_stack_000000c0 = 1;
  pcVar4 = (char *)(in_stack_00000008 + 4);
  *(uint *)(in_stack_00000008 + 0x11c) = *(uint *)((int)PTR_DAT_00681ab8 + 0x18);
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
  core_slew_cpp_CSlew_free_FUN_005a20a0();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonLightInstance.light_enabled_flag = 0;
  *(uint *)(in_stack_00000008 + 0x11e0) = in_stack_000000c4;
  return in_stack_000000c8;
}
