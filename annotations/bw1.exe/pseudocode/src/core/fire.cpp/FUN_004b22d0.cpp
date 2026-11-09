// Name: core_fire.cpp_FUN_004b22d0
// Address: 004b22d0
// Address Range: [[004b22d0, 004b239c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b22d0(CCrater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b22d0(CCrater *this_ptr)

{
  CVector3f *position;
  CVector3f local_18;
  
  if (*(int *)this_ptr != 0) {
    if ((0.0 < *(float *)&this_ptr->field_0x8) &&
       (*(float *)&this_ptr->field_0x8 =
             *(float *)&this_ptr->field_0x8 - *(float *)&g_CGamePtr->field_0x294,
       *(float *)&this_ptr->field_0x8 < 0.0)) {
      *(uint *)&this_ptr->field_0x4 = 1;
      *(uint *)&this_ptr->field_0x8 = 0;
    }
    *(float *)&this_ptr->field_0x18 =
         *(float *)&g_CGamePtr->field_0x294 + *(float *)&this_ptr->field_0x18;
    if ((float)_DAT_005df3f4 < *(float *)&this_ptr->field_0x18) {
      *(float *)&this_ptr->field_0x18 = *(float *)&this_ptr->field_0x18 + _DAT_005df3fc;
      local_18._0_4_ = 0;
      local_18._4_4_ = 0x3f800000;
      position = (CVector3f *)&this_ptr->field_0x1c;
      local_18._8_4_ = 0;
      do {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                  (0x01C57074,position,1.0,&local_18,0xffff);
        position = position + 1;
      } while (position != (CVector3f *)&this_ptr->field_0x40);
    }
  }
  return;
}
