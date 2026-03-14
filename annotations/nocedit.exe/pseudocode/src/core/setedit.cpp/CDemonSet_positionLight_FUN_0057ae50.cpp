// Name: core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50
// Address: 0057ae50
// Address Range: [[0057ae50, 0057b402]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_positionLight_FUN_0057ae50(CDemonSet *this_ptr,C3DSLight *light)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_setedit_cpp_CDemonSet_positionLight_FUN_0057ae50(CDemonSet *this_ptr,C3DSLight *light)

{
  char cVar1;
  CSlew *pCVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_ESI;
  char *pcVar4;
  int unaff_EDI;
  char *pcVar5;
  int unaff_retaddr;
  float in_stack_0000000c;
  int in_stack_00000010;
  char acStack_84 [20];
  char acStack_70 [24];
  char acStack_58 [16];
  char acStack_48 [40];
  float local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_20 = light->on_time;
  local_18 = 1;
  local_14 = 0;
  local_1c = 0;
  light->on_time = 0.0;
  core_dlight_cpp_CDemonLight_init_FUN_004727c0(&g_CDemonLightInstance);
  g_CDemonLightInstance.base.max_distance = 255.0;
  core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,0);
  pCVar2 = g_CSlewPtr;
  this_ptr->actor_count = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060(pCVar2);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pCVar2 = g_CSlewPtr;
  if (g_CSlewPtr != (CSlew *)&light->pos) {
    (g_CSlewPtr->position).x = (light->pos).x;
    (pCVar2->position).y = (light->pos).y;
    (pCVar2->position).z = (light->pos).z;
  }
  pCVar2 = g_CSlewPtr;
  if ((CVector3f *)&g_CSlewPtr->pitch != &light->orient) {
    g_CSlewPtr->pitch = (light->orient).x;
    pCVar2->yaw = (light->orient).y;
    pCVar2->roll = (light->orient).z;
  }
  pcVar5 = acStack_84;
  pcVar4 = light->name;
  g_CSlewPtr->slew_rate = light->fov;
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
    core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(this_ptr,0,0,0xf0);
  }
LAB_0057af67:
  if (0x1df < g_WindowHeight) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
  }
  (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
  core_slew_cpp_CSlew_processInput_FUN_005a20b0(g_CSlewPtr);
  if (local_14 != 0) {
    if (g_CSlewPtr != (CSlew *)&g_CDemonLightInstance.base.base.position) {
      g_CDemonLightInstance.base.base.position.f.x = (g_CSlewPtr->position).x;
      g_CDemonLightInstance.base.base.position.f.z = (g_CSlewPtr->position).z;
      g_CDemonLightInstance.base.base.position.f.y = (g_CSlewPtr->position).y;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&g_CDemonLightInstance.base.base.rotation_matrix,(CVector3f *)&g_CSlewPtr->pitch);
    g_CDemonLightInstance.base.base.focal_length = g_CSlewPtr->slew_rate;
    g_CDemonLightInstance.transform_scale_factor =
         (int)ROUND(ROUND(light->aspect * (float)65536));
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
              (&g_CDemonLightInstance,light->intensity);
    g_CDemonLightInstance.base.max_distance = 255.0;
    g_CDemonLightInstance.light_enabled_flag = 1;
    core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(this_ptr,0);
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_C);
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
  iVar3 = core_setedit_cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0(this_ptr,(int *)0x0);
  if (iVar3 != -1) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar3);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M);
  if ((iVar3 != 0) && (unaff_EBX = 1 - unaff_EBX, unaff_EBX != 0)) {
    core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,unaff_retaddr);
  }
  engine_2d_c_drawText_FUN_00401fd0("Position light.  Press SPACE when done",0,0);
  engine_2d_c_drawText_FUN_00401fd0(acStack_70,0,0xb);
  _sprintf
            (&stack0xfffffe90,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe90,0,g_WindowHeight + -0xb);
  _sprintf
            (&stack0xfffffe90,"pos: %4.1f %4.1f %4.1f   pbh: %3.1f %3.1f %6.3f   fov : %2.1f",(double)(g_CSlewPtr->position).x,
             (double)(g_CSlewPtr->position).y,(double)(g_CSlewPtr->position).z,
             180 * (double)g_CSlewPtr->pitch * 0.31830988619288902,
             (double)g_CSlewPtr->roll * 0.31830988619288902 * 180,
             (double)g_CSlewPtr->yaw * 0.31830988619288902 * 180,
             (double)g_CSlewPtr->slew_rate);
  engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe90,0,0x16);
  wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
  if (iVar3 != 0) goto LAB_0057b3c9;
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_SPACE);
  if ((iVar3 != 0) ||
     (iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN), iVar3 != 0)) {
    pCVar2 = g_CSlewPtr;
    if (g_SpotLightCount != 0x5f) goto LAB_0057b341;
    engine_2d_c_drawText_FUN_00401fd0("Too many visible lights in view!",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
              (g_CEditorToolsPtr,"Edit FOV",&g_CSlewPtr->slew_rate,1,0.0,100.0,1);
  }
  iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
              (g_CEditorToolsPtr,"Edit light name",acStack_48,100,1);
  }
  goto LAB_0057af67;
LAB_0057b341:
  if ((CSlew *)&light->pos != g_CSlewPtr) {
    (light->pos).x = (g_CSlewPtr->position).x;
    (light->pos).y = (pCVar2->position).y;
    (light->pos).z = (pCVar2->position).z;
  }
  pCVar2 = g_CSlewPtr;
  if (&light->orient != (CVector3f *)&g_CSlewPtr->pitch) {
    (light->orient).x = g_CSlewPtr->pitch;
    (light->orient).y = pCVar2->yaw;
    (light->orient).z = pCVar2->roll;
  }
  pcVar5 = acStack_58;
  in_stack_00000010 = 1;
  pcVar4 = light->name;
  light->fov = g_CSlewPtr->slew_rate;
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
  core_slew_cpp_CSlew_free_FUN_005a20a0(g_CSlewPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  g_CDemonLightInstance.light_enabled_flag = 0;
  light->on_time = in_stack_0000000c;
  return in_stack_00000010;
}
