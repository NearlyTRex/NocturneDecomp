// Name: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00496080
// Address: 00496080
// Address Range: [[00496080, 0049614a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00496080(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00496080(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )

{
  int iVar1;
  char acStack_40 [40];
  CVector3f CStack_18;
  
  if ((show_current_value & 1U) == 0) {
    acStack_40[0] = '\0';
  }
  else {
    _sprintf(acStack_40,(char *)0x5dbfd8);
  }
  while( true ) {
    iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                      (this_ptr,prompt_text,acStack_40,0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = sscanf(acStack_40,(char *)0x5dc014);
    if (iVar1 == 3) break;
    shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
              (this_ptr,"Please enter a valid vector.");
  }
  if (result_ptr != &CStack_18) {
    result_ptr->x = CStack_18.x;
    result_ptr->y = CStack_18.y;
    result_ptr->z = CStack_18.z;
  }
  return 1;
}
