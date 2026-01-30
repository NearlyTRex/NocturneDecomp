// Name: core_script.cpp_CScript_FUN_005669a0
// Address: 005669a0
// Address Range: [[005669a0, 00566a81]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_005669a0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_005669a0(CScript *this_ptr)

{
  int iVar1;
  
  core_script_cpp_CScript_FUN_00566910(this_ptr);
  if (CEdScrollBar_0310fcd8.current_value - CEdScrollBar_0310fcd8.max_value <
      CEdScrollBar_0310fcd8.scroll_position) {
    CEdScrollBar_0310fcd8.scroll_position =
         CEdScrollBar_0310fcd8.current_value - CEdScrollBar_0310fcd8.max_value;
  }
  if (DAT_0310fd48 < CEdScrollBar_0310fcd8.scroll_position) {
    CEdScrollBar_0310fcd8.scroll_position = DAT_0310fd48;
  }
  iVar1 = (DAT_0310fd48 - CEdScrollBar_0310fcd8.max_value) + 1;
  if (CEdScrollBar_0310fcd8.scroll_position < iVar1) {
    CEdScrollBar_0310fcd8.scroll_position = iVar1;
  }
  if (CEdScrollBar_0310fcd8.scroll_position < 0) {
    CEdScrollBar_0310fcd8.scroll_position = 0;
  }
  if (CEdScrollBar_0310fd0c.current_value - CEdScrollBar_0310fd0c.max_value <
      CEdScrollBar_0310fd0c.scroll_position) {
    CEdScrollBar_0310fd0c.scroll_position =
         CEdScrollBar_0310fd0c.current_value - CEdScrollBar_0310fd0c.max_value;
  }
  if (DAT_0310fd44 < CEdScrollBar_0310fd0c.scroll_position) {
    CEdScrollBar_0310fd0c.scroll_position = DAT_0310fd44;
  }
  iVar1 = (DAT_0310fd44 - CEdScrollBar_0310fd0c.max_value) + 1;
  if (CEdScrollBar_0310fd0c.scroll_position < iVar1) {
    CEdScrollBar_0310fd0c.scroll_position = iVar1;
  }
  if (-1 < CEdScrollBar_0310fd0c.scroll_position) {
    return;
  }
  CEdScrollBar_0310fd0c.scroll_position = 0;
  return;
}
