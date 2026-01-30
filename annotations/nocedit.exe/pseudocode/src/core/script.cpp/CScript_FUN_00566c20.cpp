// Name: core_script.cpp_CScript_FUN_00566c20
// Address: 00566c20
// Address Range: [[00566c20, 00566cb3]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_00566c20 (CScript *this_ptr,int param_2,int param_3,int *param_4,int *param_5)

#include "nocturne.h"

int __cdecl
core_script_cpp_CScript_FUN_00566c20
          (CScript *this_ptr,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = INT_031141e4;
  if ((((INT_031141e0 <= param_2) && (INT_031141e4 <= param_3)) && (param_2 < DAT_031141e8)) &&
     (param_3 < DAT_031141ec)) {
    *param_4 = ((param_2 - INT_031141e0) + INT_03114204 / 2) / INT_03114204 +
               CEdScrollBar_0310fd0c.scroll_position;
    *param_5 = (param_3 - iVar1) / DAT_03114208 + CEdScrollBar_0310fcd8.scroll_position;
    return 1;
  }
  return 0;
}
