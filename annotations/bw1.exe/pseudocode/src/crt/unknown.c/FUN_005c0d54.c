// Name: crt_unknown.c_FUN_005c0d54
// Address: 005c0d54
// Address Range: [[005c0d54, 005c0d79]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c0d54(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005c0d54(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = _fclose(param_1,param_2);
  FUN_005c6ae0(param_1);
  return uVar1;
}
