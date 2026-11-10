// Name: core_mobster.cpp_CMobster_positionOnVehicle_FUN_0051cc20
// Address: 0051cc20
// Address Range: [[0051cc20, 0051cd0a]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_0051cc20(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_0051cc20(CMobster *this_ptr)

{
  float fVar1;
  byte bVar2;
  float afStackY_1030 [1016];
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  
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
    fVar1 = (this_ptr->vehicle->orient).vec.y + _DAT_005e9db2;
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
    fVar1 = (this_ptr->vehicle->orient).vec.y + _DAT_005e9db6;
  }
  (this_ptr->base).base.base.orient.vec.y = fVar1;
  core_actor_cpp_FUN_00408b40(this_ptr->vehicle,&stack0xffffffd0);
  local_48 = local_18;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  (this_ptr->base).base.base.location.position.x = local_48;
  (this_ptr->base).base.base.location.position.y = local_44;
  (this_ptr->base).base.base.location.position.z = local_40;
  return;
}
