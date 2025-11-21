// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
// Address: 005a8a60
// Address Range: [[005a8a60, 005a8a79]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042abb3 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c17a6 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 00506628 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a5b5 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_process_FUN_005b2fd0 (005b2fd0) at 005b3605 [UNCONDITIONAL_CALL]
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b21f1 [UNCONDITIONAL_CALL]
//   core_sound.cpp_processTrainSounds_FUN_005b2770 (005b2770) at 005b2a6f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bdcd4 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[52]

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(float volume)

{
  g_SfxOptions[g_SfxLastSlot].current_volume = volume;
  return;
}


// Assembly code:
// 005a8a60: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   XREF to: 03f624a4 (READ)
// 005a8a65: SHL EAX,0x4
// 005a8a68: MOV EDX,EAX
// 005a8a6a: SHL EAX,0x3
// 005a8a6d: SUB EAX,EDX
// 005a8a6f: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8a73: MOV dword ptr [EAX + 0x3f624ec],EDX
//   XREF to: 03f624ec (DATA)
// 005a8a79: RET
