// Name: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830
// Address: 005ae830
// Address Range: [[005ae830, 005aed41]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830(CDirectSoundDevice * this_ptr)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Create_temp_secondary_bu_00651b5a
//   TerminatedCString s_Set_Primary_buffer_forma_00651b91
//   TerminatedCString s_Get_Primary_buffer_forma_00651bab
//   TerminatedCString s_Create_the_secondary_buf_00651bc5
//   undefined4 DAT_00681dd0
//   undefined4 DAT_00681de0
//   undefined4 DAT_00686d68
//   IDirectSound* g_DirectSound
//   IDirectSoundBuffer* g_DirectSoundPrimaryBuffer
//   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
//   IDirectSound3DListener* g_DirectSound3DListener
//   IKsPropertySet* g_DirectSoundPropertySet
//   int g_StreamBitsPerSample
//   int g_StreamSampleRate
//   int g_StreamChannelCount
//   int g_StreamSamplesPerBlock
//   int g_StreamBlockSizeBytes
//   int g_StreamBlockCount
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_005ae830(CDirectSoundDevice *this_ptr)

{
  uint uVar1;
  char *pcVar2;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  int in_stack_00000008;
  ushort in_stack_0000000c;
  DWORD in_stack_00000010;
  int *in_stack_00000014;
  char acStack_6b0 [400];
  char acStack_520 [400];
  char acStack_390 [400];
  char acStack_200 [400];
  DSBUFFERDESC DStack_70;
  WAVEFORMATEX *pWStack_60;
  DSBUFFERDESC DStack_5c;
  undefined2 *puStack_4c;
  WAVEFORMATEX local_48;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  IDirectSoundBuffer *pIStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  
  if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
    (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
    g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    crt_memory_c_memset_FUN_005fde40(&local_48,0,0x12);
    local_48.wFormatTag = 1;
    local_48.nChannels = in_stack_0000000c;
    local_48.nSamplesPerSec = in_stack_00000010;
    local_48.nBlockAlign =
         (short)((int)((in_stack_00000008 + (in_stack_00000008 >> 0x1f) * -8) -
                      (uint)((in_stack_00000008 >> 0x1f) << 2 < 0)) >> 3) * in_stack_0000000c;
    local_48.nAvgBytesPerSec = in_stack_00000010 * local_48.nBlockAlign;
    local_48.wBitsPerSample = (WORD)in_stack_00000008;
    uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->SetFormat)(g_DirectSoundPrimaryBuffer,&local_48);
    if (uVar1 == 0) {
      uVar1 = (*g_DirectSoundPrimaryBuffer->vtable->GetFormat)
                        (g_DirectSoundPrimaryBuffer,&local_48,0x12,(LPDWORD)0x0);
      if (uVar1 == 0) {
        g_StreamBitsPerSample = (int)local_48.wBitsPerSample;
        g_StreamSampleRate = local_48.nSamplesPerSec;
        g_StreamChannelCount = (int)local_48.nChannels;
        if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
          (*g_DirectSoundPropertySet->vtable->Release)((IUnknown *)g_DirectSoundPropertySet);
          g_DirectSoundPropertySet = (IKsPropertySet *)0x0;
        }
        pIStack_20 = (IDirectSoundBuffer *)0x0;
        piStack_1c = (int *)0x0;
        crt_memory_c_memset_FUN_005fde40(&uStack_34,0,0x12);
        uStack_34 = 1;
        uStack_32 = 1;
        uStack_30 = 0x5622;
        uStack_26 = 0x10;
        uStack_28 = 2;
        uStack_2c = 0xac44;
        crt_memory_c_memset_FUN_005fde40(&DStack_5c,0,0x14);
        puStack_4c = &uStack_34;
        DStack_5c.field0_0x0 = 0x14;
        DStack_5c.field1_0x4 = 0x12;
        DStack_5c.field2_0x8 = 0x400;
        uVar1 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,&DStack_5c,&pIStack_20,(LPUNKNOWN)0x0);
        if (uVar1 == 0) {
          (*pIStack_20->vtable->QueryInterface)();
          if (piStack_1c == (int *)0x0) {
            if (pIStack_20 != (IDirectSoundBuffer *)0x0) {
              (*pIStack_20->vtable->Release)();
              pIStack_20 = (IDirectSoundBuffer *)0x0;
            }
          }
          else {
            (**(code **)*piStack_1c)();
            if (pIStack_20 != (IDirectSoundBuffer *)0x0) {
              (*pIStack_20->vtable->Release)();
              pIStack_20 = (IDirectSoundBuffer *)0x0;
            }
            if (piStack_1c != (int *)0x0) {
              (**(code **)(*piStack_1c + 8))();
              piStack_1c = (int *)0x0;
            }
          }
        }
        else {
          pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (acStack_390,"DirectSux: Unable to %s.  (%s)",
                     "Create temp secondary buffer for property set creation",pcVar2);
          sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_390);
        }
        if (g_DirectSoundPropertySet != (IKsPropertySet *)0x0) {
          uStack_18 = 1;
          (*g_DirectSoundPropertySet->vtable->Set)
                    (g_DirectSoundPropertySet,(LPGUID)&DAT_00681de0,0,(LPVOID)0x0,0,&uStack_18,4);
        }
        if (g_DirectSound3DListener != (IDirectSound3DListener *)0x0) {
          *in_stack_00000014 = 0;
          return 1;
        }
        g_StreamBlockCount = 8;
        fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
        fVar3 = ((float10)g_StreamSampleRate * (float10)fStack_14) / (float10)g_StreamBlockCount;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fStack_14));
        g_StreamSamplesPerBlock = (int)ROUND(fVar3);
        g_StreamSamplesPerBlock = g_StreamSamplesPerBlock + 0xfU & 0xfffffff0;
        g_StreamBlockSizeBytes =
             g_StreamSamplesPerBlock *
             ((int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
                   (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_StreamChannelCount;
        crt_memory_c_memset_FUN_005fde40(&DStack_70,0,0x14);
        pWStack_60 = &local_48;
        DStack_70.field2_0x8 = g_StreamBlockSizeBytes * g_StreamBlockCount;
        DStack_70.field0_0x0 = 0x14;
        DStack_70.field1_0x4 = 0;
        if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
          (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer)
          ;
          g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
        }
        uVar1 = (*g_DirectSound->vtable->CreateSoundBuffer)
                          (g_DirectSound,&DStack_70,&g_DirectSoundSecondaryBuffer,(LPUNKNOWN)0x0);
        if (uVar1 == 0) {
          *in_stack_00000014 = g_StreamSamplesPerBlock;
          return 1;
        }
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_6b0,"DirectSux: Unable to %s.  (%s)",
                   "Create the secondary buffer",pcVar2);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_6b0);
      }
      else {
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_200,"DirectSux: Unable to %s.  (%s)",
                   "Get Primary buffer format",pcVar2);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_200);
      }
    }
    else {
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_520,"DirectSux: Unable to %s.  (%s)","Set Primary buffer format",
                 pcVar2);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_520);
    }
  }
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    (*g_DirectSoundSecondaryBuffer->vtable->Release)((IUnknown *)g_DirectSoundSecondaryBuffer);
    g_DirectSoundSecondaryBuffer = (IDirectSoundBuffer *)0x0;
  }
  return 0;
}


// Assembly code:
// 005ae830: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830
// 005ae831: PUSH ESI
// 005ae832: PUSH EDI
// 005ae833: PUSH EBP
// 005ae834: SUB ESP,0x6a0
// 005ae83a: MOV EBX,dword ptr [ESP + 0x6b8]
//   XREF to: Stack[0x8] (READ)
// 005ae841: MOV EDX,dword ptr [0x03f6a9c0]
//   XREF to: 03f6a9c0 (READ)
// 005ae847: TEST EDX,EDX
// 005ae849: JNZ 0x005ae87b
//   XREF to: 005ae87b (CONDITIONAL_JUMP)
// 005ae84b: CMP dword ptr [0x03f6a9b4],0x0
//   Label: LAB_005ae84b
//   XREF to: 03f6a9b4 (READ)
// 005ae852: JNZ 0x005ae88d
//   XREF to: 005ae88d (CONDITIONAL_JUMP)
// 005ae854: MOV EDX,dword ptr [0x03f6a9b8]
//   Label: LAB_005ae854
//   XREF to: 03f6a9b8 (READ)
// 005ae85a: TEST EDX,EDX
// 005ae85c: JZ 0x005ae86e
//   XREF to: 005ae86e (CONDITIONAL_JUMP)
// 005ae85e: MOV EAX,EDX
// 005ae860: PUSH EAX
// 005ae861: MOV EDX,dword ptr [EDX]
// 005ae863: CALL dword ptr [EDX + 0x8]
// 005ae866: XOR ECX,ECX
// 005ae868: MOV dword ptr [0x03f6a9b8],ECX
//   XREF to: 03f6a9b8 (WRITE)
// 005ae86e: XOR EAX,EAX
//   Label: LAB_005ae86e
// 005ae870: ADD ESP,0x6a0
// 005ae876: POP EBP
// 005ae877: POP EDI
// 005ae878: POP ESI
// 005ae879: POP EBX
// 005ae87a: RET
// 005ae87b: MOV EAX,EDX
//   Label: LAB_005ae87b
// 005ae87d: PUSH EAX
// 005ae87e: MOV EDX,dword ptr [EDX]
// 005ae880: CALL dword ptr [EDX + 0x8]
// 005ae883: XOR ECX,ECX
// 005ae885: MOV dword ptr [0x03f6a9c0],ECX
//   XREF to: 03f6a9c0 (WRITE)
// 005ae88b: JMP 0x005ae84b
//   XREF to: 005ae84b (UNCONDITIONAL_JUMP)
// 005ae88d: PUSH 0x12
//   Label: LAB_005ae88d
// 005ae88f: PUSH 0x0
// 005ae891: LEA EAX,[ESP + 0x670]
//   XREF to: Stack[-0x48] (DATA)
// 005ae898: PUSH EAX
// 005ae899: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ae89e: ADD ESP,0xc
// 005ae8a1: MOV EDX,0x1
// 005ae8a6: MOV EAX,dword ptr [ESP + 0x6bc]
//   XREF to: Stack[0xc] (READ)
// 005ae8ad: MOV word ptr [ESP + 0x668],DX
//   XREF to: Stack[-0x48] (WRITE)
// 005ae8b5: MOV word ptr [ESP + 0x66a],AX
//   XREF to: Stack[-0x46] (WRITE)
// 005ae8bd: MOV EDX,EBX
// 005ae8bf: MOV EAX,dword ptr [ESP + 0x6c0]
//   XREF to: Stack[0x10] (READ)
// 005ae8c6: SAR EDX,0x1f
// 005ae8c9: MOV dword ptr [ESP + 0x66c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005ae8d0: MOV EAX,EBX
// 005ae8d2: SHL EDX,0x3
// 005ae8d5: SBB EAX,EDX
// 005ae8d7: SAR EAX,0x3
// 005ae8da: XOR ECX,ECX
// 005ae8dc: MOV CX,word ptr [ESP + 0x6bc]
//   XREF to: Stack[0xc] (READ)
// 005ae8e4: IMUL EAX,ECX
// 005ae8e7: MOV word ptr [ESP + 0x674],AX
//   XREF to: Stack[-0x3c] (WRITE)
// 005ae8ef: XOR EAX,EAX
// 005ae8f1: MOV EDX,dword ptr [ESP + 0x6c0]
//   XREF to: Stack[0x10] (READ)
// 005ae8f8: MOV AX,word ptr [ESP + 0x674]
//   XREF to: Stack[-0x3c] (READ)
// 005ae900: IMUL EDX,EAX
// 005ae903: MOV EAX,[0x03f6a9b4]
//   XREF to: 03f6a9b4 (READ)
// 005ae908: MOV dword ptr [ESP + 0x670],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 005ae90f: LEA EDX,[ESP + 0x668]
//   XREF to: Stack[-0x48] (DATA)
// 005ae916: MOV word ptr [ESP + 0x676],BX
//   XREF to: Stack[-0x3a] (WRITE)
// 005ae91e: PUSH EDX
// 005ae91f: MOV ECX,dword ptr [EAX]
// 005ae921: PUSH EAX
// 005ae922: CALL dword ptr [ECX + 0x38]
// 005ae925: TEST EAX,EAX
// 005ae927: JNZ 0x005aebfc
//   XREF to: 005aebfc (CONDITIONAL_JUMP)
// 005ae92d: PUSH 0x0
// 005ae92f: PUSH 0x12
// 005ae931: LEA EDX,[ESP + 0x670]
// 005ae938: MOV EAX,[0x03f6a9b4]
//   XREF to: 03f6a9b4 (READ)
// 005ae93d: PUSH EDX
// 005ae93e: MOV EBX,dword ptr [EAX]
// 005ae940: PUSH EAX
// 005ae941: CALL dword ptr [EBX + 0x14]
// 005ae944: TEST EAX,EAX
// 005ae946: JNZ 0x005aec35
//   XREF to: 005aec35 (CONDITIONAL_JUMP)
// 005ae94c: MOV AX,word ptr [ESP + 0x676]
// 005ae954: MOV [0x03f6a9c4],EAX
//   XREF to: 03f6a9c4 (WRITE)
// 005ae959: MOV EAX,dword ptr [ESP + 0x66c]
// 005ae960: MOV [0x03f6a9c8],EAX
//   XREF to: 03f6a9c8 (WRITE)
// 005ae965: XOR EAX,EAX
// 005ae967: MOV AX,word ptr [ESP + 0x66a]
// 005ae96f: MOV EDI,dword ptr [0x03f6a9c0]
//   XREF to: 03f6a9c0 (READ)
// 005ae975: MOV [0x03f6a9cc],EAX
//   XREF to: 03f6a9cc (WRITE)
// 005ae97a: TEST EDI,EDI
// 005ae97c: JZ 0x005ae98c
//   XREF to: 005ae98c (CONDITIONAL_JUMP)
// 005ae97e: PUSH EDI
// 005ae97f: MOV EDX,dword ptr [EDI]
// 005ae981: XOR EBP,EBP
// 005ae983: CALL dword ptr [EDX + 0x8]
// 005ae986: MOV dword ptr [0x03f6a9c0],EBP
//   XREF to: 03f6a9c0 (WRITE)
// 005ae98c: PUSH 0x12
//   Label: LAB_005ae98c
// 005ae98e: XOR EAX,EAX
// 005ae990: MOV EBX,0x1
// 005ae995: MOV dword ptr [ESP + 0x694],EAX
// 005ae99c: MOV dword ptr [ESP + 0x698],EAX
// 005ae9a3: PUSH EAX
// 005ae9a4: LEA EAX,[ESP + 0x684]
// 005ae9ab: MOV ESI,0x10
// 005ae9b0: PUSH EAX
// 005ae9b1: MOV EDI,0x2
// 005ae9b6: MOV EBP,0x400
// 005ae9bb: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ae9c0: ADD ESP,0xc
// 005ae9c3: MOV ECX,0x5622
// 005ae9c8: LEA EAX,[ESP + 0x654]
// 005ae9cf: PUSH 0x14
// 005ae9d1: MOV word ptr [ESP + 0x680],BX
// 005ae9d9: MOV word ptr [ESP + 0x682],BX
// 005ae9e1: MOV dword ptr [ESP + 0x684],ECX
// 005ae9e8: MOV word ptr [ESP + 0x68e],SI
// 005ae9f0: MOV word ptr [ESP + 0x68c],DI
// 005ae9f8: PUSH 0x0
// 005ae9fa: MOV EBX,0xac44
// 005ae9ff: MOV ESI,0x14
// 005aea04: PUSH EAX
// 005aea05: MOV EDI,0x12
// 005aea0a: MOV dword ptr [ESP + 0x690],EBX
// 005aea11: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005aea16: ADD ESP,0xc
// 005aea19: LEA EAX,[ESP + 0x67c]
// 005aea20: LEA EDX,[ESP + 0x690]
// 005aea27: PUSH 0x0
// 005aea29: MOV dword ptr [ESP + 0x658],ESI
// 005aea30: MOV dword ptr [ESP + 0x65c],EDI
// 005aea37: MOV dword ptr [ESP + 0x668],EAX
// 005aea3e: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005aea43: PUSH EDX
// 005aea44: LEA EDX,[ESP + 0x65c]
// 005aea4b: MOV dword ptr [ESP + 0x664],EBP
// 005aea52: PUSH EDX
// 005aea53: MOV EBX,dword ptr [EAX]
// 005aea55: PUSH EAX
// 005aea56: CALL dword ptr [EBX + 0xc]
// 005aea59: TEST EAX,EAX
// 005aea5b: JNZ 0x005aec6e
//   XREF to: 005aec6e (CONDITIONAL_JUMP)
// 005aea61: MOV EAX,dword ptr [ESP + 0x690]
// 005aea68: MOV EDX,dword ptr [EAX]
// 005aea6a: LEA EAX,[ESP + 0x694]
// 005aea71: PUSH EAX
// 005aea72: PUSH 0x686d68
//   XREF to: 00686d68 (DATA)
// 005aea77: MOV EAX,dword ptr [ESP + 0x698]
// 005aea7e: PUSH EAX
// 005aea7f: CALL dword ptr [EDX]
// 005aea81: MOV EDX,dword ptr [ESP + 0x694]
// 005aea88: TEST EDX,EDX
// 005aea8a: JNZ 0x005aeca7
//   XREF to: 005aeca7 (CONDITIONAL_JUMP)
// 005aea90: MOV EBX,dword ptr [ESP + 0x690]
// 005aea97: TEST EBX,EBX
// 005aea99: JZ 0x005aeaaa
//   XREF to: 005aeaaa (CONDITIONAL_JUMP)
// 005aea9b: PUSH EBX
// 005aea9c: MOV EAX,dword ptr [EBX]
// 005aea9e: XOR EDI,EDI
// 005aeaa0: CALL dword ptr [EAX + 0x8]
// 005aeaa3: MOV dword ptr [ESP + 0x690],EDI
// 005aeaaa: MOV EBP,dword ptr [0x03f6a9c0]
//   Label: LAB_005aeaaa
//   XREF to: 03f6a9c0 (READ)
// 005aeab0: TEST EBP,EBP
// 005aeab2: JZ 0x005aeadc
//   XREF to: 005aeadc (CONDITIONAL_JUMP)
// 005aeab4: PUSH 0x4
// 005aeab6: LEA EBX,[ESP + 0x69c]
// 005aeabd: PUSH EBX
// 005aeabe: PUSH 0x0
// 005aeac0: PUSH 0x0
// 005aeac2: MOV EAX,0x1
// 005aeac7: PUSH 0x0
// 005aeac9: MOV dword ptr [ESP + 0x6ac],EAX
// 005aead0: PUSH 0x681de0
//   XREF to: 00681de0 (DATA)
// 005aead5: MOV EDX,dword ptr [EBP]
// 005aead8: PUSH EBP
// 005aead9: CALL dword ptr [EDX + 0x10]
// 005aeadc: CMP dword ptr [0x03f6a9bc],0x0
//   Label: LAB_005aeadc
//   XREF to: 03f6a9bc (READ)
// 005aeae3: JNZ 0x005aecf4
//   XREF to: 005aecf4 (CONDITIONAL_JUMP)
// 005aeae9: MOV dword ptr [0x03f6a9d8],0x8
//   XREF to: 03f6a9d8 (WRITE)
// 005aeaf3: CALL sound_sndmain.cpp_getMaxSwLatency_FUN_005abea0
//   XREF to: 005abea0 (UNCONDITIONAL_CALL)
// 005aeaf8: MOV dword ptr [ESP + 0x69c],EAX
// 005aeaff: FLD float ptr [ESP + 0x69c]
// 005aeb06: FILD dword ptr [0x03f6a9c8]
//   XREF to: 03f6a9c8 (READ)
// 005aeb0c: FMULP
// 005aeb0e: FILD dword ptr [0x03f6a9d8]
//   XREF to: 03f6a9d8 (READ)
// 005aeb14: FDIVP
// 005aeb16: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005aeb1b: FISTP dword ptr [0x03f6a9d0]
//   XREF to: 03f6a9d0 (WRITE)
// 005aeb21: MOV EAX,[0x03f6a9d0]
//   XREF to: 03f6a9d0 (READ)
// 005aeb26: ADD EAX,0xf
// 005aeb29: AND AL,0xf0
// 005aeb2b: MOV [0x03f6a9d0],EAX
//   XREF to: 03f6a9d0 (WRITE)
// 005aeb30: MOV EAX,[0x03f6a9c4]
//   XREF to: 03f6a9c4 (READ)
// 005aeb35: MOV EDX,EAX
// 005aeb37: SAR EDX,0x1f
// 005aeb3a: SHL EDX,0x3
// 005aeb3d: SBB EAX,EDX
// 005aeb3f: SAR EAX,0x3
// 005aeb42: MOV EDX,dword ptr [0x03f6a9d0]
//   XREF to: 03f6a9d0 (READ)
// 005aeb48: IMUL EDX,EAX
// 005aeb4b: MOV EAX,[0x03f6a9cc]
//   XREF to: 03f6a9cc (READ)
// 005aeb50: IMUL EDX,EAX
// 005aeb53: PUSH 0x14
// 005aeb55: PUSH 0x0
// 005aeb57: LEA EAX,[ESP + 0x648]
// 005aeb5e: PUSH EAX
// 005aeb5f: MOV dword ptr [0x03f6a9d4],EDX
//   XREF to: 03f6a9d4 (WRITE)
// 005aeb65: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005aeb6a: LEA EAX,[ESP + 0x674]
// 005aeb71: ADD ESP,0xc
// 005aeb74: MOV EDI,dword ptr [0x03f6a9d8]
//   XREF to: 03f6a9d8 (READ)
// 005aeb7a: MOV dword ptr [ESP + 0x650],EAX
// 005aeb81: MOV EAX,[0x03f6a9d4]
//   XREF to: 03f6a9d4 (READ)
// 005aeb86: IMUL EAX,EDI
// 005aeb89: MOV EBX,0x14
// 005aeb8e: XOR ESI,ESI
// 005aeb90: MOV EBP,dword ptr [0x03f6a9b8]
//   XREF to: 03f6a9b8 (READ)
// 005aeb96: MOV dword ptr [ESP + 0x640],EBX
// 005aeb9d: MOV dword ptr [ESP + 0x644],ESI
// 005aeba4: MOV dword ptr [ESP + 0x648],EAX
// 005aebab: TEST EBP,EBP
// 005aebad: JZ 0x005aebbc
//   XREF to: 005aebbc (CONDITIONAL_JUMP)
// 005aebaf: PUSH EBP
// 005aebb0: MOV EDX,dword ptr [EBP]
// 005aebb3: CALL dword ptr [EDX + 0x8]
// 005aebb6: MOV dword ptr [0x03f6a9b8],ESI
//   XREF to: 03f6a9b8 (WRITE)
// 005aebbc: PUSH 0x0
//   Label: LAB_005aebbc
// 005aebbe: PUSH 0x3f6a9b8
//   XREF to: 03f6a9b8 (DATA)
// 005aebc3: LEA EBX,[ESP + 0x648]
// 005aebca: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005aebcf: PUSH EBX
// 005aebd0: MOV EDX,dword ptr [EAX]
// 005aebd2: PUSH EAX
// 005aebd3: CALL dword ptr [EDX + 0xc]
// 005aebd6: TEST EAX,EAX
// 005aebd8: JNZ 0x005aed11
//   XREF to: 005aed11 (CONDITIONAL_JUMP)
// 005aebde: MOV EDX,dword ptr [ESP + 0x6c4]
// 005aebe5: MOV EAX,[0x03f6a9d0]
//   XREF to: 03f6a9d0 (READ)
// 005aebea: MOV dword ptr [EDX],EAX
// 005aebec: MOV EAX,0x1
// 005aebf1: ADD ESP,0x6a0
// 005aebf7: POP EBP
// 005aebf8: POP EDI
// 005aebf9: POP ESI
// 005aebfa: POP EBX
// 005aebfb: RET
// 005aebfc: PUSH EAX
//   Label: LAB_005aebfc
// 005aebfd: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005aec02: ADD ESP,0x4
// 005aec05: PUSH EAX
// 005aec06: PUSH 0x651b91
//   XREF to: 00651b91 (DATA)
// 005aec0b: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005aec10: LEA EAX,[ESP + 0x19c]
// 005aec17: PUSH EAX
// 005aec18: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005aec1d: ADD ESP,0x10
// 005aec20: LEA EAX,[ESP + 0x190]
// 005aec27: PUSH EAX
// 005aec28: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005aec2d: ADD ESP,0x4
// 005aec30: JMP 0x005ae854
//   XREF to: 005ae854 (UNCONDITIONAL_JUMP)
// 005aec35: PUSH EAX
//   Label: LAB_005aec35
// 005aec36: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005aec3b: ADD ESP,0x4
// 005aec3e: PUSH EAX
// 005aec3f: PUSH 0x651bab
//   XREF to: 00651bab (DATA)
// 005aec44: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005aec49: LEA EAX,[ESP + 0x4bc]
// 005aec50: PUSH EAX
// 005aec51: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005aec56: ADD ESP,0x10
// 005aec59: LEA EAX,[ESP + 0x4b0]
// 005aec60: PUSH EAX
// 005aec61: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005aec66: ADD ESP,0x4
// 005aec69: JMP 0x005ae854
//   XREF to: 005ae854 (UNCONDITIONAL_JUMP)
// 005aec6e: PUSH EAX
//   Label: LAB_005aec6e
// 005aec6f: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005aec74: ADD ESP,0x4
// 005aec77: PUSH EAX
// 005aec78: PUSH 0x651b5a
//   XREF to: 00651b5a (DATA)
// 005aec7d: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005aec82: LEA EAX,[ESP + 0x32c]
// 005aec89: PUSH EAX
// 005aec8a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005aec8f: ADD ESP,0x10
// 005aec92: LEA EAX,[ESP + 0x320]
// 005aec99: PUSH EAX
// 005aec9a: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005aec9f: ADD ESP,0x4
// 005aeca2: JMP 0x005aeaaa
//   XREF to: 005aeaaa (UNCONDITIONAL_JUMP)
// 005aeca7: PUSH 0x3f6a9c0
//   Label: LAB_005aeca7
//   XREF to: 03f6a9c0 (DATA)
// 005aecac: PUSH 0x681dd0
//   XREF to: 00681dd0 (DATA)
// 005aecb1: MOV EAX,dword ptr [EDX]
// 005aecb3: PUSH EDX
// 005aecb4: CALL dword ptr [EAX]
// 005aecb6: MOV EBX,dword ptr [ESP + 0x690]
// 005aecbd: TEST EBX,EBX
// 005aecbf: JZ 0x005aecd0
//   XREF to: 005aecd0 (CONDITIONAL_JUMP)
// 005aecc1: PUSH EBX
// 005aecc2: MOV EAX,dword ptr [EBX]
// 005aecc4: XOR EDI,EDI
// 005aecc6: CALL dword ptr [EAX + 0x8]
// 005aecc9: MOV dword ptr [ESP + 0x690],EDI
// 005aecd0: MOV EBP,dword ptr [ESP + 0x694]
//   Label: LAB_005aecd0
// 005aecd7: TEST EBP,EBP
// 005aecd9: JZ 0x005aeaaa
//   XREF to: 005aeaaa (CONDITIONAL_JUMP)
// 005aecdf: PUSH EBP
// 005aece0: MOV EAX,dword ptr [EBP]
// 005aece3: CALL dword ptr [EAX + 0x8]
// 005aece6: XOR ECX,ECX
// 005aece8: MOV dword ptr [ESP + 0x694],ECX
// 005aecef: JMP 0x005aeaaa
//   XREF to: 005aeaaa (UNCONDITIONAL_JUMP)
// 005aecf4: MOV EAX,dword ptr [ESP + 0x6c4]
//   Label: LAB_005aecf4
// 005aecfb: MOV dword ptr [EAX],0x0
// 005aed01: MOV EAX,0x1
// 005aed06: ADD ESP,0x6a0
// 005aed0c: POP EBP
// 005aed0d: POP EDI
// 005aed0e: POP ESI
// 005aed0f: POP EBX
// 005aed10: RET
// 005aed11: PUSH EAX
//   Label: LAB_005aed11
// 005aed12: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005aed17: ADD ESP,0x4
// 005aed1a: PUSH EAX
// 005aed1b: PUSH 0x651bc5
//   XREF to: 00651bc5 (DATA)
// 005aed20: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005aed25: LEA EAX,[ESP + 0xc]
// 005aed29: PUSH EAX
// 005aed2a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005aed2f: ADD ESP,0x10
// 005aed32: MOV EAX,ESP
// 005aed34: PUSH EAX
// 005aed35: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005aed3a: ADD ESP,0x4
// 005aed3d: JMP 0x005ae854
//   XREF to: 005ae854 (UNCONDITIONAL_JUMP)
