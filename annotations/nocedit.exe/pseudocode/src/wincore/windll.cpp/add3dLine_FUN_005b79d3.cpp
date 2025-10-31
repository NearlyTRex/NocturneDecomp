// Name: wincore_windll.cpp_add3dLine_FUN_005b79d3
// Address: 005b79d3
// Address Range: [[005b79d3, 005b7a08]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_add3dLine_FUN_005b79d3(void * start_point, void * end_point, int line_style)
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_add3dLine* g_APIDLL_add3dLine

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_add3dLine_FUN_005b79d3(void *start_point,void *end_point,int line_style)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_add3dLine)(start_point,end_point,line_style);
  return iVar1;
}


// Assembly code:
// 005b79d3: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_add3dLine_FUN_005b79d3
// 005b79d9: LEA EDX,[EDX]
// 005b79df: NOP
// 005b79e0: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b79e7: JNZ 0x005b79ec
//   XREF to: 005b79ec (CONDITIONAL_JUMP)
// 005b79e9: XOR EAX,EAX
// 005b79eb: RET
// 005b79ec: PUSH ESI
//   Label: LAB_005b79ec
// 005b79ed: PUSH EBX
// 005b79ee: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005b79f2: PUSH ECX
// 005b79f3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005b79f7: PUSH EBX
// 005b79f8: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b79fc: PUSH ESI
// 005b79fd: CALL dword ptr [g_APIDLL_add3dLine]
//   XREF to: 03f6b8e4 (READ)
// 005b7a03: ADD ESP,0xc
// 005b7a06: POP EBX
// 005b7a07: POP ESI
// 005b7a08: RET
