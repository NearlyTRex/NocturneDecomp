// Name: core_fire.cpp_CTrail_ctor_FUN_004c5de0
// Address: 004c5de0
// Address Range: [[004c5de0, 004c5deb]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_ctor_FUN_004c5de0(CTrail * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_init_FUN_004c6c80 (004c6c80) at 004c6e47 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_ctor_FUN_004c5de0(CTrail *this_ptr)

{
  this_ptr->field0_0x0[0x10] = '\0';
  this_ptr->field0_0x0[0x11] = '\0';
  this_ptr->field0_0x0[0x12] = '\0';
  this_ptr->field0_0x0[0x13] = '\0';
  return;
}


// Assembly code:
// 004c5de0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CTrail_ctor_FUN_004c5de0
//   XREF to: Stack[0x4] (READ)
// 004c5de4: MOV dword ptr [EAX + 0x10],0x0
// 004c5deb: RET
