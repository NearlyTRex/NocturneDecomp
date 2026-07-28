// Name: core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
// Address: 004e10a0
// Address Range: [[004e10a0, 004e1114]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList *this_ptr,char *state_name,int error_on_not_found)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(CMotionList *this_ptr,char *state_name,int error_on_not_found)

{
  int iVar1;
  int iVar2;
  char (*str1) [30];
  
  iVar2 = 0;
  if (0 < this_ptr->state_count) {
    str1 = this_ptr->state_names;
    do {
      iVar1 = _stricmp(*str1,state_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->state_count);
  }
  if (error_on_not_found == 0) {
    return -1;
  }
  PTR_01cc4800 = "..\\core\\motion.cpp";
  INT_01cc4804 = 0x113;
  core_main_c_FUN_004c8440("Can't find state \"%s\" in motion list",state_name);
  return -1;
}
