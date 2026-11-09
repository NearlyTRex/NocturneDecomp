// Name: core_crate.cpp_FUN_00449600
// Address: 00449600
// Address Range: [[00449600, 004496bb]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_FUN_00449600(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_FUN_00449600(CCrate *this_ptr)

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
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"?%s exploding!\n" + 1,this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
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
  core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
            (0x01C57074,(CVector3f *)auStack_10,32.0,1500.0,4.0);
  core_mission_cpp_FUN_0051b740(0x01D2C900,this_ptr,1);
  *(uint *)&this_ptr->field_0x70 = 2;
  return;
}
