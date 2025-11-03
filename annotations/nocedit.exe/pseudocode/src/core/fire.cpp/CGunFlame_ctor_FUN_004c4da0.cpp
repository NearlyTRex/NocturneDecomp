// Name: core_fire.cpp_CGunFlame_ctor_FUN_004c4da0
// Address: 004c4da0
// Address Range: [[004c4da0, 004c4daa]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_ctor_FUN_004c4da0(CGunFlame * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_init_FUN_004c6c80 (004c6c80) at 004c6e02 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_ctor_FUN_004c4da0(CGunFlame *this_ptr)

{
  this_ptr->field0_0x0[0] = '\0';
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = '\0';
  this_ptr->field0_0x0[3] = '\0';
  return;
}


// Assembly code:
// 004c4da0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CGunFlame_ctor_FUN_004c4da0
//   XREF to: Stack[0x4] (READ)
// 004c4da4: MOV dword ptr [EAX],0x0
// 004c4daa: RET
