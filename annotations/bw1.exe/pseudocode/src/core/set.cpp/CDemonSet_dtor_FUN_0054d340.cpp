// Name: core_set.cpp_CDemonSet_dtor_FUN_0054d340
// Address: 0054d340
// Address Range: [[0054d340, 0054d360]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_CDemonSet_dtor_FUN_0054d340(CDemonSet *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonSet * core_set_cpp_CDemonSet_dtor_FUN_0054d340(CDemonSet *this_ptr,uint flags)

{
  int iVar1;
  
  core_set_cpp_CDemonSet_clear_FUN_0054d370(this_ptr);
  iVar1 = core_set_cpp_FUN_005561a0(this_ptr->cameras,0);
  return (CDemonSet *)(iVar1 + -4);
}
