// Name: core_set.cpp_CDemonSet_FUN_00570c60
// Address: 00570c60
// Address Range: [[00570c60, 00570c6e]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570c60(CDemonSet * this_ptr)
// Cross-references:
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0 (004eaef0) at 004eb1f7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570c60(CDemonSet *this_ptr)

{
  this_ptr->mirror_render_flag = 1;
  return;
}


// Assembly code:
// 00570c60: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_set.cpp_CDemonSet_FUN_00570c60
//   XREF to: Stack[0x4] (READ)
// 00570c64: MOV dword ptr [EAX + 0x161654],0x1
// 00570c6e: RET
