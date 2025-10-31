// Name: core_setcolid.cpp_CDemonSet_FUN_00574220
// Address: 00574220
// Address Range: [[00574220, 0057422e]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_00574220(CDemonSet * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 (00408db0) at 00408df8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574220(CDemonSet *this_ptr)

{
  this_ptr->collision_flag = 1;
  return;
}


// Assembly code:
// 00574220: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setcolid.cpp_CDemonSet_FUN_00574220
//   XREF to: Stack[0x4] (READ)
// 00574224: MOV dword ptr [EAX + 0x15f698],0x1
// 0057422e: RET
