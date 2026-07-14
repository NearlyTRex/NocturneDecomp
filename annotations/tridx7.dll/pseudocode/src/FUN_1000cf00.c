// Name: FUN_1000cf00
// Address: 1000cf00
// Address Range: [[1000cf00, 1000cf48]]
// Convention: unknown
// Signature: uint FUN_1000cf00(undefined4 param_1,char **param_2,char *param_3,int param_4)

#include "nocturne.h"

uint FUN_1000cf00(uint param_1,char **param_2,char *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  _LDBL12 _Stack_c;
  
  uVar1 = ___strgtold12(&_Stack_c,param_2,param_3,param_4,0,0,0);
  iVar2 = FUN_1000a170(&_Stack_c,param_1);
  if (iVar2 == 1) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}
