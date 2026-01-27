// Name: core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0
// Address: 0049a3b0
// Address Range: [[0049a3b0, 0049a3f9]]
// Convention: __cdecl
// Signature: STriangleRef * core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef * this_ptr, STriangleRef * other)

#include "nocturne.h"

STriangleRef * __cdecl
core_dtrace_cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef *this_ptr,STriangleRef *other)

{
  *(uint *)this_ptr->unk = *(uint *)other->unk;
  *(uint *)(this_ptr->unk + 4) = *(uint *)(other->unk + 4);
  *(uint *)(this_ptr->unk + 8) = *(uint *)(other->unk + 8);
  *(uint *)(this_ptr->unk + 0xc) = *(uint *)(other->unk + 0xc);
  *(uint *)(this_ptr->unk + 0x10) = *(uint *)(other->unk + 0x10);
  *(uint *)(this_ptr->unk + 0x14) = *(uint *)(other->unk + 0x14);
  *(uint *)(this_ptr->unk + 0x18) = *(uint *)(other->unk + 0x18);
  return this_ptr;
}
