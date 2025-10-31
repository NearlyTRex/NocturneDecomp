// Name: sound_sndmain.cpp_FUN_005a59c0
// Address: 005a59c0
// Address Range: [[005a59c0, 005a5a59] [005a5b49, 005a5b70]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a59c0()
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fb9a
//   TerminatedCString s_SfxSlot_kill_must_be_loc_0064fbaf
//   TerminatedCString s_sound_sndmain_cpp_0064fbcf
//   TerminatedCString s_nextMixingBuffer_shouldn_0064fbe4
//   int g_AudioChannels = 0x2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_MixBufferReadIndex
//   int g_MixBufferSize
//   int g_NumMixBuffers
//   void*[8] g_ChannelPrimaryBuffers
//   undefined4 g_ChannelPrimaryBuffers[1]
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a59c0(void)

{
  int *piVar1;
  int iVar2;
  SfxSlot *pSVar3;
  BADSPACEBASE *in_ESP;
  ulong count;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 auStackY_68 [5];
  undefined4 uStackY_54;
  undefined4 uStackY_50;
  undefined4 auStack_3c [8];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar7 = 0;
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
  iVar5 = 0;
  count = g_MixBufferSize * 4;
  if (0 < g_AudioChannels) {
    iVar2 = 0;
    do {
      uStackY_54 = 0x5a5a38;
      crt_string_c_memmove_FUN_005fe5e0
                (*(void **)((int)g_ChannelPrimaryBuffers + iVar2),
                 (void *)(g_MixBufferSize * 4 +
                         (int)*(void **)((int)g_ChannelPrimaryBuffers + iVar2)),
                 (g_NumMixBuffers + -1) * count);
      piVar1 = (int *)((int)g_ChannelPrimaryBuffers + iVar2);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      uStackY_50 = 0x5a5a66;
      crt_memory_c_memset_FUN_005fde40
                ((void *)(*piVar1 + (g_NumMixBuffers + -1) * g_MixBufferSize * 4),0,count);
    } while (iVar5 < g_AudioChannels);
  }
  iStack_1c = g_MixBufferSize;
  iStack_18 = g_AudioChannels;
  iStack_14 = g_AudioSampleRate;
  iVar5 = g_AudioSampleRate;
  if (0 < g_AudioChannels) {
    iVar2 = 0;
    do {
      iVar5 = iVar2 + 4;
      *(undefined4 *)((int)auStack_3c + iVar2) =
           *(undefined4 *)((int)g_ChannelPrimaryBuffers + iVar2);
      iVar2 = iVar5;
    } while (iVar5 < g_AudioChannels * 4);
  }
  pSVar3 = g_SfxSlots;
  do {
    iVar5 = sound_sndmain_cpp_ComputingDelay_FUN_005a7100(iVar5);
    pSVar3 = pSVar3 + 1;
  } while (pSVar3 != (SfxSlot *)&g_SfxLastSlot);
  pSVar3 = g_SfxSlots;
  do {
    puVar4 = auStack_3c;
    puVar6 = auStackY_68;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    sound_sndmain_cpp_UnknownPlayOrUseSample_FUN_005a75e0();
    pSVar3 = pSVar3 + 1;
  } while (pSVar3 != (SfxSlot *)&g_SfxLastSlot);
  g_MixBufferReadIndex = g_MixBufferSize;
  g_MixBufferWriteIndex = 0;
  DAT_03f69320 = DAT_03f69320 + 1;
  return;
}


// Assembly code:
// 005a59c0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a59c0
// 005a59c1: PUSH ESI
// 005a59c2: PUSH EDI
// 005a59c3: PUSH EBP
// 005a59c4: SUB ESP,0x30
// 005a59c7: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a59ce: JLE 0x005a5b49
//   XREF to: 005a5b49 (CONDITIONAL_JUMP)
// 005a59d4: CMP dword ptr [0x03f69278],0x0
//   Label: LAB_005a59d4
//   XREF to: 03f69278 (READ)
// 005a59db: JLE 0x005a5a00
//   XREF to: 005a5a00 (CONDITIONAL_JUMP)
// 005a59dd: MOV EDI,0x64fbcf
//   XREF to: 0064fbcf (DATA)
// 005a59e2: MOV EBP,0x4e2
// 005a59e7: PUSH 0x64fbe4
//   XREF to: 0064fbe4 (DATA)
// 005a59ec: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a59f2: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005a59f8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a59fd: ADD ESP,0x4
// 005a5a00: MOV ESI,dword ptr [0x03f69280]
//   Label: LAB_005a5a00
//   XREF to: 03f69280 (READ)
// 005a5a06: MOV EAX,[0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a5a0b: XOR EDI,EDI
// 005a5a0d: SHL ESI,0x2
// 005a5a10: TEST EAX,EAX
// 005a5a12: JLE 0x005a5a80
//   XREF to: 005a5a80 (CONDITIONAL_JUMP)
// 005a5a14: XOR EBX,EBX
// 005a5a16: MOV EAX,[0x03f69284]
//   Label: LAB_005a5a16
//   XREF to: 03f69284 (READ)
// 005a5a1b: DEC EAX
// 005a5a1c: IMUL EAX,ESI
// 005a5a1f: MOV EDX,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005a5a25: SHL EDX,0x2
// 005a5a28: PUSH EAX
// 005a5a29: MOV EAX,dword ptr [EBX + 0x3f692b0]
//   XREF to: 03f692b0 (READ)
//   XREF to: 03f692b4 (DATA)
// 005a5a2f: ADD EDX,EAX
// 005a5a31: PUSH EDX
// 005a5a32: PUSH EAX
// 005a5a33: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005a5a38: MOV EAX,[0x03f69284]
//   XREF to: 03f69284 (READ)
// 005a5a3d: MOV EDX,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005a5a43: DEC EAX
// 005a5a44: IMUL EAX,EDX
// 005a5a47: ADD ESP,0xc
// 005a5a4a: LEA EDX,[EAX*0x4 + 0x0]
// 005a5a51: PUSH ESI
// 005a5a52: MOV EAX,dword ptr [EBX + 0x3f692b0]
//   XREF to: 03f692b0 (READ)
//   XREF to: 03f692b4 (DATA)
// 005a5a58: PUSH 0x0
// 005a5b49: MOV ECX,0x64fb9a
//   Label: LAB_005a5b49
//   XREF to: 0064fb9a (DATA)
// 005a5b4e: MOV EBX,0x4de
// 005a5b53: PUSH 0x64fbaf
//   XREF to: 0064fbaf (DATA)
// 005a5b58: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a5b5e: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a5b64: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a5b69: ADD ESP,0x4
// 005a5b6c: JMP 0x005a59d4
//   XREF to: 005a59d4 (UNCONDITIONAL_JUMP)
