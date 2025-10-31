// Name: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0
// Address: 005ecac0
// Address Range: [[005ecac0, 005ecb99]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0(void)
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_006576b4
//   TerminatedCString s_wincore_wddvmem_cpp_006576cb
//   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_006576e2
//   TerminatedCString s_wincore_wddvmem_cpp_0065770e
//   TerminatedCString s_wincore_wddvmem_cpp_00657725
//   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_0065773c
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void* g_BackBuffer
//   void* g_SoftwareZBuffer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   void* g_SoftwareFrameBuffer
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005ecac0(void)

{
  g_BackBuffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                                  (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowWidth * g_WindowHeight,"..\\wincore\\wddvmem.cpp",0xe9);
  if (g_BackBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0xea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_SoftwareFrameBuffer =
       shape_memdbg_cpp_debugMalloc_FUN_0050f250
                 (g_WindowWidth * g_WindowHeight * 4 + 0x40,"..\\wincore\\wddvmem.cpp",0xee);
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
    return;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 0xef;
  core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of Z buffer memory");
  g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
  return;
}


// Assembly code:
// 005ecac0: PUSH EDI
//   Label: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0
// 005ecac1: PUSH EBP
// 005ecac2: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005ecac8: IMUL ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ecacf: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005ecad4: MOV EDX,EAX
// 005ecad6: SAR EDX,0x1f
// 005ecad9: SHL EDX,0x3
// 005ecadc: SBB EAX,EDX
// 005ecade: SAR EAX,0x3
// 005ecae1: IMUL EAX,ECX
// 005ecae4: PUSH 0xe9
// 005ecae9: PUSH 0x6576b4
//   XREF to: 006576b4 (DATA)
// 005ecaee: PUSH EAX
// 005ecaef: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005ecaf4: ADD ESP,0xc
// 005ecaf7: MOV [0x00688010],EAX
//   XREF to: 00688010 (WRITE)
// 005ecafc: TEST EAX,EAX
// 005ecafe: JNZ 0x005ecb25
//   XREF to: 005ecb25 (CONDITIONAL_JUMP)
// 005ecb00: PUSH EBX
// 005ecb01: MOV ECX,0x6576cb
//   XREF to: 006576cb (DATA)
// 005ecb06: MOV EBX,0xea
// 005ecb0b: PUSH 0x6576e2
//   XREF to: 006576e2 (DATA)
// 005ecb10: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005ecb16: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005ecb1c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ecb21: ADD ESP,0x4
// 005ecb24: POP EBX
// 005ecb25: MOV EAX,[0x00679394]
//   Label: LAB_005ecb25
//   XREF to: 00679394 (READ)
// 005ecb2a: IMUL EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ecb31: PUSH 0xee
// 005ecb36: SHL EAX,0x2
// 005ecb39: PUSH 0x65770e
//   XREF to: 0065770e (DATA)
// 005ecb3e: ADD EAX,0x40
// 005ecb41: PUSH EAX
// 005ecb42: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005ecb47: ADD ESP,0xc
// 005ecb4a: MOV [0x03f95930],EAX
//   XREF to: 03f95930 (WRITE)
// 005ecb4f: TEST EAX,EAX
// 005ecb51: JZ 0x005ecb65
//   XREF to: 005ecb65 (CONDITIONAL_JUMP)
// 005ecb53: MOV EAX,[0x03f95930]
//   XREF to: 03f95930 (READ)
// 005ecb58: ADD EAX,0x10
// 005ecb5b: AND AL,0xf0
// 005ecb5d: MOV [0x0077262c],EAX
//   XREF to: 0077262c (WRITE)
// 005ecb62: POP EBP
// 005ecb63: POP EDI
// 005ecb64: RET
// 005ecb65: MOV EDI,0x657725
//   Label: LAB_005ecb65
//   XREF to: 00657725 (DATA)
// 005ecb6a: MOV EBP,0xef
// 005ecb6f: PUSH 0x65773c
//   XREF to: 0065773c (DATA)
// 005ecb74: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005ecb7a: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005ecb80: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ecb85: ADD ESP,0x4
// 005ecb88: MOV EAX,[0x03f95930]
//   XREF to: 03f95930 (READ)
// 005ecb8d: ADD EAX,0x10
// 005ecb90: AND AL,0xf0
// 005ecb92: MOV [0x0077262c],EAX
//   XREF to: 0077262c (WRITE)
// 005ecb97: POP EBP
// 005ecb98: POP EDI
// 005ecb99: RET
