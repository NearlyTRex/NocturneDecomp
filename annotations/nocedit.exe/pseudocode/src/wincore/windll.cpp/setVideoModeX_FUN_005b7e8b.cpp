// Name: wincore_windll.cpp_setVideoModeX_FUN_005b7e8b
// Address: 005b7e8b
// Address Range: [[005b7e8b, 005b7edd]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setVideoModeX_FUN_005b7e8b(int width, int height, int bits_per_pixel, int flags)
// Globals:
//   APIDLL_setVideoModeX* g_APIDLL_setVideoModeX
//   int g_VideoModeXBPP

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_setVideoModeX_FUN_005b7e8b(int width,int height,int bits_per_pixel,int flags)

{
  int iVar1;
  
  g_VideoModeXBPP = 0;
  if (g_APIDLL_setVideoModeX == (APIDLL_setVideoModeX *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_APIDLL_setVideoModeX)(width,height,bits_per_pixel,flags);
    if (iVar1 != 0) {
      g_VideoModeXBPP = bits_per_pixel;
      return 1;
    }
  }
  return iVar1;
}


// Assembly code:
// 005b7e8b: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_setVideoModeX_FUN_005b7e8b
// 005b7e8e: MOV ECX,ECX
// 005b7e90: PUSH EBX
// 005b7e91: PUSH ESI
// 005b7e92: PUSH EDI
// 005b7e93: PUSH EBP
// 005b7e94: XOR EDX,EDX
// 005b7e96: MOV ECX,dword ptr [0x03f6b934]
//   XREF to: 03f6b934 (READ)
// 005b7e9c: MOV dword ptr [0x03f6b9a0],EDX
//   XREF to: 03f6b9a0 (WRITE)
// 005b7ea2: TEST ECX,ECX
// 005b7ea4: JNZ 0x005b7ead
//   XREF to: 005b7ead (CONDITIONAL_JUMP)
// 005b7ea6: XOR EAX,EAX
// 005b7ea8: POP EBP
//   Label: LAB_005b7ea8
// 005b7ea9: POP EDI
// 005b7eaa: POP ESI
// 005b7eab: POP EBX
// 005b7eac: RET
// 005b7ead: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_005b7ead
//   XREF to: Stack[0x10] (READ)
// 005b7eb1: PUSH EBX
// 005b7eb2: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005b7eb6: PUSH ESI
// 005b7eb7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005b7ebb: PUSH EDI
// 005b7ebc: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005b7ec0: PUSH EBP
// 005b7ec1: CALL dword ptr [g_APIDLL_setVideoModeX]
//   XREF to: 03f6b934 (READ)
// 005b7ec7: ADD ESP,0x10
// 005b7eca: TEST EAX,EAX
// 005b7ecc: JZ 0x005b7ea8
//   XREF to: 005b7ea8 (CONDITIONAL_JUMP)
// 005b7ece: MOV EAX,0x1
// 005b7ed3: MOV dword ptr [0x03f6b9a0],ESI
//   XREF to: 03f6b9a0 (WRITE)
// 005b7ed9: POP EBP
// 005b7eda: POP EDI
// 005b7edb: POP ESI
// 005b7edc: POP EBX
// 005b7edd: RET
