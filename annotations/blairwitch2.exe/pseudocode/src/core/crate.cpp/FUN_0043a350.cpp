// Name: core_crate.cpp_FUN_0043a350
// Address: 0043a350
// Address Range: [[0043a350, 0043a40b]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_FUN_0043a350(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_FUN_0043a350(CCrate *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_40 [6];
  uint local_28;
  float fStack_24;
  float fStack_18;
  byte auStack_10 [12];
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x70 != 1) {
    return;
  }
  engine_console_cpp_FUN_00436710(g_CConsolePtr,"?%s exploding!\n" + 1,this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr);
  puVar2 = local_40;
  puVar3 = &local_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (auStack_10 != &this_ptr->field_0x20) {
    auStack_10._0_4_ = *(uint *)&this_ptr->field_0x20;
    auStack_10._4_4_ = *(uint *)&this_ptr->field_0x24;
    auStack_10._8_4_ = *(uint *)&this_ptr->field_0x28;
  }
  auStack_10._4_4_ = (fStack_18 - fStack_24) + (float)auStack_10._4_4_;
  core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360
            (0x01C3DEB4,(CVector3f *)auStack_10,32.0,1500.0,4.0);
  core_mission_cpp_FUN_004fc7b0(0x01D182F0,this_ptr,1);
  *(uint *)&this_ptr->field_0x70 = 2;
  return;
}
