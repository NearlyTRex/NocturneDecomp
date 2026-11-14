// Name: core_prye.cpp_FUN_00517d50
// Address: 00517d50
// Address Range: [[00517d50, 00517d6b] [00517d74, 00517d78] [00517db2, 00517db9]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_00517d50(CDemonActor *param_1)

#include "nocturne.h"

uint core_prye_cpp_FUN_00517d50(CDemonActor *param_1)

{
  uint uVar1;
  CDemonActor *pCVar2;
  
  if (param_1 == (CDemonActor *)0x0) {
    return 0;
  }
  switch(param_1[2].orient.vec.x) {
  case 0.0:
  case 7.00649e-45:
    uVar1 = 1;
    break;
  default:
    return 3;
  case 9.80909e-45:
  case 1.12104e-44:
    pCVar2 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CMeleeClassInfo.name_hash);
    if ((pCVar2 != (CDemonActor *)0x0) && (pCVar2[4].orient_matrix.m[0].z != 0.0)) {
      return 3;
    }
    pCVar2 = (CHolycross *)core_actor_cpp_castToClassHash_FUN_0040c840(param_1,g_CHolycrossClassInfo.name_hash);
    uVar1 = 0;
    if (pCVar2 != (CDemonActor *)0x0) {
      return 3;
    }
  }
  return uVar1;
}
