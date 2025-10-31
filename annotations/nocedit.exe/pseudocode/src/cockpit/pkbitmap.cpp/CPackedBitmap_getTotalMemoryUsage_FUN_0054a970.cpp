// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
// Address: 0054a970
// Address Range: [[0054a970, 0054a98e]]
// Convention: __cdecl
// Signature: int cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap * this_ptr)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0 (0054c6a0) at 0054c6c6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap *this_ptr)

{
  if (this_ptr->row_pointers == (void **)0x0) {
    return 0;
  }
  return (int)((this_ptr->height + 1) * 4 + (int)this_ptr->row_pointers[this_ptr->height]);
}


// Assembly code:
// 0054a970: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
//   XREF to: Stack[0x4] (READ)
// 0054a974: MOV EDX,dword ptr [EAX + 0x20]
// 0054a977: TEST EDX,EDX
// 0054a979: JNZ 0x0054a97e
//   XREF to: 0054a97e (CONDITIONAL_JUMP)
// 0054a97b: XOR EAX,EAX
// 0054a97d: RET
// 0054a97e: PUSH EBX
//   Label: LAB_0054a97e
// 0054a97f: MOV ECX,dword ptr [EAX + 0x1c]
// 0054a982: LEA EAX,[ECX + 0x1]
// 0054a985: MOV EBX,dword ptr [EDX + ECX*0x4]
// 0054a988: SHL EAX,0x2
// 0054a98b: ADD EAX,EBX
// 0054a98d: POP EBX
// 0054a98e: RET
