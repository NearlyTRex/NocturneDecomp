// Name: core_sound.cpp_CSound_init_FUN_0052ddf0
// Address: 0052ddf0
// Address Range: [[0052ddf0, 0052df86]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_init_FUN_0052ddf0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_init_FUN_0052ddf0(CSound *this_ptr)

{
  int iVar1;
  float fVar2;
  
  g_FLOAT_02dc9468 = 0.0;
  g_FLOAT_02dc946c = 0.0;
  g_FLOAT_02dc9470 = 0.0;
  g_FLOAT_02dc945c = 1e+10;
  g_FLOAT_02dc9460 = 1e+10;
  g_FLOAT_02dc9464 = 1e+10;
  sound_sndmain_cpp_set3DListenerVelocity_FUN_005277b0(0.0,0.0,0.0);
  core_sound_cpp_updateListeners_FUN_0052c9d0();
  g_FLOAT_02dc946c = 0.0;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630
            (g_SoundReverb.volume,g_SoundReverb.decay_time,g_SoundReverb.damping);
  sound_sndmain_cpp_enableSoundSystem_FUN_00527e40();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar1 == 0) {
    return;
  }
  g_CurrentVolumeMultiplier = 1.0;
  g_TargetVolumeMultiplier = 1.0;
  g_VolumeFadeTimeRemaining = 0.0;
  iVar1 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
  if (iVar1 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_00527410(3,1);
    fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(3,fVar2 * g_CurrentVolumeMultiplier);
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(3);
  g_SoundAmbientSfxHandle =
       core_sound_cpp_CSound_playSound_FUN_0052ea40(this_ptr,g_CDemonSetPtr,g_SoundAmbientSoundName)
  ;
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  if (g_CDemonSetPtr->player_on_train != 0) {
    if ((uint *)&stack0x00000000 != &g_TrainRailNoiseHandle) {
      g_TrainVelocityVector.x = -(g_CDemonSetPtr->active_fog).scroll.x;
      g_TrainVelocityVector.y = -(g_CDemonSetPtr->active_fog).scroll.y;
      g_TrainVelocityVector.z = -(g_CDemonSetPtr->active_fog).scroll.z;
    }
    g_TrainLastCameraIndex = -1;
  }
  core_event_cpp_CEventList_restartSfxEntries_FUN_00480eb0(g_CEventListPtr);
  g_SoundAudioInitialized = 1;
  return;
}
