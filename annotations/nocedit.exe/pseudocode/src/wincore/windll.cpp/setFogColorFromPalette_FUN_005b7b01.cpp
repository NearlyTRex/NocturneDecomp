// Name: wincore_windll.cpp_setFogColorFromPalette_FUN_005b7b01
// Address: 005b7b01
// Address Range: [[005b7b01, 005b7b72]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setFogColorFromPalette_FUN_005b7b01(int palette_index)
// Globals:
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   int g_UseExternalRenderer
//   APIDLL_setFogColor* g_APIDLL_setFogColor
//   int g_FogColorRed
//   int g_FogColorGreen
//   int g_FogColorBlue

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setFogColorFromPalette_FUN_005b7b01(int palette_index)

{
  int iVar1;
  
  iVar1 = palette_index * 3;
  g_FogColorRed = (int)(byte)g_SourcePaletteData[iVar1];
  g_FogColorGreen = (int)(byte)g_SourcePaletteData[iVar1 + 1];
  g_FogColorBlue = (int)(byte)g_SourcePaletteData[iVar1 + 2];
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setFogColor)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  return iVar1;
}


// Assembly code:
// 005b7b01: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_setFogColorFromPalette_FUN_005b7b01
// 005b7b07: LEA EDX,[EDX]
// 005b7b0d: LEA EAX,[EAX]
// 005b7b10: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005b7b14: LEA EAX,[EDX*0x4 + 0x0]
// 005b7b1b: SUB EAX,EDX
// 005b7b1d: XOR EDX,EDX
// 005b7b1f: MOV DL,byte ptr [EAX + 0x2d01f48]
//   XREF to: 02d01f48 (DATA)
// 005b7b25: MOV dword ptr [0x03f6b980],EDX
//   XREF to: 03f6b980 (WRITE)
// 005b7b2b: XOR EDX,EDX
// 005b7b2d: MOV DL,byte ptr [EAX + 0x2d01f49]
//   XREF to: 02d01f49 (DATA)
// 005b7b33: MOV dword ptr [0x03f6b984],EDX
//   XREF to: 03f6b984 (WRITE)
// 005b7b39: MOV AL,byte ptr [EAX + 0x2d01f4a]
//   XREF to: 02d01f4a (DATA)
// 005b7b3f: AND EAX,0xff
// 005b7b44: MOV EDX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 005b7b4a: MOV [0x03f6b988],EAX
//   XREF to: 03f6b988 (WRITE)
// 005b7b4f: TEST EDX,EDX
// 005b7b51: JNZ 0x005b7b56
//   XREF to: 005b7b56 (CONDITIONAL_JUMP)
// 005b7b53: XOR EAX,EAX
// 005b7b55: RET
// 005b7b56: PUSH ESI
//   Label: LAB_005b7b56
// 005b7b57: PUSH EBX
// 005b7b58: PUSH EAX
// 005b7b59: MOV EBX,dword ptr [0x03f6b984]
//   XREF to: 03f6b984 (READ)
// 005b7b5f: PUSH EBX
// 005b7b60: MOV ESI,dword ptr [0x03f6b980]
//   XREF to: 03f6b980 (READ)
// 005b7b66: PUSH ESI
// 005b7b67: CALL dword ptr [g_APIDLL_setFogColor]
//   XREF to: 03f6b8f0 (READ)
// 005b7b6d: ADD ESP,0xc
// 005b7b70: POP EBX
// 005b7b71: POP ESI
// 005b7b72: RET
