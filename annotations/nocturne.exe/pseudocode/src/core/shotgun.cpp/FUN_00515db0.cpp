// Name: core_shotgun.cpp_FUN_00515db0
// Address: 00515db0
// Address Range: [[00515db0, 00515e99]]
// Convention: unknown
// Signature: void core_shotgun_cpp_FUN_00515db0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shotgun_cpp_FUN_00515db0(int param_1)

{
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  if (*(int *)(param_1 + 0x574) != 0) {
    _DAT_01c762f4 = 1;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))();
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240();
    _DAT_01c762fc = 0;
    if (&stack0x00000000 != (byte *)0x1c74764) {
      _DAT_01c74744 = uStack_20;
      _DAT_01c74748 = uStack_1c;
      _DAT_01c7474c = uStack_18;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0();
    _DAT_01c74740 = *(uint *)(param_1 + 0x578);
    _DAT_01c74778 = 0x42e00000;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080();
    _DAT_01c76310 = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970();
  }
  *(uint *)(param_1 + 0x574) = 0;
  core_weapon_cpp_CWeapon_process_FUN_00554030();
  return;
}
