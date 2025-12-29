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
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint auStack_28 [6];
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              ((char *)&local_30,"%.15g",*(uint *)result_ptr,
               *(uint *)((int)result_ptr + 4));
  }
  else {
    local_30 = local_30 & 0xffffff00;
  }
  while( true ) {
    while( true ) {
      uStack_34 = (uint)((ulonglong)max_value >> 0x20);
      local_38 = SUB84 /* extract 2-byte value */(max_value,0);
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,(char *)&uStack_2c,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c((char *)auStack_28,"%lf",&stack0xffffffc0);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
    }
    if ((_enable_range_check == 0) ||
       (((double)CONCAT44 /* combine 2-byte values */(local_30,uStack_34) <= (double)CONCAT44 /* combine 2-byte values */(local_38,min_value._4_4_) &&
        ((double)CONCAT44 /* combine 2-byte values */(local_38,min_value._4_4_) <= (double)CONCAT44 /* combine 2-byte values */(auStack_28[0],uStack_2c)))))
    break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %.15g and %.15g.",uStack_34,local_30,uStack_2c);
  }
  *(uint *)result_ptr = min_value._4_4_;
  *(uint *)((int)result_ptr + 4) = local_38;
  return 1;
}
