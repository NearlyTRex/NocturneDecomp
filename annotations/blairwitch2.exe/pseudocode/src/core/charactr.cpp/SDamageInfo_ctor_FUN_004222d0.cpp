// Name: core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
// Address: 004222d0
// Address Range: [[004222d0, 00422335]]
// Convention: __cdecl
// Signature: SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo *this_ptr)

#include "nocturne.h"

SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo *this_ptr)

{
  *(uint *)(this_ptr + 0x28) = 0;
  *(uint *)(this_ptr + 0x2c) = 0;
  *(uint *)this_ptr = 0xffffffff;
  *(uint *)(this_ptr + 8) = 0;
  *(uint *)(this_ptr + 0x14) = 0;
  *(uint *)(this_ptr + 0x10) = *(uint *)(this_ptr + 0x14);
  *(uint *)(this_ptr + 0xc) = *(uint *)(this_ptr + 0x10);
  *(uint *)(this_ptr + 0x18) = 0x41a00000;
  *(uint *)(this_ptr + 0x24) = 0;
  *(uint *)(this_ptr + 0x20) = *(uint *)(this_ptr + 0x24);
  *(uint *)(this_ptr + 0x1c) = *(uint *)(this_ptr + 0x20);
  *(uint *)(this_ptr + 0x30) = 100;
  *(uint *)(this_ptr + 0x34) = 0;
  *(uint *)(this_ptr + 0x38) = 0;
  return this_ptr;
}
