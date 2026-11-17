// Name: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
// Address: 00543100
// Address Range: [[00543100, 00543185]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

{
  int iVar1;
  int iVar2;
  SPart *str2;
  
  iVar2 = 0;
  if (0 < this_ptr->num_parts) {
    str2 = this_ptr->parts;
    do {
      iVar1 = _stricmp(part_name,str2->part_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 1;
    } while (iVar2 < this_ptr->num_parts);
  }
  if (error_if_not_found == 0) {
    return -1;
  }
  g_CHAR_PTR_01d046a0 = "..\\core\\skeleton.cpp";
  g_INT_01d046a4 = 0x5d7;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Can't find part %s in model %s");
  return -1;
}
