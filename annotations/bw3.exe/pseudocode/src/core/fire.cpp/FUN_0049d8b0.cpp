// Name: core_fire.cpp_FUN_0049d8b0
// Address: 0049d8b0
// Address Range: [[0049d8b0, 0049d97c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049d8b0(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0049d8b0(CCrater *this_ptr)

{
  CVector3f *position;
  CVector3f local_18;
  
  if (*(int *)this_ptr != 0) {
    if ((0.0 < *(float *)&this_ptr->field_0x8) &&
       (*(float *)&this_ptr->field_0x8 =
             *(float *)&this_ptr->field_0x8 - *(float *)&g_CGamePtr->field_0x314,
       *(float *)&this_ptr->field_0x8 < 0.0)) {
      *(uint *)&this_ptr->field_0x4 = 1;
      *(uint *)&this_ptr->field_0x8 = 0;
    }
    *(float *)&this_ptr->field_0x18 =
         *(float *)&g_CGamePtr->field_0x314 + *(float *)&this_ptr->field_0x18;
    if ((float)_DAT_005c0778 < *(float *)&this_ptr->field_0x18) {
      *(float *)&this_ptr->field_0x18 = *(float *)&this_ptr->field_0x18 + _DAT_005c0780;
      local_18._0_4_ = 0;
      local_18._4_4_ = 0x3f800000;
      position = (CVector3f *)&this_ptr->field_0x1c;
      local_18._8_4_ = 0;
      do {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                  (0x01C73654,position,1.0,&local_18,0x4000);
        position = position + 1;
      } while (position != (CVector3f *)&this_ptr->field_0x40);
    }
  }
  return;
}
