// Name: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
// Address: 005a5d00
// Address Range: [[005a5d00, 005a5da1]]
// Convention: __cdecl
// Signature: CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
// Cross-references:
//   sound_sndmain.cpp_getSfxOptions_FUN_005a97e0 (005a97e0) at 005a97e8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 (005a9720) at 005a9732 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0 (005a96e0) at 005a96e7 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 (005a9660) at 005a968e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_killSfx_FUN_005a9c40 (005a9c40) at 005a9c47 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40 (005a9b40) at 005a9b48 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxFade_FUN_005a9c70 (005a9c70) at 005a9c7a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxIsActive_FUN_005a9c10 (005a9c10) at 005a9c17 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxPosition_FUN_005a9820 (005a9820) at 005a9828 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_005a9910 (005a9910) at 005a9918 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70 (005a9a70) at 005a9a78 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_005a98b0 (005a98b0) at 005a98b8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005a9a00 (005a9a00) at 005a9a08 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0 (005a9ba0) at 005a9bda [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxVelocity_FUN_005a9970 (005a9970) at 005a9978 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0 (005a9ae0) at 005a9ae8 [UNCONDITIONAL_CALL]
// Globals:
//   CSfxSlot[64] g_SfxSlots
//   undefined4 DAT_03f5db14
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 DAT_03f5db1c
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

CSfxSlot * __cdecl
sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle,int check_hardware_playback)

{
  int iVar1;
  uint uVar2;
  CSfxSlot *slot;
  uint uVar3;
  undefined4 uStack00000010;
  
  uVar3 = sfx_handle >> 6;
  uVar2 = sfx_handle & 0x3f;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && (uVar2 < 0x40)) {
    slot = g_SfxSlots + uVar2;
    if (uVar3 == g_SfxSlots[uVar2].playback_state) {
      if (check_hardware_playback != 0) {
        sound_sndmain_cpp_lockSound_FUN_005abd30();
        if ((uVar3 != g_SfxSlots[uVar2].playback_state) ||
           (g_SfxSlots[uVar2].sample == (CSfxSample *)0x0)) {
          sound_sndmain_cpp_unlockSound_FUN_005abdc0();
          return (CSfxSlot *)0x0;
        }
        if (g_SfxSlots[uVar2].hardware_buffer_handle != 0) {
          if ((g_CSoundDevicePtr != (CSoundDevice *)0x0) &&
             (iVar1 = (*g_CSoundDevicePtr->vtable->isSfxPlaying)(g_CSoundDevicePtr,slot), iVar1 != 0
             )) {
            return slot;
          }
          sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(slot);
          uStack00000010 = 0x5a5d9d;
          sound_sndmain_cpp_unlockSound_FUN_005abdc0();
          return (CSfxSlot *)0x0;
        }
      }
      return slot;
    }
  }
  return (CSfxSlot *)0x0;
}


// Assembly code:
// 005a5d00: PUSH EBX
//   Label: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
// 005a5d01: PUSH ESI
// 005a5d02: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a5d06: MOV EBX,ESI
// 005a5d08: SHR ESI,0x6
// 005a5d0b: AND EBX,0x3f
// 005a5d0e: CMP ESI,0x1
// 005a5d11: JL 0x005a5d4d
//   XREF to: 005a5d4d (CONDITIONAL_JUMP)
// 005a5d13: CMP ESI,0xffffff
// 005a5d19: JGE 0x005a5d4d
//   XREF to: 005a5d4d (CONDITIONAL_JUMP)
// 005a5d1b: TEST EBX,EBX
// 005a5d1d: JL 0x005a5d4d
//   XREF to: 005a5d4d (CONDITIONAL_JUMP)
// 005a5d1f: CMP EBX,0x40
// 005a5d22: JGE 0x005a5d4d
//   XREF to: 005a5d4d (CONDITIONAL_JUMP)
// 005a5d24: LEA EAX,[EBX*0x8 + 0x0]
// 005a5d2b: ADD EAX,EBX
// 005a5d2d: SHL EAX,0x2
// 005a5d30: ADD EAX,EBX
// 005a5d32: MOV EBX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a5d37: SHL EAX,0x3
// 005a5d3a: ADD EBX,EAX
// 005a5d3c: CMP ESI,dword ptr [EBX + 0x74]
//   XREF to: 03f5db18 (DATA)
// 005a5d3f: JNZ 0x005a5d4d
//   XREF to: 005a5d4d (CONDITIONAL_JUMP)
// 005a5d41: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[0x8] (READ)
// 005a5d46: JNZ 0x005a5d52
//   XREF to: 005a5d52 (CONDITIONAL_JUMP)
// 005a5d48: MOV EAX,EBX
//   Label: LAB_005a5d48
// 005a5d4a: POP ESI
// 005a5d4b: POP EBX
// 005a5d4c: RET
// 005a5d4d: XOR EAX,EAX
//   Label: LAB_005a5d4d
// 005a5d4f: POP ESI
// 005a5d50: POP EBX
// 005a5d51: RET
// 005a5d52: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   Label: LAB_005a5d52
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005a5d57: CMP ESI,dword ptr [EBX + 0x74]
//   XREF to: 03f5db18 (DATA)
// 005a5d5a: JNZ 0x005a5d85
//   XREF to: 005a5d85 (CONDITIONAL_JUMP)
// 005a5d5c: CMP dword ptr [EBX + 0x78],0x0
//   XREF to: 03f5db1c (DATA)
// 005a5d60: JZ 0x005a5d85
//   XREF to: 005a5d85 (CONDITIONAL_JUMP)
// 005a5d62: CMP dword ptr [EBX + 0x70],0x0
//   XREF to: 03f5db14 (DATA)
// 005a5d66: JZ 0x005a5d48
//   XREF to: 005a5d48 (CONDITIONAL_JUMP)
// 005a5d68: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a5d6e: TEST EDX,EDX
// 005a5d70: JZ 0x005a5d8f
//   XREF to: 005a5d8f (CONDITIONAL_JUMP)
// 005a5d72: PUSH EBX
// 005a5d73: MOV ESI,dword ptr [EDX]
// 005a5d75: PUSH EDX
// 005a5d76: CALL dword ptr [ESI + 0x50]
// 005a5d79: ADD ESP,0x8
// 005a5d7c: TEST EAX,EAX
// 005a5d7e: JZ 0x005a5d8f
//   XREF to: 005a5d8f (CONDITIONAL_JUMP)
// 005a5d80: MOV EAX,EBX
// 005a5d82: POP ESI
// 005a5d83: POP EBX
// 005a5d84: RET
// 005a5d85: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a5d85
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a5d8a: XOR EAX,EAX
// 005a5d8c: POP ESI
// 005a5d8d: POP EBX
// 005a5d8e: RET
// 005a5d8f: PUSH EBX
//   Label: LAB_005a5d8f
// 005a5d90: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a5d95: ADD ESP,0x4
// 005a5d98: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a5d9d: XOR EAX,EAX
// 005a5d9f: POP ESI
// 005a5da0: POP EBX
// 005a5da1: RET
