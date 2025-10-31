// Name: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
// Address: 00472a50
// Address Range: [[00472a50, 00472a72]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight * this_ptr)
// Cross-references:
//   core_dlight.cpp_CDemonLight_free_FUN_004728b0 (004728b0) at 004728c1 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056af18 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(CDemonLight *this_ptr)

{
  if (this_ptr->restore_memory_size == 0) {
    return;
  }
  (this_ptr->base).zbuffer_raw = (void *)0x0;
  this_ptr->restore_memory_size = 0;
  return;
}


// Assembly code:
// 00472a50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
//   XREF to: Stack[0x4] (READ)
// 00472a54: CMP dword ptr [EAX + 0x2f9c],0x0
// 00472a5b: JNZ 0x00472a5e
//   XREF to: 00472a5e (CONDITIONAL_JUMP)
// 00472a5d: RET
// 00472a5e: MOV dword ptr [EAX + 0x164],0x0
//   Label: LAB_00472a5e
// 00472a68: MOV dword ptr [EAX + 0x2f9c],0x0
// 00472a72: RET
