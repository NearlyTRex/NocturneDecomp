// Name: FUN_00491aa0
// Address: 00491aa0
// Address Range: [[00491aa0, 00491afa]]
// Convention: unknown
// Signature: int FUN_00491aa0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00491aa0(uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_005a3260(param_2,&DAT_005bf4c5);
    iVar1 = 0;
    if (iVar2 != 0) {
      _DAT_01c734ac = 0;
      iVar1 = FUN_00491b80(param_1,param_2);
      if (iVar1 < 0) {
        FUN_00441ff0(PTR_DAT_005f1690,&DAT_005bf4ca,&DAT_01c734b0);
        return 0;
      }
    }
  }
  return iVar1;
}
