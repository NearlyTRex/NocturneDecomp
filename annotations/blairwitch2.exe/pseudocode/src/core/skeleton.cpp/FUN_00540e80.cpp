// Name: core_skeleton.cpp_FUN_00540e80
// Address: 00540e80
// Address Range: [[00540e80, 00540f05]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_00540e80(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_FUN_00540e80(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0x1d1f8) {
    str1 = &this_ptr->field_0x1d1fc;
    do {
      iVar1 = _stricmp(str1,bone_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x24;
    } while (iVar2 < *(int *)&this_ptr->field_0x1d1f8);
  }
  if (assert_if_not_found == 0) {
    return -1;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x178;
  core_main_c_FUN_004e4500("Can't find bone %s in skeleton %s!",bone_name,&this_ptr->field_0x1d1a8);
  return -1;
}
