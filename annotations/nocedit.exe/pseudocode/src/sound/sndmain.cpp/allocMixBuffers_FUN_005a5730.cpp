// Name: sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
// Address: 005a5730
// Address Range: [[005a5730, 005a58fe]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_allocMixBuffers_FUN_005a5730(int requested_size, int num_buffers)
// Cross-references:
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 (005ab170) at 005ab1fa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fae7
//   TerminatedCString s_sound_sndmain_cpp_0064fafc
//   TerminatedCString s_sound_sndmain_cpp_0064fb11
//   TerminatedCString s_sound_sndmain_cpp_0064fb26
//   TerminatedCString s_allocMixBuffers_out_of_m_0064fb3b
//   int g_AudioChannelCount = 0x2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_MixBufferReadIndex
//   int g_MixBufferWriteIndex
//   int g_MixBufferSize
//   int g_NumMixBuffers
//   float* g_TertiaryMixBuffer
//   float*[8] g_ChannelTertiaryBuffers
//   undefined4 g_ChannelTertiaryBuffers[1]
//   void* g_PrimaryMixBuffer
//   void*[8] g_ChannelPrimaryBuffers
//   undefined4 g_ChannelPrimaryBuffers[1]
//   float* g_SecondaryMixBuffer
//   float*[8] g_ChannelSecondaryBuffersA
//   undefined4 g_ChannelSecondaryBuffersA[1]
//   float*[8] g_ChannelSecondaryBuffersB
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(int requested_size,int num_buffers)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  g_MixBufferSize = 1;
  g_NumMixBuffers = num_buffers;
  if (1 < requested_size) {
    do {
      g_MixBufferSize = g_MixBufferSize * 2;
    } while (g_MixBufferSize < requested_size);
  }
  iVar4 = g_MixBufferSize * 4;
  g_MixBufferReadIndex = 0;
  g_MixBufferWriteIndex = 0;
  g_PrimaryMixBuffer =
       shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_PrimaryMixBuffer,num_buffers * iVar4 * g_AudioChannelCount,
                  "..\\sound\\sndmain.cpp",0x4a2);
  g_SecondaryMixBuffer =
       (float *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                          (g_SecondaryMixBuffer,g_AudioChannelCount * iVar4 * 2,
                           "..\\sound\\sndmain.cpp",0x4a3);
  g_TertiaryMixBuffer =
       (float *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                          (g_TertiaryMixBuffer,iVar4 * g_AudioChannelCount,
                           "..\\sound\\sndmain.cpp",0x4a4);
  if (((g_PrimaryMixBuffer == (void *)0x0) || (g_SecondaryMixBuffer == (float *)0x0)) ||
     (g_TertiaryMixBuffer == (float *)0x0)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x4aa;
    core_main_c_displayErrorAndQuit_FUN_00506f10("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < g_AudioChannelCount) {
    iVar3 = 0;
    iVar5 = g_MixBufferSize * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(void **)((int)g_ChannelPrimaryBuffers + iVar2) =
           (void *)((int)g_PrimaryMixBuffer + g_MixBufferSize * iVar4 * g_NumMixBuffers * 4);
      *(int *)((int)g_ChannelTertiaryBuffers + iVar2) = (int)g_TertiaryMixBuffer + iVar3;
      pfVar1 = g_SecondaryMixBuffer;
      *(int *)((int)g_ChannelSecondaryBuffersA + iVar2) = (int)g_SecondaryMixBuffer + iVar6;
      *(int *)((int)g_ChannelSecondaryBuffersB + iVar2) = (int)pfVar1 + iVar5;
      iVar5 = iVar5 + g_MixBufferSize * 8;
      iVar6 = iVar6 + g_MixBufferSize * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + g_MixBufferSize * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < g_AudioChannelCount);
  }
  return;
}


// Assembly code:
// 005a5730: PUSH EBX
//   Label: sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
// 005a5731: PUSH ESI
// 005a5732: PUSH EBP
// 005a5733: SUB ESP,0x10
// 005a5736: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005a573a: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005a573e: MOV EBX,0x1
// 005a5743: MOV dword ptr [0x03f69284],EDX
//   XREF to: 03f69284 (WRITE)
// 005a5749: CMP EAX,EBX
// 005a574b: JLE 0x005a5760
//   XREF to: 005a5760 (CONDITIONAL_JUMP)
// 005a574d: ADD EBX,EBX
//   Label: LAB_005a574d
// 005a574f: CMP EBX,EAX
// 005a5751: JL 0x005a574d
//   XREF to: 005a574d (CONDITIONAL_JUMP)
// 005a5753: LEA EAX,[EAX]
// 005a5759: LEA EDX,[EDX]
// 005a575f: NOP
// 005a5760: MOV EAX,[0x03f69284]
//   Label: LAB_005a5760
//   XREF to: 03f69284 (READ)
// 005a5765: LEA ESI,[EBX*0x4 + 0x0]
// 005a576c: IMUL EAX,ESI
// 005a576f: IMUL EAX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a5776: PUSH 0x4a2
// 005a577b: PUSH 0x64fae7
//   XREF to: 0064fae7 (DATA)
// 005a5780: XOR EDX,EDX
// 005a5782: PUSH EAX
// 005a5783: MOV EBP,dword ptr [0x03f692ac]
//   XREF to: 03f692ac (READ)
// 005a5789: MOV dword ptr [0x03f69278],EDX
//   XREF to: 03f69278 (WRITE)
// 005a578f: PUSH EBP
// 005a5790: MOV dword ptr [0x03f6927c],EDX
//   XREF to: 03f6927c (WRITE)
// 005a5796: MOV dword ptr [0x03f69280],EBX
//   XREF to: 03f69280 (WRITE)
// 005a579c: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005a57a1: MOV [0x03f692ac],EAX
//   XREF to: 03f692ac (WRITE)
// 005a57a6: MOV EAX,[0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a57ab: IMUL EAX,ESI
// 005a57ae: ADD ESP,0x10
// 005a57b1: PUSH 0x4a3
// 005a57b6: PUSH 0x64fafc
//   XREF to: 0064fafc (DATA)
// 005a57bb: ADD EAX,EAX
// 005a57bd: PUSH EAX
// 005a57be: MOV EAX,[0x03f692d0]
//   XREF to: 03f692d0 (READ)
// 005a57c3: PUSH EAX
// 005a57c4: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005a57c9: IMUL ESI,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a57d0: ADD ESP,0x10
// 005a57d3: PUSH 0x4a4
// 005a57d8: PUSH 0x64fb11
//   XREF to: 0064fb11 (DATA)
// 005a57dd: PUSH ESI
// 005a57de: MOV ECX,dword ptr [0x03f69288]
//   XREF to: 03f69288 (READ)
// 005a57e4: PUSH ECX
// 005a57e5: MOV [0x03f692d0],EAX
//   XREF to: 03f692d0 (WRITE)
// 005a57ea: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005a57ef: MOV EBX,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005a57f5: MOV ESI,dword ptr [0x03f692ac]
//   XREF to: 03f692ac (READ)
// 005a57fb: ADD ESP,0x10
// 005a57fe: MOV [0x03f69288],EAX
//   XREF to: 03f69288 (WRITE)
// 005a5803: TEST ESI,ESI
// 005a5805: JNZ 0x005a58e5
//   XREF to: 005a58e5 (CONDITIONAL_JUMP)
// 005a580b: MOV EBP,0x64fb26
//   Label: LAB_005a580b
//   XREF to: 0064fb26 (DATA)
// 005a5810: MOV EAX,0x4aa
// 005a5815: PUSH 0x64fb3b
//   XREF to: 0064fb3b (DATA)
// 005a581a: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005a5820: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005a5825: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a582a: ADD ESP,0x4
// 005a582d: MOV ECX,dword ptr [0x00681b18]
//   Label: LAB_005a582d
//   XREF to: 00681b18 (READ)
// 005a5833: MOV EBX,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005a5839: XOR EDX,EDX
// 005a583b: TEST ECX,ECX
// 005a583d: JLE 0x005a58d8
//   XREF to: 005a58d8 (CONDITIONAL_JUMP)
// 005a5843: PUSH EDI
// 005a5844: LEA EAX,[EBX*0x8 + 0x0]
// 005a584b: IMUL ECX,EBX,0x0
// 005a584e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005a5852: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005a5856: LEA EAX,[EBX*0x4 + 0x0]
// 005a585d: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005a5861: LEA ESI,[ECX + EAX*0x1]
// 005a5864: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a5868: MOV EDI,ECX
// 005a586a: XOR EAX,EAX
// 005a586c: MOV EBP,EBX
//   Label: LAB_005a586c
// 005a586e: IMUL EBP,EDX
// 005a5871: IMUL EBP,dword ptr [0x03f69284]
//   XREF to: 03f69284 (READ)
// 005a5878: SHL EBP,0x2
// 005a587b: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 005a587f: MOV EBP,dword ptr [0x03f692ac]
//   XREF to: 03f692ac (READ)
// 005a5885: ADD EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005a5889: MOV dword ptr [EAX + 0x3f692b0],EBP
//   XREF to: 03f692b0 (WRITE)
//   XREF to: 03f692b4 (WRITE)
// 005a588f: MOV EBP,dword ptr [0x03f69288]
//   XREF to: 03f69288 (READ)
// 005a5895: ADD EBP,ECX
// 005a5897: MOV dword ptr [EAX + 0x3f6928c],EBP
//   XREF to: 03f6928c (WRITE)
//   XREF to: 03f69290 (WRITE)
// 005a589d: MOV EBP,dword ptr [0x03f692d0]
//   XREF to: 03f692d0 (READ)
// 005a58a3: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 005a58a7: ADD EBP,EDI
// 005a58a9: MOV dword ptr [EAX + 0x3f692d4],EBP
//   XREF to: 03f692d4 (WRITE)
//   XREF to: 03f692d8 (WRITE)
// 005a58af: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005a58b3: ADD EBP,ESI
// 005a58b5: MOV dword ptr [EAX + 0x3f692f4],EBP
//   XREF to: 03f692f4 (WRITE)
// 005a58bb: ADD ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005a58bf: ADD EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005a58c3: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005a58c7: INC EDX
// 005a58c8: ADD ECX,EBP
// 005a58ca: MOV EBP,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a58d0: ADD EAX,0x4
// 005a58d3: CMP EDX,EBP
// 005a58d5: JL 0x005a586c
//   XREF to: 005a586c (CONDITIONAL_JUMP)
// 005a58d7: POP EDI
// 005a58d8: MOV dword ptr [0x03f69280],EBX
//   Label: LAB_005a58d8
//   XREF to: 03f69280 (WRITE)
// 005a58de: ADD ESP,0x10
// 005a58e1: POP EBP
// 005a58e2: POP ESI
// 005a58e3: POP EBX
// 005a58e4: RET
// 005a58e5: CMP dword ptr [0x03f692d0],0x0
//   Label: LAB_005a58e5
//   XREF to: 03f692d0 (READ)
// 005a58ec: JZ 0x005a580b
//   XREF to: 005a580b (CONDITIONAL_JUMP)
// 005a58f2: TEST EAX,EAX
// 005a58f4: JZ 0x005a580b
//   XREF to: 005a580b (CONDITIONAL_JUMP)
// 005a58fa: JMP 0x005a582d
//   XREF to: 005a582d (UNCONDITIONAL_JUMP)
