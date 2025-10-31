// Name: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
// Address: 005ecc10
// Address Range: [[005ecc10, 005ecd88]]
// Convention: __cdecl
// Signature: int wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10(void)
// Cross-references:
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 00401020 [UNCONDITIONAL_CALL]
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
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown
//   void* g_SoftwareFrameBuffer
//   HWND g_MainWindowHandle
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ddraw.c_DirectDrawCreate
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ecc10(void)

{
  HRESULT HVar1;
  undefined4 uStack00000018;
  
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
  if (g_SoftwareFrameBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0xef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0) {
    (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
    g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
    (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
    g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawObject != (IDirectDraw *)0x0) {
    (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
    (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
    g_DirectDrawObject = (IDirectDraw *)0x0;
  }
  HVar1 = crt_ddraw_c_DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,g_MainWindowHandle,0x11);
  }
  uStack00000018 = 0x5ecd3e;
  wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(g_MainWindowHandle);
  return 1;
}


// Assembly code:
// 005ecc10: PUSH EBX
//   Label: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
// 005ecc11: PUSH ESI
// 005ecc12: PUSH EDI
// 005ecc13: PUSH EBP
// 005ecc14: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005ecc1a: IMUL ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ecc21: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005ecc26: MOV EDX,EAX
// 005ecc28: SAR EDX,0x1f
// 005ecc2b: SHL EDX,0x3
// 005ecc2e: SBB EAX,EDX
// 005ecc30: SAR EAX,0x3
// 005ecc33: IMUL EAX,ECX
// 005ecc36: PUSH 0xe9
// 005ecc3b: PUSH 0x6576b4
//   XREF to: 006576b4 (DATA)
// 005ecc40: PUSH EAX
// 005ecc41: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005ecc46: ADD ESP,0xc
// 005ecc49: MOV [0x00688010],EAX
//   XREF to: 00688010 (WRITE)
// 005ecc4e: TEST EAX,EAX
// 005ecc50: JZ 0x005ecd4b
//   XREF to: 005ecd4b (CONDITIONAL_JUMP)
// 005ecc56: MOV EAX,[0x00679394]
//   Label: LAB_005ecc56
//   XREF to: 00679394 (READ)
// 005ecc5b: IMUL EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ecc62: PUSH 0xee
// 005ecc67: SHL EAX,0x2
// 005ecc6a: PUSH 0x65770e
//   XREF to: 0065770e (DATA)
// 005ecc6f: ADD EAX,0x40
// 005ecc72: PUSH EAX
// 005ecc73: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005ecc78: ADD ESP,0xc
// 005ecc7b: MOV [0x03f95930],EAX
//   XREF to: 03f95930 (WRITE)
// 005ecc80: TEST EAX,EAX
// 005ecc82: JNZ 0x005ecca7
//   XREF to: 005ecca7 (CONDITIONAL_JUMP)
// 005ecc84: MOV EDI,0x657725
//   XREF to: 00657725 (DATA)
// 005ecc89: MOV EBP,0xef
// 005ecc8e: PUSH 0x65773c
//   XREF to: 0065773c (DATA)
// 005ecc93: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005ecc99: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005ecc9f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ecca4: ADD ESP,0x4
// 005ecca7: MOV EAX,[0x03f95930]
//   Label: LAB_005ecca7
//   XREF to: 03f95930 (READ)
// 005eccac: ADD EAX,0x10
// 005eccaf: AND AL,0xf0
// 005eccb1: MOV [0x0077262c],EAX
//   XREF to: 0077262c (WRITE)
// 005eccb6: MOV EAX,[0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005eccbb: TEST EAX,EAX
// 005eccbd: JZ 0x005ecccd
//   XREF to: 005ecccd (CONDITIONAL_JUMP)
// 005eccbf: PUSH EAX
// 005eccc0: MOV EDX,dword ptr [EAX]
// 005eccc2: CALL dword ptr [EDX + 0x8]
// 005eccc5: XOR EDX,EDX
// 005eccc7: MOV dword ptr [0x03f9592c],EDX
//   XREF to: 03f9592c (WRITE)
// 005ecccd: MOV ECX,dword ptr [0x03f95928]
//   Label: LAB_005ecccd
//   XREF to: 03f95928 (READ)
// 005eccd3: TEST ECX,ECX
// 005eccd5: JZ 0x005ecce5
//   XREF to: 005ecce5 (CONDITIONAL_JUMP)
// 005eccd7: PUSH ECX
// 005eccd8: MOV EDX,dword ptr [ECX]
// 005eccda: XOR EBX,EBX
// 005eccdc: CALL dword ptr [EDX + 0x8]
// 005eccdf: MOV dword ptr [0x03f95928],EBX
//   XREF to: 03f95928 (WRITE)
// 005ecce5: MOV ESI,dword ptr [0x03f95924]
//   Label: LAB_005ecce5
//   XREF to: 03f95924 (READ)
// 005ecceb: TEST ESI,ESI
// 005ecced: JZ 0x005eccfd
//   XREF to: 005eccfd (CONDITIONAL_JUMP)
// 005eccef: PUSH ESI
// 005eccf0: MOV EDX,dword ptr [ESI]
// 005eccf2: XOR EDI,EDI
// 005eccf4: CALL dword ptr [EDX + 0x8]
// 005eccf7: MOV dword ptr [0x03f95924],EDI
//   XREF to: 03f95924 (WRITE)
// 005eccfd: MOV EBP,dword ptr [0x03f95920]
//   Label: LAB_005eccfd
//   XREF to: 03f95920 (READ)
// 005ecd03: TEST EBP,EBP
// 005ecd05: JZ 0x005ecd20
//   XREF to: 005ecd20 (CONDITIONAL_JUMP)
// 005ecd07: PUSH EBP
// 005ecd08: MOV EDX,dword ptr [EBP]
// 005ecd0b: CALL dword ptr [EDX + 0x4c]
// 005ecd0e: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ecd13: PUSH EAX
// 005ecd14: MOV EDX,dword ptr [EAX]
// 005ecd16: CALL dword ptr [EDX + 0x8]
// 005ecd19: XOR EAX,EAX
// 005ecd1b: MOV [0x03f95920],EAX
//   XREF to: 03f95920 (WRITE)
// 005ecd20: PUSH 0x0
//   Label: LAB_005ecd20
// 005ecd22: PUSH 0x3f95920
//   XREF to: 03f95920 (DATA)
// 005ecd27: PUSH 0x0
// 005ecd29: CALL crt_ddraw.c_DirectDrawCreate
//   XREF to: 00610ece (UNCONDITIONAL_CALL)
// 005ecd2e: TEST EAX,EAX
// 005ecd30: JZ 0x005ecd73
//   XREF to: 005ecd73 (CONDITIONAL_JUMP)
// 005ecd32: MOV EBX,dword ptr [0x03f98468]
//   Label: LAB_005ecd32
//   XREF to: 03f98468 (READ)
// 005ecd38: PUSH EBX
// 005ecd39: CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
//   XREF to: 005b6750 (UNCONDITIONAL_CALL)
// 005ecd3e: MOV EAX,0x1
// 005ecd43: ADD ESP,0x4
// 005ecd46: POP EBP
// 005ecd47: POP EDI
// 005ecd48: POP ESI
// 005ecd49: POP EBX
// 005ecd4a: RET
// 005ecd4b: MOV ECX,0x6576cb
//   Label: LAB_005ecd4b
//   XREF to: 006576cb (PARAM)
// 005ecd50: MOV EBX,0xea
// 005ecd55: PUSH 0x6576e2
//   XREF to: 006576e2 (DATA)
// 005ecd5a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005ecd60: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005ecd66: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ecd6b: ADD ESP,0x4
// 005ecd6e: JMP 0x005ecc56
//   XREF to: 005ecc56 (UNCONDITIONAL_JUMP)
// 005ecd73: PUSH 0x11
//   Label: LAB_005ecd73
// 005ecd75: MOV ECX,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005ecd7b: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ecd80: PUSH ECX
// 005ecd81: MOV EDX,dword ptr [EAX]
// 005ecd83: PUSH EAX
// 005ecd84: CALL dword ptr [EDX + 0x50]
// 005ecd87: JMP 0x005ecd32
//   XREF to: 005ecd32 (UNCONDITIONAL_JUMP)
