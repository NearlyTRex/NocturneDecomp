// Name: wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
// Address: 005b7460
// Address Range: [[005b7460, 005b7578]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460(int width, int height, int bits_per_pixel)
// Cross-references:
//   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 (005ed2a0) at 005ed350 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_videoRestore_FUN_005edc80 (005edc80) at 005edcb2 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   ushort[256] g_ColorTable16
//   char[768] g_SourcePaletteData
//   int g_UseExternalRenderer
//   int g_FrameBufferTestResult
//   APIDLL_setVideoMode2* g_APIDLL_setVideoMode2
//   APIDLL_setFogColor* g_APIDLL_setFogColor
//   APIDLL_setColorTable16* g_APIDLL_setColorTable16
//   int g_ExternalRendererActive
//   int g_FogColorRed
//   int g_FogColorGreen
//   int g_FogColorBlue
//   HWND g_StoredWindowHandle
//   int g_ExternalBitsPerPixel
// Function calls:
//   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_unlockFrame_FUN_005b7250

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460(int width,int height,int bits_per_pixel)

{
  undefined2 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int bits_per_pixel_00;
  bool bVar5;
  undefined4 uStack00000020;
  undefined4 uStack00000048;
  
  g_FrameBufferTestResult = 0;
  bits_per_pixel_00 = bits_per_pixel;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel_00 = 0x10;
  }
  if ((g_ExternalRendererActive == 0) &&
     (iVar4 = wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle), iVar4 == 0
     )) {
    return 0;
  }
  iVar4 = (*g_APIDLL_setVideoMode2)(height,bits_per_pixel,bits_per_pixel_00,g_ScreenBufferArray);
  if (iVar4 == 0) {
    g_UseExternalRenderer = iVar4;
    return 0;
  }
  (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  uStack00000020 = 0x5b74f3;
  (*g_APIDLL_setFogColor)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  g_UseExternalRenderer = 1;
  uStack00000048 = 0x5b7507;
  g_ExternalBitsPerPixel = bits_per_pixel_00;
  wincore_windll_cpp_lockFrame_FUN_005b7210();
  pvVar3 = g_ScreenBufferArray[0];
  if (g_BitsPerPixel == 0x10) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *g_ScreenBufferArray[0];
    *(undefined2 *)g_ScreenBufferArray[0] = 0xabcd;
                    /* WARNING: Load size is inaccurate */
    bVar5 = *pvVar3 != -0x5433;
    *(undefined2 *)pvVar3 = uVar1;
  }
  else {
    if (g_BitsPerPixel != 0x20) goto LAB_005b7536;
                    /* WARNING: Load size is inaccurate */
    uVar2 = *g_ScreenBufferArray[0];
    *(undefined4 *)g_ScreenBufferArray[0] = 0xaabbccdd;
                    /* WARNING: Load size is inaccurate */
    bVar5 = *pvVar3 != -0x55443323;
    *(undefined4 *)pvVar3 = uVar2;
  }
  g_FrameBufferTestResult = (int)bVar5;
LAB_005b7536:
  uStack00000048 = 0x5b753d;
  wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
  return 1;
}


// Assembly code:
// 005b7460: PUSH EBX
//   Label: wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
// 005b7461: PUSH ESI
// 005b7462: PUSH EDI
// 005b7463: PUSH EBP
// 005b7464: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b7468: XOR EDX,EDX
// 005b746a: MOV dword ptr [0x03f6b888],EDX
//   XREF to: 03f6b888 (WRITE)
// 005b7470: CMP EBX,0x10
// 005b7473: JGE 0x005b747a
//   XREF to: 005b747a (CONDITIONAL_JUMP)
// 005b7475: MOV EBX,0x10
// 005b747a: CMP dword ptr [0x03f6b978],0x0
//   Label: LAB_005b747a
//   XREF to: 03f6b978 (READ)
// 005b7481: JNZ 0x005b749a
//   XREF to: 005b749a (CONDITIONAL_JUMP)
// 005b7483: MOV ESI,dword ptr [0x03f6b98c]
//   XREF to: 03f6b98c (READ)
// 005b7489: PUSH ESI
// 005b748a: CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
//   XREF to: 005b6750 (UNCONDITIONAL_CALL)
// 005b748f: ADD ESP,0x4
// 005b7492: TEST EAX,EAX
// 005b7494: JZ 0x005b7545
//   XREF to: 005b7545 (CONDITIONAL_JUMP)
// 005b749a: PUSH 0x2cf6a9c
//   Label: LAB_005b749a
//   XREF to: 02cf6a9c (DATA)
// 005b749f: PUSH EBX
// 005b74a0: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005b74a4: PUSH EDI
// 005b74a5: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005b74a9: PUSH EBP
// 005b74aa: CALL dword ptr [g_APIDLL_setVideoMode2]
//   XREF to: 03f6b89c (READ)
// 005b74b0: ADD ESP,0x10
// 005b74b3: TEST EAX,EAX
// 005b74b5: JZ 0x005b756f
//   XREF to: 005b756f (CONDITIONAL_JUMP)
// 005b74bb: PUSH 0x2d01020
//   XREF to: 02d01020 (DATA)
// 005b74c0: PUSH 0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 005b74c5: CALL dword ptr [g_APIDLL_setColorTable16]
//   XREF to: 03f6b900 (READ)
// 005b74cb: ADD ESP,0x8
// 005b74ce: CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
//   XREF to: 004f41c0 (UNCONDITIONAL_CALL)
// 005b74d3: MOV EDX,dword ptr [0x03f6b988]
//   XREF to: 03f6b988 (READ)
// 005b74d9: PUSH EDX
// 005b74da: MOV ECX,dword ptr [0x03f6b984]
//   XREF to: 03f6b984 (READ)
// 005b74e0: PUSH ECX
// 005b74e1: MOV ESI,dword ptr [0x03f6b980]
//   XREF to: 03f6b980 (READ)
// 005b74e7: PUSH ESI
// 005b74e8: MOV EDI,0x1
// 005b74ed: CALL dword ptr [g_APIDLL_setFogColor]
//   XREF to: 03f6b8f0 (READ)
// 005b74f3: ADD ESP,0xc
// 005b74f6: MOV dword ptr [0x02d03e94],EDI
//   XREF to: 02d03e94 (WRITE)
// 005b74fc: MOV dword ptr [0x03f6b990],EBX
//   XREF to: 03f6b990 (WRITE)
// 005b7502: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 005b7507: MOV EBP,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005b750d: CMP EBP,0x10
// 005b7510: JNZ 0x005b754a
//   XREF to: 005b754a (CONDITIONAL_JUMP)
// 005b7512: MOV EAX,[0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 005b7517: MOV DX,word ptr [EAX]
// 005b751a: MOV word ptr [EAX],0xabcd
// 005b751f: CMP word ptr [EAX],0xabcd
// 005b7524: SETNZ BL
// 005b7527: AND EBX,0xff
// 005b752d: MOV word ptr [EAX],DX
// 005b7530: MOV dword ptr [0x03f6b888],EBX
//   Label: LAB_005b7530
//   XREF to: 03f6b888 (WRITE)
// 005b7536: PUSH 0x0
//   Label: LAB_005b7536
// 005b7538: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 005b753d: MOV EAX,0x1
// 005b7542: ADD ESP,0x4
// 005b7545: POP EBP
//   Label: LAB_005b7545
// 005b7546: POP EDI
// 005b7547: POP ESI
// 005b7548: POP EBX
// 005b7549: RET
// 005b754a: CMP EBP,0x20
//   Label: LAB_005b754a
// 005b754d: JNZ 0x005b7536
//   XREF to: 005b7536 (CONDITIONAL_JUMP)
// 005b754f: MOV EAX,[0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 005b7554: MOV EDX,dword ptr [EAX]
// 005b7556: MOV dword ptr [EAX],0xaabbccdd
// 005b755c: CMP dword ptr [EAX],0xaabbccdd
// 005b7562: SETNZ BL
// 005b7565: AND EBX,0xff
// 005b756b: MOV dword ptr [EAX],EDX
// 005b756d: JMP 0x005b7530
//   XREF to: 005b7530 (UNCONDITIONAL_JUMP)
// 005b756f: MOV [0x02d03e94],EAX
//   Label: LAB_005b756f
//   XREF to: 02d03e94 (WRITE)
// 005b7574: POP EBP
// 005b7575: POP EDI
// 005b7576: POP ESI
// 005b7577: POP EBX
// 005b7578: RET
