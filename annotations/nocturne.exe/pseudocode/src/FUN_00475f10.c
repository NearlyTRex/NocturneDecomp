// Name: FUN_00475f10
// Address: 00475f10
// Address Range: [[00475f10, 00475f7e]]
// Convention: unknown
// Signature: int FUN_00475f10(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00475f10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_3 - _DAT_01c00c5c) / param_1[0x44];
  iVar2 = (param_2 - _DAT_01c00c58) / param_1[0x4a];
  if ((((iVar1 < 0) || (param_1[0x49] <= iVar1)) || (iVar2 < 0)) ||
     (((param_1[0x4b] <= iVar2 || (iVar1 = iVar2 * param_1[0x49] + param_1[0x47] + iVar1, iVar1 < 0)
       ) || (*param_1 <= iVar1)))) {
    iVar1 = -1;
  }
  return iVar1;
}
