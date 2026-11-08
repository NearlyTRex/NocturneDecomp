// Name: FUN_0050ad40
// Address: 0050ad40
// Address Range: [[0050ad40, 0050adc1]]
// Convention: unknown
// Signature: int FUN_0050ad40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050ad40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01ec1518) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (param_1 == *(int *)(iVar2 + 0x1ec151c)) {
        _DAT_01ec1518 = _DAT_01ec1518 + -1;
        FUN_005a54c0(iVar2 + 0x1ec151c,iVar2 + 0x1ec1520,(_DAT_01ec1518 - iVar3) * 4);
        *(uint *)(_DAT_01ec1518 * 4 + 0x1ec151c) = 0;
        return param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01ec1518 * 4);
  }
  return param_1;
}
