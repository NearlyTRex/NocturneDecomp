// Name: core_set.cpp_CDemonSet_FUN_0056b790
// Address: 0056b790
// Address Range: [[0056b790, 0056b7d2]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_FUN_0056b790(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_FUN_0056b790(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  C3DSCamera *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr->camera_count) {
    str1 = this_ptr->cameras;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->name,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->camera_count);
  }
  return -1;
}
