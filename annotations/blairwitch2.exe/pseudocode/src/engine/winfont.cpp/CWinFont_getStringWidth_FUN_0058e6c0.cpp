// Name: engine_winfont.cpp_CWinFont_getStringWidth_FUN_0058e6c0
// Address: 0058e6c0
// Address Range: [[0058e6c0, 0058e719]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_CWinFont_getStringWidth_FUN_0058e6c0(CWinFont *this_ptr,char *text_string)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_CWinFont_getStringWidth_FUN_0058e6c0(CWinFont *this_ptr,char *text_string)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  tagSIZE tStack_c;
  
  bVar6 = 0;
  iVar2 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_0058e450(this_ptr,-1,-1);
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
  BVar3 = GetTextExtentPoint32A(this_ptr->device_context_handle,text_string,~uVar4 - 1,&tStack_c);
  if (BVar3 == 0) {
    tStack_c.cx = 0;
  }
  return tStack_c.cx;
}
