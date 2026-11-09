// Name: engine_winfont.cpp_FUN_005b2100
// Address: 005b2100
// Address Range: [[005b2100, 005b2159]]
// Convention: unknown
// Signature: undefined4 engine_winfont_cpp_FUN_005b2100(CWinFont *param_1,LPCSTR param_2)

#include "nocturne.h"

uint engine_winfont_cpp_FUN_005b2100(CWinFont *param_1,LPCSTR param_2)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  byte bVar6;
  tagSIZE tStack_c;
  
  bVar6 = 0;
  iVar2 = engine_winfont_cpp_FUN_005b1e90(param_1,-1,-1);
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
  BVar3 = GetTextExtentPoint32A(*(HDC *)&param_1->field_0x6a48,param_2,~uVar4 - 1,&tStack_c);
  if (BVar3 == 0) {
    tStack_c.cx = 0;
  }
  return tStack_c.cx;
}
