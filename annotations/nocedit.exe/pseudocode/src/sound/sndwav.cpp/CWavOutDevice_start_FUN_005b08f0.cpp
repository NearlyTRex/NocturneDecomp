// Name: sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0
// Address: 005b08f0
// Address Range: [[005b08f0, 005b09b6]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice * this_ptr)
// Globals:
//   double DOUBLE_00652387 = 0.333333333333333
//   LPWAVEHDR[8] g_WaveOutHeaders
//   undefined4 DAT_03f6ad5c
//   LPVOID[8] g_WaveOutBuffers
//   int g_WaveOutBitsPerSample
//   int g_WaveOutChannels
//   int g_WaveOutSampleRate
//   int g_WaveOutBufferSize
//   int g_WaveOutNumBuffers
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   sound_sndmain.cpp_startSoundThread_FUN_005abc00
//   sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice *this_ptr)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  int buffer_index;
  CSoundDevice *in_stack_00000008;
  
  buffer_index = 0;
  if (0 < g_WaveOutNumBuffers) {
    iVar3 = 0;
    do {
      crt_memory_c_memset_FUN_005fde40(*(void **)((int)g_WaveOutHeaders + iVar3),0,0x20);
      **(undefined4 **)((int)g_WaveOutHeaders + iVar3) =
           *(undefined4 *)((int)g_WaveOutBuffers + iVar3);
      *(int *)(*(int *)((int)g_WaveOutHeaders + iVar3) + 0xc) = buffer_index;
      *(int *)(*(int *)((int)g_WaveOutHeaders + iVar3) + 4) =
           g_WaveOutChannels *
           ((int)((g_WaveOutBitsPerSample + (g_WaveOutBitsPerSample >> 0x1f) * -8) -
                 (uint)((g_WaveOutBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveOutBufferSize;
      iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(buffer_index);
      if (iVar1 == 0) goto LAB_005b09a0;
      buffer_index = buffer_index + 1;
      iVar3 = iVar3 + 4;
    } while (buffer_index < g_WaveOutNumBuffers);
  }
  pvVar2 = sound_sndmain_cpp_startSoundThread_FUN_005abc00
                     (((double)g_WaveOutBufferSize / (double)g_WaveOutSampleRate) * DOUBLE_00652387)
  ;
  if (pvVar2 != (HANDLE)0x0) {
    return 1;
  }
LAB_005b09a0:
  (*in_stack_00000008->vtable->reset)(in_stack_00000008);
  return 0;
}


// Assembly code:
// 005b08f0: PUSH EBX
//   Label: sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0
// 005b08f1: PUSH ESI
// 005b08f2: PUSH EDI
// 005b08f3: MOV EDX,dword ptr [0x03f6adc8]
//   XREF to: 03f6adc8 (READ)
// 005b08f9: XOR ESI,ESI
// 005b08fb: TEST EDX,EDX
// 005b08fd: JLE 0x005b0971
//   XREF to: 005b0971 (CONDITIONAL_JUMP)
// 005b08ff: XOR EBX,EBX
// 005b0901: PUSH 0x20
//   Label: LAB_005b0901
// 005b0903: PUSH 0x0
// 005b0905: MOV EDI,dword ptr [EBX + 0x3f6ad58]
//   XREF to: 03f6ad58 (READ)
//   XREF to: 03f6ad5c (READ)
// 005b090b: PUSH EDI
// 005b090c: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005b0911: MOV EDX,dword ptr [EBX + 0x3f6ad58]
//   XREF to: 03f6ad58 (READ)
// 005b0917: MOV EAX,dword ptr [EBX + 0x3f6ad98]
//   XREF to: 03f6ad98 (READ)
// 005b091d: MOV dword ptr [EDX],EAX
// 005b091f: MOV EAX,dword ptr [EBX + 0x3f6ad58]
//   XREF to: 03f6ad58 (READ)
// 005b0925: MOV dword ptr [EAX + 0xc],ESI
// 005b0928: MOV EAX,[0x03f6adb8]
//   XREF to: 03f6adb8 (READ)
// 005b092d: MOV EDX,EAX
// 005b092f: SAR EDX,0x1f
// 005b0932: SHL EDX,0x3
// 005b0935: SBB EAX,EDX
// 005b0937: SAR EAX,0x3
// 005b093a: IMUL EAX,dword ptr [0x03f6adc4]
//   XREF to: 03f6adc4 (READ)
// 005b0941: MOV EDX,dword ptr [0x03f6adbc]
//   XREF to: 03f6adbc (READ)
// 005b0947: IMUL EDX,EAX
// 005b094a: ADD ESP,0xc
// 005b094d: MOV EAX,dword ptr [EBX + 0x3f6ad58]
//   XREF to: 03f6ad58 (READ)
// 005b0953: PUSH ESI
// 005b0954: MOV dword ptr [EAX + 0x4],EDX
// 005b0957: CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
//   XREF to: 005b06c0 (UNCONDITIONAL_CALL)
// 005b095c: ADD ESP,0x4
// 005b095f: TEST EAX,EAX
// 005b0961: JZ 0x005b09a0
//   XREF to: 005b09a0 (CONDITIONAL_JUMP)
// 005b0963: MOV ECX,dword ptr [0x03f6adc8]
//   XREF to: 03f6adc8 (READ)
// 005b0969: INC ESI
// 005b096a: ADD EBX,0x4
// 005b096d: CMP ESI,ECX
// 005b096f: JL 0x005b0901
//   XREF to: 005b0901 (CONDITIONAL_JUMP)
// 005b0971: FILD dword ptr [0x03f6adc4]
//   Label: LAB_005b0971
//   XREF to: 03f6adc4 (READ)
// 005b0977: FILD dword ptr [0x03f6adc0]
//   XREF to: 03f6adc0 (READ)
// 005b097d: FDIVP
// 005b097f: FMUL double ptr [0x00652387]
//   XREF to: 00652387 (READ)
// 005b0985: SUB ESP,0x8
// 005b0988: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005b098b: CALL sound_sndmain.cpp_startSoundThread_FUN_005abc00
//   XREF to: 005abc00 (UNCONDITIONAL_CALL)
// 005b0990: ADD ESP,0x8
// 005b0993: TEST EAX,EAX
// 005b0995: JZ 0x005b09a0
//   XREF to: 005b09a0 (CONDITIONAL_JUMP)
// 005b0997: MOV EAX,0x1
// 005b099c: POP EDI
// 005b099d: POP ESI
// 005b099e: POP EBX
// 005b099f: RET
// 005b09a0: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_005b09a0
//   XREF to: Stack[0x4] (READ)
// 005b09a4: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005b09a8: PUSH EDX
// 005b09a9: MOV EAX,dword ptr [EAX]
// 005b09ab: CALL dword ptr [EAX + 0x8]
// 005b09ae: ADD ESP,0x4
// 005b09b1: XOR EAX,EAX
// 005b09b3: POP EDI
// 005b09b4: POP ESI
// 005b09b5: POP EBX
// 005b09b6: RET
