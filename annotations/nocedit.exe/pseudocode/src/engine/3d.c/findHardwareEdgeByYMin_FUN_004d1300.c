// Name: engine_3d.c_findHardwareEdgeByYMin_FUN_004d1300
// Address: 004d1300
// Address Range: [[004d1300, 004d1335]]
// Convention: __cdecl
// Signature: SHardwareEdge * engine_3d.c_findHardwareEdgeByYMin_FUN_004d1300(int y_min, SHardwareEdge * exclude_edge)
// Globals:
//   int g_EdgeCount
//   SHardwareEdge[16] g_HardwareEdgeTable
//   undefined4 DAT_02d7b464

#include "nocturne.h"

SHardwareEdge * __cdecl
engine_3d_c_findHardwareEdgeByYMin_FUN_004d1300(int y_min,SHardwareEdge *exclude_edge)

{
  SHardwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_HardwareEdgeTable;
  iVar2 = 0;
  if (0 < g_EdgeCount) {
    do {
      if ((y_min == pSVar1->y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_EdgeCount);
  }
  return (SHardwareEdge *)0x0;
}


// Assembly code:
// 004d1300: PUSH EBX
//   Label: engine_3d.c_findHardwareEdgeByYMin_FUN_004d1300
// 004d1301: PUSH ESI
// 004d1302: MOV EBX,dword ptr [0x02d7b428]
//   XREF to: 02d7b428 (READ)
// 004d1308: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d130c: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004d1310: MOV EAX,0x2d7b42c
//   XREF to: 02d7b42c (DATA)
// 004d1315: XOR EDX,EDX
// 004d1317: TEST EBX,EBX
// 004d1319: JLE 0x004d132b
//   XREF to: 004d132b (CONDITIONAL_JUMP)
// 004d131b: CMP ECX,dword ptr [EAX]
//   Label: LAB_004d131b
//   XREF to: 02d7b42c (READ)
//   XREF to: 02d7b464 (READ)
// 004d131d: JNZ 0x004d1323
//   XREF to: 004d1323 (CONDITIONAL_JUMP)
// 004d131f: CMP EAX,ESI
// 004d1321: JNZ 0x004d132d
//   XREF to: 004d132d (CONDITIONAL_JUMP)
// 004d1323: INC EDX
//   Label: LAB_004d1323
// 004d1324: ADD EAX,0x38
//   XREF to: 02d7b464 (DATA)
// 004d1327: CMP EDX,EBX
// 004d1329: JL 0x004d131b
//   XREF to: 004d131b (CONDITIONAL_JUMP)
// 004d132b: XOR EAX,EAX
//   Label: LAB_004d132b
// 004d132d: MOV dword ptr [0x02d7b428],EBX
//   Label: LAB_004d132d
//   XREF to: 02d7b428 (WRITE)
// 004d1333: POP ESI
// 004d1334: POP EBX
// 004d1335: RET
