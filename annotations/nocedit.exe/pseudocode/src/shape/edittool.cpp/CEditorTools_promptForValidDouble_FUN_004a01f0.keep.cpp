// Name: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
// Address: 004a01f0
// MANUAL RECONSTRUCTION
// Address Range: [[004a01f0, 004a02f3]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_004a01f0(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_004a01f0(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value)

{
  int iVar1;
  int iVar2;
  double local_48;
  ulonglong local_40;
  ulonglong local_38;
  char local_30 [32];

  if ((show_current_value & 1U) == 0) {
    local_30[0] = '\0';
  }
  else {
    local_40 = min_value;
    local_38 = max_value;
    _sprintf(local_30,"%.15g",*result_ptr);
    min_value = local_40;
    max_value = local_38;
  }
  while( true ) {
    while( true ) {
      local_40 = min_value;
      local_38 = max_value;
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,local_30,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = sscanf(local_30,"%lf",&local_48);
      if (iVar2 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
      min_value = local_40;
      max_value = local_38;
    }
    if ((enable_range_check == 0) ||
       ((local_40 <= __BITCAST_UINT64(local_48) &&
        (__BITCAST_UINT64(local_48) <= local_38)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %.15g and %.15g.",
               __BITCAST_DOUBLE(local_40),__BITCAST_DOUBLE(local_38));
    min_value = local_40;
    max_value = local_38;
  }
  *result_ptr = local_48;
  return 1;
}
