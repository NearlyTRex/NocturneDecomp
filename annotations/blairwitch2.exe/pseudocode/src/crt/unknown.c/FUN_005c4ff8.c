// Name: crt_unknown.c_FUN_005c4ff8
// Address: 005c4ff8
// Address Range: [[005c4ff8, 005c5084]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c4ff8(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005c4ff8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((0 < param_1) && (param_1 < 0xd)) {
    PTR_crt_unknown_c_FUN_005bad88_0061ef50 = FUN_005c4fac;
    if ((param_2 != 2) && (param_2 != 3)) {
      iVar1 = FUN_005c4e68(param_1);
      if ((iVar1 != 0) && (param_1 == 2)) {
        FUN_005c5d60(0,0x9f);
      }
    }
    uVar2 = FUN_005c4e44(param_1);
    FUN_005c4df0(param_1,param_2);
    iVar1 = FUN_005c4f10();
    if (iVar1 == 0) {
      FUN_005c4f74();
    }
    else {
      FUN_005c4f48();
    }
    return uVar2;
  }
  setErrno(9);
  return 3;
}
