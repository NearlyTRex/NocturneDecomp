// Name: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004355c0
// Address: 004355c0
// Address Range: [[004355c0, 00435720]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004355c0(SEdge * edge_array, int edge_count, int flip_width)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_004355c0
          (SEdge *edge_array,int edge_count,int flip_width)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  iVar2 = 0;
  if (0 < edge_count) {
    do {
      while( true ) {
        sVar1 = edge_array->y0;
        uVar3 = ((short)flip_width - edge_array->x1) - 1;
        uVar4 = (short)(edge_array->y1 * 2) >> 1;
        uVar5 = ((short)flip_width - edge_array->x0) - 1;
        if (edge_array->x0 <= edge_array->x1) break;
        edge_array->x0 = 0;
        edge_array->y0 = 0;
        edge_array->x0 = sVar1;
        edge_array->y0 = uVar5;
        edge_array->x1 = 0;
        uVar5 = edge_array->y1 & 0x8000;
        edge_array->x1 = uVar4;
        edge_array->y1 = uVar5;
        edge_array->y1 = uVar5 | uVar3 & 0x7fff;
        iVar2 = iVar2 + 1;
        edge_array = edge_array + 1;
        if (edge_count <= iVar2) {
          return;
        }
      }
      edge_array->x0 = 0;
      edge_array->y0 = 0;
      edge_array->x0 = edge_array->x0 | uVar4;
      edge_array->y0 = uVar3;
      edge_array->x1 = 0;
      uVar3 = edge_array->y1 & 0x8000;
      edge_array->x1 = sVar1;
      edge_array->y1 = uVar3;
      edge_array->y1 = uVar3 | uVar5 & 0x7fff;
      iVar2 = iVar2 + 1;
      edge_array = edge_array + 1;
    } while (iVar2 < edge_count);
  }
  return;
}


// Assembly code:
// 004355c0: PUSH EBX
//   Label: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004355c0
// 004355c1: PUSH ESI
// 004355c2: PUSH EDI
// 004355c3: PUSH EBP
// 004355c4: SUB ESP,0x1c
// 004355c7: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 004355cb: XOR ECX,ECX
// 004355cd: TEST EBP,EBP
// 004355cf: JLE 0x004356a4
//   XREF to: 004356a4 (CONDITIONAL_JUMP)
// 004355d5: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004355d9: MOV SI,word ptr [EAX + 0x2]
//   Label: LAB_004355d9
// 004355dd: MOVSX ESI,SI
// 004355e0: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 004355e4: MOV SI,word ptr [EAX + 0x4]
// 004355e8: MOVSX ESI,SI
// 004355eb: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 004355ef: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x2c] (DATA)
// 004355f2: MOV DX,word ptr [EAX]
// 004355f5: SUB EDI,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 004355f8: MOVSX EBX,DX
// 004355fb: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004355ff: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00435603: SUB EDI,EBX
// 00435605: MOV SI,word ptr [EAX + 0x6]
// 00435609: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0043560d: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00435611: ADD ESI,ESI
// 00435613: DEC EDI
// 00435614: SAR SI,0x1
// 00435617: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0043561b: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0043561f: MOVSX ESI,SI
// 00435622: DEC EDI
// 00435623: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00435627: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0043562b: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0043562e: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 00435632: CMP EBX,EDI
// 00435634: JG 0x004356ac
//   XREF to: 004356ac (CONDITIONAL_JUMP)
// 00435636: MOV DI,word ptr [EAX + 0x2]
// 0043563a: AND EDX,0xffff0000
// 00435640: AND EDI,0xffff0000
// 00435646: MOV word ptr [EAX],DX
// 00435649: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0043564d: MOV BX,word ptr [EAX]
// 00435650: MOV word ptr [EAX + 0x2],DI
// 00435654: OR EBX,EDX
// 00435656: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0043565a: MOV word ptr [EAX],BX
// 0043565d: MOV EBX,EDI
// 0043565f: MOV DI,word ptr [EAX + 0x4]
// 00435663: OR EBX,EDX
// 00435665: AND EDI,0xffff0000
// 0043566b: MOV word ptr [EAX + 0x2],BX
// 0043566f: MOV EDX,EDI
// 00435671: MOV BX,word ptr [EAX + 0x6]
// 00435675: MOV word ptr [EAX + 0x4],DI
// 00435679: OR EDX,ESI
// 0043567b: AND EBX,0xffff8000
// 00435681: MOV word ptr [EAX + 0x4],DX
// 00435685: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 00435689: MOV ESI,EBX
// 0043568b: AND DH,0x7f
// 0043568e: MOV word ptr [EAX + 0x6],BX
// 00435692: OR ESI,EDX
// 00435694: MOV word ptr [EAX + 0x6],SI
// 00435698: INC ECX
// 00435699: ADD EAX,0x8
// 0043569c: CMP ECX,EBP
// 0043569e: JL 0x004355d9
//   XREF to: 004355d9 (CONDITIONAL_JUMP)
// 004356a4: ADD ESP,0x1c
//   Label: LAB_004356a4
// 004356a7: POP EBP
// 004356a8: POP EDI
// 004356a9: POP ESI
// 004356aa: POP EBX
// 004356ab: RET
// 004356ac: AND EDX,0xffff0000
//   Label: LAB_004356ac
// 004356b2: MOV BX,word ptr [EAX + 0x2]
// 004356b6: MOV EDI,EDX
// 004356b8: AND EBX,0xffff0000
// 004356be: MOV word ptr [EAX],DX
// 004356c1: OR EDI,ESI
// 004356c3: MOV word ptr [EAX + 0x2],BX
// 004356c7: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 004356cb: MOV word ptr [EAX],DI
// 004356ce: MOV ESI,EBX
// 004356d0: MOV DI,word ptr [EAX + 0x4]
// 004356d4: OR ESI,EDX
// 004356d6: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 004356da: AND EDI,0xffff0000
// 004356e0: MOV word ptr [EAX + 0x2],SI
// 004356e4: MOV EBX,EDI
// 004356e6: MOV SI,word ptr [EAX + 0x6]
// 004356ea: MOV word ptr [EAX + 0x4],DI
// 004356ee: AND ESI,0xffff8000
// 004356f4: OR EBX,EDX
// 004356f6: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004356fa: MOV EDI,ESI
// 004356fc: MOV word ptr [EAX + 0x4],BX
// 00435700: AND DH,0x7f
// 00435703: MOV word ptr [EAX + 0x6],SI
// 00435707: OR EDI,EDX
// 00435709: MOV word ptr [EAX + 0x6],DI
// 0043570d: INC ECX
// 0043570e: ADD EAX,0x8
// 00435711: CMP ECX,EBP
// 00435713: JL 0x004355d9
//   XREF to: 004355d9 (CONDITIONAL_JUMP)
// 00435719: ADD ESP,0x1c
// 0043571c: POP EBP
// 0043571d: POP EDI
// 0043571e: POP ESI
// 0043571f: POP EBX
// 00435720: RET
