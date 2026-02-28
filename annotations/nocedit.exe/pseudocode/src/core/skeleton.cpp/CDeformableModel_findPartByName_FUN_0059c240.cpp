// Name: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
// Address: 0059c240
// Address Range: [[0059c240, 0059c2c5]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

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
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x5c8;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Can't find part %s in model %s",part_name,this_ptr->model_filename);
  return -1;
}
