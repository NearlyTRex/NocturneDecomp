// Name: cockpit_ckptutil.c_copyScreenRegion_FUN_00432d90
// Address: 00432d90
// Address Range: [[00432d90, 00432dee]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_copyScreenRegion_FUN_00432d90(void * dest_buffer, int src_x, int src_y, int start_row, int bytes_per_row, int height)
// Globals:
//   int g_WindowWidth = 0x140

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_copyScreenRegion_FUN_00432d90
          (void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (0 < height) {
    iVar1 = start_row + height;
    do {
      iVar3 = g_WindowWidth * start_row;
      start_row = start_row + 1;
      puVar4 = (undefined4 *)(iVar3 + src_y + src_x);
      puVar5 = (undefined4 *)dest_buffer;
      for (uVar2 = (uint)bytes_per_row >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = bytes_per_row & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      dest_buffer = (void *)((int)dest_buffer + bytes_per_row);
    } while (start_row < iVar1);
  }
  return;
}


// Assembly code:
// 00432d90: PUSH EBX
//   Label: cockpit_ckptutil.c_copyScreenRegion_FUN_00432d90
// 00432d91: PUSH ESI
// 00432d92: PUSH EBP
// 00432d93: SUB ESP,0x4
// 00432d96: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00432d9a: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00432d9e: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00432da2: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00432da6: TEST ESI,ESI
// 00432da8: JLE 0x00432de8
//   XREF to: 00432de8 (CONDITIONAL_JUMP)
// 00432daa: PUSH EDI
// 00432dab: MOV EDX,ECX
// 00432dad: ADD ECX,ESI
// 00432daf: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 00432db3: MOV ESI,dword ptr [0x00679394]
//   Label: LAB_00432db3
//   XREF to: 00679394 (READ)
// 00432db9: IMUL ESI,EDX
// 00432dbc: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00432dc0: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00432dc4: ADD ESI,ECX
// 00432dc6: MOV ECX,EBP
// 00432dc8: ADD ESI,EDI
// 00432dca: MOV EDI,EBX
// 00432dcc: INC EDX
// 00432dcd: PUSH EDI
// 00432dce: MOV EAX,ECX
// 00432dd0: SHR ECX,0x2
// 00432dd3: MOVSD.REP ES:EDI,ESI
// 00432dd5: MOV CL,AL
// 00432dd7: AND CL,0x3
// 00432dda: MOVSB.REP ES:EDI,ESI
// 00432ddc: POP EDI
// 00432ddd: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 00432de1: ADD EBX,EBP
// 00432de3: CMP EDX,EAX
// 00432de5: JL 0x00432db3
//   XREF to: 00432db3 (CONDITIONAL_JUMP)
// 00432de7: POP EDI
// 00432de8: ADD ESP,0x4
//   Label: LAB_00432de8
// 00432deb: POP EBP
// 00432dec: POP ESI
// 00432ded: POP EBX
// 00432dee: RET
