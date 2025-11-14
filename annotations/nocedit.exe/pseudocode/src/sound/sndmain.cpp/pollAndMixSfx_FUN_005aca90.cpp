// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
// Address: 005aca90
// Address Range: [[005aca90, 005acda2]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90(LPVOID * channel_buffers, int bits_per_sample, int num_channels, int samples_per_sec, int samples_per_block, int block_align)
// Cross-references:
//   sound_snddx.cpp_fillStreamBuffer_FUN_005adff0 (005adff0) at 005ae0d7 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0 (005b06c0) at 005b0774 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fb9a
//   TerminatedCString s_SfxSlot_kill_must_be_loc_0064fbaf
//   TerminatedCString s_sound_sndmain_cpp_0064fbcf
//   TerminatedCString s_nextMixingBuffer_shouldn_0064fbe4
//   TerminatedCString s_sound_sndmain_cpp_0065101f
//   TerminatedCString s_pollSfx_must_be_locked_00651034
//   int g_AudioBitsPerSample = 0x10
//   int g_AudioChannelCount = 0x2
//   int g_AudioSampleRate = 0x5622
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSfxSlot[64] g_SfxSlots
//   undefined4 g_SfxSlots[1].status
//   undefined4 g_SfxLastSlot
//   int g_MixBufferReadIndex
//   int g_MixBufferWriteIndex
//   int g_MixBufferSize
//   int g_NumMixBuffers
//   void*[8] g_ChannelPrimaryBuffers
//   undefined4 g_ChannelPrimaryBuffers[1]
//   undefined4 DAT_03f69320
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_memmove_FUN_005fe5e0
//   sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
//   sound_sndmain.cpp_FUN_005a5530

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
          (LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,
          int samples_per_block,int block_align)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  CSfxSlot *pCVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  ulong count;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 auStack_90 [5];
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int aiStack_3c [9];
  int local_18;
  CSfxSlot *local_14;
  
  bVar9 = 0;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x16ce;
    uStack_74 = 0x5acd6b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("pollSfx - must be locked!");
  }
  if (0 < samples_per_sec) {
    iVar2 = 0;
    do {
      if (*(int *)((int)g_ChannelPrimaryBuffers + iVar2) == 0) {
        return;
      }
      iVar2 = iVar2 + 4;
    } while (SBORROW4(iVar2,samples_per_sec * 4) != iVar2 + samples_per_sec * -4 < 0);
  }
  if (((num_channels == g_AudioBitsPerSample) && (samples_per_sec == g_AudioChannelCount)) &&
     (samples_per_block == g_AudioSampleRate)) {
    sound_sndmain_cpp_FUN_005a5530();
    iVar2 = 0;
    if (0 < samples_per_block) {
      do {
        iVar2 = iVar2 + 1;
        aiStack_3c[iVar2] = *(int *)num_channels;
        num_channels = num_channels + 4;
      } while (iVar2 < samples_per_block);
    }
    local_18 = samples_per_block << 2;
    local_14 = (CSfxSlot *)&g_SfxLastSlot;
    for (; 0 < in_stack_0000001c; in_stack_0000001c = in_stack_0000001c - iVar3) {
      if (g_MixBufferReadIndex < 1) {
        if (g_SoundLockCount < 1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x4de;
          core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
        }
        if (0 < g_MixBufferReadIndex) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x4e2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("nextMixingBuffer - shouldn't have any data pending!");
        }
        iVar2 = 0;
        count = g_MixBufferSize * 4;
        if (0 < g_AudioChannelCount) {
          iVar3 = 0;
          do {
            uStack_74 = 0x5acbca;
            crt_string_c_memmove_FUN_005fe5e0
                      (*(void **)((int)g_ChannelPrimaryBuffers + iVar3),
                       (void *)(g_MixBufferSize * 4 +
                               (int)*(void **)((int)g_ChannelPrimaryBuffers + iVar3)),
                       (g_NumMixBuffers + -1) * count);
            piVar1 = (int *)((int)g_ChannelPrimaryBuffers + iVar3);
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + 1;
            crt_memory_c_memset_FUN_005fde40
                      ((void *)((g_NumMixBuffers + -1) * g_MixBufferSize * 4 + *piVar1),0,count);
          } while (iVar2 < g_AudioChannelCount);
        }
        aiStack_3c[0] = g_AudioSampleRate;
        if (0 < g_AudioChannelCount) {
          iVar2 = 0;
          do {
            iVar3 = iVar2 + 4;
            *(undefined4 *)(&stack0xffffff9c + iVar2) =
                 *(undefined4 *)((int)g_ChannelPrimaryBuffers + iVar2);
            iVar2 = iVar3;
          } while (iVar3 < g_AudioChannelCount * 4);
        }
        pCVar4 = local_14;
        this_ptr = g_SfxSlots;
        do {
          sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar4);
        pCVar4 = g_SfxSlots;
        do {
          puVar7 = (undefined4 *)&stack0xffffff9c;
          puVar8 = auStack_90;
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(pCVar4);
          pCVar4 = pCVar4 + 1;
        } while (pCVar4 != (CSfxSlot *)&g_SfxLastSlot);
        g_MixBufferReadIndex = g_MixBufferSize;
        DAT_03f69320 = DAT_03f69320 + 1;
        g_MixBufferWriteIndex = 0;
      }
      iVar2 = local_18;
      iVar3 = g_MixBufferReadIndex;
      if (in_stack_0000001c < g_MixBufferReadIndex) {
        iVar3 = in_stack_0000001c;
      }
      if (0 < samples_per_block) {
        iVar5 = 0;
        do {
          uStack_74 = *(undefined4 *)((int)aiStack_3c + iVar5 + 4);
          iStack_78 = g_MixBufferWriteIndex * 4 + *(int *)((int)g_ChannelPrimaryBuffers + iVar5);
          uStack_7c = 0x5acd06;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80();
          iVar6 = iVar5 + 4;
          *(int *)((int)aiStack_3c + iVar5 + 8) =
               *(int *)((int)aiStack_3c + iVar5 + 8) + in_stack_00000020 * iVar3;
          iVar5 = iVar6;
        } while (iVar6 < iVar2);
      }
      g_MixBufferReadIndex = g_MixBufferReadIndex - iVar3;
      g_MixBufferWriteIndex = g_MixBufferWriteIndex + iVar3;
    }
  }
  return;
}


// Assembly code:
// 005aca90: PUSH EBX
//   Label: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
// 005aca91: PUSH ESI
// 005aca92: PUSH EDI
// 005aca93: PUSH EBP
// 005aca94: SUB ESP,0x5c
// 005aca97: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005aca9e: JLE 0x005acd4b
//   XREF to: 005acd4b (CONDITIONAL_JUMP)
// 005acaa4: MOV ESI,dword ptr [ESP + 0x78]
//   Label: LAB_005acaa4
//   XREF to: Stack[0xc] (READ)
// 005acaa8: TEST ESI,ESI
// 005acaaa: JLE 0x005acac9
//   XREF to: 005acac9 (CONDITIONAL_JUMP)
// 005acaac: LEA EDX,[ESI*0x4 + 0x0]
// 005acab3: XOR EAX,EAX
// 005acab5: CMP dword ptr [EAX + 0x3f692b0],0x0
//   Label: LAB_005acab5
//   XREF to: 03f692b0 (READ)
//   XREF to: 03f692b4 (READ)
// 005acabc: JZ 0x005acd9b
//   XREF to: 005acd9b (CONDITIONAL_JUMP)
// 005acac2: ADD EAX,0x4
// 005acac5: CMP EAX,EDX
// 005acac7: JL 0x005acab5
//   XREF to: 005acab5 (CONDITIONAL_JUMP)
// 005acac9: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_005acac9
//   XREF to: Stack[0x8] (READ)
// 005acacd: CMP EAX,dword ptr [0x00681b14]
//   XREF to: 00681b14 (READ)
// 005acad3: JNZ 0x005acd9b
//   XREF to: 005acd9b (CONDITIONAL_JUMP)
// 005acad9: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 005acadd: CMP EAX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005acae3: JNZ 0x005acd9b
//   XREF to: 005acd9b (CONDITIONAL_JUMP)
// 005acae9: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x10] (READ)
// 005acaed: CMP EAX,dword ptr [0x00681b1c]
//   XREF to: 00681b1c (READ)
// 005acaf3: JNZ 0x005acd9b
//   XREF to: 005acd9b (CONDITIONAL_JUMP)
// 005acaf9: CALL sound_sndmain.cpp_FUN_005a5530
//   XREF to: 005a5530 (UNCONDITIONAL_CALL)
// 005acafe: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 005acb02: XOR EAX,EAX
// 005acb04: TEST ECX,ECX
// 005acb06: JLE 0x005acb20
//   XREF to: 005acb20 (CONDITIONAL_JUMP)
// 005acb08: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 005acb0c: INC EAX
//   Label: LAB_005acb0c
// 005acb0d: MOV ESI,dword ptr [EDX]
// 005acb0f: MOV dword ptr [ESP + EAX*0x4 + 0x28],ESI
//   XREF to: Stack[-0x40] (DATA)
// 005acb13: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 005acb17: ADD EDX,0x4
// 005acb1a: CMP EAX,ESI
// 005acb1c: JL 0x005acb0c
//   XREF to: 005acb0c (CONDITIONAL_JUMP)
// 005acb1e: MOV EAX,EAX
// 005acb20: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_005acb20
//   XREF to: Stack[0xc] (READ)
// 005acb24: SHL EAX,0x2
// 005acb27: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005acb2b: MOV EAX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005acb30: ADD EAX,0x4a00
//   XREF to: 03f624a4 (PARAM)
// 005acb35: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 03f624a4 (DATA)
// 005acb39: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 03f624a4 (DATA)
// 005acb3d: CMP dword ptr [ESP + 0x80],0x0
//   Label: LAB_005acb3d
//   XREF to: Stack[0x14] (READ)
// 005acb45: JLE 0x005acd9b
//   XREF to: 005acd9b (CONDITIONAL_JUMP)
// 005acb4b: CMP dword ptr [0x03f69278],0x1
//   XREF to: 03f69278 (READ)
// 005acb52: JGE 0x005accb3
//   XREF to: 005accb3 (CONDITIONAL_JUMP)
// 005acb58: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005acb5f: JLE 0x005acd73
//   XREF to: 005acd73 (CONDITIONAL_JUMP)
// 005acb65: CMP dword ptr [0x03f69278],0x0
//   Label: LAB_005acb65
//   XREF to: 03f69278 (READ)
// 005acb6c: JLE 0x005acb91
//   XREF to: 005acb91 (CONDITIONAL_JUMP)
// 005acb6e: MOV ESI,0x64fbcf
//   XREF to: 0064fbcf (DATA)
// 005acb73: MOV EDI,0x4e2
// 005acb78: PUSH 0x64fbe4
//   XREF to: 0064fbe4 (DATA)
// 005acb7d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005acb83: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005acb89: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005acb8e: ADD ESP,0x4
// 005acb91: MOV ESI,dword ptr [0x03f69280]
//   Label: LAB_005acb91
//   XREF to: 03f69280 (READ)
// 005acb97: MOV EBP,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005acb9d: XOR EDI,EDI
// 005acb9f: SHL ESI,0x2
// 005acba2: TEST EBP,EBP
// 005acba4: JLE 0x005acc01
//   XREF to: 005acc01 (CONDITIONAL_JUMP)
// 005acba6: XOR EBX,EBX
// 005acba8: MOV EAX,[0x03f69284]
//   Label: LAB_005acba8
//   XREF to: 03f69284 (READ)
// 005acbad: DEC EAX
// 005acbae: IMUL EAX,ESI
// 005acbb1: MOV EDX,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005acbb7: SHL EDX,0x2
// 005acbba: PUSH EAX
// 005acbbb: MOV EAX,dword ptr [EBX + 0x3f692b0]
//   XREF to: 03f692b0 (READ)
//   XREF to: 03f692b4 (READ)
// 005acbc1: ADD EDX,EAX
// 005acbc3: PUSH EDX
// 005acbc4: PUSH EAX
// 005acbc5: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005acbca: MOV EAX,[0x03f69284]
//   XREF to: 03f69284 (READ)
// 005acbcf: MOV EDX,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005acbd5: DEC EAX
// 005acbd6: IMUL EAX,EDX
// 005acbd9: ADD ESP,0xc
// 005acbdc: PUSH ESI
// 005acbdd: SHL EAX,0x2
// 005acbe0: MOV EDX,dword ptr [EBX + 0x3f692b0]
//   XREF to: 03f692b0 (READ)
// 005acbe6: PUSH 0x0
// 005acbe8: ADD EAX,EDX
// 005acbea: PUSH EAX
// 005acbeb: ADD EBX,0x4
// 005acbee: INC EDI
// 005acbef: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005acbf4: MOV ECX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005acbfa: ADD ESP,0xc
// 005acbfd: CMP EDI,ECX
// 005acbff: JL 0x005acba8
//   XREF to: 005acba8 (CONDITIONAL_JUMP)
// 005acc01: MOV EAX,[0x03f69280]
//   Label: LAB_005acc01
//   XREF to: 03f69280 (READ)
// 005acc06: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005acc0a: MOV EAX,[0x00681b18]
//   XREF to: 00681b18 (READ)
// 005acc0f: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005acc13: MOV EAX,[0x00681b1c]
//   XREF to: 00681b1c (READ)
// 005acc18: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x48] (READ)
// 005acc1c: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005acc20: TEST EBX,EBX
// 005acc22: JLE 0x005acc3a
//   XREF to: 005acc3a (CONDITIONAL_JUMP)
// 005acc24: SHL EBX,0x2
// 005acc27: XOR EAX,EAX
// 005acc29: ADD EAX,0x4
//   Label: LAB_005acc29
// 005acc2c: MOV EDX,dword ptr [EAX + 0x3f692ac]
//   XREF to: 03f692b0 (READ)
//   XREF to: 03f692b4 (READ)
// 005acc32: MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX
//   XREF to: Stack[-0x6c] (DATA)
// 005acc36: CMP EAX,EBX
// 005acc38: JL 0x005acc29
//   XREF to: 005acc29 (CONDITIONAL_JUMP)
// 005acc3a: FILD dword ptr [0x03f69280]
//   Label: LAB_005acc3a
//   XREF to: 03f69280 (READ)
// 005acc40: FILD dword ptr [0x00681b1c]
//   XREF to: 00681b1c (READ)
// 005acc46: FDIVP
// 005acc48: MOV EBX,0x3f5daa4
//   XREF to: 03f5daa4 (PARAM)
// 005acc4d: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 005acc51: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (WRITE)
// 005acc55: PUSH dword ptr [ESP + 0x58]
//   Label: LAB_005acc55
//   XREF to: Stack[-0x14] (READ)
// 005acc59: PUSH EBX
//   XREF to: 03f5daa4 (DATA)
//   XREF to: 03f5dbcc (DATA)
// 005acc5a: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005acc5f: ADD EBX,0x128
//   XREF to: 03f5dbcc (PARAM)
// 005acc65: ADD ESP,0x8
// 005acc68: CMP EBX,ESI
// 005acc6a: JNZ 0x005acc55
//   XREF to: 005acc55 (CONDITIONAL_JUMP)
// 005acc6c: MOV EBX,0x3f5daa4
//   XREF to: 03f5daa4 (PARAM)
// 005acc71: SUB ESP,0x2c
//   Label: LAB_005acc71
// 005acc74: MOV EDI,ESP
// 005acc76: MOV ECX,0xb
// 005acc7b: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x6c] (DATA)
// 005acc7f: PUSH EBX
//   XREF to: 03f5daa4 (DATA)
//   XREF to: 03f5dbcc (DATA)
// 005acc80: MOVSD.REP ES:EDI,ESI
// 005acc82: CALL sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0
//   XREF to: 005a75e0 (UNCONDITIONAL_CALL)
// 005acc87: ADD ESP,0x30
// 005acc8a: ADD EBX,0x128
// 005acc90: CMP EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x18] (READ)
// 005acc94: JNZ 0x005acc71
//   XREF to: 005acc71 (CONDITIONAL_JUMP)
// 005acc96: MOV EAX,[0x03f69280]
//   XREF to: 03f69280 (READ)
// 005acc9b: MOV [0x03f69278],EAX
//   XREF to: 03f69278 (WRITE)
// 005acca0: MOV EAX,[0x03f69320]
//   XREF to: 03f69320 (READ)
// 005acca5: XOR EBP,EBP
// 005acca7: INC EAX
// 005acca8: MOV dword ptr [0x03f6927c],EBP
//   XREF to: 03f6927c (WRITE)
// 005accae: MOV [0x03f69320],EAX
//   XREF to: 03f69320 (WRITE)
// 005accb3: MOV EDX,dword ptr [ESP + 0x80]
//   Label: LAB_005accb3
//   XREF to: Stack[0x14] (READ)
// 005accba: MOV ESI,dword ptr [0x03f69278]
//   XREF to: 03f69278 (READ)
// 005accc0: CMP ESI,EDX
// 005accc2: JLE 0x005accc6
//   XREF to: 005accc6 (CONDITIONAL_JUMP)
// 005accc4: MOV ESI,EDX
// 005accc6: CMP dword ptr [ESP + 0x78],0x0
//   Label: LAB_005accc6
//   XREF to: Stack[0xc] (READ)
// 005acccb: JLE 0x005acd1a
//   XREF to: 005acd1a (CONDITIONAL_JUMP)
// 005acccd: MOV EDI,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x18] (READ)
// 005accd4: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 005accd8: XOR EBX,EBX
// 005accda: IMUL EDI,ESI
// 005accdd: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_005accdd
//   XREF to: Stack[0x18] (READ)
// 005acce4: PUSH EAX
// 005acce5: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 005acce9: PUSH ESI
// 005accea: MOV ECX,dword ptr [ESP + EBX*0x1 + 0x34]
// 005accee: MOV EAX,[0x03f6927c]
//   XREF to: 03f6927c (READ)
// 005accf3: PUSH EDX
// 005accf4: SHL EAX,0x2
// 005accf7: MOV EDX,dword ptr [EBX + 0x3f692b0]
//   XREF to: 03f692b0 (READ)
//   XREF to: 03f692b4 (READ)
// 005accfd: PUSH ECX
// 005accfe: ADD EAX,EDX
// 005acd00: PUSH EAX
// 005acd01: CALL sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80
//   XREF to: 005a5b80 (UNCONDITIONAL_CALL)
// 005acd06: ADD ESP,0x14
// 005acd09: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x2c]
// 005acd0d: ADD EBX,0x4
// 005acd10: ADD EAX,EDI
// 005acd12: MOV dword ptr [ESP + EBX*0x1 + 0x28],EAX
// 005acd16: CMP EBX,EBP
// 005acd18: JL 0x005accdd
//   XREF to: 005accdd (CONDITIONAL_JUMP)
// 005acd1a: MOV EBX,dword ptr [ESP + 0x80]
//   Label: LAB_005acd1a
//   XREF to: Stack[0x14] (READ)
// 005acd21: MOV EDI,dword ptr [0x03f69278]
//   XREF to: 03f69278 (READ)
// 005acd27: MOV EBP,dword ptr [0x03f6927c]
//   XREF to: 03f6927c (READ)
// 005acd2d: SUB EDI,ESI
// 005acd2f: ADD EBP,ESI
// 005acd31: SUB EBX,ESI
// 005acd33: MOV dword ptr [0x03f69278],EDI
//   XREF to: 03f69278 (WRITE)
// 005acd39: MOV dword ptr [0x03f6927c],EBP
//   XREF to: 03f6927c (WRITE)
// 005acd3f: MOV dword ptr [ESP + 0x80],EBX
//   XREF to: Stack[0x14] (WRITE)
// 005acd46: JMP 0x005acb3d
//   XREF to: 005acb3d (UNCONDITIONAL_JUMP)
// 005acd4b: MOV ECX,0x65101f
//   Label: LAB_005acd4b
//   XREF to: 0065101f (PARAM)
// 005acd50: MOV EBX,0x16ce
// 005acd55: PUSH 0x651034
//   XREF to: 00651034 (DATA)
// 005acd5a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005acd60: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005acd66: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005acd6b: ADD ESP,0x4
// 005acd6e: JMP 0x005acaa4
//   XREF to: 005acaa4 (UNCONDITIONAL_JUMP)
// 005acd73: MOV EDX,0x64fb9a
//   Label: LAB_005acd73
//   XREF to: 0064fb9a (PARAM)
// 005acd78: MOV ECX,0x4de
// 005acd7d: PUSH 0x64fbaf
//   XREF to: 0064fbaf (DATA)
// 005acd82: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005acd88: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005acd8e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005acd93: ADD ESP,0x4
// 005acd96: JMP 0x005acb65
//   XREF to: 005acb65 (UNCONDITIONAL_JUMP)
// 005acd9b: ADD ESP,0x5c
//   Label: LAB_005acd9b
// 005acd9e: POP EBP
// 005acd9f: POP EDI
// 005acda0: POP ESI
// 005acda1: POP EBX
// 005acda2: RET
