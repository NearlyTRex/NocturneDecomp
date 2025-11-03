// Name: core_setcolid.cpp_CDemonSet_FUN_00574170
// Address: 00574170
// Address Range: [[00574170, 0057417e]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_00574170(CDemonSet * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a70b [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00505e2b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574170(CDemonSet *this_ptr)

{
  this_ptr->field71_0x15f6dc = 1;
  return;
}


// Assembly code:
// 00574170: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setcolid.cpp_CDemonSet_FUN_00574170
//   XREF to: Stack[0x4] (READ)
// 00574174: MOV dword ptr [EAX + 0x15f6dc],0x1
// 0057417e: RET
