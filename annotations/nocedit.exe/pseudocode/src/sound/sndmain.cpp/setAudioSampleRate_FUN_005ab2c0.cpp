// Name: sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0
// Address: 005ab2c0
// Address Range: [[005ab2c0, 005ab2d9]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512b6c [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250
//   sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate)

{
  int bits_per_sample;
  int unaff_retaddr;
  
  sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
  bits_per_sample = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
  sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(bits_per_sample,unaff_retaddr,sample_rate);
  return;
}


// Assembly code:
// 005ab2c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0
//   XREF to: Stack[0x4] (READ)
// 005ab2c4: PUSH EDX
// 005ab2c5: CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   XREF to: 005ab270 (UNCONDITIONAL_CALL)
// 005ab2ca: PUSH EAX
// 005ab2cb: CALL sound_sndmain.cpp_getAudioBitDepth_FUN_005ab250
//   XREF to: 005ab250 (UNCONDITIONAL_CALL)
// 005ab2d0: PUSH EAX
// 005ab2d1: CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   XREF to: 005ab170 (UNCONDITIONAL_CALL)
// 005ab2d6: ADD ESP,0xc
// 005ab2d9: RET
