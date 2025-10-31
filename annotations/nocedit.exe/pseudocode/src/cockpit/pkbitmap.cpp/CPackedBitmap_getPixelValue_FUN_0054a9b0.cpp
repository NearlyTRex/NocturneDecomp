// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
// Address: 0054a9b0
// Address Range: [[0054a9b0, 0054aa1b]]
// Convention: __cdecl
// Signature: int cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0(CPackedBitmap * this_ptr, int x_coordinate, int row_index)
// Cross-references:
//   cockpit_ckptutil.c_FUN_004338f0 (004338f0) at 00433943 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
          (CPackedBitmap *this_ptr,int x_coordinate,int row_index)

{
  ushort *puVar1;
  uint uVar2;
  
  if ((-1 < row_index) && (row_index < this_ptr->height)) {
    for (puVar1 = (ushort *)((int)this_ptr->row_pointers[row_index] + (int)this_ptr->packed_data);
        (puVar1 < this_ptr->packed_data + (int)(this_ptr->row_pointers + row_index)[1] &&
        (uVar2 = (uint)*puVar1, (int)uVar2 <= x_coordinate));
        puVar1 = (ushort *)((int)puVar1 + (puVar1[1] + 3 & 0xfffffffc) + 4)) {
      if (x_coordinate < (int)(uVar2 + puVar1[1])) {
        return (uint)*(byte *)((int)puVar1 + (x_coordinate - uVar2) + 4);
      }
    }
  }
  return -1;
}


// Assembly code:
// 0054a9b0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
// 0054a9b1: PUSH ESI
// 0054a9b2: PUSH EDI
// 0054a9b3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054a9b7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0054a9bb: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0054a9bf: TEST EDX,EDX
// 0054a9c1: JL 0x0054aa05
//   XREF to: 0054aa05 (CONDITIONAL_JUMP)
// 0054a9c3: CMP EDX,dword ptr [EDI + 0x1c]
// 0054a9c6: JGE 0x0054aa05
//   XREF to: 0054aa05 (CONDITIONAL_JUMP)
// 0054a9c8: SHL EDX,0x2
// 0054a9cb: MOV EAX,dword ptr [EDI + 0x20]
// 0054a9ce: ADD EDX,EAX
// 0054a9d0: MOV EDI,dword ptr [EDI + 0x14]
// 0054a9d3: MOV EAX,dword ptr [EDX]
// 0054a9d5: MOV ESI,dword ptr [EDX + 0x4]
// 0054a9d8: ADD EAX,EDI
// 0054a9da: ADD EDI,ESI
// 0054a9dc: CMP EAX,EDI
// 0054a9de: JNC 0x0054aa05
//   XREF to: 0054aa05 (CONDITIONAL_JUMP)
// 0054a9e0: XOR EDX,EDX
//   Label: LAB_0054a9e0
// 0054a9e2: MOV DX,word ptr [EAX]
// 0054a9e5: CMP EDX,EBX
// 0054a9e7: JG 0x0054aa05
//   XREF to: 0054aa05 (CONDITIONAL_JUMP)
// 0054a9e9: XOR ECX,ECX
// 0054a9eb: MOV CX,word ptr [EAX + 0x2]
// 0054a9ef: LEA ESI,[EDX + ECX*0x1]
// 0054a9f2: ADD EAX,0x4
// 0054a9f5: CMP EBX,ESI
// 0054a9f7: JL 0x0054aa0e
//   XREF to: 0054aa0e (CONDITIONAL_JUMP)
// 0054a9f9: LEA EDX,[ECX + 0x3]
// 0054a9fc: AND DL,0xfc
// 0054a9ff: ADD EAX,EDX
// 0054aa01: CMP EAX,EDI
// 0054aa03: JC 0x0054a9e0
//   XREF to: 0054a9e0 (CONDITIONAL_JUMP)
// 0054aa05: MOV EAX,0xffffffff
//   Label: LAB_0054aa05
// 0054aa0a: POP EDI
// 0054aa0b: POP ESI
// 0054aa0c: POP EBX
// 0054aa0d: RET
// 0054aa0e: SUB EBX,EDX
//   Label: LAB_0054aa0e
// 0054aa10: MOV AL,byte ptr [EBX + EAX*0x1]
// 0054aa13: AND EAX,0xff
// 0054aa18: POP EDI
// 0054aa19: POP ESI
// 0054aa1a: POP EBX
// 0054aa1b: RET
