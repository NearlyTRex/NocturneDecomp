// Name: sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0
// Address: 005a9ae0
// Address Range: [[005a9ae0, 005a9b3a]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042a9d5 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab6bc [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 00506541 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 0050641b [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a589 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b30b3 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b2ae1 [UNCONDITIONAL_CALL]
// Globals:
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_CallComputingDelay2(undefined4 param_1, undefined4
   param_2) */

undefined4 sound_sndmain_cpp_CallComputingDelay2_FUN_005a9ae0(void)

{
  CSfxSlot *this_ptr;
  undefined4 uVar1;
  undefined4 in_stack_0000000c;
  
  this_ptr = (CSfxSlot *)sound_sndmain_cpp_SoundLockKillAndUnlock_FUN_005a5d00();
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  uVar1 = 1;
  *(undefined4 *)((this_ptr->options).field5_0x14 + 0x30) = in_stack_0000000c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr);
  if ((this_ptr->dsound_buffer != (void *)0x0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    uVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return uVar1;
}


// Assembly code:
// 005a9ae0: PUSH EBX
//   Label: sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0
// 005a9ae1: PUSH 0x1
// 005a9ae3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9ae7: PUSH EDX
// 005a9ae8: CALL sound_sndmain.cpp_SoundLockKillAndUnlock_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9aed: MOV EBX,EAX
// 005a9aef: ADD ESP,0x8
// 005a9af2: TEST EAX,EAX
// 005a9af4: JNZ 0x005a9af8
//   XREF to: 005a9af8 (CONDITIONAL_JUMP)
// 005a9af6: POP EBX
// 005a9af7: RET
// 005a9af8: PUSH EDI
//   Label: LAB_005a9af8
// 005a9af9: PUSH ESI
// 005a9afa: PUSH 0x0
// 005a9afc: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a9b00: PUSH EBX
// 005a9b01: MOV ESI,0x1
// 005a9b06: MOV dword ptr [EBX + 0x44],EAX
// 005a9b09: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a9b0e: MOV ECX,dword ptr [EBX + 0x70]
// 005a9b11: ADD ESP,0x8
// 005a9b14: TEST ECX,ECX
// 005a9b16: JZ 0x005a9b30
//   XREF to: 005a9b30 (CONDITIONAL_JUMP)
// 005a9b18: MOV EDI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9b1e: TEST EDI,EDI
// 005a9b20: JZ 0x005a9b30
//   XREF to: 005a9b30 (CONDITIONAL_JUMP)
// 005a9b22: PUSH 0x8
// 005a9b24: PUSH EBX
// 005a9b25: MOV ESI,dword ptr [EDI]
// 005a9b27: PUSH EDI
// 005a9b28: CALL dword ptr [ESI + 0x40]
// 005a9b2b: ADD ESP,0xc
// 005a9b2e: MOV ESI,EAX
// 005a9b30: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a9b30
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9b35: MOV EAX,ESI
// 005a9b37: POP ESI
// 005a9b38: POP EDI
// 005a9b39: POP EBX
// 005a9b3a: RET
