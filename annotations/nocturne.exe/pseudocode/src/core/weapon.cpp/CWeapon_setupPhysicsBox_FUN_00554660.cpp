// Name: core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660
// Address: 00554660
// Address Range: [[00554660, 00554743]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(int param_1)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(int param_1)

{
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  byte auStack_34 [12];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if ((*(int *)(param_1 + 0x2c8) != 0) && (*(byte **)(param_1 + 0x68) == &DAT_0078a123)) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&fStack_4c);
    fStack_10 = fStack_4c + fStack_40;
    fStack_c = fStack_48 + fStack_3c;
    fStack_1c = fStack_10 * 0.5f;
    fStack_18 = fStack_c * 0.5f;
    fStack_8 = fStack_44 + fStack_38;
    fStack_14 = fStack_8 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_34,&fStack_1c);
    fStack_28 = fStack_40 - fStack_4c;
    fStack_24 = fStack_3c - fStack_48;
    fStack_20 = fStack_38 - fStack_44;
    core_box_cpp_CBox_setupCorners_FUN_0041a6e0
              (param_1 + 0x300,auStack_34,param_1 + 0x30,&fStack_28,*(uint *)(param_1 + 0x55c)
              );
    return;
  }
  return;
}
