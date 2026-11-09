// Name: shape_edittool.cpp_FUN_00483450
// Address: 00483450
// Address Range: [[00483450, 0048351d]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_00483450(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_00483450(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = engine_font_cpp_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  uVar1 = DAT_005fba2c;
  if (0 < *(int *)this_ptr) {
    DAT_005fba2c = 0x7f;
    shape_edittool_cpp_FUN_00483520(this_ptr,dialog_title,initial_selected_index,window_flags);
    do {
      iVar2 = shape_edittool_cpp_FUN_00483970(this_ptr);
      shape_edittool_cpp_FUN_004843d0(this_ptr);
      wincore_wddvmem_cpp_FUN_0057a8a0();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
    DAT_005fba2c = uVar1;
    return iVar2;
  }
  return -1;
}
