// Name: cockpit_ckptutil.c_setEdgeData_FUN_00434a50
// Address: 00434a50
// Address Range: [[00434a50, 00434aea]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_setEdgeData_FUN_00434a50(SEdge * edge_array, int edge_index, int x1, int y1, int x2, int y2, int flag_bit)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_setEdgeData_FUN_00434a50
          (SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit)

{
  SEdge *pSVar1;
  ushort uVar2;
  
  pSVar1 = edge_array + edge_index;
  pSVar1->x0 = 0;
  pSVar1->y0 = 0;
  uVar2 = pSVar1->y1 & 0x8000;
  pSVar1->x0 = (short)x1;
  pSVar1->x1 = 0;
  pSVar1->y0 = (short)y1;
  pSVar1->y1 = uVar2;
  pSVar1->y1 = uVar2 | (ushort)y2 & 0x7fff;
  *(byte *)((int)&pSVar1->y1 + 1) = *(byte *)((int)&pSVar1->y1 + 1) & 0x7f;
  pSVar1->x1 = (short)x2;
  pSVar1->y1 = pSVar1->y1 | (ushort)((flag_bit & 1U) << 0xf);
  return;
}


// Assembly code:
// 00434a50: PUSH EBX
//   Label: cockpit_ckptutil.c_setEdgeData_FUN_00434a50
// 00434a51: PUSH ESI
// 00434a52: PUSH EDI
// 00434a53: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00434a57: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00434a5b: SHL EAX,0x3
// 00434a5e: ADD EAX,EDX
// 00434a60: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00434a64: MOV BX,word ptr [EAX]
// 00434a67: MOV SI,word ptr [EAX + 0x2]
// 00434a6b: AND EBX,0xffff0000
// 00434a71: AND ESI,0xffff0000
// 00434a77: MOV word ptr [EAX],BX
// 00434a7a: MOV ECX,EBX
// 00434a7c: MOV word ptr [EAX + 0x2],SI
// 00434a80: MOV EDI,ESI
// 00434a82: MOV BX,word ptr [EAX + 0x4]
// 00434a86: MOV SI,word ptr [EAX + 0x6]
// 00434a8a: OR ECX,EDX
// 00434a8c: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00434a90: AND EBX,0xffff0000
// 00434a96: AND ESI,0xffff8000
// 00434a9c: MOV word ptr [EAX],CX
// 00434a9f: MOV ECX,EBX
// 00434aa1: OR EDI,EDX
// 00434aa3: MOV word ptr [EAX + 0x4],BX
// 00434aa7: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00434aab: MOV word ptr [EAX + 0x2],DI
// 00434aaf: OR ECX,EDX
// 00434ab1: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 00434ab5: MOV EDI,ESI
// 00434ab7: AND DH,0x7f
// 00434aba: MOV word ptr [EAX + 0x6],SI
// 00434abe: OR EDI,EDX
// 00434ac0: MOV word ptr [EAX + 0x6],DI
// 00434ac4: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x1c] (READ)
// 00434ac8: MOV BL,byte ptr [EAX + 0x7]
// 00434acb: XOR DH,DH
// 00434acd: AND BL,0x7f
// 00434ad0: AND DL,0x1
// 00434ad3: MOV byte ptr [EAX + 0x7],BL
// 00434ad6: SHL EDX,0xf
// 00434ad9: MOV BX,word ptr [EAX + 0x6]
// 00434add: MOV word ptr [EAX + 0x4],CX
// 00434ae1: OR EBX,EDX
// 00434ae3: MOV word ptr [EAX + 0x6],BX
// 00434ae7: POP EDI
// 00434ae8: POP ESI
// 00434ae9: POP EBX
// 00434aea: RET
