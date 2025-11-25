// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
// Address: 005ecef0
// Address Range: [[005ecef0, 005ed29e]]
// Convention: __cdecl
// Signature: int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cc3c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setGameRes_FUN_004dade0 (004dade0) at 004dae0f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 (004daed0) at 004daefb [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507bee [UNCONDITIONAL_CALL]
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 00401047 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 (0051ed60) at 0051ed6f [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0 (005ed4b0) at 005ed571 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 (005ed2a0) at 005ed421 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_videoRestore_FUN_005edc80 (005edc80) at 005edd58 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_006576b4
//   TerminatedCString s_wincore_wddvmem_cpp_006576cb
//   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_006576e2
//   TerminatedCString s_wincore_wddvmem_cpp_0065770e
//   TerminatedCString s_wincore_wddvmem_cpp_00657725
//   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_0065773c
//   TerminatedCString s_wincore_wddvmem_cpp_00657764
//   TerminatedCString s_wincore_wddvmem_cpp_0065777b
//   TerminatedCString s_wincore_wddvmem_cpp_00657792
//   TerminatedCString s_setScreenResolution_Crea_006577a9
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void* g_BackBuffer
//   void* g_SoftwareZBuffer
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown
//   void* g_SoftwareFrameBuffer
//   int g_UseSoftwareRendering
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   engine_2d.c_setupViewportAndClipping_FUN_00401800
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

int __cdecl
wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(int width,int height,int bits_per_pixel)

{
  int iVar1;
  void *pvVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int in_stack_00000010;
  undefined4 uStack00000014;
  DWORD in_stack_0000001c;
  DWORD in_stack_00000020;
  undefined4 uStack00000028;
  DWORD in_stack_00000034;
  DDSCAPS DStack0000006c;
  int in_stack_00000080;
  int in_stack_00000098;
  int in_stack_0000009c;
  DWORD DStack_40;
  DWORD DStack_2c;
  DWORD DStack_18;
  DDSURFACEDESC_union2 DStack_14;
  
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
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  g_BitsPerPixel = bits_per_pixel;
  g_WindowWidth = bits_per_pixel;
  g_UseSoftwareRendering = 0;
  g_WindowHeight = in_stack_00000010;
  if (g_BackBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackBuffer,"..\\wincore\\wddvmem.cpp",0xff);
    g_BackBuffer = (void *)0x0;
  }
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_SoftwareFrameBuffer,"..\\wincore\\wddvmem.cpp",0x107);
    g_SoftwareZBuffer = (void *)0x0;
  }
  g_BackBuffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                                  (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowHeight * g_WindowWidth,"..\\wincore\\wddvmem.cpp",0xe9);
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
  HVar3 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                    (g_DirectDrawObject,in_stack_0000001c,in_stack_00000020,bits_per_pixel);
  if (HVar3 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    HVar3 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                      (g_DirectDrawObject,in_stack_0000001c,in_stack_00000034,0x18);
    if (HVar3 != 0) {
      return 0;
    }
    g_UseSoftwareRendering = 1;
  }
  crt_memory_c_memset_FUN_005fde40(&stack0xffffffbc,0,0x6c);
  DStack_40 = 0x6c;
  uStack00000028 = 0x6218;
  DStack_2c = 2;
  HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                    (g_DirectDrawObject,(DDSURFACEDESC *)&DStack_40,&g_DirectDrawSurface,
                     (IUnknown *)0x0);
  if (HVar3 != 0) {
    DStack_18 = 1;
    DStack_40 = 0x5ed158;
    HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                      (g_DirectDrawObject,(DDSURFACEDESC *)&DStack_2c,&g_DirectDrawSurface,
                       (IUnknown *)0x0);
    if (HVar3 != 0) {
      DStack_2c = 0x5ed17c;
      HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                        (g_DirectDrawObject,(DDSURFACEDESC *)&DStack_18,&g_DirectDrawSurface,
                         (IUnknown *)0x0);
      if (HVar3 != 0) {
        return 0;
      }
    }
  }
  DStack_14.dwMipMapCount = 0x5ed192;
  crt_memory_c_memset_FUN_005fde40(&stack0x00000068,0,4);
  DStack0000006c.dwCaps = 4;
  HVar3 = (*g_DirectDrawSurface->vtable->GetAttachedSurface)
                    (g_DirectDrawSurface,&stack0x0000006c,&g_SoftwareRenderSurface);
  pvVar2 = g_BackBuffer;
  iVar8 = g_WindowHeight;
  if (HVar3 == 0) {
    iVar5 = 0;
    if (0 < g_WindowHeight) {
      iVar6 = g_BitsPerPixel >> 0x1f;
      iVar1 = g_BitsPerPixel + iVar6 * -8;
      in_stack_00000080 = g_WindowWidth * 4;
      iVar7 = 0;
      iVar4 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar4) =
             (void *)(g_WindowWidth * iVar5 * ((int)(iVar1 - (uint)(iVar6 << 2 < 0)) >> 3) +
                     (int)pvVar2);
        *(int *)((int)g_ZBufferScanlineArray + iVar4) = (int)g_SoftwareZBuffer + iVar7;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + in_stack_00000080;
        iVar4 = iVar4 + 4;
      } while (iVar5 < iVar8);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401800
              (0,0,in_stack_00000098 + -1,in_stack_0000009c + -1);
    iVar8 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
    do {
      uStack00000014 = 0x5ed25a;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      iVar8 = iVar8 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (iVar8 < 3);
    return 1;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 0x1d7;
  core_main_c_displayErrorAndQuit_FUN_00506f10("setScreenResolution - Create back buffer failed!");
  return 0;
}


// Assembly code:
// 005ecef0: PUSH EBX
//   Label: wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
// 005ecef1: PUSH ESI
// 005ecef2: PUSH EDI
// 005ecef3: PUSH EBP
// 005ecef4: SUB ESP,0x74
// 005ecef7: MOV EBX,dword ptr [ESP + 0x90]
//   XREF to: Stack[0xc] (READ)
// 005ecefe: MOV EDX,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ecf04: TEST EDX,EDX
// 005ecf06: JNZ 0x005ed0af
//   XREF to: 005ed0af (CONDITIONAL_JUMP)
// 005ecf0c: MOV ESI,dword ptr [0x03f95928]
//   Label: LAB_005ecf0c
//   XREF to: 03f95928 (READ)
// 005ecf12: TEST ESI,ESI
// 005ecf14: JZ 0x005ecf24
//   XREF to: 005ecf24 (CONDITIONAL_JUMP)
// 005ecf16: PUSH ESI
// 005ecf17: MOV EDX,dword ptr [ESI]
// 005ecf19: XOR EDI,EDI
// 005ecf1b: CALL dword ptr [EDX + 0x8]
// 005ecf1e: MOV dword ptr [0x03f95928],EDI
//   XREF to: 03f95928 (WRITE)
// 005ecf24: MOV EBP,dword ptr [0x03f95924]
//   Label: LAB_005ecf24
//   XREF to: 03f95924 (READ)
// 005ecf2a: TEST EBP,EBP
// 005ecf2c: JZ 0x005ecf3c
//   XREF to: 005ecf3c (CONDITIONAL_JUMP)
// 005ecf2e: PUSH EBP
// 005ecf2f: MOV EDX,dword ptr [EBP]
// 005ecf32: CALL dword ptr [EDX + 0x8]
// 005ecf35: XOR EAX,EAX
// 005ecf37: MOV [0x03f95924],EAX
//   XREF to: 03f95924 (WRITE)
// 005ecf3c: CMP EBX,0x8
//   Label: LAB_005ecf3c
// 005ecf3f: JZ 0x005ecf4f
//   XREF to: 005ecf4f (CONDITIONAL_JUMP)
// 005ecf41: CMP EBX,0x10
// 005ecf44: JZ 0x005ecf4f
//   XREF to: 005ecf4f (CONDITIONAL_JUMP)
// 005ecf46: CMP EBX,0x20
// 005ecf49: JNZ 0x005ed0a5
//   XREF to: 005ed0a5 (CONDITIONAL_JUMP)
// 005ecf4f: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_005ecf4f
// 005ecf56: MOV ECX,dword ptr [0x00688010]
//   XREF to: 00688010 (READ)
// 005ecf5c: MOV dword ptr [0x0067939c],EBX
//   XREF to: 0067939c (WRITE)
// 005ecf62: XOR EDX,EDX
// 005ecf64: MOV [0x00679394],EAX
//   XREF to: 00679394 (WRITE)
// 005ecf69: MOV EAX,dword ptr [ESP + 0x8c]
// 005ecf70: MOV dword ptr [0x03f9593c],EDX
//   XREF to: 03f9593c (WRITE)
// 005ecf76: MOV [0x00679398],EAX
//   XREF to: 00679398 (WRITE)
// 005ecf7b: TEST ECX,ECX
// 005ecf7d: JZ 0x005ecf9a
//   XREF to: 005ecf9a (CONDITIONAL_JUMP)
// 005ecf7f: PUSH 0xff
// 005ecf84: PUSH 0x657764
//   XREF to: 00657764 (DATA)
// 005ecf89: PUSH ECX
// 005ecf8a: XOR EDI,EDI
// 005ecf8c: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005ecf91: ADD ESP,0xc
// 005ecf94: MOV dword ptr [0x00688010],EDI
//   XREF to: 00688010 (WRITE)
// 005ecf9a: MOV EBP,dword ptr [0x03f95930]
//   Label: LAB_005ecf9a
//   XREF to: 03f95930 (READ)
// 005ecfa0: TEST EBP,EBP
// 005ecfa2: JZ 0x005ecfbf
//   XREF to: 005ecfbf (CONDITIONAL_JUMP)
// 005ecfa4: PUSH 0x107
// 005ecfa9: PUSH 0x65777b
//   XREF to: 0065777b (DATA)
// 005ecfae: PUSH EBP
// 005ecfaf: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005ecfb4: XOR EDX,EDX
// 005ecfb6: ADD ESP,0xc
// 005ecfb9: MOV dword ptr [0x0077262c],EDX
//   XREF to: 0077262c (WRITE)
// 005ecfbf: MOV EAX,[0x00679394]
//   Label: LAB_005ecfbf
//   XREF to: 00679394 (READ)
// 005ecfc4: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ecfca: IMUL ECX,EAX
// 005ecfcd: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005ecfd2: MOV EDX,EAX
// 005ecfd4: SAR EDX,0x1f
// 005ecfd7: SHL EDX,0x3
// 005ecfda: SBB EAX,EDX
// 005ecfdc: SAR EAX,0x3
// 005ecfdf: IMUL EAX,ECX
// 005ecfe2: PUSH 0xe9
// 005ecfe7: PUSH 0x6576b4
//   XREF to: 006576b4 (DATA)
// 005ecfec: PUSH EAX
// 005ecfed: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005ecff2: ADD ESP,0xc
// 005ecff5: MOV [0x00688010],EAX
//   XREF to: 00688010 (WRITE)
// 005ecffa: TEST EAX,EAX
// 005ecffc: JNZ 0x005ed021
//   XREF to: 005ed021 (CONDITIONAL_JUMP)
// 005ecffe: MOV ESI,0x6576cb
//   XREF to: 006576cb (DATA)
// 005ed003: MOV EDI,0xea
// 005ed008: PUSH 0x6576e2
//   XREF to: 006576e2 (DATA)
// 005ed00d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005ed013: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005ed019: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed01e: ADD ESP,0x4
// 005ed021: MOV EAX,[0x00679394]
//   Label: LAB_005ed021
//   XREF to: 00679394 (READ)
// 005ed026: IMUL EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed02d: PUSH 0xee
// 005ed032: SHL EAX,0x2
// 005ed035: PUSH 0x65770e
//   XREF to: 0065770e (DATA)
// 005ed03a: ADD EAX,0x40
// 005ed03d: PUSH EAX
// 005ed03e: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005ed043: ADD ESP,0xc
// 005ed046: MOV [0x03f95930],EAX
//   XREF to: 03f95930 (WRITE)
// 005ed04b: TEST EAX,EAX
// 005ed04d: JNZ 0x005ed071
//   XREF to: 005ed071 (CONDITIONAL_JUMP)
// 005ed04f: MOV EAX,0x657725
//   XREF to: 00657725 (PARAM)
// 005ed054: MOV EDX,0xef
// 005ed059: PUSH 0x65773c
//   XREF to: 0065773c (DATA)
// 005ed05e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005ed063: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005ed069: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed06e: ADD ESP,0x4
// 005ed071: MOV EAX,[0x03f95930]
//   Label: LAB_005ed071
//   XREF to: 03f95930 (READ)
// 005ed076: PUSH EBX
// 005ed077: MOV ECX,dword ptr [ESP + 0x90]
// 005ed07e: ADD EAX,0x10
// 005ed081: PUSH ECX
// 005ed082: MOV ESI,dword ptr [ESP + 0x90]
// 005ed089: AND AL,0xf0
// 005ed08b: PUSH ESI
// 005ed08c: MOV [0x0077262c],EAX
//   XREF to: 0077262c (WRITE)
// 005ed091: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed096: PUSH EAX
// 005ed097: MOV EDX,dword ptr [EAX]
// 005ed099: CALL dword ptr [EDX + 0x54]
// 005ed09c: TEST EAX,EAX
// 005ed09e: JZ 0x005ed0e8
//   XREF to: 005ed0e8 (CONDITIONAL_JUMP)
// 005ed0a0: CMP EBX,0x20
// 005ed0a3: JZ 0x005ed0c4
//   XREF to: 005ed0c4 (CONDITIONAL_JUMP)
// 005ed0a5: XOR EAX,EAX
//   Label: LAB_005ed0a5
// 005ed0a7: ADD ESP,0x74
// 005ed0aa: POP EBP
// 005ed0ab: POP EDI
// 005ed0ac: POP ESI
// 005ed0ad: POP EBX
// 005ed0ae: RET
// 005ed0af: MOV EAX,EDX
//   Label: LAB_005ed0af
// 005ed0b1: PUSH EAX
// 005ed0b2: MOV EDX,dword ptr [EDX]
// 005ed0b4: CALL dword ptr [EDX + 0x8]
// 005ed0b7: XOR ECX,ECX
// 005ed0b9: MOV dword ptr [0x03f9592c],ECX
//   XREF to: 03f9592c (WRITE)
// 005ed0bf: JMP 0x005ecf0c
//   XREF to: 005ecf0c (UNCONDITIONAL_JUMP)
// 005ed0c4: PUSH 0x18
//   Label: LAB_005ed0c4
// 005ed0c6: MOV EDI,dword ptr [ESP + 0x90]
// 005ed0cd: PUSH EDI
// 005ed0ce: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed0d3: PUSH ESI
// 005ed0d4: MOV EDX,dword ptr [EAX]
// 005ed0d6: PUSH EAX
// 005ed0d7: CALL dword ptr [EDX + 0x54]
// 005ed0da: TEST EAX,EAX
// 005ed0dc: JNZ 0x005ed0a5
//   XREF to: 005ed0a5 (CONDITIONAL_JUMP)
// 005ed0de: MOV dword ptr [0x03f9593c],0x1
//   XREF to: 03f9593c (WRITE)
// 005ed0e8: PUSH 0x6c
//   Label: LAB_005ed0e8
// 005ed0ea: PUSH 0x0
// 005ed0ec: LEA EAX,[ESP + 0x8]
// 005ed0f0: PUSH EAX
// 005ed0f1: MOV EBX,0x6218
// 005ed0f6: MOV ESI,0x2
// 005ed0fb: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ed100: MOV EDX,0x6c
// 005ed105: ADD ESP,0xc
// 005ed108: MOV ECX,0x21
// 005ed10d: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed112: PUSH 0x0
// 005ed114: MOV dword ptr [ESP + 0x4],EDX
// 005ed118: MOV dword ptr [ESP + 0x8],ECX
// 005ed11c: MOV dword ptr [ESP + 0x6c],EBX
// 005ed120: PUSH 0x3f95924
//   XREF to: 03f95924 (DATA)
// 005ed125: LEA EDX,[ESP + 0x8]
// 005ed129: MOV dword ptr [ESP + 0x1c],ESI
// 005ed12d: PUSH EDX
// 005ed12e: MOV ECX,dword ptr [EAX]
// 005ed130: PUSH EAX
// 005ed131: CALL dword ptr [ECX + 0x18]
// 005ed134: TEST EAX,EAX
// 005ed136: JZ 0x005ed184
//   XREF to: 005ed184 (CONDITIONAL_JUMP)
// 005ed138: PUSH 0x0
// 005ed13a: MOV EDI,0x1
// 005ed13f: LEA EDX,[ESP + 0x4]
// 005ed143: PUSH 0x3f95924
//   XREF to: 03f95924 (DATA)
// 005ed148: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed14d: MOV dword ptr [ESP + 0x1c],EDI
// 005ed151: PUSH EDX
// 005ed152: MOV ECX,dword ptr [EAX]
// 005ed154: PUSH EAX
// 005ed155: CALL dword ptr [ECX + 0x18]
// 005ed158: TEST EAX,EAX
// 005ed15a: JZ 0x005ed184
//   XREF to: 005ed184 (CONDITIONAL_JUMP)
// 005ed15c: PUSH 0x0
// 005ed15e: MOV EBP,0xa18
// 005ed163: LEA EDX,[ESP + 0x4]
// 005ed167: PUSH 0x3f95924
//   XREF to: 03f95924 (DATA)
// 005ed16c: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed171: MOV dword ptr [ESP + 0x70],EBP
// 005ed175: PUSH EDX
// 005ed176: MOV ECX,dword ptr [EAX]
// 005ed178: PUSH EAX
// 005ed179: CALL dword ptr [ECX + 0x18]
// 005ed17c: TEST EAX,EAX
// 005ed17e: JNZ 0x005ed0a5
//   XREF to: 005ed0a5 (CONDITIONAL_JUMP)
// 005ed184: PUSH 0x4
//   Label: LAB_005ed184
// 005ed186: PUSH 0x0
// 005ed188: LEA EAX,[ESP + 0x74]
// 005ed18c: PUSH EAX
// 005ed18d: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ed192: ADD ESP,0xc
// 005ed195: PUSH 0x3f95928
//   XREF to: 03f95928 (DATA)
// 005ed19a: LEA ECX,[ESP + 0x70]
// 005ed19e: MOV EAX,0x4
// 005ed1a3: PUSH ECX
// 005ed1a4: MOV dword ptr [ESP + 0x74],EAX
// 005ed1a8: MOV EAX,[0x03f95924]
//   XREF to: 03f95924 (READ)
// 005ed1ad: PUSH EAX
// 005ed1ae: MOV EDX,dword ptr [EAX]
// 005ed1b0: CALL dword ptr [EDX + 0x30]
// 005ed1b3: TEST EAX,EAX
// 005ed1b5: JNZ 0x005ed272
//   XREF to: 005ed272 (CONDITIONAL_JUMP)
// 005ed1bb: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed1c1: XOR ECX,ECX
// 005ed1c3: TEST EDX,EDX
// 005ed1c5: JLE 0x005ed230
//   XREF to: 005ed230 (CONDITIONAL_JUMP)
// 005ed1c7: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005ed1cc: MOV EDX,EAX
// 005ed1ce: SAR EDX,0x1f
// 005ed1d1: SHL EDX,0x3
// 005ed1d4: SBB EAX,EDX
// 005ed1d6: SAR EAX,0x3
// 005ed1d9: MOV EDI,EAX
// 005ed1db: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005ed1e0: SHL EAX,0x2
// 005ed1e3: MOV dword ptr [ESP + 0x70],EAX
// 005ed1e7: IMUL EDX,dword ptr [0x00679394],0x0
//   XREF to: 00679394 (READ)
// 005ed1ee: MOV EBX,dword ptr [0x00688010]
//   XREF to: 00688010 (READ)
// 005ed1f4: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed1fa: XOR EAX,EAX
// 005ed1fc: MOV ESI,dword ptr [0x00679394]
//   Label: LAB_005ed1fc
//   XREF to: 00679394 (READ)
// 005ed202: IMUL ESI,ECX
// 005ed205: IMUL ESI,EDI
// 005ed208: ADD ESI,EBX
// 005ed20a: MOV dword ptr [EAX + 0x2cf6a9c],ESI
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 005ed210: MOV ESI,dword ptr [0x0077262c]
//   XREF to: 0077262c (READ)
// 005ed216: ADD EAX,0x4
// 005ed219: ADD ESI,EDX
// 005ed21b: MOV dword ptr [EAX + 0x2cf7d58],ESI
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 005ed221: MOV ESI,dword ptr [ESP + 0x70]
// 005ed225: INC ECX
// 005ed226: ADD EDX,ESI
// 005ed228: CMP ECX,EBP
// 005ed22a: JL 0x005ed1fc
//   XREF to: 005ed1fc (CONDITIONAL_JUMP)
// 005ed22c: LEA EAX,[EAX]
// 005ed230: MOV EAX,dword ptr [ESP + 0x8c]
//   Label: LAB_005ed230
// 005ed237: DEC EAX
// 005ed238: PUSH EAX
// 005ed239: MOV EAX,dword ptr [ESP + 0x8c]
// 005ed240: DEC EAX
// 005ed241: PUSH EAX
// 005ed242: PUSH 0x0
// 005ed244: PUSH 0x0
// 005ed246: CALL engine_2d.c_setupViewportAndClipping_FUN_00401800
//   XREF to: 00401800 (UNCONDITIONAL_CALL)
// 005ed24b: ADD ESP,0x10
// 005ed24e: XOR ESI,ESI
// 005ed250: CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
//   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)
// 005ed255: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_005ed255
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005ed25a: INC ESI
// 005ed25b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005ed260: CMP ESI,0x3
// 005ed263: JL 0x005ed255
//   XREF to: 005ed255 (CONDITIONAL_JUMP)
// 005ed265: MOV EAX,0x1
// 005ed26a: ADD ESP,0x74
// 005ed26d: POP EBP
// 005ed26e: POP EDI
// 005ed26f: POP ESI
// 005ed270: POP EBX
// 005ed271: RET
// 005ed272: MOV ECX,0x657792
//   Label: LAB_005ed272
//   XREF to: 00657792 (PARAM)
// 005ed277: MOV EBX,0x1d7
// 005ed27c: PUSH 0x6577a9
//   XREF to: 006577a9 (DATA)
// 005ed281: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005ed287: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005ed28d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed292: ADD ESP,0x4
// 005ed295: XOR EAX,EAX
// 005ed297: ADD ESP,0x74
// 005ed29a: POP EBP
// 005ed29b: POP EDI
// 005ed29c: POP ESI
// 005ed29d: POP EBX
// 005ed29e: RET
