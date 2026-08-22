// Name: engine_winfont.cpp_CWinFont_getStringHeight_FUN_00558770
// Address: 00558770
// Address Range: [[00558770, 005587d5]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_00558770(CWinFont *this_ptr,char *text_string)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_CWinFont_getStringHeight_FUN_00558770(CWinFont *this_ptr,char *text_string)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  tagSIZE local_10;
  
  bVar6 = 0;
  iVar2 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(this_ptr,-1,-1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar5 = text_string;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  BVar3 = GetTextExtentPoint32A(this_ptr->device_context_handle,text_string,~uVar4 - 1,&local_10);
  if (BVar3 == 0) {
    local_10.cy = 0;
  }
  return local_10.cy + this_ptr->y_offset1 + this_ptr->y_offset2;
}
