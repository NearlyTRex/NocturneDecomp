// Name: shape_edittool.cpp_FUN_00482250
// Address: 00482250
// Address Range: [[00482250, 0048231d]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_00482250(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_00482250(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  uVar1 = DAT_006141cc;
  if (0 < *(int *)this_ptr) {
    DAT_006141cc = 0x7f;
    shape_edittool_cpp_FUN_00482320(this_ptr,dialog_title,initial_selected_index,window_flags);
    do {
      iVar2 = shape_edittool_cpp_FUN_00482770(this_ptr);
      shape_edittool_cpp_FUN_004831d0(this_ptr);
      wincore_wddvmem_cpp_FUN_00589560();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
    DAT_006141cc = uVar1;
    return iVar2;
  }
  return -1;
}
