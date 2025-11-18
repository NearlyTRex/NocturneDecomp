// Name: sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
// Address: 005a5900
// Address Range: [[005a5900, 005a59b9]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_freeMixBuffers_FUN_005a5900(void)
// Cross-references:
//   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 (005ab130) at 005ab157 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fb5b
//   TerminatedCString s_sound_sndmain_cpp_0064fb70
//   TerminatedCString s_sound_sndmain_cpp_0064fb85
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
//   undefined4 g_ChannelSecondaryBuffersB[1]
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005a5900(void)

{
  int iVar1;
  int iVar2;
  
  if (g_PrimaryMixBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_PrimaryMixBuffer,"..\\sound\\sndmain.cpp",0x4bc);
    g_PrimaryMixBuffer = (void *)0x0;
  }
  if (g_SecondaryMixBuffer != (float *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_SecondaryMixBuffer,"..\\sound\\sndmain.cpp",0x4c0)
    ;
    g_SecondaryMixBuffer = (float *)0x0;
  }
  if (g_TertiaryMixBuffer != (float *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_TertiaryMixBuffer,"..\\sound\\sndmain.cpp",0x4c4);
    g_TertiaryMixBuffer = (float *)0x0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(undefined4 *)((int)g_ChannelTertiaryBuffers + iVar2) = 0;
    *(undefined4 *)((int)g_ChannelSecondaryBuffersA + iVar2) = 0;
    *(undefined4 *)((int)g_ChannelSecondaryBuffersB + iVar2) = 0;
    *(undefined4 *)((int)g_ChannelPrimaryBuffers + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  g_NumMixBuffers = 0;
  g_MixBufferReadIndex = 0;
  g_MixBufferWriteIndex = 0;
  g_MixBufferSize = 0;
  return;
}


// Assembly code:
// 005a5900: PUSH EBX
//   Label: sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
// 005a5901: PUSH EBP
// 005a5902: MOV EDX,dword ptr [0x03f692ac]
//   XREF to: 03f692ac (READ)
// 005a5908: TEST EDX,EDX
// 005a590a: JNZ 0x005a597d
//   XREF to: 005a597d (CONDITIONAL_JUMP)
// 005a590c: PUSH ESI
//   Label: LAB_005a590c
// 005a590d: MOV ESI,dword ptr [0x03f692d0]
//   XREF to: 03f692d0 (READ)
// 005a5913: TEST ESI,ESI
// 005a5915: JZ 0x005a5932
//   XREF to: 005a5932 (CONDITIONAL_JUMP)
// 005a5917: PUSH 0x4c0
// 005a591c: PUSH 0x64fb70
//   XREF to: 0064fb70 (DATA)
// 005a5921: PUSH ESI
// 005a5922: XOR EBP,EBP
// 005a5924: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005a5929: ADD ESP,0xc
// 005a592c: MOV dword ptr [0x03f692d0],EBP
//   XREF to: 03f692d0 (WRITE)
// 005a5932: MOV EAX,[0x03f69288]
//   Label: LAB_005a5932
//   XREF to: 03f69288 (READ)
// 005a5937: TEST EAX,EAX
// 005a5939: JNZ 0x005a599d
//   XREF to: 005a599d (CONDITIONAL_JUMP)
// 005a593b: XOR EAX,EAX
//   Label: LAB_005a593b
// 005a593d: XOR EDX,EDX
// 005a593f: POP ESI
// 005a5940: ADD EAX,0x4
//   Label: LAB_005a5940
// 005a5943: MOV dword ptr [EAX + 0x3f69288],EDX
//   XREF to: 03f6928c (WRITE)
//   XREF to: 03f69290 (WRITE)
// 005a5949: MOV dword ptr [EAX + 0x3f692d0],EDX
//   XREF to: 03f692d4 (WRITE)
//   XREF to: 03f692d8 (WRITE)
// 005a594f: MOV dword ptr [EAX + 0x3f692f0],EDX
//   XREF to: 03f692f4 (WRITE)
//   XREF to: 03f692f8 (WRITE)
// 005a5955: MOV dword ptr [EAX + 0x3f692ac],EDX
//   XREF to: 03f692b0 (WRITE)
//   XREF to: 03f692b4 (WRITE)
// 005a595b: CMP EAX,0x20
// 005a595e: JNZ 0x005a5940
//   XREF to: 005a5940 (CONDITIONAL_JUMP)
// 005a5960: XOR EBX,EBX
// 005a5962: MOV dword ptr [0x03f69284],EBX
//   XREF to: 03f69284 (WRITE)
// 005a5968: MOV dword ptr [0x03f69278],EBX
//   XREF to: 03f69278 (WRITE)
// 005a596e: MOV dword ptr [0x03f6927c],EBX
//   XREF to: 03f6927c (WRITE)
// 005a5974: MOV dword ptr [0x03f69280],EBX
//   XREF to: 03f69280 (WRITE)
// 005a597a: POP EBP
// 005a597b: POP EBX
// 005a597c: RET
// 005a597d: PUSH 0x4bc
//   Label: LAB_005a597d
// 005a5982: PUSH 0x64fb5b
//   XREF to: 0064fb5b (DATA)
// 005a5987: PUSH EDX
// 005a5988: XOR EBX,EBX
// 005a598a: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005a598f: ADD ESP,0xc
// 005a5992: MOV dword ptr [0x03f692ac],EBX
//   XREF to: 03f692ac (WRITE)
// 005a5998: JMP 0x005a590c
//   XREF to: 005a590c (UNCONDITIONAL_JUMP)
// 005a599d: PUSH 0x4c4
//   Label: LAB_005a599d
// 005a59a2: PUSH 0x64fb85
//   XREF to: 0064fb85 (DATA)
// 005a59a7: PUSH EAX
// 005a59a8: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005a59ad: XOR ECX,ECX
// 005a59af: ADD ESP,0xc
// 005a59b2: MOV dword ptr [0x03f69288],ECX
//   XREF to: 03f69288 (WRITE)
// 005a59b8: JMP 0x005a593b
//   XREF to: 005a593b (UNCONDITIONAL_JUMP)
