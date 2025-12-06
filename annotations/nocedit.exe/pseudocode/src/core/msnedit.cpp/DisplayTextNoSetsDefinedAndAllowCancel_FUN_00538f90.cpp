// Name: core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
// Address: 00538f90
// Address Range: [[00538f90, 00539052]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel(uint param_1,
   uint param_2, uint param_3) */

int core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *string_data;
  int in_stack_00000004;
  char *in_stack_0000000c;
  int in_stack_00000010;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  uint in_stack_fffffc60;
  
  if (*(int *)(in_stack_00000004 + 0x144) < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No sets defined.");
    return -1;
  }
  iVar1 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  if (0 < *(int *)(in_stack_00000004 + 0x144)) {
    string_data = (char *)(in_stack_00000004 + 0x148);
    do {
      iVar1 = iVar1 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc4c,string_data);
      string_data = string_data + 0x100;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x144));
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc4c,in_stack_0000000c,in_stack_00000010,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc50,0,(uint)in_stack_fffffc50,(uint)in_stack_fffffc54,
             (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,in_stack_fffffc60);
  return iVar1;
}
