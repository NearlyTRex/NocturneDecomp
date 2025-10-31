// Name: wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
// Address: 005b7d20
// Address Range: [[005b7d20, 005b7d57]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_restoreZBuffer_FUN_005b7d20(int left, int top, int mode, int right, int bottom)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 (0044c860) at 0044cab4 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780 (0044c780) at 0044c849 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_restoreZBuffer* g_APIDLL_restoreZBuffer

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(int left,int top,int mode,int right,int bottom)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_restoreZBuffer)(left,top,mode,right,bottom);
  return iVar1;
}


// Assembly code:
// 005b7d20: PUSH EBP
//   Label: wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
// 005b7d21: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7d28: JNZ 0x005b7d2e
//   XREF to: 005b7d2e (CONDITIONAL_JUMP)
// 005b7d2a: XOR EAX,EAX
// 005b7d2c: POP EBP
// 005b7d2d: RET
// 005b7d2e: PUSH EDI
//   Label: LAB_005b7d2e
// 005b7d2f: PUSH ESI
// 005b7d30: PUSH EBX
// 005b7d31: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005b7d35: PUSH ECX
// 005b7d36: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005b7d3a: PUSH EBX
// 005b7d3b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005b7d3f: PUSH ESI
// 005b7d40: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b7d44: PUSH EDI
// 005b7d45: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005b7d49: PUSH EBP
// 005b7d4a: CALL dword ptr [g_APIDLL_restoreZBuffer]
//   XREF to: 03f6b910 (READ)
// 005b7d50: ADD ESP,0x14
// 005b7d53: POP EBX
// 005b7d54: POP ESI
// 005b7d55: POP EDI
// 005b7d56: POP EBP
// 005b7d57: RET
