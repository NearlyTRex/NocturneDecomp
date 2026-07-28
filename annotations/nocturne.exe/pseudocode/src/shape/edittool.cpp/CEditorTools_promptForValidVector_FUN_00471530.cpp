// Name: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00471530
// Address: 00471530
// Address Range: [[00471530, 004715fa]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00471530(CEditorTools *param_1,char *param_2,float *param_3,byte param_4)

#include "nocturne.h"

uint shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00471530(CEditorTools *param_1,char *param_2,float *param_3,byte param_4)

{
  int iVar1;
  char acStack_40 [40];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  if ((param_4 & 1) == 0) {
    acStack_40[0] = '\0';
  }
  else {
    _sprintf(acStack_40,"%g,%g,%g",(double)*param_3,(double)param_3[1],(double)param_3[2]);
  }
  while( true ) {
    iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                      (param_1,param_2,acStack_40,0x28,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = sscanf();
    if (iVar1 == 3) break;
    shape_edittool_cpp_FUN_0046fcd0(param_1);
  }
  if (param_3 != &fStack_18) {
    *param_3 = fStack_18;
    param_3[1] = fStack_14;
    param_3[2] = fStack_10;
  }
  return 1;
}
