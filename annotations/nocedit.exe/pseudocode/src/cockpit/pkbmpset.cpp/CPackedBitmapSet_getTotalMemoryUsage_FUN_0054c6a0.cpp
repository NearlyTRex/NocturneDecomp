// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0
// Address: 0054c6a0
// Address Range: [[0054c6a0, 0054c6e0]]
// Convention: __cdecl
// Signature: int cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0(CPackedBitmapSet * this_ptr)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970

#include "nocturne.h"

int __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0(CPackedBitmapSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = this_ptr->bitmap_count * 0x24;
  if (0 < this_ptr->bitmap_count) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
                        ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3));
      iVar3 = iVar3 + 0x24;
      iVar4 = iVar4 + iVar1;
    } while (iVar2 < this_ptr->bitmap_count);
  }
  return iVar4;
}


// Assembly code:
// 0054c6a0: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0
// 0054c6a1: PUSH EDI
// 0054c6a2: PUSH EBP
// 0054c6a3: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054c6a7: MOV EAX,dword ptr [EBP]
// 0054c6aa: LEA EDI,[EAX*0x8 + 0x0]
// 0054c6b1: ADD EDI,EAX
// 0054c6b3: XOR EBX,EBX
// 0054c6b5: SHL EDI,0x2
// 0054c6b8: TEST EAX,EAX
// 0054c6ba: JLE 0x0054c6db
//   XREF to: 0054c6db (CONDITIONAL_JUMP)
// 0054c6bc: PUSH ESI
// 0054c6bd: XOR ESI,ESI
// 0054c6bf: MOV EAX,dword ptr [EBP + 0x4]
//   Label: LAB_0054c6bf
// 0054c6c2: ADD EAX,ESI
// 0054c6c4: PUSH EAX
// 0054c6c5: INC EBX
// 0054c6c6: CALL cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
//   XREF to: 0054a970 (UNCONDITIONAL_CALL)
// 0054c6cb: ADD ESI,0x24
// 0054c6ce: ADD ESP,0x4
// 0054c6d1: MOV ECX,dword ptr [EBP]
// 0054c6d4: ADD EDI,EAX
// 0054c6d6: CMP EBX,ECX
// 0054c6d8: JL 0x0054c6bf
//   XREF to: 0054c6bf (CONDITIONAL_JUMP)
// 0054c6da: POP ESI
// 0054c6db: MOV EAX,EDI
//   Label: LAB_0054c6db
// 0054c6dd: POP EBP
// 0054c6de: POP EDI
// 0054c6df: POP EBX
// 0054c6e0: RET
