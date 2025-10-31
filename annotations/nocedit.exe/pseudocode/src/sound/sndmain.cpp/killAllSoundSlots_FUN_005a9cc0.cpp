// Name: sound_sndmain.cpp_killAllSoundSlots_FUN_005a9cc0
// Address: 005a9cc0
// Address Range: [[005a9cc0, 005a9cec]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_killAllSoundSlots_FUN_005a9cc0(void)
// Cross-references:
//   sound_sndmain.cpp_LockFreeSampleAndUnlock_FUN_005aa660 (005aa660) at 005aa66c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_cleanup_FUN_005ab130 (005ab130) at 005ab130 [UNCONDITIONAL_CALL]
// Globals:
//   SfxSlot[64] g_SfxSlots
//   undefined4 g_SfxSlots[1].status
//   undefined4 g_SfxLastSlot
// Function calls:
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_killAllSoundSlots_FUN_005a9cc0(void)

{
  SfxSlot *slot;
  
  slot = g_SfxSlots;
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  do {
    sound_sndmain_cpp_SfxSlot_kill_FUN_005a7e60(slot);
    slot = slot + 1;
  } while (slot != (SfxSlot *)&g_SfxLastSlot);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}


// Assembly code:
// 005a9cc0: PUSH EBX
//   Label: sound_sndmain.cpp_killAllSoundSlots_FUN_005a9cc0
// 005a9cc1: PUSH ESI
// 005a9cc2: MOV EBX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a9cc7: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005a9ccc: LEA ESI,[EBX + 0x4a00]
//   XREF to: 03f624a4 (DATA)
// 005a9cd2: PUSH EBX
//   Label: LAB_005a9cd2
//   XREF to: 03f5daa4 (DATA)
//   XREF to: 03f5dbcc (DATA)
// 005a9cd3: CALL sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a9cd8: ADD EBX,0x128
// 005a9cde: ADD ESP,0x4
// 005a9ce1: CMP EBX,ESI
// 005a9ce3: JNZ 0x005a9cd2
//   XREF to: 005a9cd2 (CONDITIONAL_JUMP)
// 005a9ce5: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9cea: POP ESI
// 005a9ceb: POP EBX
// 005a9cec: RET
