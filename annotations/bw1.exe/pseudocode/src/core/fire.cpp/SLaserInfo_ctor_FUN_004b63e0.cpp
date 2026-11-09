// Name: core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0
// Address: 004b63e0
// Address Range: [[004b63e0, 004b641d]]
// Convention: __cdecl
// Signature: SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0(SLaserInfo *this_ptr)

#include "nocturne.h"

SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0(SLaserInfo *this_ptr)

{
  *(uint *)this_ptr = 0x3f800000;
  *(uint *)(this_ptr + 8) = 0;
  *(uint *)(this_ptr + 0xc) = 0xff;
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)(this_ptr + 0x14) = 0;
  *(uint *)(this_ptr + 0x18) = 0;
  *(uint *)(this_ptr + 0x1c) = 0;
  *(uint *)(this_ptr + 4) = 0x3CA3D70A;
  return this_ptr;
}
