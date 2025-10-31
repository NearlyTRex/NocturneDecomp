// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
// Address: 0054adb0
// Address Range: [[0054adb0, 0054ae6f]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0(CPackedBitmap * this_ptr, int dest_x, int dest_y, int rect_left, int rect_top, int rect_right, int rect_bottom)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90 (00488c90) at 00488cc1 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
          (CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top,int rect_right,
          int rect_bottom)

{
  int iVar1;
  int width;
  int iVar2;
  int local_18;
  int local_14;
  
  if ((((this_ptr->row_pointers != (void **)0x0) && (this_ptr->packed_data != (char *)0x0)) &&
      (dest_x <= rect_right)) && (dest_y <= rect_bottom)) {
    iVar2 = this_ptr->width + dest_x + -1;
    iVar1 = this_ptr->height + dest_y + -1;
    if ((rect_left <= iVar2) && (rect_top <= iVar1)) {
      local_18 = 0;
      if (dest_x < rect_left) {
        local_18 = rect_left - dest_x;
        dest_x = rect_left;
      }
      local_14 = 0;
      if (dest_y < rect_top) {
        local_14 = rect_top - dest_y;
        dest_y = rect_top;
      }
      width = this_ptr->width + -1;
      if (rect_right < iVar2) {
        width = width - (iVar2 - rect_right);
      }
      iVar2 = this_ptr->height + -1;
      if (rect_bottom < iVar1) {
        iVar2 = iVar2 - (iVar1 - rect_bottom);
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
                (this_ptr,dest_x,dest_y,local_18,local_14,width,iVar2);
    }
  }
  return;
}


// Assembly code:
// 0054adb0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
// 0054adb1: PUSH ESI
// 0054adb2: PUSH EDI
// 0054adb3: PUSH EBP
// 0054adb4: SUB ESP,0x8
// 0054adb7: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0054adbb: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0054adbf: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0054adc3: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0054adc7: CMP dword ptr [EAX + 0x20],0x0
// 0054adcb: JZ 0x0054ae5d
//   XREF to: 0054ae5d (CONDITIONAL_JUMP)
// 0054add1: CMP dword ptr [EAX + 0x14],0x0
// 0054add5: JZ 0x0054ae5d
//   XREF to: 0054ae5d (CONDITIONAL_JUMP)
// 0054addb: CMP EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 0054addf: JG 0x0054ae5d
//   XREF to: 0054ae5d (CONDITIONAL_JUMP)
// 0054ade5: CMP ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x1c] (READ)
// 0054ade9: JG 0x0054ae5d
//   XREF to: 0054ae5d (CONDITIONAL_JUMP)
// 0054adef: MOV EDI,dword ptr [EAX + 0x18]
// 0054adf2: MOV EBX,dword ptr [EAX + 0x1c]
// 0054adf5: ADD EDI,EDX
// 0054adf7: ADD EBX,ECX
// 0054adf9: DEC EDI
// 0054adfa: DEC EBX
// 0054adfb: CMP EDI,ESI
// 0054adfd: JL 0x0054ae5d
//   XREF to: 0054ae5d (CONDITIONAL_JUMP)
// 0054adff: CMP EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 0054ae03: JL 0x0054ae5d
//   XREF to: 0054ae5d (CONDITIONAL_JUMP)
// 0054ae05: XOR EBP,EBP
// 0054ae07: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 0054ae0a: CMP EDX,ESI
// 0054ae0c: JL 0x0054ae65
//   XREF to: 0054ae65 (CONDITIONAL_JUMP)
// 0054ae0e: XOR ESI,ESI
//   Label: LAB_0054ae0e
// 0054ae10: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 0054ae14: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0054ae18: CMP ECX,EBP
// 0054ae1a: JGE 0x0054ae26
//   XREF to: 0054ae26 (CONDITIONAL_JUMP)
// 0054ae1c: MOV ESI,EBP
// 0054ae1e: SUB ESI,ECX
// 0054ae20: MOV ECX,EBP
// 0054ae22: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0054ae26: MOV ESI,dword ptr [EAX + 0x18]
//   Label: LAB_0054ae26
// 0054ae29: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 0054ae2d: DEC ESI
// 0054ae2e: CMP EDI,EBP
// 0054ae30: JLE 0x0054ae36
//   XREF to: 0054ae36 (CONDITIONAL_JUMP)
// 0054ae32: SUB EDI,EBP
// 0054ae34: SUB ESI,EDI
// 0054ae36: MOV EDI,dword ptr [EAX + 0x1c]
//   Label: LAB_0054ae36
// 0054ae39: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x1c] (READ)
// 0054ae3d: DEC EDI
// 0054ae3e: CMP EBX,EBP
// 0054ae40: JLE 0x0054ae46
//   XREF to: 0054ae46 (CONDITIONAL_JUMP)
// 0054ae42: SUB EBX,EBP
// 0054ae44: SUB EDI,EBX
// 0054ae46: PUSH EDI
//   Label: LAB_0054ae46
// 0054ae47: PUSH ESI
// 0054ae48: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0054ae4c: PUSH EBX
// 0054ae4d: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0054ae51: PUSH ESI
// 0054ae52: PUSH ECX
// 0054ae53: PUSH EDX
// 0054ae54: PUSH EAX
// 0054ae55: CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0
//   XREF to: 0054acb0 (UNCONDITIONAL_CALL)
// 0054ae5a: ADD ESP,0x1c
// 0054ae5d: ADD ESP,0x8
//   Label: LAB_0054ae5d
// 0054ae60: POP EBP
// 0054ae61: POP EDI
// 0054ae62: POP ESI
// 0054ae63: POP EBX
// 0054ae64: RET
// 0054ae65: MOV EBP,ESI
//   Label: LAB_0054ae65
// 0054ae67: SUB EBP,EDX
// 0054ae69: MOV EDX,ESI
// 0054ae6b: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 0054ae6e: JMP 0x0054ae0e
//   XREF to: 0054ae0e (UNCONDITIONAL_JUMP)
