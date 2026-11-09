// Name: core_dynamite.cpp_FUN_0047a0a0
// Address: 0047a0a0
// Address Range: [[0047a0a0, 0047a10d]]
// Convention: unknown
// Signature: undefined4 core_dynamite_cpp_FUN_0047a0a0(CWeapon *param_1)

#include "nocturne.h"

uint core_dynamite_cpp_FUN_0047a0a0(CWeapon *param_1)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0058a290(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_createToss_FUN_0049e560
            (0x01C3DEB4,(CVector3f *)&param_1->field_0x20,
             (UOrientationVector *)&param_1->field_0x30,(CVector3f *)&param_1[1].field_0x4,
             *(float *)(param_1 + 1),*(uint *)&param_1[1].field_0x10);
  *(uint *)&param_1[1].field_0x10 = 0;
  *(uint *)(param_1 + 1) = 0xbf800000;
  *(uint *)&param_1[1].field_0xc = 0;
  *(uint *)&param_1[1].field_0x8 = *(uint *)&param_1[1].field_0xc;
  *(uint *)&param_1[1].field_0x4 = *(uint *)&param_1[1].field_0x8;
  return 1;
}
