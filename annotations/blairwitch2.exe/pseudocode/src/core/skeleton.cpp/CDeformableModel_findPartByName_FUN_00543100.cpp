// Name: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
// Address: 00543100
// Address Range: [[00543100, 00543185]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

{
  int iVar1;
  int iVar2;
  char *str2;
  
  iVar2 = 0;
  if (0 < this_ptr->num_parts) {
    str2 = &this_ptr->field_0xc04;
    do {
      iVar1 = _stricmp(part_name,str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x60;
    } while (iVar2 < this_ptr->num_parts);
  }
  if (error_if_not_found == 0) {
    return -1;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x5d7;
  core_main_c_FUN_004e4500("Can't find part %s in model %s",part_name,this_ptr->model_filename);
  return -1;
}
