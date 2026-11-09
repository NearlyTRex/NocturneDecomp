// Name: core_motion.cpp_FUN_004fb9c0
// Address: 004fb9c0
// Address Range: [[004fb9c0, 004fba42]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_004fb9c0(CMotionList *this_ptr,char *motion_name,int error_on_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_004fb9c0(CMotionList *this_ptr,char *motion_name,int error_on_not_found)

{
  int iVar1;
  int iVar2;
  CMotionList *str1;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x1c24)) {
    str1 = this_ptr + 0x1c28;
    do {
      iVar1 = _stricmp((char *)str1,motion_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x120;
    } while (iVar2 < *(int *)(this_ptr + 0x1c24));
  }
  if (error_on_not_found == 0) {
    return -1;
  }
  _DAT_01d71de0 = "..\\core\\motion.cpp";
  _DAT_01d71de4 = 0x13f;
  core_main_c_FUN_004e4330("Can't find motion \"%s\" in motion list",motion_name);
  return -1;
}
