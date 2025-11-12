// Name: sound_sndmain.cpp_SoundDelayComputeThing_FUN_005a9a00
// Address: 005a9a00
// Address Range: [[005a9a00, 005a9a61]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_SoundDelayComputeThing_FUN_005a9a00()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7db0 (004c7db0) at 004c7e44 [UNCONDITIONAL_CALL]
// Globals:
//   CSound* g_CSoundPtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_SoundDelayComputeThing_FUN_005a9a00(void)

{
  CSfxSlot *this_ptr;
  undefined4 uVar1;
  undefined4 in_stack_00000008;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).field5_0x14[0x2c] = '\x01';
  (this_ptr->options).field5_0x14[0x2d] = '\0';
  (this_ptr->options).field5_0x14[0x2e] = '\0';
  (this_ptr->options).field5_0x14[0x2f] = '\0';
  uVar1 = 1;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x28) = in_stack_00000008;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr);
  if ((this_ptr->dsound_buffer != (void *)0x0) && (g_CSoundPtr != (CSound *)0x0)) {
    uVar1 = (*(code *)g_CSoundPtr->vtable[1].func2)();
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return uVar1;
}


// Assembly code:
// 005a9a00: PUSH EBX
//   Label: sound_sndmain.cpp_SoundDelayComputeThing_FUN_005a9a00
// 005a9a01: PUSH 0x1
// 005a9a03: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9a07: PUSH EDX
// 005a9a08: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9a0d: MOV EBX,EAX
// 005a9a0f: ADD ESP,0x8
// 005a9a12: TEST EAX,EAX
// 005a9a14: JNZ 0x005a9a18
//   XREF to: 005a9a18 (CONDITIONAL_JUMP)
// 005a9a16: POP EBX
// 005a9a17: RET
// 005a9a18: PUSH EDI
//   Label: LAB_005a9a18
// 005a9a19: PUSH ESI
// 005a9a1a: PUSH 0x0
// 005a9a1c: MOV dword ptr [EAX + 0x40],0x1
// 005a9a23: PUSH EBX
// 005a9a24: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005a9a28: MOV ESI,0x1
// 005a9a2d: MOV dword ptr [EBX + 0x3c],EAX
// 005a9a30: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a9a35: MOV ECX,dword ptr [EBX + 0x70]
// 005a9a38: ADD ESP,0x8
// 005a9a3b: TEST ECX,ECX
// 005a9a3d: JZ 0x005a9a57
//   XREF to: 005a9a57 (CONDITIONAL_JUMP)
// 005a9a3f: MOV EDI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9a45: TEST EDI,EDI
// 005a9a47: JZ 0x005a9a57
//   XREF to: 005a9a57 (CONDITIONAL_JUMP)
// 005a9a49: PUSH 0x4
// 005a9a4b: PUSH EBX
// 005a9a4c: MOV ESI,dword ptr [EDI]
// 005a9a4e: PUSH EDI
// 005a9a4f: CALL dword ptr [ESI + 0x40]
// 005a9a52: ADD ESP,0xc
// 005a9a55: MOV ESI,EAX
// 005a9a57: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a9a57
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9a5c: MOV EAX,ESI
// 005a9a5e: POP ESI
// 005a9a5f: POP EDI
// 005a9a60: POP EBX
// 005a9a61: RET
