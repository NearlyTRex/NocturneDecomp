// Name: crt_unknown.c_FUN_005be2d0
// Address: 005be2d0
// Address Range: [[005be2d0, 005be2f5]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005be2d0(void)

#include "nocturne.h"

int FUN_005be2d0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0061f270;
  iVar2 = FUN_005c3628();
  if ((iVar2 != -1) && (iVar1 == 0)) {
    FUN_005c36c0(iVar2);
  }
  return iVar2;
}
