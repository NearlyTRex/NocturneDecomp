// Name: FUN_0046e5e0
// Address: 0046e5e0
// Address Range: [[0046e5e0, 0046e672]]
// Convention: unknown
// Signature: void FUN_0046e5e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e5e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_0056aa10(param_2);
  if (*(int *)(param_1 + 0x1c) != 0) {
    _DAT_01bdd85c = _DAT_01bdd85c + 1;
    if (100 < _DAT_01bdd85c) {
      _DAT_01d71de0 = "..\\engine\\drender.cpp";
      _DAT_01d71de4 = 0xbf3;
      FUN_004e4330("CDR::texture - Too many captured textures");
    }
    iVar2 = _DAT_01bdd85c * 0x48;
    *(uint *)(iVar2 + 0x1c09784) = *(uint *)(param_2 + 4);
    pcVar3 = (char *)(param_2 + 8);
    pcVar4 = (char *)(iVar2 + 0x1c09788);
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
