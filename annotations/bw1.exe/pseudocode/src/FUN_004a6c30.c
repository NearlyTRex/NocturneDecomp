// Name: FUN_004a6c30
// Address: 004a6c30
// Address Range: [[004a6c30, 004a6c8a]]
// Convention: unknown
// Signature: int FUN_004a6c30(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a6c30(uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_005c04e0(param_2,&DAT_005de189);
    iVar1 = 0;
    if (iVar2 != 0) {
      _DAT_01c56ecc = 0;
      iVar1 = FUN_004a6d10(param_1,param_2);
      if (iVar1 < 0) {
        FUN_00445430(PTR_DAT_00611100,&DAT_005de18e,&DAT_01c56ed0);
        return 0;
      }
    }
  }
  return iVar1;
}
