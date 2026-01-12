// Name: core_msnedit.cpp_FUN_0053eb40
// Address: 0053eb40
// Address Range: [[0053eb40, 0053ec72]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053eb40()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053eb40(byte param_1, uint param_2) */

void core_msnedit_cpp_FUN_0053eb40(void)

{
  int iVar1;
  float sfx_handle;
  BADSPACEBASE *in_ESP;
  double dVar2;
  char *in_stack_00000008;
  float progress_min;
  
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't start sound output.  (Maybe muted, or other problem?)");
  }
  else {
    core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,in_stack_00000008);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    progress_min = sfx_handle;
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)sfx_handle);
    if (iVar1 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Failed to play \"%s\"",in_stack_00000008);
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffebc,"Playing %s",in_stack_00000008);
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,&stack0xfffffebc);
      do {
        dVar2 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,(uint)progress_min);
        progress_min = (float)dVar2;
        if (progress_min < 0.0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,progress_min,1.0);
        iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
      } while (iVar1 == 0);
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    }
  }
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
