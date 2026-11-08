// Name: FUN_0049bfb0
// Address: 0049bfb0
// Address Range: [[0049bfb0, 0049c02a]]
// Convention: unknown
// Signature: int FUN_0049bfb0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049bfb0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_2 - _DAT_01c4f008) && (-1 < param_3 - _DAT_01c4f00c)) {
    iVar1 = (param_3 - _DAT_01c4f00c) / param_1[99];
    iVar2 = (param_2 - _DAT_01c4f008) / param_1[0x69];
    if (((-1 < iVar1) && (((iVar1 < param_1[0x68] && (-1 < iVar2)) && (iVar2 < param_1[0x6a])))) &&
       ((iVar1 = iVar2 * param_1[0x68] + param_1[0x66] + iVar1, -1 < iVar1 && (iVar1 < *param_1))))
    {
      return iVar1;
    }
  }
  return -1;
}
