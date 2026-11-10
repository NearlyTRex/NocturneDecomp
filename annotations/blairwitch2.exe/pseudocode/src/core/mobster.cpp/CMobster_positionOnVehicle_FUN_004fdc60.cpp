// Name: core_mobster.cpp_CMobster_positionOnVehicle_FUN_004fdc60
// Address: 004fdc60
// Address Range: [[004fdc60, 004fdd4a]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004fdc60(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004fdc60(CMobster *this_ptr)

{
  float fVar1;
  byte bVar2;
  uint auStackY_1030 [1016];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  bVar2 = 0;
  if (this_ptr->side_of_car == 0) {
    local_20 = 0xc0166666;
    local_1c = 0xbfcccccd;
    local_24 = 0x400ccccd;
    if (&stack0xffffffd0 != &stack0xffffffdc) {
      local_28 = 0xbfcccccd;
      local_30 = 0x400ccccd;
      local_2c = 0xc0166666;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + _DAT_005ded65;
  }
  else {
    local_38 = 0xc0166666;
    local_34 = 0xbfcccccd;
    local_3c = 0xc00ccccd;
    if (&stack0xffffffd0 != &stack0xffffffc4) {
      local_28 = 0xbfcccccd;
      local_30 = 0xc00ccccd;
      local_2c = 0xc0166666;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + _DAT_005ded69;
  }
  (this_ptr->base).base.base.orient.vec.y = fVar1;
  core_actor_cpp_FUN_00408d70(this_ptr->vehicle,&stack0xffffffd0);
  local_48 = local_18;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)&(this_ptr->base).base.base.field_0x20 = local_48;
  *(uint *)&(this_ptr->base).base.base.field_0x24 = local_44;
  *(uint *)&(this_ptr->base).base.base.field_0x28 = local_40;
  return;
}
