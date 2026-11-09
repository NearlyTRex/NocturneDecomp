// Name: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_0047da10
// Address: 0047da10
// Address Range: [[0047da10, 0047dada]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_0047da10(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_0047da10(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value )

{
  int iVar1;
  char acStack_40 [40];
  CVector3f CStack_18;
  
  if ((show_current_value & 1U) == 0) {
    acStack_40[0] = '\0';
  }
  else {
    FUN_005b7790
              (acStack_40,0x5d223a,(double)*(float *)result_ptr,
               (double)*(float *)&result_ptr->field_0x4,(double)*(float *)&result_ptr->field_0x8);
  }
  while( true ) {
    iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
                      (this_ptr,prompt_text,acStack_40,0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = sscanf(acStack_40,(char *)0x5d2276);
    if (iVar1 == 3) break;
    shape_edittool_cpp_FUN_0047be40(this_ptr);
  }
  if (result_ptr != &CStack_18) {
    *(uint *)result_ptr = CStack_18._0_4_;
    *(uint *)&result_ptr->field_0x4 = CStack_18._4_4_;
    *(uint *)&result_ptr->field_0x8 = CStack_18._8_4_;
  }
  return 1;
}
