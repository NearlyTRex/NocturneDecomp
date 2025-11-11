// Name: sound_sndwav.cpp_waveInStart_FUN_005b0e20
// Address: 005b0e20
// Address Range: [[005b0e20, 005b0f01]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_waveInStart_FUN_005b0e20()
// Globals:
//   waveInStart* PTR_waveInStart_00611438 = 002118f8
//   TerminatedCString s_waveInStart_failed_0065244e
//   undefined4 DAT_03f6adcc
//   undefined4 DAT_03f6ae20
//   undefined4 DAT_03f6ae24
//   undefined4 DAT_03f6aec0
//   undefined4 DAT_03f6af10
//   undefined4 DAT_03f6af14
//   undefined4 DAT_03f6af20
//   undefined4 DAT_03f6af24
//   undefined4 DAT_03f6af38
//   undefined4 DAT_03f6af3c
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   sound_sndwav.cpp_waveOutWrite_FUN_005b0cc0
//   waveInStart

#include "nocturne.h"

undefined4 sound_sndwav_cpp_waveInStart_FUN_005b0e20(void)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  int *in_stack_00000004;
  
  iVar4 = 0;
  if (0 < DAT_03f6af24) {
    iVar3 = 0;
    do {
      crt_memory_c_memset_FUN_005fde40(*(void **)((int)&DAT_03f6ae20 + iVar3),0,0x20);
      **(undefined4 **)((int)&DAT_03f6ae20 + iVar3) = *(undefined4 *)((int)&DAT_03f6aec0 + iVar3);
      *(int *)(*(int *)((int)&DAT_03f6ae20 + iVar3) + 0xc) = iVar4;
      *(int *)(*(int *)((int)&DAT_03f6ae20 + iVar3) + 4) =
           ((int)((DAT_03f6af10 + (DAT_03f6af10 >> 0x1f) * -8) -
                 (uint)((DAT_03f6af10 >> 0x1f) << 2 < 0)) >> 3) * DAT_03f6af20 * DAT_03f6af14;
      iVar1 = sound_sndwav_cpp_waveOutWrite_FUN_005b0cc0();
      if (iVar1 == 0) {
        (**(code **)(*in_stack_00000004 + 8))();
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < DAT_03f6af24);
  }
  DAT_03f6af38 = DAT_03f6af24 + -1;
  DAT_03f6af3c = DAT_03f6af20;
  MVar2 = (*PTR_waveInStart_00611438)(DAT_03f6adcc);
  if (MVar2 == 0) {
    return 1;
  }
  sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
  (**(code **)(*in_stack_00000004 + 8))();
  return 0;
}


// Assembly code:
// 005b0e20: PUSH EBX
//   Label: sound_sndwav.cpp_waveInStart_FUN_005b0e20
// 005b0e21: PUSH ESI
// 005b0e22: PUSH EDI
// 005b0e23: PUSH EBP
// 005b0e24: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b0e28: MOV EDX,dword ptr [0x03f6af24]
//   XREF to: 03f6af24 (READ)
// 005b0e2e: XOR ESI,ESI
// 005b0e30: TEST EDX,EDX
// 005b0e32: JLE 0x005b0ea4
//   XREF to: 005b0ea4 (CONDITIONAL_JUMP)
// 005b0e34: XOR EBX,EBX
// 005b0e36: PUSH 0x20
//   Label: LAB_005b0e36
// 005b0e38: PUSH 0x0
// 005b0e3a: MOV EBP,dword ptr [EBX + 0x3f6ae20]
//   XREF to: 03f6ae20 (READ)
//   XREF to: 03f6ae24 (READ)
// 005b0e40: PUSH EBP
// 005b0e41: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005b0e46: MOV EDX,dword ptr [EBX + 0x3f6ae20]
//   XREF to: 03f6ae20 (READ)
// 005b0e4c: MOV EAX,dword ptr [EBX + 0x3f6aec0]
//   XREF to: 03f6aec0 (READ)
// 005b0e52: MOV dword ptr [EDX],EAX
// 005b0e54: MOV EAX,dword ptr [EBX + 0x3f6ae20]
//   XREF to: 03f6ae20 (READ)
// 005b0e5a: MOV dword ptr [EAX + 0xc],ESI
// 005b0e5d: MOV EAX,[0x03f6af10]
//   XREF to: 03f6af10 (READ)
// 005b0e62: MOV EDX,EAX
// 005b0e64: SAR EDX,0x1f
// 005b0e67: SHL EDX,0x3
// 005b0e6a: SBB EAX,EDX
// 005b0e6c: SAR EAX,0x3
// 005b0e6f: IMUL EAX,dword ptr [0x03f6af20]
//   XREF to: 03f6af20 (READ)
// 005b0e76: IMUL EAX,dword ptr [0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b0e7d: ADD ESP,0xc
// 005b0e80: MOV EDX,dword ptr [EBX + 0x3f6ae20]
//   XREF to: 03f6ae20 (READ)
// 005b0e86: PUSH ESI
// 005b0e87: MOV dword ptr [EDX + 0x4],EAX
// 005b0e8a: CALL sound_sndwav.cpp_waveOutWrite_FUN_005b0cc0
//   XREF to: 005b0cc0 (UNCONDITIONAL_CALL)
// 005b0e8f: ADD ESP,0x4
// 005b0e92: TEST EAX,EAX
// 005b0e94: JZ 0x005b0ed5
//   XREF to: 005b0ed5 (CONDITIONAL_JUMP)
// 005b0e96: MOV ECX,dword ptr [0x03f6af24]
//   XREF to: 03f6af24 (READ)
// 005b0e9c: INC ESI
// 005b0e9d: ADD EBX,0x4
// 005b0ea0: CMP ESI,ECX
// 005b0ea2: JL 0x005b0e36
//   XREF to: 005b0e36 (CONDITIONAL_JUMP)
// 005b0ea4: MOV EAX,[0x03f6af24]
//   Label: LAB_005b0ea4
//   XREF to: 03f6af24 (READ)
// 005b0ea9: DEC EAX
// 005b0eaa: MOV EBX,dword ptr [0x03f6adcc]
//   XREF to: 03f6adcc (READ)
// 005b0eb0: MOV [0x03f6af38],EAX
//   XREF to: 03f6af38 (WRITE)
// 005b0eb5: MOV EAX,[0x03f6af20]
//   XREF to: 03f6af20 (READ)
// 005b0eba: PUSH EBX
// 005b0ebb: MOV [0x03f6af3c],EAX
//   XREF to: 03f6af3c (WRITE)
// 005b0ec0: CALL dword ptr CS:[0x611438]
//   XREF to: EXTERNAL:0000001c (COMPUTED_CALL)
//   XREF to: 00611438 (READ)
// 005b0ec7: TEST EAX,EAX
// 005b0ec9: JNZ 0x005b0ee5
//   XREF to: 005b0ee5 (CONDITIONAL_JUMP)
// 005b0ecb: MOV EAX,0x1
// 005b0ed0: POP EBP
// 005b0ed1: POP EDI
// 005b0ed2: POP ESI
// 005b0ed3: POP EBX
// 005b0ed4: RET
// 005b0ed5: PUSH EDI
//   Label: LAB_005b0ed5
// 005b0ed6: MOV EAX,dword ptr [EDI]
// 005b0ed8: CALL dword ptr [EAX + 0x8]
// 005b0edb: ADD ESP,0x4
// 005b0ede: XOR EAX,EAX
// 005b0ee0: POP EBP
// 005b0ee1: POP EDI
// 005b0ee2: POP ESI
// 005b0ee3: POP EBX
// 005b0ee4: RET
// 005b0ee5: PUSH 0x65244e
//   Label: LAB_005b0ee5
//   XREF to: 0065244e (DATA)
// 005b0eea: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0eef: ADD ESP,0x4
// 005b0ef2: MOV EAX,dword ptr [EDI]
// 005b0ef4: PUSH EDI
// 005b0ef5: CALL dword ptr [EAX + 0x8]
// 005b0ef8: ADD ESP,0x4
// 005b0efb: XOR EAX,EAX
// 005b0efd: POP EBP
// 005b0efe: POP EDI
// 005b0eff: POP ESI
// 005b0f00: POP EBX
// 005b0f01: RET
