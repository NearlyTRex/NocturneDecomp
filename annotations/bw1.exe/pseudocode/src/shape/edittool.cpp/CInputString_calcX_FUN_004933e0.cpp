// Name: shape_edittool.cpp_CInputString_calcX_FUN_004933e0
// Address: 004933e0
// Address Range: [[004933e0, 004934aa]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_004933e0(CInputString *this_ptr,int char_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_004933e0(CInputString *this_ptr,int char_index)

{
  CBitFont *this_ptr_00;
  int iVar1;
  char *pcVar2;
  char local_40c [1024];
  uint local_c;
  
  this_ptr_00 = _DAT_01c3eb50;
  if (char_index < 0) {
    iVar1 = 0;
  }
  else {
    if (this_ptr->current_length < char_index) {
      char_index = this_ptr->current_length;
    }
    if (this_ptr->mask_mode == 0) {
      pcVar2 = this_ptr->string_data + char_index;
      local_c = (uint)(byte)*pcVar2;
      *pcVar2 = 0;
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(this_ptr_00,this_ptr->string_data);
      *pcVar2 = (byte)local_c;
      return iVar1;
    }
    if (0x3ff < (uint)char_index) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x20e;
      core_main_c_FUN_005030e0("CInputString::calcX - string too big for hidden text!");
    }
    memset(local_40c,0x2a,char_index);
    local_40c[char_index] = '\0';
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(_DAT_01c3eb50,local_40c);
  }
  return iVar1;
}
