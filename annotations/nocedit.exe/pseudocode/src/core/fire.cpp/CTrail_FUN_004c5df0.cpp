// Name: core_fire.cpp_CTrail_FUN_004c5df0
// Address: 004c5df0
// Address Range: [[004c5df0, 004c5e34]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_FUN_004c5df0(CTrail * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_FUN_004c5df0(CTrail *this_ptr)

{
  CTrail *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  if (this_ptr != in_stack_00000008) {
    *(uint *)this_ptr->unk = *(uint *)in_stack_00000008->unk;
    *(uint *)(this_ptr->unk + 4) = *(uint *)(in_stack_00000008->unk + 4);
    *(uint *)(this_ptr->unk + 8) = *(uint *)(in_stack_00000008->unk + 8);
  }
  *(uint *)(this_ptr->unk + 0xc) = in_stack_0000000c;
  *(uint *)(this_ptr->unk + 0x14) = in_stack_00000010;
  *(uint *)(this_ptr->unk + 0x10) = in_stack_00000014;
  *(uint *)(this_ptr->unk + 0x18) = in_stack_00000014;
  *(uint *)(this_ptr->unk + 0x1c) = in_stack_00000010;
  *(uint *)(this_ptr->unk + 0x20) = in_stack_00000018;
  return;
}
