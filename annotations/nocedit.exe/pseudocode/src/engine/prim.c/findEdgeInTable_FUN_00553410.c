// Name: engine_prim.c_findEdgeInTable_FUN_00553410
// Address: 00553410
// Address Range: [[00553410, 00553445]]
// Convention: __cdecl
// Signature: SSoftwareEdge * engine_prim.c_findEdgeInTable_FUN_00553410(int scanline, SSoftwareEdge * target_edge)
// Globals:
//   int g_ActiveEdgeCount
//   SSoftwareEdge[16] g_SoftwareEdgeTable
//   undefined4 g_SoftwareEdgeTable[1].y_min

#include "nocturne.h"

SSoftwareEdge * __cdecl
engine_prim_c_findEdgeInTable_FUN_00553410(int scanline,SSoftwareEdge *target_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_SoftwareEdgeTable;
  iVar2 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((scanline == pSVar1->y_min) && (pSVar1 != target_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_ActiveEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}


// Assembly code:
// 00553410: PUSH EBX
//   Label: engine_prim.c_findEdgeInTable_FUN_00553410
// 00553411: PUSH ESI
// 00553412: MOV EBX,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553418: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0055341c: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00553420: MOV EAX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 00553425: XOR EDX,EDX
// 00553427: TEST EBX,EBX
// 00553429: JLE 0x0055343b
//   XREF to: 0055343b (CONDITIONAL_JUMP)
// 0055342b: CMP ECX,dword ptr [EAX]
//   Label: LAB_0055342b
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 0055342d: JNZ 0x00553433
//   XREF to: 00553433 (CONDITIONAL_JUMP)
// 0055342f: CMP EAX,ESI
// 00553431: JNZ 0x0055343d
//   XREF to: 0055343d (CONDITIONAL_JUMP)
// 00553433: INC EDX
//   Label: LAB_00553433
// 00553434: ADD EAX,0x48
//   XREF to: 030e5708 (DATA)
// 00553437: CMP EDX,EBX
// 00553439: JL 0x0055342b
//   XREF to: 0055342b (CONDITIONAL_JUMP)
// 0055343b: XOR EAX,EAX
//   Label: LAB_0055343b
// 0055343d: MOV dword ptr [0x030e56bc],EBX
//   Label: LAB_0055343d
//   XREF to: 030e56bc (WRITE)
// 00553443: POP ESI
// 00553444: POP EBX
// 00553445: RET
