// Name: core_dynamite.cpp_CDynamite_FUN_0049cf20
// Address: 0049cf20
// Address Range: [[0049cf20, 0049cf60]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_CDynamite_FUN_0049cf20(CDynamite *this_ptr)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_CDynamite_FUN_0049cf20(CDynamite *this_ptr)

{
  uint uVar1;
  char local_68 [100];
  
  *(float *)this_ptr->unk = 3.5f;
  _sprintf(local_68,"fuse.wav");
  uVar1 = (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_68);
  *(uint *)(this_ptr->unk + 0x10) = uVar1;
  return;
}
