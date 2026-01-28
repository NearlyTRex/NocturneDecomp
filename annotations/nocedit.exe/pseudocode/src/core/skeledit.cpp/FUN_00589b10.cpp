// Name: core_skeledit.cpp_FUN_00589b10
// Address: 00589b10
// Address Range: [[00589b10, 00589baf]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00589b10 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, int param_5)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589b10
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
  if (param_5 == 0) {
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(g_CEditorToolsPtr,(char *)0x0)
    ;
    shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
              (g_CEditorToolsPtr,"LOD generation complete!",unaff_EBX);
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = 0;
    do {
      iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      if (0 < iVar2 - iVar1) {
        iVar3 = iVar3 + (iVar2 - iVar1);
      }
      iVar1 = iVar2;
    } while (iVar3 < 0x360000);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"LOD generation complete!");
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  return;
}
