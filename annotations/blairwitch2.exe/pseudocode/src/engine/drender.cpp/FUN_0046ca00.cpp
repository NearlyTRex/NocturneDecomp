// Name: FUN_0046ca00
// Address: 0046ca00
// Address Range: [[0046ca00, 0046ca92]]
// Convention: unknown
// Signature: void FUN_0046ca00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046ca00(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_00574e00(param_2);
  if (*(int *)(param_1 + 0x1c) != 0) {
    _DAT_01ba5cc8 = _DAT_01ba5cc8 + 1;
    if (100 < _DAT_01ba5cc8) {
      _DAT_01d046a0 = "..\\engine\\drender.cpp";
      _DAT_01d046a4 = 0xbf3;
      FUN_004e4500("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01ba5cc8 * 0x48;
    *(uint *)(iVar2 + 0x1bd1bf0) = *(uint *)(param_2 + 4);
    pcVar3 = (char *)(param_2 + 8);
    pcVar4 = (char *)(iVar2 + 0x1bd1bf4);
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  return;
}
