// Name: core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0
// Address: 00502fa0
// Address Range: [[00502fa0, 00503014]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList *this_ptr,char *state_name,int error_on_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList *this_ptr,char *state_name,int error_on_not_found)

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
  _DAT_01d046a0 = "..\\core\\motion.cpp";
  _DAT_01d046a4 = 0x13e;
  core_main_c_FUN_004e4500("Can't find state \"%s\" in motion list",state_name);
  return -1;
}
