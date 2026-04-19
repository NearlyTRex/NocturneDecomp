// Name: engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00
// Address: 005f2b00
// MANUAL RECONSTRUCTION
// Address Range: [[005f2b00, 005f2b65]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont *this_ptr,char *text_string)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont *this_ptr,char *text_string)

{
  int iVar2;
  BOOL BVar3;
  tagSIZE local_10;

  iVar2 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860(this_ptr,-1,-1);
  if (iVar2 == 0) {
    return 0;
  }
  BVar3 = (*g_GetTextExtentPoint32A)
                    (this_ptr->device_context_handle,text_string,strlen(text_string),&local_10);
  if (BVar3 == 0) {
    local_10.cy = 0;
  }
  return local_10.cy + this_ptr->y_offset1 + this_ptr->y_offset2;
}
