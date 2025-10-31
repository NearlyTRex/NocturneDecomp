// Name: wincore_windll.cpp_clearZBox_FUN_005b7c00
// Address: 005b7c00
// Address Range: [[005b7c00, 005b7c2f]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_clearZBox_FUN_005b7c00(int left, int top, int right, int bottom)
// Cross-references:
//   wincore_windll.cpp_fillDepthRegion_FUN_005b3fc2 (005b3fc2) at 005b3fdc [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_clearZBox* g_APIDLL_clearZBox

#include "nocturne.h"

int __cdecl wincore_windll_cpp_clearZBox_FUN_005b7c00(int left,int top,int right,int bottom)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_clearZBox)(left,top,right,bottom);
  return iVar1;
}


// Assembly code:
// 005b7c00: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_clearZBox_FUN_005b7c00
//   XREF to: 02d03e94 (READ)
// 005b7c07: JNZ 0x005b7c0c
//   XREF to: 005b7c0c (CONDITIONAL_JUMP)
// 005b7c09: XOR EAX,EAX
// 005b7c0b: RET
// 005b7c0c: PUSH EDI
//   Label: LAB_005b7c0c
// 005b7c0d: PUSH ESI
// 005b7c0e: PUSH EBX
// 005b7c0f: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005b7c13: PUSH ECX
// 005b7c14: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005b7c18: PUSH EBX
// 005b7c19: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005b7c1d: PUSH ESI
// 005b7c1e: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005b7c22: PUSH EDI
// 005b7c23: CALL dword ptr [g_APIDLL_clearZBox]
//   XREF to: 03f6b8fc (READ)
// 005b7c29: ADD ESP,0x10
// 005b7c2c: POP EBX
// 005b7c2d: POP ESI
// 005b7c2e: POP EDI
// 005b7c2f: RET
