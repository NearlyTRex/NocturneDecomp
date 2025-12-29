// Name: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
// Address: 004a00f0
// Address Range: [[004a00f0, 004a01e2]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, float min_value, float max_value, bool show_current_value)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
          (CEditorTools *this_ptr,char *prompt_text,float *result_ptr,bool enable_range_check,
          float min_value,float max_value,bool show_current_value)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  undefined3 in_stack_00000011;
  float fStack_34;
  float afStack_30 [8];
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffffc8,"%g",SUB84 /* extract 2-byte value */((double)*result_ptr,0),
               (int)((ulonglong)(double)*result_ptr >> 0x20),min_value,max_value);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,(char *)&fStack_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c((char *)afStack_30,"%f",&stack0xfffffff0);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
    }
    if ((_enable_range_check == 0) || ((fStack_34 <= unaff_EDI && (unaff_EDI <= afStack_30[0]))))
    break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %g and %g.",SUB84 /* extract 2-byte value */((double)fStack_34,0),
               (int)((ulonglong)(double)fStack_34 >> 0x20),(double)afStack_30[0]);
  }
  *result_ptr = unaff_EDI;
  return 1;
}
