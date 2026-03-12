// Name: engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0
// Address: 005f2aa0
// Address Range: [[005f2aa0, 005f2af6]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_getStringWidth_FUN_005f2aa0(CWinFont *this_ptr,char *text_string)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_CWinFont_getStringWidth_FUN_005f2aa0(CWinFont *this_ptr,char *text_string)

{
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  tagSIZE local_c;
  char cVar1;
  
  bVar6 = 0;
  iVar2 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860(this_ptr,-1,-1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pcVar5 = text_string;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5;
  } while (cVar1 != '\0');
  BVar3 = (*g_GetTextExtentPoint32A)
                    (this_ptr->device_context_handle,text_string,~uVar4 - 1,&local_c);
  if (BVar3 == 0) {
    local_c.cx = 0;
  }
  return local_c.cx;
}
