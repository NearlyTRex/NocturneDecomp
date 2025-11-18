// Name: sound_sndmain.cpp_freeAllSamples_FUN_005aa660
// Address: 005aa660
// Address Range: [[005aa660, 005aa691]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_freeAllSamples_FUN_005aa660(void)
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b39a0 (005b39a0) at 005b39a5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 (005aaeb0) at 005aaed8 [UNCONDITIONAL_CALL]
// Globals:
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f629ac
//   CSfxSample* g_SfxSamplesEnd
// Function calls:
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_005aa660(void)

{
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  this_ptr = g_SfxSamples;
  sound_sndmain_cpp_killAllSfx_FUN_005a9cc0();
  do {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}


// Assembly code:
// 005aa660: PUSH EBX
//   Label: sound_sndmain.cpp_freeAllSamples_FUN_005aa660
// 005aa661: PUSH ESI
// 005aa662: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005aa667: MOV EBX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005aa66c: CALL sound_sndmain.cpp_killAllSfx_FUN_005a9cc0
//   XREF to: 005a9cc0 (UNCONDITIONAL_CALL)
// 005aa671: LEA ESI,[EBX + 0x6000]
//   XREF to: 03f6882c (DATA)
// 005aa677: PUSH EBX
//   Label: LAB_005aa677
//   XREF to: 03f6282c (DATA)
//   XREF to: 03f629ac (DATA)
// 005aa678: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005aa67d: ADD EBX,0x180
// 005aa683: ADD ESP,0x4
// 005aa686: CMP EBX,ESI
// 005aa688: JNZ 0x005aa677
//   XREF to: 005aa677 (CONDITIONAL_JUMP)
// 005aa68a: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005aa68f: POP ESI
// 005aa690: POP EBX
// 005aa691: RET
