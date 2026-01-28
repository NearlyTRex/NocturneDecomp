// Name: core_fire.cpp_CLaserBeam_FUN_004c2420
// Address: 004c2420
// Address Range: [[004c2420, 004c24c0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_FUN_004c2420(CLaserBeam *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_FUN_004c2420(CLaserBeam *this_ptr)

{
  CLaserBeam *in_stack_00000008;
  uint *in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  
  if (this_ptr != in_stack_00000008) {
    *(uint *)this_ptr->unk = *(uint *)in_stack_00000008->unk;
    *(uint *)(this_ptr->unk + 4) = *(uint *)(in_stack_00000008->unk + 4);
    *(uint *)(this_ptr->unk + 8) = *(uint *)(in_stack_00000008->unk + 8);
  }
  if (this_ptr->unk + 0xc != (char *)in_stack_0000000c) {
    *(uint *)(this_ptr->unk + 0xc) = *in_stack_0000000c;
    *(uint *)(this_ptr->unk + 0x10) = in_stack_0000000c[1];
    *(uint *)(this_ptr->unk + 0x14) = in_stack_0000000c[2];
  }
  *(uint *)(this_ptr->unk + 0x18) = in_stack_00000010;
  *(uint *)(this_ptr->unk + 0x1c) = in_stack_00000014;
  if ((0.0 < *(float *)(this_ptr->unk + 0x1c)) &&
     (this_ptr->unk + 0x20 != (char *)in_stack_00000018)) {
    *(uint *)(this_ptr->unk + 0x20) = *in_stack_00000018;
    *(uint *)(this_ptr->unk + 0x24) = in_stack_00000018[1];
    *(uint *)(this_ptr->unk + 0x28) = in_stack_00000018[2];
  }
  *(int *)(this_ptr->unk + 0x2c) = in_stack_0000001c << 7;
  *(int *)(this_ptr->unk + 0x30) = in_stack_00000020 << 7;
  *(int *)(this_ptr->unk + 0x34) = in_stack_00000024 << 7;
  *(uint *)(this_ptr->unk + 0x38) = in_stack_00000028;
  *(uint *)(this_ptr->unk + 0x3c) = in_stack_0000002c;
  return;
}
