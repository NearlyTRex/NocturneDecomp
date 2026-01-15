// Name: core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680
// Address: 00537680
// Address Range: [[00537680, 005379da]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_DementedMissionEditorSomething(uint param_1) */

void core_msnedit_cpp_DementedMissionEditorSomething_FUN_00537680(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int in_stack_00000004;
  char local_114 [256];
  int local_14;
  
  core_inivar_cpp_readIniData_FUN_004fbd90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_14 = in_stack_00000004 + 0x44;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented(R) Mission editor options menu",0,0);
    if (*(char *)(in_stack_00000004 + 0x44) == '\0') {
      pcVar4 = "No mission loaded";
      pcVar5 = local_114;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"Current mission: %s.msn",local_14);
    }
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,0x16);
    if (*(int *)(in_stack_00000004 + 0x30) == 0) {
      pcVar5 = "OFF";
    }
    else {
      pcVar5 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"1. Draw sky in dynamic views: %s",pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,0x2c);
    if (*(int *)(in_stack_00000004 + 0x34) == 0) {
      pcVar5 = "OFF";
    }
    else {
      pcVar5 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"2. Draw water in dynamic views: %s",pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,0x37);
    if (*(int *)(in_stack_00000004 + 0x38) == 0) {
      pcVar5 = "OFF";
    }
    else {
      pcVar5 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"3. Force full lighting in static view: %s",pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,0x42);
    if (g_DisableMouseHitOnBarrier == 0) {
      pcVar5 = "OFF";
    }
    else {
      pcVar5 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"4. Disable mouse selection of CBarriers: %s",pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,0x4d);
    if (g_DynamicRenderMode < 2) {
LAB_005377d8:
      pcVar5 = "5. Dynamic render mode: flat shade";
      g_DynamicRenderMode = 1;
    }
    else if (g_DynamicRenderMode < 3) {
      pcVar5 = "5. Dynamic render mode: multi-color";
    }
    else {
      if (g_DynamicRenderMode != 3) goto LAB_005377d8;
      pcVar5 = "5. Dynamic render mode: ground types";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,0x58);
    if (g_ConfirmNewActorNames == 0) {
      pcVar5 = "OFF";
    }
    else {
      pcVar5 = "ON";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"6. Confirm new actor names: %s",pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,99);
    uVar2 = *(uint *)(in_stack_00000004 + 0x40);
    if (uVar2 == 0) {
LAB_00537848:
      pcVar5 = "7. Show waypoint coverage: off";
      *(uint *)(in_stack_00000004 + 0x40) = 0;
    }
    else if (uVar2 < 2) {
      pcVar5 = "7. Show waypoint coverage: selected only";
    }
    else {
      if (uVar2 != 2) goto LAB_00537848;
      pcVar5 = "7. Show waypoint coverage: all";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(local_114,0,0x6e);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(iVar3) {
    case 0x31:
      *(uint *)(in_stack_00000004 + 0x30) = (uint)(*(int *)(in_stack_00000004 + 0x30) == 0);
      break;
    case 0x32:
      *(uint *)(in_stack_00000004 + 0x34) = (uint)(*(int *)(in_stack_00000004 + 0x34) == 0);
      break;
    case 0x33:
      *(uint *)(in_stack_00000004 + 0x38) = (uint)(*(int *)(in_stack_00000004 + 0x38) == 0);
      break;
    case 0x34:
      g_DisableMouseHitOnBarrier = (int)(g_DisableMouseHitOnBarrier == 0);
      break;
    case 0x35:
      g_DynamicRenderMode = g_DynamicRenderMode + 1;
      break;
    case 0x36:
      g_ConfirmNewActorNames = (int)(g_ConfirmNewActorNames == 0);
      break;
    case 0x37:
      *(int *)(in_stack_00000004 + 0x40) = *(int *)(in_stack_00000004 + 0x40) + 1;
    }
    if (iVar3 == 0x1b) {
      core_inivar_cpp_writeIniData_FUN_004fc510();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}
