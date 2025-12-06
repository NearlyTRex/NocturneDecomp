// Name: core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
// Address: 00599fc0
// Address Range: [[00599fc0, 0059a045]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton *this_ptr,char *bone_name)

{
  int iVar1;
  int iVar2;
  SBone *str1;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < this_ptr->bone_count) {
    str1 = this_ptr->bone_list;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->bone_name,bone_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->bone_count);
  }
  if (in_stack_0000000c == 0) {
    return -1;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x16d;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Can't find bone %s in skeleton %s!",bone_name,this_ptr->loaded_filename);
  return -1;
}
