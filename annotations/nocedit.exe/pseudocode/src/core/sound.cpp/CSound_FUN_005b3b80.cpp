// Name: core_sound.cpp_CSound_FUN_005b3b80
// Address: 005b3b80
// Address Range: [[005b3b80, 005b3b8d]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b3b80(CSound * this_ptr)
// Cross-references:
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421bb2 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 004446da [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444b40 (00444b40) at 00444b8e [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_FUN_0047f820 (0047f820) at 0047f863 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f47d [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9d8b [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cb9b0 (004cb9b0) at 004cba0c [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e696d [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054ce0e [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b3096 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_FUN_005a9660

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_FUN_005b3b80(CSound *this_ptr)

{
  sound_sndmain_cpp_FUN_005a9660();
  return;
}


// Assembly code:
// 005b3b80: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_sound.cpp_CSound_FUN_005b3b80
//   XREF to: Stack[0x8] (READ)
// 005b3b84: PUSH EDX
// 005b3b85: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005b3b8a: ADD ESP,0x4
// 005b3b8d: RET
