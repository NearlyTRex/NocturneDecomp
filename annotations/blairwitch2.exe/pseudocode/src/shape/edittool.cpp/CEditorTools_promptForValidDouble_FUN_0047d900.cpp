// Name: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_0047d900
// Address: 0047d900
// Address Range: [[0047d900, 0047da03]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_0047d900(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_0047d900(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value)

{
  int iVar1;
  uint uStack_48;
  uint uStack_44;
  char acStack_30 [32];
  
  if ((show_current_value & 1U) == 0) {
    acStack_30[0] = '\0';
  }
  else {
    FUN_005b7790
              (acStack_30,0x5d21dd,*(uint *)result_ptr,*(uint *)((int)result_ptr + 4));
  }
  while( true ) {
    while( true ) {
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
                        (this_ptr,prompt_text,acStack_30,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = sscanf(acStack_30,(char *)0x5d21e3);
      if (iVar1 == 1) break;
      shape_edittool_cpp_FUN_0047be40(this_ptr,"Please enter a valid number.");
    }
    if ((enable_range_check == 0) ||
       ((min_value <= __BITCAST_DOUBLE(CONCAT44(uStack_44,uStack_48)) &&
        (__BITCAST_DOUBLE(CONCAT44(uStack_44,uStack_48)) <= max_value)))) break;
    shape_edittool_cpp_FUN_0047be40
              (this_ptr,"Please enter a valid integer between %.15g and %.15g.",min_value,max_value);
  }
  *(uint *)result_ptr = uStack_48;
  *(uint *)((int)result_ptr + 4) = uStack_44;
  return 1;
}
