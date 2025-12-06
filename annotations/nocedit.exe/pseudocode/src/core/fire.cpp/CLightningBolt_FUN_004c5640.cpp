// Name: core_fire.cpp_CLightningBolt_FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c567e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLightningBolt_FUN_004c5640(CLightningBolt * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_FUN_004c5640(CLightningBolt *this_ptr)

{
  uint *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if (this_ptr->field0_0x0 + 4 != (char *)in_stack_00000008) {
    *(uint *)(this_ptr->field0_0x0 + 4) = *in_stack_00000008;
    *(uint *)(this_ptr->field0_0x0 + 8) = in_stack_00000008[1];
    *(uint *)(this_ptr->field0_0x0 + 0xc) = in_stack_00000008[2];
  }
  this_ptr->field0_0x0[0x14] = '\0';
  this_ptr->field0_0x0[0x15] = '\0';
  this_ptr->field0_0x0[0x16] = -0x80;
  this_ptr->field0_0x0[0x17] = '>';
  this_ptr->field0_0x0[0] = '\0';
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = '\0';
  this_ptr->field0_0x0[3] = '\0';
  *(uint *)(this_ptr->field0_0x0 + 0x10) = in_stack_0000000c;
  *(uint *)(this_ptr->field0_0x0 + 0x18) = in_stack_00000010;
  return;
}
