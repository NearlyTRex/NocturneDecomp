// Name: core_msnedit.cpp_CDemonMission_playSound_FUN_0053eb40
// Address: 0053eb40
// Address Range: [[0053eb40, 0053ec72]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_playSound_FUN_0053eb40(CDemonMission *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_playSound_FUN_0053eb40(CDemonMission *this_ptr,char *filename)

{
  int iVar1;
  uint sfx_handle;
  char local_144 [300];
  double local_18;
  
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't start sound output.  (Maybe muted, or other problem?)");
  }
  else {
    sfx_handle = core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,filename);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(sfx_handle);
    if (iVar1 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Failed to play \"%s\"",filename);
    }
    else {
      _sprintf(local_144,"Playing %s",filename);
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,local_144);
      do {
        local_18 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(sfx_handle,2);
        if ((float)local_18 < 0.0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)local_18,1.0);
        iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
      } while (iVar1 == 0);
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    }
  }
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
