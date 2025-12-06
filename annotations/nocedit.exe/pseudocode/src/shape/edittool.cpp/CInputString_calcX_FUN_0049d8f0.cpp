// Name: shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
// Address: 0049d8f0
// Address Range: [[0049d8f0, 0049d9a7]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0(CInputString * this_ptr, int char_index)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CInputString_calcX_FUN_0049d8f0(CInputString *this_ptr,int char_index)

{
  CBitFont *this_ptr_00;
  int iVar1;
  char unaff_BP;
  
  this_ptr_00 = g_EditorFont;
  if (char_index < 0) {
    iVar1 = 0;
  }
  else {
    if (this_ptr->current_length < char_index) {
      char_index = this_ptr->current_length;
    }
    if (this_ptr->mask_mode == 0) {
      this_ptr->string_data[char_index] = '\0';
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr_00,this_ptr->string_data);
      this_ptr->string_data[char_index] = unaff_BP;
      return iVar1;
    }
    if (0x3ff < (uint)char_index) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0x1be;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInputString::calcX - string too big for hidden text!");
    }
    crt_memory_c_memset_FUN_005fde40(g_TempStringBuffer,0x2a,char_index);
    g_TempStringBuffer[char_index] = '\0';
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,g_TempStringBuffer);
  }
  return iVar1;
}
