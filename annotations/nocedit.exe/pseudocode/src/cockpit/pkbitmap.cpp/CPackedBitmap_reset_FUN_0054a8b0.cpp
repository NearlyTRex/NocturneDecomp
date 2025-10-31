// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
// Address: 0054a8b0
// Address Range: [[0054a8b0, 0054a8d0]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap * this_ptr)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820 (0054a820) at 0054a826 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 (0054a8e0) at 0054a912 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840 (0054a840) at 0054a849 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap *this_ptr)

{
  this_ptr->width = 0;
  this_ptr->height = 0;
  this_ptr->row_pointers = (void **)0x0;
  this_ptr->packed_data = (char *)0x0;
  return;
}


// Assembly code:
// 0054a8b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
//   XREF to: Stack[0x4] (READ)
// 0054a8b4: MOV dword ptr [EAX + 0x18],0x0
// 0054a8bb: MOV dword ptr [EAX + 0x1c],0x0
// 0054a8c2: MOV dword ptr [EAX + 0x20],0x0
// 0054a8c9: MOV dword ptr [EAX + 0x14],0x0
// 0054a8d0: RET
