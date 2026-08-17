// Name: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00471530
// Address: 00471530
// Address Range: [[00471530, 004715fa]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00471530(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00471530(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )

{
  int iVar1;
  char acStack_40 [40];
  CVector3f CStack_18;
  
  if ((show_current_value & 1U) == 0) {
    acStack_40[0] = '\0';
  }
  else {
    _sprintf(acStack_40,"%g,%g,%g",(double)result_ptr->x,(double)result_ptr->y,
               (double)result_ptr->z);
  }
  while( true ) {
    iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                      (this_ptr,prompt_text,acStack_40,0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = sscanf(acStack_40,"%f%*[ ,]%f%*[ ,]%f");
    if (iVar1 == 3) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
              (this_ptr,"Please enter a valid vector.");
  }
  if (result_ptr != &CStack_18) {
    result_ptr->x = CStack_18.x;
    result_ptr->y = CStack_18.y;
    result_ptr->z = CStack_18.z;
  }
  return 1;
}
