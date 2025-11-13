// Name: sound_sndmain.cpp_CSfxSlot_FUN_005a80e0
// Address: 005a80e0
// Address Range: [[005a80e0, 005a8167]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSlot_FUN_005a80e0(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a67e4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9720 (005a9720) at 005a9750 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9f80 (005a9f80) at 005a9fba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Error_polling_hw_playbac_00650541
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSlot_FUN_005a80e0(CSfxSlot *this_ptr)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  if (((this_ptr->dsound_buffer != (void *)0x0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) &&
     (this_ptr->sample != (CSfxSample *)0x0)) {
    iVar1 = (*g_CSoundDevicePtr->vtable->getSfxPlaybackPos)(g_CSoundDevicePtr);
    if ((double)CONCAT44(extraout_EDX,iVar1) < 0.0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0
                ("Error polling hw playback pos %s\n",this_ptr->sample);
      return 0;
    }
    sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(this_ptr);
    return 1;
  }
  return 0;
}


// Assembly code:
// 005a80e0: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_FUN_005a80e0
// 005a80e1: PUSH EDI
// 005a80e2: PUSH EBP
// 005a80e3: MOV EBP,ESP
// 005a80e5: SUB ESP,0x10
// 005a80e8: AND ESP,0xfffffff8
// 005a80eb: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a80ee: CMP dword ptr [EBX + 0x70],0x0
// 005a80f2: JZ 0x005a8104
//   XREF to: 005a8104 (CONDITIONAL_JUMP)
// 005a80f4: MOV ECX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a80fa: TEST ECX,ECX
// 005a80fc: JZ 0x005a8104
//   XREF to: 005a8104 (CONDITIONAL_JUMP)
// 005a80fe: CMP dword ptr [EBX + 0x78],0x0
// 005a8102: JNZ 0x005a810c
//   XREF to: 005a810c (CONDITIONAL_JUMP)
// 005a8104: XOR EAX,EAX
//   Label: LAB_005a8104
// 005a8106: MOV ESP,EBP
// 005a8108: POP EBP
// 005a8109: POP EDI
// 005a810a: POP EBX
// 005a810b: RET
// 005a810c: PUSH EBX
//   Label: LAB_005a810c
// 005a810d: MOV EDX,dword ptr [ECX]
// 005a810f: PUSH ECX
// 005a8110: CALL dword ptr [EDX + 0x44]
// 005a8113: MOV dword ptr [ESP + 0x10],EAX
// 005a8117: MOV dword ptr [ESP + 0x14],EDX
// 005a811b: FLD double ptr [ESP + 0x10]
// 005a811f: ADD ESP,0x8
// 005a8122: FLDZ
// 005a8124: FXCH
// 005a8126: FSTP double ptr [ESP]
// 005a8129: FCOMP double ptr [ESP]
// 005a812c: FNSTSW AX
// 005a812e: SAHF
// 005a812f: JBE 0x005a814a
//   XREF to: 005a814a (CONDITIONAL_JUMP)
// 005a8131: MOV EDX,dword ptr [EBX + 0x78]
// 005a8134: PUSH EDX
// 005a8135: PUSH 0x650541
//   XREF to: 00650541 (DATA)
// 005a813a: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a813f: ADD ESP,0x8
// 005a8142: XOR EAX,EAX
// 005a8144: MOV ESP,EBP
// 005a8146: POP EBP
// 005a8147: POP EDI
// 005a8148: POP EBX
// 005a8149: RET
// 005a814a: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_005a814a
// 005a814e: PUSH EDI
// 005a814f: MOV EAX,dword ptr [ESP + 0x4]
// 005a8153: PUSH EAX
// 005a8154: PUSH EBX
// 005a8155: CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
//   XREF to: 005a8170 (UNCONDITIONAL_CALL)
// 005a815a: MOV EAX,0x1
// 005a815f: ADD ESP,0xc
// 005a8162: MOV ESP,EBP
// 005a8164: POP EBP
// 005a8165: POP EDI
// 005a8166: POP EBX
// 005a8167: RET
