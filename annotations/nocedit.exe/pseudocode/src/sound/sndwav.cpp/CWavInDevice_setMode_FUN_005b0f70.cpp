// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70
// Address: 005b0f70
// Address Range: [[005b0f70, 005b12d0]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70(CWavInDevice * this_ptr)
// Globals:
//   waveInGetDevCapsA* waveInGetDevCapsA = 002118b2
//   waveInOpen* PTR_waveInOpen_0061142c = 002118c6
//   GlobalAlloc* GlobalAlloc = 00211fd8
//   GlobalLock* GlobalLock = 00211ff4
//   TerminatedCString s_WavInDevice_setMode_Can__00652476
//   UINT g_WaveOutDeviceID = 0xffffffff
//   UINT g_WaveInDeviceID = 0xffffffff
//   undefined4 DAT_00681e0c
//   undefined4 DAT_00681e10
//   undefined4 DAT_00681e14
//   undefined4 DAT_00681e18
//   undefined4 DAT_00681e1c
//   undefined4 DAT_00681e20
//   undefined4 DAT_00681e24
//   undefined4 DAT_00681e28
//   HWAVEIN g_WaveInHandle
//   HGLOBAL[8] g_WaveInHeaderHandles
//   LPWAVEHDR[8] g_WaveInHeaders
//   undefined4 DAT_03f6ae70
//   LPVOID[8] DAT_03f6aec0
//   int g_WaveInBitsPerSample
//   int g_WaveInChannels
//   int g_WaveInSampleRate
//   int g_WaveInIs8Bit
//   int g_WaveInBufferSizeSamples
//   int g_WaveInNumBuffers
//   int INT_03f6af28
//   int INT_03f6af2c
//   undefined4 DAT_03f6af30
//   undefined4 DAT_03f6af34
// Function calls:
//   GlobalAlloc
//   GlobalLock
//   sound_sndmain.cpp_logSoundError_FUN_005adba0
//   waveInGetDevCapsA
//   waveInOpen

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70(CWavInDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  uint uVar9;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CWavInDevice *in_stack_00000014;
  int in_stack_00000018;
  tagWAVEINCAPSA tStack_54;
  WAVEFORMATEX WStack_24;
  
  iVar2 = (*this_ptr->vtable->close)((CSoundDevice *)this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  MVar3 = (*waveInGetDevCapsA)(g_WaveInDeviceID,&tStack_54,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  DAT_03f6af30 = in_stack_00000014;
  DAT_03f6af34 = (uint)(in_stack_00000018 != 0);
  WStack_24._16_4_ = tStack_54.dwFormats;
  do {
    uVar9 = 99999;
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = -1;
    do {
      if ((*(uint *)((int)&DAT_00681e0c + iVar8) & WStack_24._16_4_) != 0) {
        uVar4 = (uint)(in_stack_0000000c < *(int *)((int)&DAT_00681e10 + iVar8));
        if (*(int *)((int)&DAT_00681e10 + iVar8) < in_stack_0000000c) {
          uVar4 = uVar4 + 2;
        }
        if ((int)DAT_03f6af30 < *(int *)((int)&DAT_00681e18 + iVar8)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&DAT_00681e18 + iVar8) < (int)DAT_03f6af30) {
          uVar4 = uVar4 + 2;
        }
        if (in_stack_00000010 < *(int *)((int)&DAT_00681e14 + iVar8)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&DAT_00681e14 + iVar8) < in_stack_00000010) {
          uVar4 = uVar4 + 3;
        }
        if (uVar4 < uVar9) {
          uVar9 = uVar4;
          iVar2 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < 0xc);
    INT_03f6af28 = in_stack_0000000c;
    INT_03f6af2c = in_stack_00000010;
    if (iVar2 < 0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    g_WaveInBitsPerSample = (&DAT_00681e10)[iVar2 * 4];
    g_WaveInChannels = (&DAT_00681e14)[iVar2 * 4];
    g_WaveInSampleRate = (&DAT_00681e18)[iVar2 * 4];
    g_WaveInIs8Bit = (int)(g_WaveInBitsPerSample == 8);
    g_WaveInBufferSizeSamples = g_WaveInSampleRate / 0x14;
    g_WaveInNumBuffers = (g_WaveInSampleRate * 2) / g_WaveInBufferSizeSamples;
    if (0x14 < g_WaveInNumBuffers) {
      g_WaveInNumBuffers = 0x14;
    }
    iVar7 = 0;
    if (0 < g_WaveInNumBuffers) {
      iVar8 = 0;
      do {
        pvVar5 = (*GlobalAlloc)(0x2002,((int)((g_WaveInBitsPerSample +
                                              (g_WaveInBitsPerSample >> 0x1f) * -8) -
                                             (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3)
                                       * g_WaveInBufferSizeSamples * g_WaveInChannels);
        *(HGLOBAL *)((int)&DAT_03f6ae70 + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = (*GlobalLock)(pvVar5);
        *(LPVOID *)((int)DAT_03f6aec0 + iVar8) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = (*GlobalAlloc)(0x2002,0x20);
        *(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar7 = iVar7 + 1;
        pvVar6 = (*GlobalLock)(*(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar8));
        iVar1 = g_WaveInNumBuffers;
        *(LPVOID *)((int)g_WaveInHeaders + iVar8) = pvVar6;
        iVar8 = iVar8 + 4;
      } while (iVar7 < iVar1);
    }
    if (g_WaveInNumBuffers <= iVar7) {
      WStack_24.wFormatTag = 1;
      WStack_24.wBitsPerSample = (WORD)g_WaveInBitsPerSample;
      WStack_24.nChannels = (WORD)g_WaveInChannels;
      WStack_24.nBlockAlign =
           (short)((int)(g_WaveInBitsPerSample & 0xffffU) >> 3) * (WORD)g_WaveInChannels;
      WStack_24.nSamplesPerSec = g_WaveInSampleRate;
      WStack_24.nAvgBytesPerSec = g_WaveInSampleRate * (uint)WStack_24.nBlockAlign;
      MVar3 = (*PTR_waveInOpen_0061142c)(&g_WaveInHandle,g_WaveOutDeviceID,&WStack_24,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar7 = (**(code **)*in_stack_00000008)();
    if (iVar7 == 0) {
      return 0;
    }
    WStack_24._16_4_ = WStack_24._16_4_ & ~(&DAT_00681e0c)[iVar2 * 4];
    in_stack_0000000c = INT_03f6af28;
    in_stack_00000010 = INT_03f6af2c;
  } while( true );
}


// Assembly code:
// 005b0f70: PUSH EBX
//   Label: sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70
// 005b0f71: PUSH ESI
// 005b0f72: PUSH EDI
// 005b0f73: PUSH EBP
// 005b0f74: SUB ESP,0x48
// 005b0f77: MOV EDI,dword ptr [0x03f6af2c]
//   XREF to: 03f6af2c (READ)
// 005b0f7d: MOV EBP,dword ptr [0x03f6af28]
//   XREF to: 03f6af28 (READ)
// 005b0f83: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 005b0f87: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 005b0f8b: PUSH EDX
// 005b0f8c: MOV EAX,dword ptr [EAX]
// 005b0f8e: CALL dword ptr [EAX]
// 005b0f90: ADD ESP,0x4
// 005b0f93: TEST EAX,EAX
// 005b0f95: JNZ 0x005b0fa5
//   XREF to: 005b0fa5 (CONDITIONAL_JUMP)
// 005b0f97: MOV EDI,dword ptr [0x03f6af2c]
//   Label: LAB_005b0f97
//   XREF to: 03f6af2c (READ)
// 005b0f9d: ADD ESP,0x48
// 005b0fa0: POP EBP
// 005b0fa1: POP EDI
// 005b0fa2: POP ESI
// 005b0fa3: POP EBX
// 005b0fa4: RET
// 005b0fa5: PUSH 0x30
//   Label: LAB_005b0fa5
// 005b0fa7: LEA EAX,[ESP + 0x4]
// 005b0fab: PUSH EAX
// 005b0fac: MOV ECX,dword ptr [0x00681e08]
//   XREF to: 00681e08 (READ)
// 005b0fb2: PUSH ECX
// 005b0fb3: CALL dword ptr CS:[0x611428]
//   XREF to: EXTERNAL:00000018 (COMPUTED_CALL)
//   XREF to: 00611428 (READ)
// 005b0fba: TEST EAX,EAX
// 005b0fbc: JNZ 0x005b11b0
//   XREF to: 005b11b0 (CONDITIONAL_JUMP)
// 005b0fc2: MOV EDI,dword ptr [ESP + 0x64]
// 005b0fc6: MOV EAX,dword ptr [ESP + 0x68]
// 005b0fca: MOV EBX,dword ptr [ESP + 0x6c]
// 005b0fce: MOV EBP,dword ptr [ESP + 0x60]
// 005b0fd2: MOV [0x03f6af30],EAX
//   XREF to: 03f6af30 (WRITE)
// 005b0fd7: TEST EBX,EBX
// 005b0fd9: SETNZ AL
// 005b0fdc: AND EAX,0xff
// 005b0fe1: MOV [0x03f6af34],EAX
//   XREF to: 03f6af34 (WRITE)
// 005b0fe6: MOV EAX,dword ptr [ESP + 0x28]
// 005b0fea: MOV dword ptr [ESP + 0x40],EAX
// 005b0fee: MOV EAX,0xffffffff
//   Label: LAB_005b0fee
// 005b0ff3: MOV ESI,0x1869f
// 005b0ff8: XOR EDX,EDX
// 005b0ffa: XOR EBX,EBX
// 005b0ffc: MOV dword ptr [ESP + 0x44],EAX
// 005b1000: MOV ECX,dword ptr [ESP + 0x40]
//   Label: LAB_005b1000
// 005b1004: TEST dword ptr [EBX + 0x681e0c],ECX
//   XREF to: 00681e0c (READ)
//   XREF to: 00681e1c (READ)
// 005b100a: JZ 0x005b1072
//   XREF to: 005b1072 (CONDITIONAL_JUMP)
// 005b1010: MOV ECX,dword ptr [EBX + 0x681e10]
//   XREF to: 00681e10 (READ)
//   XREF to: 00681e20 (READ)
// 005b1016: XOR EAX,EAX
// 005b1018: CMP ECX,EBP
// 005b101a: JLE 0x005b1021
//   XREF to: 005b1021 (CONDITIONAL_JUMP)
// 005b101c: MOV EAX,0x1
// 005b1021: MOV ECX,dword ptr [EBX + 0x681e10]
//   Label: LAB_005b1021
//   XREF to: 00681e10 (READ)
//   XREF to: 00681e20 (READ)
// 005b1027: CMP ECX,EBP
// 005b1029: JGE 0x005b102e
//   XREF to: 005b102e (CONDITIONAL_JUMP)
// 005b102b: ADD EAX,0x2
// 005b102e: MOV ECX,dword ptr [EBX + 0x681e18]
//   Label: LAB_005b102e
//   XREF to: 00681e18 (READ)
//   XREF to: 00681e28 (READ)
// 005b1034: CMP ECX,dword ptr [0x03f6af30]
//   XREF to: 03f6af30 (READ)
// 005b103a: JLE 0x005b103d
//   XREF to: 005b103d (CONDITIONAL_JUMP)
// 005b103c: INC EAX
// 005b103d: MOV ECX,dword ptr [EBX + 0x681e18]
//   Label: LAB_005b103d
//   XREF to: 00681e18 (READ)
//   XREF to: 00681e28 (READ)
// 005b1043: CMP ECX,dword ptr [0x03f6af30]
//   XREF to: 03f6af30 (READ)
// 005b1049: JGE 0x005b104e
//   XREF to: 005b104e (CONDITIONAL_JUMP)
// 005b104b: ADD EAX,0x2
// 005b104e: MOV ECX,dword ptr [EBX + 0x681e14]
//   Label: LAB_005b104e
//   XREF to: 00681e14 (READ)
//   XREF to: 00681e24 (READ)
// 005b1054: CMP ECX,EDI
// 005b1056: JLE 0x005b105b
//   XREF to: 005b105b (CONDITIONAL_JUMP)
// 005b1058: ADD EAX,0x2
// 005b105b: MOV ECX,dword ptr [EBX + 0x681e14]
//   Label: LAB_005b105b
//   XREF to: 00681e14 (READ)
//   XREF to: 00681e24 (READ)
// 005b1061: CMP ECX,EDI
// 005b1063: JGE 0x005b1068
//   XREF to: 005b1068 (CONDITIONAL_JUMP)
// 005b1065: ADD EAX,0x3
// 005b1068: CMP EAX,ESI
//   Label: LAB_005b1068
// 005b106a: JGE 0x005b1072
//   XREF to: 005b1072 (CONDITIONAL_JUMP)
// 005b106c: MOV dword ptr [ESP + 0x44],EDX
// 005b1070: MOV ESI,EAX
// 005b1072: INC EDX
//   Label: LAB_005b1072
// 005b1073: ADD EBX,0x10
// 005b1076: CMP EDX,0xc
// 005b1079: JL 0x005b1000
//   XREF to: 005b1000 (CONDITIONAL_JUMP)
// 005b107b: MOV EBX,dword ptr [ESP + 0x44]
// 005b107f: MOV dword ptr [0x03f6af2c],EDI
//   XREF to: 03f6af2c (WRITE)
// 005b1085: MOV dword ptr [0x03f6af28],EBP
//   XREF to: 03f6af28 (WRITE)
// 005b108b: TEST EBX,EBX
// 005b108d: JL 0x005b11c0
//   XREF to: 005b11c0 (CONDITIONAL_JUMP)
// 005b1093: MOV EAX,EBX
// 005b1095: SHL EAX,0x4
// 005b1098: MOV EDX,dword ptr [EAX + 0x681e10]
//   XREF to: 00681e10 (DATA)
// 005b109e: MOV dword ptr [0x03f6af10],EDX
//   XREF to: 03f6af10 (WRITE)
// 005b10a4: MOV ESI,dword ptr [0x03f6af10]
//   XREF to: 03f6af10 (READ)
// 005b10aa: MOV EDX,dword ptr [EAX + 0x681e14]
//   XREF to: 00681e14 (DATA)
// 005b10b0: MOV EAX,dword ptr [EAX + 0x681e18]
//   XREF to: 00681e18 (DATA)
// 005b10b6: MOV dword ptr [0x03f6af14],EDX
//   XREF to: 03f6af14 (WRITE)
// 005b10bc: MOV [0x03f6af18],EAX
//   XREF to: 03f6af18 (WRITE)
// 005b10c1: CMP ESI,0x8
// 005b10c4: SETZ AL
// 005b10c7: MOV ECX,0x14
// 005b10cc: AND EAX,0xff
// 005b10d1: MOV EDX,dword ptr [0x03f6af18]
//   XREF to: 03f6af18 (READ)
// 005b10d7: MOV [0x03f6af1c],EAX
//   XREF to: 03f6af1c (WRITE)
// 005b10dc: MOV EAX,EDX
// 005b10de: SAR EDX,0x1f
// 005b10e1: IDIV ECX
// 005b10e3: MOV EDX,dword ptr [0x03f6af18]
//   XREF to: 03f6af18 (READ)
// 005b10e9: MOV [0x03f6af20],EAX
//   XREF to: 03f6af20 (WRITE)
// 005b10ee: ADD EDX,EDX
// 005b10f0: MOV ECX,EAX
// 005b10f2: MOV EAX,EDX
// 005b10f4: SAR EDX,0x1f
// 005b10f7: IDIV ECX
// 005b10f9: MOV [0x03f6af24],EAX
//   XREF to: 03f6af24 (WRITE)
// 005b10fe: CMP EAX,0x14
// 005b1101: JLE 0x005b110d
//   XREF to: 005b110d (CONDITIONAL_JUMP)
// 005b1103: MOV dword ptr [0x03f6af24],0x14
//   XREF to: 03f6af24 (WRITE)
// 005b110d: MOV ECX,dword ptr [0x03f6af24]
//   Label: LAB_005b110d
//   XREF to: 03f6af24 (READ)
// 005b1113: MOV dword ptr [0x03f6af2c],EDI
//   XREF to: 03f6af2c (WRITE)
// 005b1119: MOV dword ptr [0x03f6af28],EBP
//   XREF to: 03f6af28 (WRITE)
// 005b111f: XOR ESI,ESI
// 005b1121: TEST ECX,ECX
// 005b1123: JLE 0x005b1162
//   XREF to: 005b1162 (CONDITIONAL_JUMP)
// 005b1125: XOR EBX,EBX
// 005b1127: MOV EAX,[0x03f6af10]
//   Label: LAB_005b1127
//   XREF to: 03f6af10 (READ)
// 005b112c: MOV EDX,EAX
// 005b112e: SAR EDX,0x1f
// 005b1131: SHL EDX,0x3
// 005b1134: SBB EAX,EDX
// 005b1136: SAR EAX,0x3
// 005b1139: IMUL EAX,dword ptr [0x03f6af20]
//   XREF to: 03f6af20 (READ)
// 005b1140: IMUL EAX,dword ptr [0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b1147: PUSH EAX
// 005b1148: PUSH 0x2002
// 005b114d: CALL dword ptr CS:[0x6115cc]
//   XREF to: EXTERNAL:0000007e (COMPUTED_CALL)
//   XREF to: 006115cc (READ)
// 005b1154: MOV dword ptr [EBX + 0x3f6ae70],EAX
//   XREF to: 03f6ae70 (WRITE)
// 005b115a: TEST EAX,EAX
// 005b115c: JNZ 0x005b11dd
//   XREF to: 005b11dd (CONDITIONAL_JUMP)
// 005b1162: CMP ESI,dword ptr [0x03f6af24]
//   Label: LAB_005b1162
//   XREF to: 03f6af24 (READ)
// 005b1168: JGE 0x005b123a
//   XREF to: 005b123a (CONDITIONAL_JUMP)
// 005b116e: MOV EDX,dword ptr [ESP + 0x5c]
//   Label: LAB_005b116e
// 005b1172: MOV EAX,dword ptr [ESP + 0x5c]
// 005b1176: PUSH EDX
// 005b1177: MOV EAX,dword ptr [EAX]
// 005b1179: CALL dword ptr [EAX]
// 005b117b: ADD ESP,0x4
// 005b117e: TEST EAX,EAX
// 005b1180: JZ 0x005b0f97
//   XREF to: 005b0f97 (CONDITIONAL_JUMP)
// 005b1186: MOV EAX,dword ptr [ESP + 0x44]
// 005b118a: SHL EAX,0x4
// 005b118d: MOV EAX,dword ptr [EAX + 0x681e0c]
//   XREF to: 00681e0c (DATA)
// 005b1193: MOV ECX,dword ptr [ESP + 0x40]
// 005b1197: NOT EAX
// 005b1199: MOV EBP,dword ptr [0x03f6af28]
//   XREF to: 03f6af28 (READ)
// 005b119f: AND ECX,EAX
// 005b11a1: MOV EDI,dword ptr [0x03f6af2c]
//   XREF to: 03f6af2c (READ)
// 005b11a7: MOV dword ptr [ESP + 0x40],ECX
// 005b11ab: JMP 0x005b0fee
//   XREF to: 005b0fee (UNCONDITIONAL_JUMP)
// 005b11b0: XOR EAX,EAX
//   Label: LAB_005b11b0
// 005b11b2: MOV EDI,dword ptr [0x03f6af2c]
//   XREF to: 03f6af2c (READ)
// 005b11b8: ADD ESP,0x48
// 005b11bb: POP EBP
// 005b11bc: POP EDI
// 005b11bd: POP ESI
// 005b11be: POP EBX
// 005b11bf: RET
// 005b11c0: PUSH 0x652476
//   Label: LAB_005b11c0
//   XREF to: 00652476 (DATA)
// 005b11c5: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b11ca: ADD ESP,0x4
// 005b11cd: XOR EAX,EAX
// 005b11cf: MOV EDI,dword ptr [0x03f6af2c]
//   XREF to: 03f6af2c (READ)
// 005b11d5: ADD ESP,0x48
// 005b11d8: POP EBP
// 005b11d9: POP EDI
// 005b11da: POP ESI
// 005b11db: POP EBX
// 005b11dc: RET
// 005b11dd: PUSH EAX
//   Label: LAB_005b11dd
// 005b11de: CALL dword ptr CS:[0x6115d4]
//   XREF to: EXTERNAL:00000080 (COMPUTED_CALL)
//   XREF to: 006115d4 (READ)
// 005b11e5: MOV dword ptr [EBX + 0x3f6aec0],EAX
//   XREF to: 03f6aec0 (WRITE)
// 005b11eb: TEST EAX,EAX
// 005b11ed: JZ 0x005b1162
//   XREF to: 005b1162 (CONDITIONAL_JUMP)
// 005b11f3: PUSH 0x20
// 005b11f5: PUSH 0x2002
// 005b11fa: CALL dword ptr CS:[0x6115cc]
//   XREF to: EXTERNAL:0000007e (COMPUTED_CALL)
//   XREF to: 006115cc (READ)
// 005b1201: MOV dword ptr [EBX + 0x3f6add0],EAX
//   XREF to: 03f6add0 (WRITE)
// 005b1207: TEST EAX,EAX
// 005b1209: JZ 0x005b1162
//   XREF to: 005b1162 (CONDITIONAL_JUMP)
// 005b120f: MOV EAX,dword ptr [EBX + 0x3f6add0]
//   XREF to: 03f6add0 (READ)
// 005b1215: PUSH EAX
// 005b1216: ADD EBX,0x4
// 005b1219: INC ESI
// 005b121a: CALL dword ptr CS:[0x6115d4]
//   XREF to: EXTERNAL:00000080 (COMPUTED_CALL)
//   XREF to: 006115d4 (READ)
// 005b1221: MOV EDX,dword ptr [0x03f6af24]
//   XREF to: 03f6af24 (READ)
// 005b1227: MOV dword ptr [EBX + 0x3f6ae1c],EAX
//   XREF to: 03f6ae20 (WRITE)
// 005b122d: CMP ESI,EDX
// 005b122f: JL 0x005b1127
//   XREF to: 005b1127 (CONDITIONAL_JUMP)
// 005b1235: JMP 0x005b1162
//   XREF to: 005b1162 (UNCONDITIONAL_JUMP)
// 005b123a: MOV EDX,0x1
//   Label: LAB_005b123a
// 005b123f: MOV AX,[0x03f6af10]
//   XREF to: 03f6af10 (READ)
// 005b1245: MOV word ptr [ESP + 0x30],DX
// 005b124a: MOV word ptr [ESP + 0x3e],AX
// 005b124f: XOR EDX,EDX
// 005b1251: MOV AX,[0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b1257: MOV DX,word ptr [ESP + 0x3e]
// 005b125c: MOV word ptr [ESP + 0x32],AX
// 005b1261: MOV EAX,EDX
// 005b1263: SAR EDX,0x1f
// 005b1266: SHL EDX,0x3
// 005b1269: SBB EAX,EDX
// 005b126b: SAR EAX,0x3
// 005b126e: XOR EDX,EDX
// 005b1270: MOV DX,word ptr [ESP + 0x32]
// 005b1275: IMUL EAX,EDX
// 005b1278: MOV word ptr [ESP + 0x3c],AX
// 005b127d: MOV EAX,[0x03f6af18]
//   XREF to: 03f6af18 (READ)
// 005b1282: MOV dword ptr [ESP + 0x34],EAX
// 005b1286: XOR EAX,EAX
// 005b1288: MOV EDX,dword ptr [ESP + 0x34]
// 005b128c: MOV AX,word ptr [ESP + 0x3c]
// 005b1291: IMUL EDX,EAX
// 005b1294: PUSH 0x0
// 005b1296: PUSH 0x0
// 005b1298: PUSH 0x0
// 005b129a: LEA EAX,[ESP + 0x3c]
// 005b129e: PUSH EAX
// 005b129f: MOV ESI,dword ptr [0x00681e04]
//   XREF to: 00681e04 (READ)
// 005b12a5: PUSH ESI
// 005b12a6: PUSH 0x3f6adcc
//   XREF to: 03f6adcc (DATA)
// 005b12ab: MOV dword ptr [ESP + 0x50],EDX
// 005b12af: CALL dword ptr CS:[0x61142c]
//   XREF to: EXTERNAL:00000019 (COMPUTED_CALL)
//   XREF to: 0061142c (READ)
// 005b12b6: TEST EAX,EAX
// 005b12b8: JNZ 0x005b116e
//   XREF to: 005b116e (CONDITIONAL_JUMP)
// 005b12be: MOV EAX,0x1
// 005b12c3: MOV EDI,dword ptr [0x03f6af2c]
//   XREF to: 03f6af2c (READ)
// 005b12c9: ADD ESP,0x48
// 005b12cc: POP EBP
// 005b12cd: POP EDI
// 005b12ce: POP ESI
// 005b12cf: POP EBX
// 005b12d0: RET
