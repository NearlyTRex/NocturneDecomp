// Name: core_sound.cpp_CSound_FUN_005b39a0
// Address: 005b39a0
// Address Range: [[005b39a0, 005b39a9]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b39a0(CSound * this_ptr)
// Cross-references:
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512f13 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005132c0 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b38c0 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_FUN_005ab130
//   sound_sndmain.cpp_LockFreeSampleAndUnlock_FUN_005aa660

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_FUN_005b39a0(CSound *this_ptr)

{
  sound_sndmain_cpp_FUN_005ab130();
  sound_sndmain_cpp_LockFreeSampleAndUnlock_FUN_005aa660();
  return;
}


// Assembly code:
// 005b39a0: CALL sound_sndmain.cpp_FUN_005ab130
//   Label: core_sound.cpp_CSound_FUN_005b39a0
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 005b39a5: JMP 0x005aa660
//   XREF to: 005aa660 (UNCONDITIONAL_CALL)
