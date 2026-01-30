// Name: core_msnedit.cpp_CDemonMission_FUN_00538f90
// Address: 00538f90
// Address Range: [[00538f90, 00539052]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_FUN_00538f90(CDemonMission *this_ptr,char *param_2,int param_3)

#include "nocturne.h"

int __cdecl
core_msnedit_cpp_CDemonMission_FUN_00538f90(CDemonMission *this_ptr,char *param_2,int param_3)

{
  int iVar1;
  char *string_data;
  uint in_stack_fffffc48;
  uint in_stack_fffffc4c;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  uint in_stack_fffffc58;
  
  if ((int)this_ptr->set_list < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No sets defined.");
    return -1;
  }
  iVar1 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  if (0 < (int)this_ptr->set_list) {
    string_data = this_ptr->unk3;
    do {
      iVar1 = iVar1 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc48,string_data);
      string_data = string_data + 0x100;
    } while (iVar1 < (int)this_ptr->set_list);
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc48,param_2,param_3,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc48,0,in_stack_fffffc48,in_stack_fffffc4c,
             (uint)in_stack_fffffc50,(uint)in_stack_fffffc54,in_stack_fffffc58);
  return iVar1;
}
