// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
// Address: 0054bcd0
// Address Range: [[0054bcd0, 0054bcff]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet * this_ptr)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 (0054be70) at 0054be93 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 (0054c3d0) at 0054c3f3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet *this_ptr)

{
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  this_ptr->extension = 0;
  this_ptr->base_path = 0;
  crt_memory_c_memset_FUN_005fde40(this_ptr->filename,0,0x14);
  return;
}


// Assembly code:
// 0054bcd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
//   XREF to: Stack[0x4] (READ)
// 0054bcd4: MOV dword ptr [EAX],0x0
// 0054bcda: ADD EAX,0x8
// 0054bcdd: PUSH 0x14
// 0054bcdf: MOV dword ptr [EAX + -0x4],0x0
// 0054bce6: PUSH 0x0
// 0054bce8: MOV dword ptr [EAX + 0x14],0x0
// 0054bcef: PUSH EAX
// 0054bcf0: MOV dword ptr [EAX + 0x18],0x0
// 0054bcf7: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0054bcfc: ADD ESP,0xc
// 0054bcff: RET
