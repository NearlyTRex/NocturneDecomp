// Name: core_crate.cpp_FUN_004461c0
// Address: 004461c0
// Address Range: [[004461c0, 0044627d]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_FUN_004461c0(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_FUN_004461c0(CCrate *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_40 [6];
  uint local_28;
  float fStack_24;
  float fStack_18;
  uint uStack_10;
  float fStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x70 != 1) {
    return;
  }
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"?%s exploding!\n" + 1,this_ptr);
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
  puVar2 = local_40;
  puVar3 = &local_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&uStack_10 != (uint *)&this_ptr->field_0x20) {
    uStack_10 = *(uint *)&this_ptr->field_0x20;
    fStack_c = *(float *)&this_ptr->field_0x24;
    uStack_8 = *(uint *)&this_ptr->field_0x28;
  }
  fStack_c = (fStack_18 - fStack_24) + fStack_c;
  core_fire_cpp_FUN_004a36e0(0x01C73654,&uStack_10,0x42000000,0x44bb8000,0x40800000,0);
  core_mission_cpp_FUN_004f6f10(0x01D81080,this_ptr,1);
  *(uint *)&this_ptr->field_0x70 = 2;
  return;
}
