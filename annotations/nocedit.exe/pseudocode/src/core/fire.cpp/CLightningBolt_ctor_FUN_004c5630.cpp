// Name: core_fire.cpp_CLightningBolt_ctor_FUN_004c5630
// Address: 004c5630
// Address Range: [[004c5630, 004c563b]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLightningBolt_ctor_FUN_004c5630(CLightningBolt * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_init_FUN_004c6c80 (004c6c80) at 004c6e24 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_ctor_FUN_004c5630(CLightningBolt *this_ptr)

{
  this_ptr->field0_0x0[0x14] = '\0';
  this_ptr->field0_0x0[0x15] = '\0';
  this_ptr->field0_0x0[0x16] = '\0';
  this_ptr->field0_0x0[0x17] = '\0';
  return;
}


// Assembly code:
// 004c5630: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CLightningBolt_ctor_FUN_004c5630
//   XREF to: Stack[0x4] (READ)
// 004c5634: MOV dword ptr [EAX + 0x14],0x0
// 004c563b: RET
