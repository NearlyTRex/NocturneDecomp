// Name: cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820
// Address: 00433820
// Address Range: [[00433820, 004338e4]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820(uchar * color_buffer, SEdge * edge_array, int edge_count, int offset_x, int offset_y, int buffer_width)
// Function calls:
//   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_renderEdgeArrayWithBufferLookup_FUN_00433820
          (uchar *color_buffer,SEdge *edge_array,int edge_count,int offset_x,int offset_y,
          int buffer_width)

{
  int iVar1;
  int iVar2;
  
  if ((color_buffer != (uchar *)0x0) && (iVar2 = 0, 0 < edge_count)) {
    do {
      iVar1 = (int)((short)(edge_array->y1 * 2) >> 1);
      cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0
                (edge_array->x0 + offset_x,edge_array->y0 + offset_y,edge_array->x1 + offset_x,
                 iVar1 + offset_y,
                 (uint)color_buffer[(int)edge_array->x0 + buffer_width * edge_array->y0],
                 color_buffer[(int)edge_array->x1 + buffer_width * iVar1],
                 (uint)((ushort)edge_array->y1 >> 0xf));
      iVar2 = iVar2 + 1;
      edge_array = edge_array + 1;
    } while (iVar2 < offset_x);
  }
  return;
}


// Assembly code:
// 00433820: PUSH ESI
//   Label: cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820
// 00433821: PUSH EBP
// 00433822: SUB ESP,0x10
// 00433825: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0x4] (READ)
// 0043382a: JZ 0x004338df
//   XREF to: 004338df (CONDITIONAL_JUMP)
// 00433830: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00433834: XOR ESI,ESI
// 00433836: TEST ECX,ECX
// 00433838: JLE 0x004338df
//   XREF to: 004338df (CONDITIONAL_JUMP)
// 0043383e: PUSH EDI
// 0043383f: PUSH EBX
// 00433840: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00433844: MOV AX,word ptr [EBX]
//   Label: LAB_00433844
// 00433847: MOVSX ECX,AX
// 0043384a: MOV AX,word ptr [EBX + 0x2]
// 0043384e: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 00433852: CWDE
// 00433853: IMUL EDI,EAX
// 00433856: MOV DX,word ptr [EBX + 0x4]
// 0043385a: MOVSX EDX,DX
// 0043385d: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00433861: MOV DX,word ptr [EBX + 0x6]
// 00433865: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00433869: ADD EDX,EDX
// 0043386b: ADD EDI,EBP
// 0043386d: SAR DX,0x1
// 00433870: MOVZX EDI,byte ptr [ECX + EDI*0x1]
// 00433874: MOVSX EDX,DX
// 00433877: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0043387b: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 0043387f: IMUL EDI,EDX
// 00433882: ADD EDI,EBP
// 00433884: ADD EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00433888: MOVZX EDI,byte ptr [EDI]
// 0043388b: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 0043388f: MOV DI,word ptr [EBX + 0x6]
// 00433893: SHR DI,0xf
// 00433897: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0043389b: XOR EDI,EDI
// 0043389d: MOV DI,word ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 004338a2: PUSH EDI
// 004338a3: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x10] (READ)
// 004338a7: PUSH EDI
// 004338a8: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 004338ac: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 004338b0: PUSH EBP
// 004338b1: ADD EDX,EDI
// 004338b3: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 004338b7: PUSH EDX
// 004338b8: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 004338bc: ADD EDX,EBP
// 004338be: PUSH EDX
// 004338bf: ADD EAX,EDI
// 004338c1: PUSH EAX
// 004338c2: ADD ECX,EBP
// 004338c4: PUSH ECX
// 004338c5: CALL cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
//   XREF to: 004339c0 (UNCONDITIONAL_CALL)
// 004338ca: ADD ESP,0x1c
// 004338cd: INC ESI
// 004338ce: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 004338d2: ADD EBX,0x8
// 004338d5: CMP ESI,EBP
// 004338d7: JL 0x00433844
//   XREF to: 00433844 (CONDITIONAL_JUMP)
// 004338dd: POP EBX
// 004338de: POP EDI
// 004338df: ADD ESP,0x10
//   Label: LAB_004338df
// 004338e2: POP EBP
// 004338e3: POP ESI
// 004338e4: RET
