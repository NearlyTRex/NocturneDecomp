// Name: FUN_00461eb0
// Address: 00461eb0
// Address Range: [[00461eb0, 00461f42]]
// Convention: unknown
// Signature: void FUN_00461eb0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461eb0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_00545920(param_2);
  if (*(int *)(param_1 + 0x1c) != 0) {
    _DAT_01b4d7b0 = _DAT_01b4d7b0 + 1;
    if (100 < _DAT_01b4d7b0) {
      _DAT_01cc4800 = "..\\engine\\drender.cpp";
      _DAT_01cc4804 = 0xafc;
      FUN_004c8440("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01b4d7b0 * 0x48;
    *(uint *)(iVar2 + 0x1b796d8) = *(uint *)(param_2 + 4);
    pcVar3 = (char *)(param_2 + 8);
    pcVar4 = (char *)(iVar2 + 0x1b796dc);
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
