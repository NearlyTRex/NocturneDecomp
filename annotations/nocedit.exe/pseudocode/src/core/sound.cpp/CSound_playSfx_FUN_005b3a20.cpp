// Name: core_sound.cpp_CSound_playSfx_FUN_005b3a20
// Address: 005b3a20
// Address Range: [[005b3a20, 005b3a3c]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_playSfx_FUN_005b3a20(CSound * this_ptr, int n, char * sound_name)
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ac5e0 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df4a0 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd9d0 (004dd9d0) at 004dda6b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053eb7d [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 0056007a [UNCONDITIONAL_CALL]
//   core_sound.cpp_CallToCallToPlaySFX_FUN_005b39b0 (005b39b0) at 005b3a02 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2dd0 (005b2dd0) at 005b2ec5 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e7246 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eee9b [UNCONDITIONAL_CALL]
// Function calls:
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_playSfx_FUN_005b3a20(CSound *this_ptr,int n,char *sound_name)

{
  core_sound_cpp_PlaySfxByStringMaybe_FUN_005b1fd0();
  return;
}


// Assembly code:
// 005b3a20: PUSH 0x1
//   Label: core_sound.cpp_CSound_playSfx_FUN_005b3a20
// 005b3a22: PUSH 0x0
// 005b3a24: PUSH 0x0
// 005b3a26: PUSH 0x0
// 005b3a28: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b3a2c: PUSH 0x0
// 005b3a2e: PUSH EDX
// 005b3a2f: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005b3a33: PUSH ECX
// 005b3a34: CALL core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0
//   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)
// 005b3a39: ADD ESP,0x1c
// 005b3a3c: RET
