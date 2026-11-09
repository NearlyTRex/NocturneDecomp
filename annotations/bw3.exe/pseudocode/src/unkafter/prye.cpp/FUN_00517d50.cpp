// Name: unkafter_prye.cpp_FUN_00517d50
// Address: 00517d50
// Address Range: [[00517d50, 00517d6b] [00517d74, 00517d78] [00517db2, 00517db9]]
// Convention: unknown
// Signature: undefined4 unkafter_prye_cpp_FUN_00517d50(int param_1)

#include "nocturne.h"

uint unkafter_prye_cpp_FUN_00517d50(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
  case 5:
    uVar1 = 1;
    break;
  default:
    return 3;
  case 7:
  case 8:
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CMeleeClassInfo.name_hash);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x5a4) != 0)) {
      return 3;
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CHolycrossClassInfo.name_hash);
    uVar1 = 0;
    if (iVar2 != 0) {
      return 3;
    }
  }
  return uVar1;
}
