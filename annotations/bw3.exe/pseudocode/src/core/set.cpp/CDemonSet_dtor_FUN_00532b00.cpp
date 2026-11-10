// Name: core_set.cpp_CDemonSet_dtor_FUN_00532b00
// Address: 00532b00
// Address Range: [[00532b00, 00532b20]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_CDemonSet_dtor_FUN_00532b00(CDemonSet *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonSet * core_set_cpp_CDemonSet_dtor_FUN_00532b00(CDemonSet *this_ptr,uint flags)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_clear_FUN_00532b30(this_ptr);
  iVar1 = core_set_cpp_FUN_0053bb60(this_ptr->cameras,0);
  return (CDemonSet *)(iVar1 + -4);
}
