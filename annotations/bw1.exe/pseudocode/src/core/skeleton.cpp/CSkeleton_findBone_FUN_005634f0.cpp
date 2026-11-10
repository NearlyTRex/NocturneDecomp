// Name: core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
// Address: 005634f0
// Address Range: [[005634f0, 00563575]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

{
  int iVar1;
  int iVar2;
  SBone *str1;
  
  iVar2 = 0;
  if (0 < this_ptr->bone_count) {
    str1 = this_ptr->bone_list;
    do {
      iVar1 = _stricmp((char *)str1,bone_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x24;
    } while (iVar2 < this_ptr->bone_count);
  }
  if (assert_if_not_found == 0) {
    return -1;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x182;
  core_main_c_FUN_005030e0("Can't find bone %s in skeleton %s!",bone_name,&this_ptr->field_0x1de28);
  return -1;
}
