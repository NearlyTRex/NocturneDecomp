// Name: sound_sndwav.cpp_waveOutWrite_FUN_005b0cc0
// Address: 005b0cc0
// Address Range: [[005b0cc0, 005b0d6c]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_waveOutWrite_FUN_005b0cc0()
// Cross-references:
//   sound_sndwav.cpp_FUN_005b12e0 (005b12e0) at 005b1437 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_waveInStart_FUN_005b0e20 (005b0e20) at 005b0e8a [UNCONDITIONAL_CALL]
// Globals:
//   waveInAddBuffer* PTR_waveInAddBuffer_00611420 = 00211892
//   waveInPrepareHeader* PTR_waveInPrepareHeader_00611430 = 002118d4
//   TerminatedCString s_waveOutPrepareHeader_fai_00652408
//   TerminatedCString s_waveOutWrite_failed_00652425
//   undefined4 DAT_03f6adcc
//   undefined4 DAT_03f6ae20
//   undefined4 DAT_03f6aec0
//   undefined4 DAT_03f6af10
//   undefined4 DAT_03f6af14
//   undefined4 DAT_03f6af20
// Function calls:
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   waveInAddBuffer
//   waveInPrepareHeader

#include "nocturne.h"

undefined4 sound_sndwav_cpp_waveOutWrite_FUN_005b0cc0(void)

{
  MMRESULT MVar1;
  int in_stack_00000004;
  
  if (((&DAT_03f6aec0)[in_stack_00000004] == 0) || ((&DAT_03f6ae20)[in_stack_00000004] == 0)) {
    return 0;
  }
  *(int *)((&DAT_03f6ae20)[in_stack_00000004] + 4) =
       DAT_03f6af14 *
       ((int)((DAT_03f6af10 + (DAT_03f6af10 >> 0x1f) * -8) - (uint)((DAT_03f6af10 >> 0x1f) << 2 < 0)
             ) >> 3) * DAT_03f6af20;
  MVar1 = (*PTR_waveInPrepareHeader_00611430)
                    (DAT_03f6adcc,(LPWAVEHDR)(&DAT_03f6ae20)[in_stack_00000004],0x20);
  if (MVar1 != 0) {
    sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    return 0;
  }
  MVar1 = (*PTR_waveInAddBuffer_00611420)
                    (DAT_03f6adcc,(LPWAVEHDR)(&DAT_03f6ae20)[in_stack_00000004],0x20);
  if (MVar1 == 0) {
    return 1;
  }
  sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
  return 0;
}


// Assembly code:
// 005b0cc0: PUSH EBX
//   Label: sound_sndwav.cpp_waveOutWrite_FUN_005b0cc0
// 005b0cc1: PUSH EDI
// 005b0cc2: PUSH EBP
// 005b0cc3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005b0cc7: SHL EBX,0x2
// 005b0cca: CMP dword ptr [EBX + 0x3f6aec0],0x0
//   XREF to: 03f6aec0 (DATA)
// 005b0cd1: JZ 0x005b0cdd
//   XREF to: 005b0cdd (CONDITIONAL_JUMP)
// 005b0cd3: MOV ECX,dword ptr [EBX + 0x3f6ae20]
//   XREF to: 03f6ae20 (DATA)
// 005b0cd9: TEST ECX,ECX
// 005b0cdb: JNZ 0x005b0ce3
//   XREF to: 005b0ce3 (CONDITIONAL_JUMP)
// 005b0cdd: XOR EAX,EAX
//   Label: LAB_005b0cdd
// 005b0cdf: POP EBP
// 005b0ce0: POP EDI
// 005b0ce1: POP EBX
// 005b0ce2: RET
// 005b0ce3: MOV EAX,[0x03f6af10]
//   Label: LAB_005b0ce3
//   XREF to: 03f6af10 (READ)
// 005b0ce8: MOV EDX,EAX
// 005b0cea: SAR EDX,0x1f
// 005b0ced: SHL EDX,0x3
// 005b0cf0: SBB EAX,EDX
// 005b0cf2: SAR EAX,0x3
// 005b0cf5: IMUL EAX,dword ptr [0x03f6af20]
//   XREF to: 03f6af20 (READ)
// 005b0cfc: MOV EDX,dword ptr [0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b0d02: IMUL EDX,EAX
// 005b0d05: MOV dword ptr [ECX + 0x4],EDX
// 005b0d08: PUSH 0x20
// 005b0d0a: MOV EDI,dword ptr [EBX + 0x3f6ae20]
//   XREF to: 03f6ae20 (DATA)
// 005b0d10: PUSH EDI
// 005b0d11: MOV EBP,dword ptr [0x03f6adcc]
//   XREF to: 03f6adcc (READ)
// 005b0d17: PUSH EBP
// 005b0d18: CALL dword ptr CS:[0x611430]
//   XREF to: EXTERNAL:0000001a (COMPUTED_CALL)
//   XREF to: 00611430 (READ)
// 005b0d1f: TEST EAX,EAX
// 005b0d21: JNZ 0x005b0d47
//   XREF to: 005b0d47 (CONDITIONAL_JUMP)
// 005b0d23: PUSH 0x20
// 005b0d25: MOV EAX,dword ptr [EBX + 0x3f6ae20]
//   XREF to: 03f6ae20 (DATA)
// 005b0d2b: PUSH EAX
// 005b0d2c: MOV EDX,dword ptr [0x03f6adcc]
//   XREF to: 03f6adcc (READ)
// 005b0d32: PUSH EDX
// 005b0d33: CALL dword ptr CS:[0x611420]
//   XREF to: EXTERNAL:00000016 (COMPUTED_CALL)
//   XREF to: 00611420 (READ)
// 005b0d3a: TEST EAX,EAX
// 005b0d3c: JNZ 0x005b0d5a
//   XREF to: 005b0d5a (CONDITIONAL_JUMP)
// 005b0d3e: MOV EAX,0x1
// 005b0d43: POP EBP
// 005b0d44: POP EDI
// 005b0d45: POP EBX
// 005b0d46: RET
// 005b0d47: PUSH 0x652408
//   Label: LAB_005b0d47
//   XREF to: 00652408 (DATA)
// 005b0d4c: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0d51: ADD ESP,0x4
// 005b0d54: XOR EAX,EAX
// 005b0d56: POP EBP
// 005b0d57: POP EDI
// 005b0d58: POP EBX
// 005b0d59: RET
// 005b0d5a: PUSH 0x652425
//   Label: LAB_005b0d5a
//   XREF to: 00652425 (DATA)
// 005b0d5f: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0d64: ADD ESP,0x4
// 005b0d67: XOR EAX,EAX
// 005b0d69: POP EBP
// 005b0d6a: POP EDI
// 005b0d6b: POP EBX
// 005b0d6c: RET
