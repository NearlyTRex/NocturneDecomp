// Name: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360
// Address: 00471360
// Address Range: [[00471360, 0047142a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,byte param_7)

#include "nocturne.h"

uint __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360(uint param_1,uint param_2,int *param_3,int param_4,int param_5,int param_6,byte param_7)

{
  int iVar1;
  byte local_34 [32];
  int local_14;
  
  if ((param_7 & 1) == 0) {
    local_34[0] = 0;
  }
  else {
    _sprintf(local_34,"%d",*param_3);
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                        (param_1,param_2,local_34,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sscanf(local_34,"%d",&local_14);
      if (iVar1 == 1) break;
      shape_edittool_cpp_FUN_0046fcd0(param_1,"Please enter a valid integer.");
    }
    if ((param_4 == 0) || ((param_5 <= local_14 && (local_14 <= param_6)))) break;
    shape_edittool_cpp_FUN_0046fcd0(param_1,"Please enter a valid integer between %d and %d.",param_5,param_6);
  }
  *param_3 = local_14;
  return 1;
}
