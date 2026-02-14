// Name: core_msnedit.cpp_CDemonMission_FUN_00538f90
// Address: 00538f90
// Address Range: [[00538f90, 00539052]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_FUN_00538f90(CDemonMission *this_ptr,char *param_2,int param_3)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_FUN_00538f90(CDemonMission *this_ptr,char *param_2,int param_3)

{
  int iVar1;
  char (*string_data) [256];
  CPickList local_3b8;
  
  if (this_ptr->num_sets < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No sets defined.");
    return -1;
  }
  iVar1 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b8);
  if (0 < this_ptr->num_sets) {
    string_data = this_ptr->set_names;
    do {
      iVar1 = iVar1 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b8.base,*string_data);
      string_data = string_data + 1;
    } while (iVar1 < this_ptr->num_sets);
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3b8,param_2,param_3,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b8,0);
  return iVar1;
}
