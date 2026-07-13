// Name: FUN_100115b0
// Address: 100115b0
// Address Range: [[100115b0, 1001160b]]
// Convention: unknown
// Signature: int FUN_100115b0(undefined4 param_1,int param_2)

#include "nocturne.h"

int FUN_100115b0(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_10016d80;
  piVar2 = DAT_10016d80;
  while( true ) {
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_10016d80 >> 2);
    }
    iVar1 = FUN_10010cf0(param_1,*piVar2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return (int)piVar2 - (int)DAT_10016d80 >> 2;
}
