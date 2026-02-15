// Name: core_setedit.cpp_CDemonSet_FUN_0057ae50
// Address: 0057ae50
// Address Range: [[0057ae50, 0057b402]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_FUN_0057ae50(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_FUN_0057ae50(CDemonSet *this_ptr)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar4;
  int unaff_EDI;
  char *pcVar5;
  double dVar6;
  int unaff_retaddr;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  CDemonLight *this_ptr_00;
  CDemonLight *intensity;
  char acStack_80 [16];
  char acStack_70 [24];
  char acStack_58 [16];
  char acStack_48 [40];
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
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,0);
  pvVar2 = PTR_DAT_00681ab8;
  this_ptr->actor_count = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060(pvVar2);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pvVar2 = PTR_DAT_00681ab8;
  if (PTR_DAT_00681ab8 != (uint *)(in_stack_00000008 + 0x104)) {
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
  pcVar5 = acStack_80;
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
    core_set_cpp_CDemonSet_FUN_0056b7e0(this_ptr,0,0,0xf0);
  }
LAB_0057af67:
  if (0x1df < g_WindowHeight) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
  }
  (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
  core_slew_cpp_CSlew_processInput_FUN_005a20b0(PTR_DAT_00681ab8);
  if (unaff_EBP != 0) {
    if (PTR_DAT_00681ab8 != &g_CDemonLightInstance.base.base.position) {
      g_CDemonLightInstance.base.base.position.x = *(int *)PTR_DAT_00681ab8;
      g_CDemonLightInstance.base.base.position.z = *(int *)((int)PTR_DAT_00681ab8 + 8);
      g_CDemonLightInstance.base.base.position.y = *(int *)((int)PTR_DAT_00681ab8 + 4);
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
               (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc));
    g_CDemonLightInstance.base.base.projection_scale = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
    intensity = &g_CDemonLightInstance;
    this_ptr_00 = (CDemonLight *)0x57b009;
    dVar6 = round
                      ((double)(*(float *)(in_stack_00000008 + 0x120) * (float)65536));
    g_CDemonLightInstance.transform_scale_factor = (int)ROUND(dVar6);
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(this_ptr_00,(float)intensity);
    g_CDemonLightInstance.base.max_distance = 255.0;
    g_CDemonLightInstance.light_enabled_flag = 1;
    core_set_cpp_CDemonSet_FUN_0056c1a0(this_ptr);
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2e);
    if (iVar3 != 0) {
      unaff_ESI = unaff_ESI + 1;
      if (this_ptr->camera_count <= unaff_ESI) {
        unaff_ESI = 0;
      }
      core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,unaff_ESI);
    }
  }
  if ((unaff_EDI == 0) || (0xf0 < g_WindowHeight)) {
    core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
              (&g_CDemonLightInstance,0x180,0,0x100);
  }
  iVar3 = core_setedit_cpp_CDemonSet_FUN_00577af0(this_ptr);
  if (iVar3 != -1) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar3);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x32);
  if ((iVar3 != 0) && (unaff_EBX = 1 - unaff_EBX, unaff_EBX != 0)) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,unaff_retaddr);
  }
  engine_2d_c_drawText_FUN_00401fd0("Position light.  Press SPACE when done",0,0);
  engine_2d_c_drawText_FUN_00401fd0(acStack_70,0,0xb);
  _sprintf
            (&stack0xfffffe90,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe90,0,g_WindowHeight + -0xb);
  _sprintf
            (&stack0xfffffe90,"pos: %4.1f %4.1f %4.1f   pbh: %3.1f %3.1f %6.3f   fov : %2.1f",(double)*(float *)PTR_DAT_00681ab8
             ,(double)*(float *)((int)PTR_DAT_00681ab8 + 4),
             (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
             180 * (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc) * 0.31830988619288902,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x14) * 0.31830988619288902 * 180,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x10) * 0.31830988619288902 * 180,
             (double)*(float *)((int)PTR_DAT_00681ab8 + 0x18));
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe90,0,0x16);
  wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
  if (iVar3 != 0) goto LAB_0057b3c9;
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x39);
  if ((iVar3 != 0) ||
     (iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c), iVar3 != 0)) {
    pvVar2 = PTR_DAT_00681ab8;
    if (g_ActiveLightCount != 0x5f) goto LAB_0057b341;
    engine_2d_c_drawText_FUN_00401fd0("Too many visible lights in view!",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x21);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
              (g_CEditorToolsPtr,"Edit FOV",(float *)((int)PTR_DAT_00681ab8 + 0x18),1,0.0,
               100.0,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
              (g_CEditorToolsPtr,"Edit light name",acStack_48,100,1);
  }
  goto LAB_0057af67;
LAB_0057b341:
  if ((uint *)(in_stack_00000008 + 0x104) != PTR_DAT_00681ab8) {
    *(uint *)(in_stack_00000008 + 0x104) = *(uint *)PTR_DAT_00681ab8;
    *(uint *)(in_stack_00000008 + 0x108) = *(uint *)((int)pvVar2 + 4);
    *(uint *)(in_stack_00000008 + 0x10c) = *(uint *)((int)pvVar2 + 8);
  }
  pvVar2 = PTR_DAT_00681ab8;
  if ((uint *)(in_stack_00000008 + 0x110) != (uint *)((int)PTR_DAT_00681ab8 + 0xc)) {
    *(uint *)(in_stack_00000008 + 0x110) = *(uint *)((int)PTR_DAT_00681ab8 + 0xc);
    *(uint *)(in_stack_00000008 + 0x114) = *(uint *)((int)pvVar2 + 0x10);
    *(uint *)(in_stack_00000008 + 0x118) = *(uint *)((int)pvVar2 + 0x14);
  }
  pcVar5 = acStack_58;
  in_stack_00000010 = 1;
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
  *(uint *)(in_stack_00000008 + 0x11e0) = in_stack_0000000c;
  return in_stack_00000010;
}
