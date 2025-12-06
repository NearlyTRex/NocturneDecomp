// Name: engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00
// Address: 005f2b00
// Address Range: [[005f2b00, 005f2b65]]
// Convention: __cdecl
// Signature: int engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont * this_ptr, char * text_string)

#include "nocturne.h"

int __cdecl
engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00(CWinFont *this_ptr,char *text_string)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  byte bVar6;
  int in_stack_0000000c;
  
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
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  BVar3 = (*GetTextExtentPoint32A)
                    (this_ptr->deviceContextHandle,text_string,~uVar4 - 1,(LPSIZE)&stack0xfffffff4);
  if (BVar3 == 0) {
    in_stack_0000000c = 0;
  }
  return in_stack_0000000c + this_ptr->yOffset1 + this_ptr->yOffset2;
}
