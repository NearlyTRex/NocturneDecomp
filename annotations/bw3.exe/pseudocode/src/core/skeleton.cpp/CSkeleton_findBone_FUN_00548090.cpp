// Name: core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
// Address: 00548090
// Address Range: [[00548090, 00548115]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

{
  int iVar1;
  int iVar2;
  SBone *str1;
  
  iVar2 = 0;
  if (0 < this_ptr->bone_count) {
    str1 = this_ptr->bone_list;
    do {
      iVar1 = _stricmp(str1->bone_name,bone_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->bone_count);
  }
  if (assert_if_not_found == 0) {
    return -1;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x179;
  core_main_c_FUN_004e4330("Can't find bone %s in skeleton %s!",bone_name,this_ptr->loaded_filename);
  return -1;
}
