// Name: core_motion.cpp_FUN_00524150
// Address: 00524150
// Address Range: [[00524150, 005241c4]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_FUN_00524150(CMotionList *this_ptr,char *state_name,int error_on_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_motion_cpp_FUN_00524150(CMotionList *this_ptr,char *state_name,int error_on_not_found)

{
  int iVar1;
  int iVar2;
  CMotionList *str1;
  
  iVar2 = 0;
  if (0 < *(int *)this_ptr) {
    str1 = this_ptr + 4;
    do {
      iVar1 = _stricmp((char *)str1,state_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x1e;
    } while (iVar2 < *(int *)this_ptr);
  }
  if (error_on_not_found == 0) {
    return -1;
  }
  _DAT_01d1d400 = "..\\core\\motion.cpp";
  _DAT_01d1d404 = 0x152;
  core_main_c_FUN_005030e0("Can't find state \"%s\" in motion list",state_name);
  return -1;
}
