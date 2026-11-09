// Name: shape_edittool.cpp_FUN_0049a8b0
// Address: 0049a8b0
// Address Range: [[0049a8b0, 0049a97d]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0049a8b0(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_0049a8b0(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01c3eb50 == (CBitFont *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    core_main_c_FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = engine_font_cpp_FUN_004c4510(_DAT_01c3eb50,0x6a);
  uVar1 = DAT_0061b4ac;
  if (0 < *(int *)this_ptr) {
    DAT_0061b4ac = 0x7f;
    shape_edittool_cpp_FUN_0049a980(this_ptr,dialog_title,initial_selected_index,window_flags);
    do {
      iVar2 = shape_edittool_cpp_FUN_0049add0(this_ptr);
      shape_edittool_cpp_FUN_0049b830(this_ptr);
      wincore_wddvmem_cpp_FUN_005acff0();
    } while (iVar2 == -2);
    engine_2d_c_clearInputAndWait_FUN_004032b0();
    shape_edittool_cpp_FUN_00496dd0(g_CEditorToolsPtr);
    DAT_0061b4ac = uVar1;
    return iVar2;
  }
  return -1;
}
