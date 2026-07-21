// Name: core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0
// Address: 005543c0
// Address Range: [[005543c0, 00554550]]
// Convention: unknown
// Signature: void core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(int param_1)

{
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240();
  _DAT_01c762f4 = 1;
  _DAT_01c762fc = 1;
  if (&stack0x00000000 != (byte *)0x1c74764) {
    _DAT_01c74744 = uStack_20;
    _DAT_01c74748 = uStack_1c;
    _DAT_01c7474c = uStack_18;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0();
  _DAT_01c74740 = 0x42000000;
  _DAT_01c74778 = 0x42000000;
  _DAT_01c76310 = 1;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))();
  core_actor_cpp_castToClassHash_FUN_0040d890();
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080();
  if (*(int *)(0x01C775EC + 0x244) != 0) {
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90();
    _DAT_02ddf9e8 = 0x8000;
    DAT_02ddf9c8 = 0x20;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0();
    _DAT_02ddf9cc = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0();
    return;
  }
  return;
}
