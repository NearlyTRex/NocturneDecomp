// Name: core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_00498b60
// Address: 00498b60
// Address Range: [[00498b60, 00498bca]]
// Convention: unknown
// Signature: void core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(CDemonActor *param_1)

#include "nocturne.h"

void core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(CDemonActor *param_1)

{
  int iVar1;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1[0x180].create_event + 0x58) + 0x14c) + 0xdc))
                    (*(int *)(param_1[0x180].create_event + 0x58));
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1[0x180].create_event + 0x58) + 0x2d4) == 1)) {
    param_1[0x181].dead2 = 0x3f800000;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  param_1[0x181].process_disabled = 0;
  return;
}
