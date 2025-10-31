// Name: engine_2d.c_setSolidColor_FUN_004033a0
// Address: 004033a0
// Address Range: [[004033a0, 00403422]]
// Convention: __cdecl
// Signature: void engine_2d.c_setSolidColor_FUN_004033a0(int red_component, int green_component, int blue_component)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   int g_UseExternalRenderer
//   int g_SolidColorMode
//   int g_SolidRedComponent
//   int g_SolidGreenComponent
//   int g_SolidBlueComponent
// Function calls:
//   wincore_windll.cpp_setFogColor_FUN_005b7b80

#include "nocturne.h"

void __cdecl
engine_2d_c_setSolidColor_FUN_004033a0(int red_component,int green_component,int blue_component)

{
  g_SolidGreenComponent = green_component;
  g_SolidBlueComponent = blue_component;
  g_SolidRedComponent = red_component;
  g_SolidColorMode = red_component << 0x10 | green_component << 8 | blue_component;
  if ((g_BitsPerPixel != 0x10) && (g_BitsPerPixel == 0x20)) {
    g_SolidColorMode =
         blue_component << ((byte)g_BlueBitPosition & 0x1f) |
         red_component << ((byte)g_RedBitPosition & 0x1f) |
         green_component << ((byte)g_GreenBitPosition & 0x1f);
  }
  if (g_UseExternalRenderer == 0) {
    return;
  }
  wincore_windll_cpp_setFogColor_FUN_005b7b80(red_component,green_component,blue_component);
  return;
}


// Assembly code:
// 004033a0: PUSH EBX
//   Label: engine_2d.c_setSolidColor_FUN_004033a0
// 004033a1: PUSH ESI
// 004033a2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004033a6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004033aa: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004033ae: MOV dword ptr [0x02d052b0],EBX
//   XREF to: 02d052b0 (WRITE)
// 004033b4: MOV dword ptr [0x02d052b4],EDX
//   XREF to: 02d052b4 (WRITE)
// 004033ba: MOV ESI,EBX
// 004033bc: MOV ECX,EAX
// 004033be: SHL ESI,0x8
// 004033c1: SHL ECX,0x10
// 004033c4: MOV [0x02d052ac],EAX
//   XREF to: 02d052ac (WRITE)
// 004033c9: OR ECX,ESI
// 004033cb: MOV ESI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004033d1: OR ECX,EDX
// 004033d3: CMP ESI,0x10
// 004033d6: JZ 0x00403403
//   XREF to: 00403403 (CONDITIONAL_JUMP)
// 004033d8: CMP ESI,0x20
// 004033db: JNZ 0x00403403
//   XREF to: 00403403 (CONDITIONAL_JUMP)
// 004033dd: PUSH EDI
// 004033de: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004033e4: MOV ESI,EAX
// 004033e6: MOV EDI,EBX
// 004033e8: SHL ESI,CL
// 004033ea: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004033f0: SHL EDI,CL
// 004033f2: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004033f8: OR ESI,EDI
// 004033fa: MOV EDI,EDX
// 004033fc: SHL EDI,CL
// 004033fe: MOV ECX,EDI
// 00403400: OR ECX,ESI
// 00403402: POP EDI
// 00403403: MOV dword ptr [0x02d052a8],ECX
//   Label: LAB_00403403
//   XREF to: 02d052a8 (WRITE)
// 00403409: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 00403410: JNZ 0x00403415
//   XREF to: 00403415 (CONDITIONAL_JUMP)
// 00403412: POP ESI
// 00403413: POP EBX
// 00403414: RET
// 00403415: PUSH EDX
//   Label: LAB_00403415
// 00403416: PUSH EBX
// 00403417: PUSH EAX
// 00403418: CALL wincore_windll.cpp_setFogColor_FUN_005b7b80
//   XREF to: 005b7b80 (UNCONDITIONAL_CALL)
// 0040341d: ADD ESP,0xc
// 00403420: POP ESI
// 00403421: POP EBX
// 00403422: RET
