// Name: shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610
// Address: 004a5610
// Address Range: [[004a5610, 004a5669]]
// Convention: unknown
// Signature: undefined shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610()

#include "nocturne.h"

uint shape_edittool_cpp_CPickList_getItemHotKey_FUN_004a5610(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*in_stack_00000004 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x1066;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::getItemHotKey - invalid index");
  }
  if (in_stack_00000004[0x67] <= in_stack_00000008) {
    return 0xffffffff;
  }
  return *(uint *)(in_stack_00000004[0x68] + in_stack_00000008 * 4);
}
