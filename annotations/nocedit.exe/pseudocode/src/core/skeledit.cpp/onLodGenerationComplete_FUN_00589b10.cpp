// Name: core_skeledit.cpp_onLodGenerationComplete_FUN_00589b10
// Address: 00589b10
// Address Range: [[00589b10, 00589baf]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_onLodGenerationComplete_FUN_00589b10(int use_simple_message)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_onLodGenerationComplete_FUN_00589b10(int use_simple_message)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
  if (use_simple_message == 0) {
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(g_CEditorToolsPtr,(char *)0x0)
    ;
    shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
              (g_CEditorToolsPtr,"LOD generation complete!");
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
