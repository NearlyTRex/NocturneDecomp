// Name: core_set.cpp_CDemonSet_dtor_FUN_0052c060
// Address: 0052c060
// Address Range: [[0052c060, 0052c080]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_CDemonSet_dtor_FUN_0052c060(CDemonSet *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonSet * core_set_cpp_CDemonSet_dtor_FUN_0052c060(CDemonSet *this_ptr,uint flags)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_clear_FUN_0052c090(this_ptr);
  iVar1 = unkafter_box_cpp_FUN_00534d80(this_ptr->cameras,0);
  return (CDemonSet *)(iVar1 + -4);
}
