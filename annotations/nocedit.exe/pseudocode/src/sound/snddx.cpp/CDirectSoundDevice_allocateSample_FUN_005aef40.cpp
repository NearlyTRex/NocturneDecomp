// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
// Address: 005aef40
// Address Range: [[005aef40, 005af14b]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40(CDirectSoundDevice * this_ptr, int bits_per_sample, int channel_count, int sample_rate, int sample_count)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Create_secondary_buffer_00651c0c
//   TerminatedCString s_DirectSoundDevice_alloca_00651c24
//   IDirectSound* g_DirectSound
//   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
//   undefined4 g_DirectSoundSampleBuffers[1]
//   undefined4 DAT_03f6a9e8
//   undefined4 DAT_03f6a9ec
//   undefined4 DAT_03f6ab64
//   undefined4 DAT_03f6ab68
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
          (CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,
          int sample_count)

{
  IDirectSoundBuffer *this_ptr_00;
  int iVar1;
  int iVar2;
  uint error_code;
  char *pcVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_0000001c;
  int in_stack_00000028;
  undefined1 local_34 [4];
  DSBUFFERDESC local_30;
  int local_1c;
  int local_18;
  ushort uStack_14;
  undefined2 uStack_12;
  
  if (g_DirectSound != (IDirectSound *)0x0) {
    iVar4 = 1;
    iVar2 = 4;
    if (g_DirectSoundSampleBuffers[1] != (IDirectSoundBuffer *)0x0) {
      do {
        iVar4 = iVar4 + 1;
        if (99 < iVar2 + 4) break;
        iVar1 = iVar2 + 4;
        iVar2 = iVar2 + 4;
      } while (*(int *)((int)g_DirectSoundSampleBuffers + iVar1) != 0);
    }
    if (iVar4 < 0x19) {
      crt_memory_c_memset_FUN_005fde40(&local_30.dwReserved,0,0x12);
      local_30.lpwfxFormat = (LPWAVEFORMATEX)CONCAT22((short)sample_rate,1);
      local_1c = sample_count;
      iVar2 = (int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                   (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3;
      uStack_14 = (short)iVar2 * (short)sample_rate;
      local_18 = sample_count * (uint)uStack_14;
      uStack_12 = (undefined2)bits_per_sample;
      crt_memory_c_memset_FUN_005fde40(local_34,0,0x14);
      local_30.lpwfxFormat = (LPWAVEFORMATEX)&local_1c;
      local_30.dwBufferBytes = sample_count * in_stack_0000001c * iVar2;
      local_30.dwSize = 0x14;
      local_30.dwFlags = 0xb0;
      error_code = (*g_DirectSound->vtable->CreateSoundBuffer)
                             (g_DirectSound,&local_30,g_DirectSoundSampleBuffers + iVar4,
                              (LPUNKNOWN)0x0);
      if (error_code == 0) {
        if (g_DirectSoundSampleBuffers[iVar4] != (IDirectSoundBuffer *)0x0) {
          g_DirectSoundBufferMetadata[iVar4].field1_0x4 = 0;
          g_DirectSoundBufferMetadata[iVar4].field0_0x0 = in_stack_00000028 * iVar2;
          return iVar4;
        }
      }
      else {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffe58,"DirectSux: Unable to %s.  (%s)",
                   "Create secondary buffer",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(&stack0xfffffe5c);
      }
      sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::allocateSample - access failed\n");
      this_ptr_00 = g_DirectSoundSampleBuffers[iVar4];
      if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
        (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
        g_DirectSoundSampleBuffers[iVar4] = (IDirectSoundBuffer *)0x0;
      }
      g_DirectSoundBufferMetadata[iVar4].field0_0x0 = 0;
      return 0;
    }
  }
  return 0;
}


// Assembly code:
// 005aef40: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
// 005aef41: PUSH ESI
// 005aef42: PUSH EDI
// 005aef43: PUSH EBP
// 005aef44: SUB ESP,0x1b8
// 005aef4a: MOV EDI,dword ptr [ESP + 0x1d0]
//   XREF to: Stack[0x8] (READ)
// 005aef51: CMP dword ptr [0x03f6a9b0],0x0
//   XREF to: 03f6a9b0 (READ)
// 005aef58: JZ 0x005aef85
//   XREF to: 005aef85 (CONDITIONAL_JUMP)
// 005aef5a: MOV EAX,0x4
// 005aef5f: MOV ECX,dword ptr [0x03f6a9e4]
//   XREF to: 03f6a9e4 (READ)
// 005aef65: MOV EBX,0x1
// 005aef6a: TEST ECX,ECX
// 005aef6c: JZ 0x005aef80
//   XREF to: 005aef80 (CONDITIONAL_JUMP)
// 005aef6e: ADD EAX,0x4
//   Label: LAB_005aef6e
// 005aef71: INC EBX
// 005aef72: CMP EAX,0x64
// 005aef75: JGE 0x005aef80
//   XREF to: 005aef80 (CONDITIONAL_JUMP)
// 005aef77: CMP dword ptr [EAX + 0x3f6a9e0],0x0
//   XREF to: 03f6a9e8 (READ)
//   XREF to: 03f6a9ec (READ)
// 005aef7e: JNZ 0x005aef6e
//   XREF to: 005aef6e (CONDITIONAL_JUMP)
// 005aef80: CMP EBX,0x19
//   Label: LAB_005aef80
// 005aef83: JL 0x005aef92
//   XREF to: 005aef92 (CONDITIONAL_JUMP)
// 005aef85: XOR EAX,EAX
//   Label: LAB_005aef85
// 005aef87: ADD ESP,0x1b8
// 005aef8d: POP EBP
// 005aef8e: POP EDI
// 005aef8f: POP ESI
// 005aef90: POP EBX
// 005aef91: RET
// 005aef92: PUSH 0x12
//   Label: LAB_005aef92
// 005aef94: PUSH 0x0
// 005aef96: LEA EAX,[ESP + 0x1ac]
//   XREF to: Stack[-0x24] (DATA)
// 005aef9d: PUSH EAX
// 005aef9e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005aefa3: ADD ESP,0xc
// 005aefa6: MOV EDX,0x1
// 005aefab: MOV EAX,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[0xc] (READ)
// 005aefb2: MOV word ptr [ESP + 0x1a4],DX
//   XREF to: Stack[-0x24] (WRITE)
// 005aefba: MOV word ptr [ESP + 0x1a6],AX
//   XREF to: Stack[-0x22] (WRITE)
// 005aefc2: MOV EDX,EDI
// 005aefc4: MOV EAX,dword ptr [ESP + 0x1d8]
//   XREF to: Stack[0x10] (READ)
// 005aefcb: SAR EDX,0x1f
// 005aefce: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005aefd5: MOV EAX,EDI
// 005aefd7: SHL EDX,0x3
// 005aefda: SBB EAX,EDX
// 005aefdc: SAR EAX,0x3
// 005aefdf: XOR ECX,ECX
// 005aefe1: MOV CX,word ptr [ESP + 0x1d4]
//   XREF to: Stack[0xc] (READ)
// 005aefe9: MOV ESI,EAX
// 005aefeb: IMUL EAX,ECX
// 005aefee: MOV word ptr [ESP + 0x1b0],AX
//   XREF to: Stack[-0x18] (WRITE)
// 005aeff6: XOR EAX,EAX
// 005aeff8: MOV EDX,dword ptr [ESP + 0x1d8]
//   XREF to: Stack[0x10] (READ)
// 005aefff: MOV AX,word ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 005af007: IMUL EDX,EAX
// 005af00a: PUSH 0x14
// 005af00c: PUSH 0x0
// 005af00e: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0x38] (DATA)
// 005af015: PUSH EAX
// 005af016: MOV word ptr [ESP + 0x1be],DI
//   XREF to: Stack[-0x16] (WRITE)
// 005af01e: MOV dword ptr [ESP + 0x1b8],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005af025: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005af02a: LEA EAX,[ESP + 0x1b0]
//   XREF to: Stack[-0x24] (DATA)
// 005af031: ADD ESP,0xc
// 005af034: MOV dword ptr [ESP + 0x1a0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005af03b: MOV EAX,dword ptr [ESP + 0x1dc]
//   XREF to: Stack[0x14] (READ)
// 005af042: IMUL EAX,ESI
// 005af045: MOV EDX,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[0xc] (READ)
// 005af04c: IMUL EDX,EAX
// 005af04f: MOV EDI,0x14
// 005af054: MOV EBP,0xb0
// 005af059: MOV dword ptr [ESP + 0x190],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 005af060: LEA EDI,[EBX*0x4 + 0x0]
// 005af067: MOV dword ptr [ESP + 0x198],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005af06e: MOV EDX,0x3f6a9e0
//   XREF to: 03f6a9e0 (DATA)
// 005af073: PUSH 0x0
// 005af075: ADD EDX,EDI
// 005af077: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005af07c: PUSH EDX
//   XREF to: 03f6a9e8 (DATA)
// 005af07d: LEA EDX,[ESP + 0x198]
//   XREF to: Stack[-0x38] (DATA)
// 005af084: MOV dword ptr [ESP + 0x19c],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 005af08b: PUSH EDX
// 005af08c: MOV ECX,dword ptr [EAX]
// 005af08e: PUSH EAX
// 005af08f: CALL dword ptr [ECX + 0xc]
// 005af092: TEST EAX,EAX
// 005af094: JNZ 0x005af0ee
//   XREF to: 005af0ee (CONDITIONAL_JUMP)
// 005af096: CMP dword ptr [EDI + 0x3f6a9e0],0x0
//   XREF to: 03f6a9e8 (READ)
// 005af09d: JNZ 0x005af11c
//   XREF to: 005af11c (CONDITIONAL_JUMP)
// 005af0a3: LEA ESI,[EBX*0x4 + 0x0]
//   Label: LAB_005af0a3
// 005af0aa: PUSH 0x651c24
//   XREF to: 00651c24 (DATA)
// 005af0af: ADD ESI,0x3f6a9e0
//   XREF to: 03f6a9e0 (DATA)
// 005af0b5: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af0ba: MOV ECX,dword ptr [ESI]
//   XREF to: 03f6a9e8 (READ)
// 005af0bc: ADD ESP,0x4
// 005af0bf: TEST ECX,ECX
// 005af0c1: JZ 0x005af0cf
//   XREF to: 005af0cf (CONDITIONAL_JUMP)
// 005af0c3: PUSH ECX
// 005af0c4: MOV EDI,dword ptr [ECX]
// 005af0c6: CALL dword ptr [EDI + 0x8]
// 005af0c9: MOV dword ptr [ESI],0x0
//   XREF to: 03f6a9e8 (WRITE)
// 005af0cf: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_005af0cf
// 005af0d6: ADD EAX,EBX
// 005af0d8: XOR EBX,EBX
// 005af0da: MOV dword ptr [EAX*0x4 + 0x3f6ab3c],EBX
//   XREF to: 03f6ab64 (WRITE)
// 005af0e1: XOR EAX,EAX
// 005af0e3: ADD ESP,0x1b8
// 005af0e9: POP EBP
// 005af0ea: POP EDI
// 005af0eb: POP ESI
// 005af0ec: POP EBX
// 005af0ed: RET
// 005af0ee: PUSH EAX
//   Label: LAB_005af0ee
// 005af0ef: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005af0f4: ADD ESP,0x4
// 005af0f7: PUSH EAX
// 005af0f8: PUSH 0x651c0c
//   XREF to: 00651c0c (DATA)
// 005af0fd: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005af102: LEA EAX,[ESP + 0xc]
// 005af106: PUSH EAX
// 005af107: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005af10c: ADD ESP,0x10
// 005af10f: MOV EAX,ESP
// 005af111: PUSH EAX
// 005af112: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af117: ADD ESP,0x4
// 005af11a: JMP 0x005af0a3
//   XREF to: 005af0a3 (UNCONDITIONAL_JUMP)
// 005af11c: MOV EDI,dword ptr [ESP + 0x1d4]
//   Label: LAB_005af11c
// 005af123: IMUL EDI,ESI
// 005af126: LEA EAX,[EBX*0x4 + 0x0]
// 005af12d: ADD EAX,EBX
// 005af12f: XOR EDX,EDX
// 005af131: MOV dword ptr [EAX*0x4 + 0x3f6ab40],EDX
//   XREF to: 03f6ab68 (WRITE)
// 005af138: MOV dword ptr [EAX*0x4 + 0x3f6ab3c],EDI
//   XREF to: 03f6ab64 (WRITE)
// 005af13f: MOV EAX,EBX
// 005af141: ADD ESP,0x1b8
// 005af147: POP EBP
// 005af148: POP EDI
// 005af149: POP ESI
// 005af14a: POP EBX
// 005af14b: RET
