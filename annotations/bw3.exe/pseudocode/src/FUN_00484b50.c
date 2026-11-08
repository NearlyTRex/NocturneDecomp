// Name: FUN_00484b50
// Address: 00484b50
// Address Range: [[00484b50, 00484bca]]
// Convention: unknown
// Signature: int FUN_00484b50(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00484b50(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_2 - _DAT_01c6b5a8) && (-1 < param_3 - _DAT_01c6b5ac)) {
    iVar1 = (param_3 - _DAT_01c6b5ac) / param_1[99];
    iVar2 = (param_2 - _DAT_01c6b5a8) / param_1[0x69];
    if (((-1 < iVar1) && (((iVar1 < param_1[0x68] && (-1 < iVar2)) && (iVar2 < param_1[0x6a])))) &&
       ((iVar1 = iVar2 * param_1[0x68] + param_1[0x66] + iVar1, -1 < iVar1 && (iVar1 < *param_1))))
    {
      return iVar1;
    }
  }
  return -1;
}
