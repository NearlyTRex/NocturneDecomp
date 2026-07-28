// Name: engine_winfont.cpp_CWinFont_getStringWidth_FUN_00558710
// Address: 00558710
// Address Range: [[00558710, 00558766]]
// Convention: unknown
// Signature: undefined4 engine_winfont_cpp_CWinFont_getStringWidth_FUN_00558710(CWinFont *param_1,LPCSTR param_2)

#include "nocturne.h"

uint engine_winfont_cpp_CWinFont_getStringWidth_FUN_00558710(CWinFont *param_1,LPCSTR param_2)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  byte bVar6;
  tagSIZE local_c;
  
  bVar6 = 0;
  iVar2 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(param_1,-1,-1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pCVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar5;
    pCVar5 = pCVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  BVar3 = GetTextExtentPoint32A((HDC)param_1->device_context_handle,param_2,~uVar4 - 1,&local_c);
  if (BVar3 == 0) {
    local_c.cx = 0;
  }
  return local_c.cx;
}
