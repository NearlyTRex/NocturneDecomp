// Name: sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0
// Address: 005a98b0
// Address Range: [[005a98b0, 005a990b]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7db0 (004c7db0) at 004c7e34 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8dd0 (004c8dd0) at 004c8e32 [UNCONDITIONAL_CALL]
// Globals:
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_YetAnother2ComputingDelayCall_FUN_005a98b0(void)

{
  CSfxSlot *this_ptr;
  undefined4 in_stack_0000000c;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).field5_0x14[0xc] = '\x01';
  (this_ptr->options).field5_0x14[0xd] = '\0';
  (this_ptr->options).field5_0x14[0xe] = '\0';
  (this_ptr->options).field5_0x14[0xf] = '\0';
  *(undefined4 *)((this_ptr->options).field5_0x14 + 8) = in_stack_0000000c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr);
  if ((this_ptr->dsound_buffer != (void *)0x0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a98b0: PUSH EBX
//   Label: sound_sndmain.cpp_YetAnother2ComputingDelayCall_FUN_005a98b0
// 005a98b1: PUSH 0x1
// 005a98b3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a98b7: PUSH EDX
// 005a98b8: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a98bd: MOV EBX,EAX
// 005a98bf: ADD ESP,0x8
// 005a98c2: TEST EAX,EAX
// 005a98c4: JNZ 0x005a98c8
//   XREF to: 005a98c8 (CONDITIONAL_JUMP)
// 005a98c6: POP EBX
// 005a98c7: RET
// 005a98c8: PUSH ESI
//   Label: LAB_005a98c8
// 005a98c9: PUSH 0x0
// 005a98cb: MOV dword ptr [EAX + 0x20],0x1
// 005a98d2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a98d6: PUSH EBX
// 005a98d7: MOV dword ptr [EBX + 0x1c],EAX
// 005a98da: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a98df: MOV ECX,dword ptr [EBX + 0x70]
// 005a98e2: ADD ESP,0x8
// 005a98e5: TEST ECX,ECX
// 005a98e7: JZ 0x005a98ff
//   XREF to: 005a98ff (CONDITIONAL_JUMP)
// 005a98e9: MOV ESI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a98ef: TEST ESI,ESI
// 005a98f1: JZ 0x005a98ff
//   XREF to: 005a98ff (CONDITIONAL_JUMP)
// 005a98f3: PUSH 0x2
// 005a98f5: PUSH EBX
// 005a98f6: MOV EDX,dword ptr [ESI]
// 005a98f8: PUSH ESI
// 005a98f9: CALL dword ptr [EDX + 0x40]
// 005a98fc: ADD ESP,0xc
// 005a98ff: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a98ff
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9904: MOV EAX,0x1
// 005a9909: POP ESI
// 005a990a: POP EBX
// 005a990b: RET
