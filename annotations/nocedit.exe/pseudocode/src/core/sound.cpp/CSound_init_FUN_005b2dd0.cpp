// Name: core_sound.cpp_CSound_init_FUN_005b2dd0
// Address: 005b2dd0
// Address Range: [[005b2dd0, 005b2f66]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_init_FUN_005b2dd0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_init_FUN_005b2dd0(CSound *this_ptr)

{
  int iVar1;
  float fVar2;
  
  CVector3f_03f6af7c.x = 0.0;
  CVector3f_03f6af7c.y = 0.0;
  CVector3f_03f6af7c.z = 0.0;
  g_SoundListenerPrev.x = 1e+10;
  g_SoundListenerPrev.y = 1e+10;
  g_SoundListenerPrev.z = 1e+10;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_005aa1c0(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_005b1870();
  CVector3f_03f6af7c.y = 0.0;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_005ab6e0
            (g_SoundListenerOrient.x,g_SoundListenerOrient.y,g_SoundListenerOrient.z);
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 == 0) {
    return;
  }
  g_CurrentVolumeMultiplier = 1.0;
  g_TargetVolumeMultiplier = 1.0;
  g_VolumeFadeTimeRemaining = 0.0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar2 * g_CurrentVolumeMultiplier);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
  g_SoundAmbientSfxHandle =
       core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr,g_CDemonSetPtr,g_SoundAmbientSoundName)
  ;
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  if (g_CDemonSetPtr->player_on_train != 0) {
    if ((uint *)&stack0x00000000 != &g_TrainRailNoiseHandle) {
      g_TrainVelocityVector.x = -*(float *)(g_CDemonSetPtr->unk4 + 0xbbc0);
      g_TrainVelocityVector.y = -*(float *)(g_CDemonSetPtr->unk4 + 0xbbc4);
      g_TrainVelocityVector.z = -*(float *)(g_CDemonSetPtr->unk4 + 0xbbc8);
    }
    g_TrainLastCameraIndex = -1;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_004b0f00(g_CEventListPtr);
  g_SoundAudioInitialized = 1;
  return;
}
