// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0
// Address: 005ed2a0
// Address Range: [[005ed2a0, 005ed4a4]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0(void)
// Cross-references:
//   engine_2d.c_resetGraphicsSystem_FUN_005ed2a0 (00402a70) at 00402a70 [UNCONDITIONAL_JUMP]
// Globals:
//   TerminatedCString s_You_have_hit_a_kludge_in_006577da
//   TerminatedCString s_You_are_setting_accelera_00657800
//   TerminatedCString s_the_appropriate_bit_dept_00657832
//   TerminatedCString s_I_am_forcing_the_screen__00657853
//   TerminatedCString s_Press_any_key_to_continu_00657884
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_UseExternalRenderer
//   int g_FullscreenMode
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IDirectDrawSurface* g_SoftwareRenderSurface
//   IUnknown* g_DirectDrawUnknown
//   int g_GraphicsResetFlag
//   HWND g_MainWindowHandle
// Function calls:
//   crt_ddraw.c_DirectDrawCreate
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ed2a0(void)

{
  int iVar1;
  HRESULT HVar2;
  undefined4 uStack00000010;
  undefined4 uStack0000003c;
  
  g_GraphicsResetFlag = 1;
  if (g_FullscreenMode != 0) {
    if (g_BitsPerPixel < 0x10) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(g_WindowWidth,g_WindowHeight,0x10);
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00401fd0("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    uStack00000010 = 0x5ed2cf;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    if (g_DirectDrawUnknown != (IUnknown *)0x0) {
      uStack00000010 = 0x5ed2e0;
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
      uStack00000010 = 0x5ed336;
      (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
      g_DirectDrawObject = (IDirectDraw *)0x0;
    }
    uStack00000010 = 0x5ed355;
    iVar1 = wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460
                      (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    if (iVar1 == 0) {
      g_UseExternalRenderer = iVar1;
      g_FullscreenMode = iVar1;
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
      HVar2 = crt_ddraw_c_DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                  (g_DirectDrawObject,g_MainWindowHandle,0x11);
      }
      uStack0000003c = 0x5ed409;
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    }
  }
  return;
}


// Assembly code:
// 005ed2a0: PUSH EBX
//   Label: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0
// 005ed2a1: PUSH ESI
// 005ed2a2: PUSH EDI
// 005ed2a3: PUSH EBP
// 005ed2a4: MOV EDX,0x1
// 005ed2a9: MOV ECX,dword ptr [0x03f6b878]
//   XREF to: 03f6b878 (READ)
// 005ed2af: MOV dword ptr [0x03f95938],EDX
//   XREF to: 03f95938 (WRITE)
// 005ed2b5: TEST ECX,ECX
// 005ed2b7: JZ 0x005ed40c
//   XREF to: 005ed40c (CONDITIONAL_JUMP)
// 005ed2bd: CMP dword ptr [0x0067939c],0x10
//   XREF to: 0067939c (READ)
// 005ed2c4: JL 0x005ed411
//   XREF to: 005ed411 (CONDITIONAL_JUMP)
// 005ed2ca: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_005ed2ca
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005ed2cf: MOV EBP,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ed2d5: TEST EBP,EBP
// 005ed2d7: JZ 0x005ed2e7
//   XREF to: 005ed2e7 (CONDITIONAL_JUMP)
// 005ed2d9: PUSH EBP
// 005ed2da: MOV EDX,dword ptr [EBP]
// 005ed2dd: CALL dword ptr [EDX + 0x8]
// 005ed2e0: XOR EAX,EAX
// 005ed2e2: MOV [0x03f9592c],EAX
//   XREF to: 03f9592c (WRITE)
// 005ed2e7: MOV EDX,dword ptr [0x03f95928]
//   Label: LAB_005ed2e7
//   XREF to: 03f95928 (READ)
// 005ed2ed: TEST EDX,EDX
// 005ed2ef: JZ 0x005ed301
//   XREF to: 005ed301 (CONDITIONAL_JUMP)
// 005ed2f1: MOV EAX,EDX
// 005ed2f3: PUSH EAX
// 005ed2f4: MOV EDX,dword ptr [EDX]
// 005ed2f6: CALL dword ptr [EDX + 0x8]
// 005ed2f9: XOR ECX,ECX
// 005ed2fb: MOV dword ptr [0x03f95928],ECX
//   XREF to: 03f95928 (WRITE)
// 005ed301: MOV EBX,dword ptr [0x03f95924]
//   Label: LAB_005ed301
//   XREF to: 03f95924 (READ)
// 005ed307: TEST EBX,EBX
// 005ed309: JZ 0x005ed319
//   XREF to: 005ed319 (CONDITIONAL_JUMP)
// 005ed30b: PUSH EBX
// 005ed30c: MOV EDX,dword ptr [EBX]
// 005ed30e: XOR ESI,ESI
// 005ed310: CALL dword ptr [EDX + 0x8]
// 005ed313: MOV dword ptr [0x03f95924],ESI
//   XREF to: 03f95924 (WRITE)
// 005ed319: MOV EDI,dword ptr [0x03f95920]
//   Label: LAB_005ed319
//   XREF to: 03f95920 (READ)
// 005ed31f: TEST EDI,EDI
// 005ed321: JZ 0x005ed33c
//   XREF to: 005ed33c (CONDITIONAL_JUMP)
// 005ed323: PUSH EDI
// 005ed324: MOV EDX,dword ptr [EDI]
// 005ed326: CALL dword ptr [EDX + 0x4c]
// 005ed329: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed32e: PUSH EAX
// 005ed32f: MOV EDX,dword ptr [EAX]
// 005ed331: XOR EBP,EBP
// 005ed333: CALL dword ptr [EDX + 0x8]
// 005ed336: MOV dword ptr [0x03f95920],EBP
//   XREF to: 03f95920 (WRITE)
// 005ed33c: MOV EAX,[0x0067939c]
//   Label: LAB_005ed33c
//   XREF to: 0067939c (READ)
// 005ed341: PUSH EAX
// 005ed342: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed348: PUSH EDX
// 005ed349: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005ed34f: PUSH ECX
// 005ed350: CALL wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
//   XREF to: 005b7460 (UNCONDITIONAL_CALL)
// 005ed355: ADD ESP,0xc
// 005ed358: TEST EAX,EAX
// 005ed35a: JNZ 0x005ed40c
//   XREF to: 005ed40c (CONDITIONAL_JUMP)
// 005ed360: MOV EDI,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ed366: MOV [0x03f6b878],EAX
//   XREF to: 03f6b878 (WRITE)
// 005ed36b: MOV [0x02d03e94],EAX
//   XREF to: 02d03e94 (WRITE)
// 005ed370: TEST EDI,EDI
// 005ed372: JNZ 0x005ed492
//   XREF to: 005ed492 (CONDITIONAL_JUMP)
// 005ed378: MOV EAX,[0x03f95928]
//   Label: LAB_005ed378
//   XREF to: 03f95928 (READ)
// 005ed37d: TEST EAX,EAX
// 005ed37f: JZ 0x005ed38f
//   XREF to: 005ed38f (CONDITIONAL_JUMP)
// 005ed381: PUSH EAX
// 005ed382: MOV EDX,dword ptr [EAX]
// 005ed384: CALL dword ptr [EDX + 0x8]
// 005ed387: XOR EDX,EDX
// 005ed389: MOV dword ptr [0x03f95928],EDX
//   XREF to: 03f95928 (WRITE)
// 005ed38f: MOV ECX,dword ptr [0x03f95924]
//   Label: LAB_005ed38f
//   XREF to: 03f95924 (READ)
// 005ed395: TEST ECX,ECX
// 005ed397: JZ 0x005ed3a7
//   XREF to: 005ed3a7 (CONDITIONAL_JUMP)
// 005ed399: PUSH ECX
// 005ed39a: MOV EDX,dword ptr [ECX]
// 005ed39c: XOR EBX,EBX
// 005ed39e: CALL dword ptr [EDX + 0x8]
// 005ed3a1: MOV dword ptr [0x03f95924],EBX
//   XREF to: 03f95924 (WRITE)
// 005ed3a7: MOV ESI,dword ptr [0x03f95920]
//   Label: LAB_005ed3a7
//   XREF to: 03f95920 (READ)
// 005ed3ad: TEST ESI,ESI
// 005ed3af: JZ 0x005ed3ca
//   XREF to: 005ed3ca (CONDITIONAL_JUMP)
// 005ed3b1: PUSH ESI
// 005ed3b2: MOV EDX,dword ptr [ESI]
// 005ed3b4: CALL dword ptr [EDX + 0x4c]
// 005ed3b7: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed3bc: PUSH EAX
// 005ed3bd: MOV EDX,dword ptr [EAX]
// 005ed3bf: XOR EDI,EDI
// 005ed3c1: CALL dword ptr [EDX + 0x8]
// 005ed3c4: MOV dword ptr [0x03f95920],EDI
//   XREF to: 03f95920 (WRITE)
// 005ed3ca: PUSH 0x0
//   Label: LAB_005ed3ca
// 005ed3cc: PUSH 0x3f95920
//   XREF to: 03f95920 (DATA)
// 005ed3d1: PUSH 0x0
// 005ed3d3: CALL crt_ddraw.c_DirectDrawCreate
//   XREF to: 00610ece (UNCONDITIONAL_CALL)
// 005ed3d8: TEST EAX,EAX
// 005ed3da: JNZ 0x005ed3f0
//   XREF to: 005ed3f0 (CONDITIONAL_JUMP)
// 005ed3dc: PUSH 0x11
// 005ed3de: MOV EBP,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005ed3e4: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed3e9: PUSH EBP
// 005ed3ea: MOV EDX,dword ptr [EAX]
// 005ed3ec: PUSH EAX
// 005ed3ed: CALL dword ptr [EDX + 0x50]
// 005ed3f0: MOV EAX,[0x0067939c]
//   Label: LAB_005ed3f0
//   XREF to: 0067939c (READ)
// 005ed3f5: PUSH EAX
// 005ed3f6: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed3fc: PUSH EDX
// 005ed3fd: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005ed403: PUSH ECX
// 005ed404: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 005ed409: ADD ESP,0xc
// 005ed40c: POP EBP
//   Label: LAB_005ed40c
// 005ed40d: POP EDI
// 005ed40e: POP ESI
// 005ed40f: POP EBX
// 005ed410: RET
// 005ed411: PUSH 0x10
//   Label: LAB_005ed411
// 005ed413: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ed419: PUSH ESI
// 005ed41a: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005ed420: PUSH EDI
// 005ed421: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 005ed426: ADD ESP,0xc
// 005ed429: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005ed42e: PUSH 0x0
// 005ed430: PUSH 0x0
// 005ed432: PUSH 0x6577da
//   XREF to: 006577da (DATA)
// 005ed437: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005ed43c: ADD ESP,0xc
// 005ed43f: PUSH 0x16
// 005ed441: PUSH 0x0
// 005ed443: PUSH 0x657800
//   XREF to: 00657800 (DATA)
// 005ed448: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005ed44d: ADD ESP,0xc
// 005ed450: PUSH 0x21
// 005ed452: PUSH 0x0
// 005ed454: PUSH 0x657832
//   XREF to: 00657832 (DATA)
// 005ed459: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005ed45e: ADD ESP,0xc
// 005ed461: PUSH 0x2c
// 005ed463: PUSH 0x0
// 005ed465: PUSH 0x657853
//   XREF to: 00657853 (DATA)
// 005ed46a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005ed46f: ADD ESP,0xc
// 005ed472: PUSH 0x42
// 005ed474: PUSH 0x0
// 005ed476: PUSH 0x657884
//   XREF to: 00657884 (DATA)
// 005ed47b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005ed480: ADD ESP,0xc
// 005ed483: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005ed488: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 005ed48d: JMP 0x005ed2ca
//   XREF to: 005ed2ca (UNCONDITIONAL_JUMP)
// 005ed492: PUSH EDI
//   Label: LAB_005ed492
// 005ed493: MOV EDX,dword ptr [EDI]
// 005ed495: XOR EBP,EBP
// 005ed497: CALL dword ptr [EDX + 0x8]
// 005ed49a: MOV dword ptr [0x03f9592c],EBP
//   XREF to: 03f9592c (WRITE)
// 005ed4a0: JMP 0x005ed378
//   XREF to: 005ed378 (UNCONDITIONAL_JUMP)
