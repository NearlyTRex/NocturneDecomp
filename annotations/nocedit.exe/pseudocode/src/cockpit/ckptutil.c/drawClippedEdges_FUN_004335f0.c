// Name: cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0
// Address: 004335f0
// Address Range: [[004335f0, 004336d4]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0(SEdge * edges, int count, int x_offset, int y_offset)
// Globals:
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawLine_FUN_004011b0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_drawClippedEdges_FUN_004335f0(SEdge *edges,int count,int x_offset,int y_offset)

{
  int y2;
  int x1;
  int y1;
  int x2;
  int iVar1;
  
  iVar1 = 0;
  g_ActiveRenderColor = 0xfb;
  if (0 < count) {
    do {
      x1 = edges->x0 + x_offset;
      if (x1 < g_ClipLeft) {
        x1 = g_ClipLeft;
      }
      if (g_ClipRight <= x1) {
        x1 = g_ClipRight;
      }
      y1 = edges->y0 + y_offset;
      if (y1 < g_ClipTop) {
        y1 = g_ClipTop;
      }
      if (g_ClipBottom <= y1) {
        y1 = g_ClipBottom;
      }
      x2 = edges->x1 + x_offset;
      if (x2 < g_ClipLeft) {
        x2 = g_ClipLeft;
      }
      if (g_ClipRight <= x2) {
        x2 = g_ClipRight;
      }
      y2 = ((short)(edges->y1 * 2) >> 1) + y_offset;
      if (y2 < g_ClipTop) {
        y2 = g_ClipTop;
      }
      if (g_ClipBottom <= y2) {
        y2 = g_ClipBottom;
      }
      engine_2d_c_drawLine_FUN_004011b0(x1,y1,x2,y2);
      iVar1 = iVar1 + 1;
      edges = edges + 1;
    } while (iVar1 < x_offset);
  }
  return;
}


// Assembly code:
// 004335f0: PUSH EBX
//   Label: cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0
// 004335f1: PUSH ESI
// 004335f2: PUSH EDI
// 004335f3: PUSH EBP
// 004335f4: SUB ESP,0x4
// 004335f7: MOV EDX,0xfb
// 004335fc: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00433600: XOR EDI,EDI
// 00433602: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 00433608: TEST ECX,ECX
// 0043360a: JLE 0x004336cd
//   XREF to: 004336cd (CONDITIONAL_JUMP)
// 00433610: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00433614: MOV AX,word ptr [EBX]
//   Label: LAB_00433614
// 00433617: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043361b: MOVSX ECX,AX
// 0043361e: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 00433623: ADD ECX,EBP
// 00433625: CMP ECX,EAX
// 00433627: JGE 0x0043362b
//   XREF to: 0043362b (CONDITIONAL_JUMP)
// 00433629: MOV ECX,EAX
// 0043362b: MOV EDX,dword ptr [0x02d02560]
//   Label: LAB_0043362b
//   XREF to: 02d02560 (READ)
// 00433631: CMP ECX,EDX
// 00433633: JL 0x00433637
//   XREF to: 00433637 (CONDITIONAL_JUMP)
// 00433635: MOV ECX,EDX
// 00433637: MOV AX,word ptr [EBX + 0x2]
//   Label: LAB_00433637
// 0043363b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0043363f: MOVSX EDX,AX
// 00433642: MOV EBP,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00433648: ADD EDX,ESI
// 0043364a: CMP EDX,EBP
// 0043364c: JGE 0x00433650
//   XREF to: 00433650 (CONDITIONAL_JUMP)
// 0043364e: MOV EDX,EBP
// 00433650: MOV EAX,[0x02d02564]
//   Label: LAB_00433650
//   XREF to: 02d02564 (READ)
// 00433655: CMP EDX,EAX
// 00433657: JL 0x0043365b
//   XREF to: 0043365b (CONDITIONAL_JUMP)
// 00433659: MOV EDX,EAX
// 0043365b: MOV AX,word ptr [EBX + 0x4]
//   Label: LAB_0043365b
// 0043365f: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00433663: MOVSX ESI,AX
// 00433666: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0043366b: ADD ESI,EBP
// 0043366d: CMP ESI,EAX
// 0043366f: JGE 0x00433673
//   XREF to: 00433673 (CONDITIONAL_JUMP)
// 00433671: MOV ESI,EAX
// 00433673: MOV EBP,dword ptr [0x02d02560]
//   Label: LAB_00433673
//   XREF to: 02d02560 (READ)
// 00433679: CMP ESI,EBP
// 0043367b: JL 0x0043367f
//   XREF to: 0043367f (CONDITIONAL_JUMP)
// 0043367d: MOV ESI,EBP
// 0043367f: MOV AX,word ptr [EBX + 0x6]
//   Label: LAB_0043367f
// 00433683: ADD EAX,EAX
// 00433685: SAR AX,0x1
// 00433688: MOV word ptr [ESP],AX
//   XREF to: Stack[-0x14] (DATA)
// 0043368c: MOV EAX,dword ptr [ESP + -0x2]
//   XREF to: Stack[-0x16] (READ)
// 00433690: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00433694: SAR EAX,0x10
// 00433697: ADD EAX,EBP
// 00433699: MOV EBP,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0043369f: CMP EAX,EBP
// 004336a1: JGE 0x004336a5
//   XREF to: 004336a5 (CONDITIONAL_JUMP)
// 004336a3: MOV EAX,EBP
// 004336a5: MOV EBP,dword ptr [0x02d02564]
//   Label: LAB_004336a5
//   XREF to: 02d02564 (READ)
// 004336ab: CMP EAX,EBP
// 004336ad: JL 0x004336b1
//   XREF to: 004336b1 (CONDITIONAL_JUMP)
// 004336af: MOV EAX,EBP
// 004336b1: PUSH EAX
//   Label: LAB_004336b1
// 004336b2: PUSH ESI
// 004336b3: PUSH EDX
// 004336b4: PUSH ECX
// 004336b5: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 004336ba: ADD ESP,0x10
// 004336bd: INC EDI
// 004336be: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004336c2: ADD EBX,0x8
// 004336c5: CMP EDI,ESI
// 004336c7: JL 0x00433614
//   XREF to: 00433614 (CONDITIONAL_JUMP)
// 004336cd: ADD ESP,0x4
//   Label: LAB_004336cd
// 004336d0: POP EBP
// 004336d1: POP EDI
// 004336d2: POP ESI
// 004336d3: POP EBX
// 004336d4: RET
