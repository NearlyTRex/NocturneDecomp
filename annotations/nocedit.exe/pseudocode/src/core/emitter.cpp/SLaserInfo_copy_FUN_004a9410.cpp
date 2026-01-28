// Name: core_emitter.cpp_SLaserInfo_copy_FUN_004a9410
// Address: 004a9410
// Address Range: [[004a9410, 004a94b7]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo *this_ptr,SLaserInfo *copy)

#include "nocturne.h"

void __cdecl core_emitter_cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo *this_ptr,SLaserInfo *copy)

{
  *(uint *)this_ptr->unk = *(uint *)copy->unk;
  *(uint *)(this_ptr->unk + 4) = *(uint *)(copy->unk + 4);
  *(uint *)(this_ptr->unk + 8) = *(uint *)(copy->unk + 8);
  *(uint *)(this_ptr->unk + 0xc) = *(uint *)(copy->unk + 0xc);
  *(uint *)(this_ptr->unk + 0x10) = *(uint *)(copy->unk + 0x10);
  *(uint *)(this_ptr->unk + 0x14) = *(uint *)(copy->unk + 0x14);
  *(uint *)(this_ptr->unk + 0x18) = *(uint *)(copy->unk + 0x18);
  *(uint *)(this_ptr->unk + 0x1c) = *(uint *)(copy->unk + 0x1c);
  *(uint *)(this_ptr->unk + 0x20) = *(uint *)(copy->unk + 0x20);
  *(uint *)(this_ptr->unk + 0x24) = *(uint *)(copy->unk + 0x24);
  *(uint *)(this_ptr->unk + 0x28) = *(uint *)(copy->unk + 0x28);
  *(uint *)(this_ptr->unk + 0x2c) = *(uint *)(copy->unk + 0x2c);
  *(uint *)(this_ptr->unk + 0x30) = *(uint *)(copy->unk + 0x30);
  *(uint *)(this_ptr->unk + 0x34) = *(uint *)(copy->unk + 0x34);
  *(uint *)(this_ptr->unk + 0x38) = *(uint *)(copy->unk + 0x38);
  *(uint *)(this_ptr->unk + 0x3c) = *(uint *)(copy->unk + 0x3c);
  *(uint *)(this_ptr->unk + 0x40) = *(uint *)(copy->unk + 0x40);
  *(uint *)(this_ptr->unk + 0x44) = *(uint *)(copy->unk + 0x44);
  *(uint *)(this_ptr->unk + 0x48) = *(uint *)(copy->unk + 0x48);
  *(uint *)(this_ptr->unk + 0x4c) = *(uint *)(copy->unk + 0x4c);
  *(uint *)(this_ptr->unk + 0x50) = *(uint *)(copy->unk + 0x50);
  return;
}
