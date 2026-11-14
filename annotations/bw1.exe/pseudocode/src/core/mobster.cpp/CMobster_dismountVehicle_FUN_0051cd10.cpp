// Name: core_mobster.cpp_CMobster_dismountVehicle_FUN_0051cd10
// Address: 0051cd10
// Address Range: [[0051cd10, 0051ce0d]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_0051cd10(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_0051cd10(CMobster *this_ptr)

{
  float fVar1;
  byte bVar2;
  float afStackY_1024 [1012];
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
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
    local_24 = 0x40866666;
    if (&stack0xffffffd0 != &stack0xffffffdc) {
      local_2c = 0xc0166666;
      local_28 = 0xbfcccccd;
      local_30 = 0x40866666;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + _DAT_005e9dba;
  }
  else {
    local_44 = 0xc0166666;
    local_40 = 0xbfcccccd;
    local_48 = 0xc0866666;
    if (&stack0xffffffd0 != &stack0xffffffb8) {
      local_2c = 0xc0166666;
      local_28 = 0xbfcccccd;
      local_30 = 0xc0866666;
    }
    fVar1 = (this_ptr->vehicle->orient).vec.y + _DAT_005e9dbe;
  }
  (this_ptr->base).base.base.orient.vec.y = fVar1;
  core_actor_cpp_FUN_00408b40(this_ptr->vehicle,&stack0xffffffd0);
  local_3c = local_18;
  (&stack0xffffffc8)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  (this_ptr->base).base.base.location.position.x = local_3c;
  (this_ptr->base).base.base.location.position.y = local_38;
  (this_ptr->base).base.base.location.position.z = local_34;
  this_ptr->vehicle = (CDemonActor *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,8,1);
  return;
}
