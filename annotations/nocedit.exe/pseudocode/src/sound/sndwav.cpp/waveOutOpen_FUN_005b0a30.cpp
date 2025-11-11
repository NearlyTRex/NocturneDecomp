// Name: sound_sndwav.cpp_waveOutOpen_FUN_005b0a30
// Address: 005b0a30
// Address Range: [[005b0a30, 005b0c05]]
// Convention: unknown
// Signature: undefined sound_sndwav.cpp_waveOutOpen_FUN_005b0a30()
// Globals:
//   waveOutOpen* PTR_waveOutOpen_00611448 = 00211944
//   GlobalAlloc* GlobalAlloc = 00211fd8
//   GlobalLock* GlobalLock = 00211ff4
//   TerminatedCString s_waveOutOpen_failed_006523a4
//   undefined4 DAT_00681e04
//   undefined4 DAT_03f6ad34
//   undefined4 DAT_03f6ad38
//   undefined4 DAT_03f6ad58
//   undefined4 DAT_03f6ad78
//   undefined4 DAT_03f6ad98
//   undefined4 DAT_03f6adb8
//   undefined4 DAT_03f6adbc
//   undefined4 DAT_03f6adc0
//   undefined4 DAT_03f6adc4
//   undefined4 DAT_03f6adc8
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   GlobalAlloc
//   GlobalLock
//   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   waveOutOpen

#include "nocturne.h"

undefined4 sound_sndwav_cpp_waveOutOpen_FUN_005b0a30(void)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  MMRESULT MVar4;
  undefined4 extraout_EDX;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  undefined4 *in_stack_00000004;
  uint in_stack_00000008;
  uint *in_stack_0000000c;
  int in_stack_00000010;
  uint *in_stack_00000014;
  undefined1 auStack_24 [20];
  
  iVar1 = (**(code **)*in_stack_00000004)();
  if (iVar1 == 0) {
    return 0;
  }
  DAT_03f6adb8 = in_stack_00000008;
  DAT_03f6adbc = in_stack_0000000c;
  DAT_03f6adc8 = 4;
  DAT_03f6adc0 = in_stack_00000010;
  auStack_24._16_4_ = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  fVar6 = ((float10)DAT_03f6adc0 * (float10)(float)auStack_24._16_4_) / (float10)DAT_03f6adc8;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,auStack_24._16_4_));
  DAT_03f6adc4 = (uint)ROUND(fVar6);
  iVar1 = 0;
  DAT_03f6adc4 = DAT_03f6adc4 + 0xf & 0xfffffff0;
  if (0 < DAT_03f6adc8) {
    iVar5 = 0;
    do {
      pvVar2 = (*GlobalAlloc)(0x2002,((int)((DAT_03f6adb8 + ((int)DAT_03f6adb8 >> 0x1f) * -8) -
                                           (uint)(((int)DAT_03f6adb8 >> 0x1f) << 2 < 0)) >> 3) *
                                     DAT_03f6adc4 * (int)DAT_03f6adbc);
      *(HGLOBAL *)((int)&DAT_03f6ad78 + iVar5) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      pvVar3 = (*GlobalLock)(pvVar2);
      *(LPVOID *)((int)&DAT_03f6ad98 + iVar5) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_005b0bdc;
      pvVar2 = (*GlobalAlloc)(0x2002,0x20);
      *(HGLOBAL *)((int)&DAT_03f6ad38 + iVar5) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_005b0bdc;
      iVar1 = iVar1 + 1;
      pvVar3 = (*GlobalLock)(*(HGLOBAL *)((int)&DAT_03f6ad38 + iVar5));
      *(LPVOID *)((int)&DAT_03f6ad58 + iVar5) = pvVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < DAT_03f6adc8);
  }
  auStack_24._0_2_ = 1;
  auStack_24._14_2_ = (WORD)DAT_03f6adb8;
  auStack_24._2_2_ = (WORD)DAT_03f6adbc;
  auStack_24._12_2_ = (short)((int)(DAT_03f6adb8 & 0xffff) >> 3) * (WORD)DAT_03f6adbc;
  auStack_24._4_4_ = DAT_03f6adc0;
  auStack_24._8_4_ = DAT_03f6adc0 * (uint)(ushort)auStack_24._12_2_;
  MVar4 = (*PTR_waveOutOpen_00611448)
                    ((LPHWAVEOUT)&DAT_03f6ad34,DAT_00681e04,(LPCWAVEFORMATEX)auStack_24,0,0,0);
  if (MVar4 == 0) {
    *in_stack_00000014 = DAT_03f6adc4;
    return 1;
  }
  sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
LAB_005b0bdc:
  (**(code **)*in_stack_00000004)();
  return 0;
}


// Assembly code:
// 005b0a30: PUSH EBX
//   Label: sound_sndwav.cpp_waveOutOpen_FUN_005b0a30
// 005b0a31: PUSH ESI
// 005b0a32: PUSH EDI
// 005b0a33: PUSH EBP
// 005b0a34: SUB ESP,0x14
// 005b0a37: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005b0a3b: PUSH EDI
// 005b0a3c: MOV EAX,dword ptr [EDI]
// 005b0a3e: CALL dword ptr [EAX]
// 005b0a40: ADD ESP,0x4
// 005b0a43: TEST EAX,EAX
// 005b0a45: JNZ 0x005b0a4f
//   XREF to: 005b0a4f (CONDITIONAL_JUMP)
// 005b0a47: ADD ESP,0x14
// 005b0a4a: POP EBP
// 005b0a4b: POP EDI
// 005b0a4c: POP ESI
// 005b0a4d: POP EBX
// 005b0a4e: RET
// 005b0a4f: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_005b0a4f
// 005b0a53: MOV [0x03f6adb8],EAX
//   XREF to: 03f6adb8 (WRITE)
// 005b0a58: MOV EAX,dword ptr [ESP + 0x30]
// 005b0a5c: MOV EDX,0x4
// 005b0a61: MOV [0x03f6adbc],EAX
//   XREF to: 03f6adbc (WRITE)
// 005b0a66: MOV EAX,dword ptr [ESP + 0x34]
// 005b0a6a: MOV dword ptr [0x03f6adc8],EDX
//   XREF to: 03f6adc8 (WRITE)
// 005b0a70: MOV [0x03f6adc0],EAX
//   XREF to: 03f6adc0 (WRITE)
// 005b0a75: CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   XREF to: 005abea0 (UNCONDITIONAL_CALL)
// 005b0a7a: MOV dword ptr [ESP + 0x10],EAX
// 005b0a7e: FLD float ptr [ESP + 0x10]
// 005b0a82: FILD dword ptr [0x03f6adc0]
//   XREF to: 03f6adc0 (READ)
// 005b0a88: FMULP
// 005b0a8a: FILD dword ptr [0x03f6adc8]
//   XREF to: 03f6adc8 (READ)
// 005b0a90: FDIVP
// 005b0a92: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005b0a97: FISTP dword ptr [0x03f6adc4]
//   XREF to: 03f6adc4 (WRITE)
// 005b0a9d: MOV EAX,[0x03f6adc4]
//   XREF to: 03f6adc4 (READ)
// 005b0aa2: ADD EAX,0xf
// 005b0aa5: XOR ESI,ESI
// 005b0aa7: AND AL,0xf0
// 005b0aa9: MOV ECX,dword ptr [0x03f6adc8]
//   XREF to: 03f6adc8 (READ)
// 005b0aaf: MOV [0x03f6adc4],EAX
//   XREF to: 03f6adc4 (WRITE)
// 005b0ab4: TEST ECX,ECX
// 005b0ab6: JLE 0x005b0b50
//   XREF to: 005b0b50 (CONDITIONAL_JUMP)
// 005b0abc: XOR EBX,EBX
// 005b0abe: MOV EAX,[0x03f6adb8]
//   Label: LAB_005b0abe
//   XREF to: 03f6adb8 (READ)
// 005b0ac3: MOV EDX,EAX
// 005b0ac5: SAR EDX,0x1f
// 005b0ac8: SHL EDX,0x3
// 005b0acb: SBB EAX,EDX
// 005b0acd: SAR EAX,0x3
// 005b0ad0: IMUL EAX,dword ptr [0x03f6adc4]
//   XREF to: 03f6adc4 (READ)
// 005b0ad7: IMUL EAX,dword ptr [0x03f6adbc]
//   XREF to: 03f6adbc (READ)
// 005b0ade: PUSH EAX
// 005b0adf: PUSH 0x2002
// 005b0ae4: CALL dword ptr CS:[0x6115cc]
//   XREF to: EXTERNAL:0000007e (COMPUTED_CALL)
//   XREF to: 006115cc (READ)
// 005b0aeb: MOV dword ptr [EBX + 0x3f6ad78],EAX
//   XREF to: 03f6ad78 (WRITE)
// 005b0af1: TEST EAX,EAX
// 005b0af3: JZ 0x005b0bdc
//   XREF to: 005b0bdc (CONDITIONAL_JUMP)
// 005b0af9: PUSH EAX
// 005b0afa: CALL dword ptr CS:[0x6115d4]
//   XREF to: EXTERNAL:00000080 (COMPUTED_CALL)
//   XREF to: 006115d4 (READ)
// 005b0b01: MOV dword ptr [EBX + 0x3f6ad98],EAX
//   XREF to: 03f6ad98 (WRITE)
// 005b0b07: TEST EAX,EAX
// 005b0b09: JZ 0x005b0bdc
//   XREF to: 005b0bdc (CONDITIONAL_JUMP)
// 005b0b0f: PUSH 0x20
// 005b0b11: PUSH 0x2002
// 005b0b16: CALL dword ptr CS:[0x6115cc]
//   XREF to: EXTERNAL:0000007e (COMPUTED_CALL)
//   XREF to: 006115cc (READ)
// 005b0b1d: MOV dword ptr [EBX + 0x3f6ad38],EAX
//   XREF to: 03f6ad38 (WRITE)
// 005b0b23: TEST EAX,EAX
// 005b0b25: JZ 0x005b0bdc
//   XREF to: 005b0bdc (CONDITIONAL_JUMP)
// 005b0b2b: MOV EBP,dword ptr [EBX + 0x3f6ad38]
//   XREF to: 03f6ad38 (READ)
// 005b0b31: PUSH EBP
// 005b0b32: INC ESI
// 005b0b33: CALL dword ptr CS:[0x6115d4]
//   XREF to: EXTERNAL:00000080 (COMPUTED_CALL)
//   XREF to: 006115d4 (READ)
// 005b0b3a: MOV dword ptr [EBX + 0x3f6ad58],EAX
//   XREF to: 03f6ad58 (WRITE)
// 005b0b40: MOV EAX,[0x03f6adc8]
//   XREF to: 03f6adc8 (READ)
// 005b0b45: ADD EBX,0x4
// 005b0b48: CMP ESI,EAX
// 005b0b4a: JL 0x005b0abe
//   XREF to: 005b0abe (CONDITIONAL_JUMP)
// 005b0b50: MOV EDX,0x1
//   Label: LAB_005b0b50
// 005b0b55: MOV AX,[0x03f6adb8]
//   XREF to: 03f6adb8 (READ)
// 005b0b5b: MOV word ptr [ESP],DX
// 005b0b5f: MOV word ptr [ESP + 0xe],AX
// 005b0b64: XOR EDX,EDX
// 005b0b66: MOV AX,[0x03f6adbc]
//   XREF to: 03f6adbc (READ)
// 005b0b6c: MOV DX,word ptr [ESP + 0xe]
// 005b0b71: MOV word ptr [ESP + 0x2],AX
// 005b0b76: MOV EAX,EDX
// 005b0b78: SAR EDX,0x1f
// 005b0b7b: SHL EDX,0x3
// 005b0b7e: SBB EAX,EDX
// 005b0b80: SAR EAX,0x3
// 005b0b83: XOR EDX,EDX
// 005b0b85: MOV DX,word ptr [ESP + 0x2]
// 005b0b8a: IMUL EAX,EDX
// 005b0b8d: MOV word ptr [ESP + 0xc],AX
// 005b0b92: MOV EAX,[0x03f6adc0]
//   XREF to: 03f6adc0 (READ)
// 005b0b97: MOV dword ptr [ESP + 0x4],EAX
// 005b0b9b: XOR EAX,EAX
// 005b0b9d: MOV EDX,dword ptr [ESP + 0x4]
// 005b0ba1: MOV AX,word ptr [ESP + 0xc]
// 005b0ba6: IMUL EDX,EAX
// 005b0ba9: PUSH 0x0
// 005b0bab: PUSH 0x0
// 005b0bad: PUSH 0x0
// 005b0baf: LEA EAX,[ESP + 0xc]
// 005b0bb3: PUSH EAX
// 005b0bb4: MOV dword ptr [ESP + 0x18],EDX
// 005b0bb8: MOV EDX,dword ptr [0x00681e04]
//   XREF to: 00681e04 (READ)
// 005b0bbe: PUSH EDX
// 005b0bbf: PUSH 0x3f6ad34
//   XREF to: 03f6ad34 (DATA)
// 005b0bc4: CALL dword ptr CS:[0x611448]
//   XREF to: EXTERNAL:00000020 (COMPUTED_CALL)
//   XREF to: 00611448 (READ)
// 005b0bcb: TEST EAX,EAX
// 005b0bcd: JZ 0x005b0bee
//   XREF to: 005b0bee (CONDITIONAL_JUMP)
// 005b0bcf: PUSH 0x6523a4
//   XREF to: 006523a4 (DATA)
// 005b0bd4: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0bd9: ADD ESP,0x4
// 005b0bdc: PUSH EDI
//   Label: LAB_005b0bdc
// 005b0bdd: MOV EAX,dword ptr [EDI]
// 005b0bdf: CALL dword ptr [EAX]
// 005b0be1: ADD ESP,0x4
// 005b0be4: XOR EAX,EAX
// 005b0be6: ADD ESP,0x14
// 005b0be9: POP EBP
// 005b0bea: POP EDI
// 005b0beb: POP ESI
// 005b0bec: POP EBX
// 005b0bed: RET
// 005b0bee: MOV EDX,dword ptr [ESP + 0x38]
//   Label: LAB_005b0bee
// 005b0bf2: MOV EAX,[0x03f6adc4]
//   XREF to: 03f6adc4 (READ)
// 005b0bf7: MOV dword ptr [EDX],EAX
// 005b0bf9: MOV EAX,0x1
// 005b0bfe: ADD ESP,0x14
// 005b0c01: POP EBP
// 005b0c02: POP EDI
// 005b0c03: POP ESI
// 005b0c04: POP EBX
// 005b0c05: RET
