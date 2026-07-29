// Name: core_dynamite.cpp_CDynamite_lightFuse_FUN_0046ed30
// Address: 0046ed30
// Address Range: [[0046ed30, 0046ed70]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(CDynamite *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0046ed30(CDynamite *this_ptr)

{
  uint uVar1;
  char local_68 [100];
  
  this_ptr->fuse_timer = _DAT_0059c91c;
  _sprintf(local_68,"fuse.wav");
  uVar1 = (*((this_ptr->base).base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_68);
  this_ptr->sfx_handle = uVar1;
  return;
}
