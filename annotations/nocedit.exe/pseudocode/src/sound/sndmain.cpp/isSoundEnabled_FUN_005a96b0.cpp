// Name: sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
// Address: 005a96b0
// Address Range: [[005a96b0, 005a96b5]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0(void)
// Cross-references:
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd021 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00511f03 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 0051321d [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_configure_FUN_005b3830 (005b3830) at 005b38ae [UNCONDITIONAL_CALL]
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b1fdf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 (005aaef0) at 005aaf02 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac105 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac33f [UNCONDITIONAL_CALL]
// Globals:
//   int g_SoundEnabled

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0(void)

{
  return g_SoundEnabled;
}


// Assembly code:
// 005a96b0: MOV EAX,[0x03f69274]
//   Label: sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0
//   XREF to: 03f69274 (READ)
// 005a96b5: RET
