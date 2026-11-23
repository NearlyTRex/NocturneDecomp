// Name: core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
// Address: 005634f0
// Address Range: [[005634f0, 00563575]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)

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
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 386;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Can't find bone %s in skeleton %s!");
  return -1;
}
