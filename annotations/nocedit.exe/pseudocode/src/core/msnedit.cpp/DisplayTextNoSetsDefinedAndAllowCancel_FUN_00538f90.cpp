// Name: core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90
// Address: 00538f90
// Address Range: [[00538f90, 00539052]]
// Convention: unknown
// Signature: int core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_DisplayTextNoSetsDefinedAndAllowCancel(uint param_1,
   uint param_2, uint param_3) */

int core_msnedit_cpp_DisplayTextNoSetsDefinedAndAllowCancel_FUN_00538f90(void)

{
  int iVar1;
  char *string_data;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_fffffc48;
  uint in_stack_fffffc4c;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  uint in_stack_fffffc58;
  
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
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc48,string_data);
      string_data = string_data + 0x100;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x144));
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc48,in_stack_00000008,in_stack_0000000c,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc48,0,in_stack_fffffc48,in_stack_fffffc4c,
             (uint)in_stack_fffffc50,(uint)in_stack_fffffc54,in_stack_fffffc58);
  return iVar1;
}
