// Name: core_motion.cpp_FUN_00502f10
// Address: 00502f10
// Address Range: [[00502f10, 00502f92]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_00502f10(CMotionList *this_ptr,char *motion_name,int error_on_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_00502f10(CMotionList *this_ptr,char *motion_name,int error_on_not_found)

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
      str1 = str1 + 0x118;
    } while (iVar2 < *(int *)(this_ptr + 0x1c24));
  }
  if (error_on_not_found == 0) {
    return -1;
  }
  _DAT_01d046a0 = "..\\core\\motion.cpp";
  _DAT_01d046a4 = 299;
  core_main_c_FUN_004e4500("Can't find motion \"%s\" in motion list",motion_name);
  return -1;
}
