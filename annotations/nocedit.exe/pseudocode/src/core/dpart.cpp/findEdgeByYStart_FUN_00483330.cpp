// Name: core_dpart.cpp_findEdgeByYStart_FUN_00483330
// Address: 00483330
// Address Range: [[00483330, 00483365]]
// Convention: __cdecl
// Signature: SEdgeData * core_dpart.cpp_findEdgeByYStart_FUN_00483330(int scanline_y, SEdgeData * exclude_edge)
// Globals:
//   int g_RenderTriangleEdgeCount
//   SEdgeData[16] g_EdgeInterpolationArray
//   undefined4 DAT_02c6cbbc

#include "nocturne.h"

SEdgeData * __cdecl
core_dpart_cpp_findEdgeByYStart_FUN_00483330(int scanline_y,SEdgeData *exclude_edge)

{
  SEdgeData *pSVar1;
  int iVar2;
  
  pSVar1 = g_EdgeInterpolationArray;
  iVar2 = 0;
  if (0 < g_RenderTriangleEdgeCount) {
    do {
      if ((scanline_y == pSVar1->y_start) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RenderTriangleEdgeCount);
  }
  return (SEdgeData *)0x0;
}


// Assembly code:
// 00483330: PUSH EBX
//   Label: core_dpart.cpp_findEdgeByYStart_FUN_00483330
// 00483331: PUSH ESI
// 00483332: MOV EBX,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 00483338: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048333c: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00483340: MOV EAX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00483345: XOR EDX,EDX
// 00483347: TEST EBX,EBX
// 00483349: JLE 0x0048335b
//   XREF to: 0048335b (CONDITIONAL_JUMP)
// 0048334b: CMP ECX,dword ptr [EAX]
//   Label: LAB_0048334b
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 0048334d: JNZ 0x00483353
//   XREF to: 00483353 (CONDITIONAL_JUMP)
// 0048334f: CMP EAX,ESI
// 00483351: JNZ 0x0048335d
//   XREF to: 0048335d (CONDITIONAL_JUMP)
// 00483353: INC EDX
//   Label: LAB_00483353
// 00483354: ADD EAX,0x48
//   XREF to: 02c6cbbc (DATA)
// 00483357: CMP EDX,EBX
// 00483359: JL 0x0048334b
//   XREF to: 0048334b (CONDITIONAL_JUMP)
// 0048335b: XOR EAX,EAX
//   Label: LAB_0048335b
// 0048335d: MOV dword ptr [0x02c6cb70],EBX
//   Label: LAB_0048335d
//   XREF to: 02c6cb70 (WRITE)
// 00483363: POP ESI
// 00483364: POP EBX
// 00483365: RET
