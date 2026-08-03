// Name: shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0
// Address: 0046f5c0
// Address Range: [[0046f5c0, 0046f677]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0(CInputString *this_ptr,int char_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0(CInputString *this_ptr,int char_index)

{
  char cVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  char *pcVar3;
  
  this_ptr_00 = _DAT_01bcd070;
  if (char_index < 0) {
    iVar2 = 0;
  }
  else {
    if (this_ptr->current_length < char_index) {
      char_index = this_ptr->current_length;
    }
    if (this_ptr->mask_mode == 0) {
      pcVar3 = this_ptr->string_data + char_index;
      cVar1 = *pcVar3;
      *pcVar3 = '\0';
      iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(this_ptr_00,this_ptr->string_data);
      *pcVar3 = cVar1;
      return iVar2;
    }
    if (0x3ff < (uint)char_index) {
      g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
      g_INT_01cc4804 = 0x187;
      core_main_c_FUN_004c8440("CInputString::calcX - string too big for hidden text!");
    }
    memset((void *)0x1bcd9c8,0x2a,char_index);
    *(byte *)(char_index + 0x1bcd9c8) = 0;
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,(char *)0x1bcd9c8);
  }
  return iVar2;
}
