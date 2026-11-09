// Name: core_skeleton.cpp_FUN_0054a310
// Address: 0054a310
// Address Range: [[0054a310, 0054a395]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_0054a310(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_FUN_0054a310(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

{
  int iVar1;
  int iVar2;
  char *str2;
  
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0xc00) {
    str2 = &this_ptr->field_0xc04;
    do {
      iVar1 = _stricmp(part_name,str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x60;
    } while (iVar2 < *(int *)&this_ptr->field_0xc00);
  }
  if (error_if_not_found == 0) {
    return -1;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x5d8;
  core_main_c_FUN_004e4330("Can't find part %s in model %s",part_name,&this_ptr->field_0x35b0);
  return -1;
}
