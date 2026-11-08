// Name: FUN_0048e340
// Address: 0048e340
// Address Range: [[0048e340, 0048e39a]]
// Convention: unknown
// Signature: int FUN_0048e340(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0048e340(uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_005b8130(param_2,&DAT_005d4390);
    iVar1 = 0;
    if (iVar2 != 0) {
      _DAT_01c3dd0c = 0;
      iVar1 = FUN_0048e420(param_1,param_2);
      if (iVar1 < 0) {
        FUN_00436710(PTR_DAT_00609ed0,&DAT_005d4395,&DAT_01c3dd10);
        return 0;
      }
    }
  }
  return iVar1;
}
