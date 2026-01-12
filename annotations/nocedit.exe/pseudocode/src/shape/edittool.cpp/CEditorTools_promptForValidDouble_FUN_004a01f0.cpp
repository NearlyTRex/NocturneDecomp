// Name: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
// Address: 004a01f0
// Address Range: [[004a01f0, 004a02f3]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0(CEditorTools * this_ptr, char * prompt_text, double * result_ptr, bool enable_range_check, double min_value, double max_value, bool show_current_value)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
          (CEditorTools *this_ptr,char *prompt_text,double *result_ptr,bool enable_range_check,
          double min_value,double max_value,bool show_current_value)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined3 in_stack_00000011;
  uint local_48;
  uint uStack_44;
  ulonglong local_40;
  ulonglong local_38;
  char local_30 [32];
  
  if (show_current_value) {
    local_40 = min_value;
    local_38 = max_value;
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_30,"%.15g",*(uint *)result_ptr,
               *(uint *)((int)result_ptr + 4));
    min_value = local_40;
    max_value = local_38;
  }
  else {
    local_30[0] = '\0';
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
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c(local_30,"%lf",&local_48);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
      min_value = local_40;
      max_value = local_38;
    }
    if ((_enable_range_check == 0) ||
       ((local_40 <= (double)CONCAT44 /* combine 2-byte values */(uStack_44,local_48) &&
        ((double)CONCAT44 /* combine 2-byte values */(uStack_44,local_48) <= local_38)))) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %.15g and %.15g.",(uint)local_40,local_40._4_4_,
               (uint)local_38,local_38._4_4_);
    min_value = local_40;
    max_value = local_38;
  }
  *(uint *)result_ptr = local_48;
  *(uint *)((int)result_ptr + 4) = uStack_44;
  return 1;
}
