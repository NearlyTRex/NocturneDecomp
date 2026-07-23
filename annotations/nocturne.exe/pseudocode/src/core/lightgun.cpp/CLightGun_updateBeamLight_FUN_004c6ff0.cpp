// Name: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
// Address: 004c6ff0
// Address Range: [[004c6ff0, 004c709e]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(int param_1)

{
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240();
  _DAT_01c762f4 = 1;
  _DAT_01c762fc = 0;
  if (&stack0x00000000 != (byte *)0x1c74758) {
    _DAT_01c74744 = uStack_14;
    _DAT_01c74748 = uStack_10;
    _DAT_01c7474c = uStack_c;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0();
  _DAT_01c74740 = 0x42000000;
  _DAT_01c74778 = 112.0f;
  _DAT_01c76310 = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080();
  return;
}
