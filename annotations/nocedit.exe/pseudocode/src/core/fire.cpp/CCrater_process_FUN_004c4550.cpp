// Name: core_fire.cpp_CCrater_process_FUN_004c4550
// Address: 004c4550
// Address Range: [[004c4550, 004c461c]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_process_FUN_004c4550(CCrater * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_process_FUN_004c4550(CCrater *this_ptr)

{
  CVector3f *position;
  CVector3f local_18;
  
  if (*(int *)this_ptr->field0_0x0 != 0) {
    if ((0.0 < *(float *)(this_ptr->field0_0x0 + 8)) &&
       (*(float *)(this_ptr->field0_0x0 + 8) =
             *(float *)(this_ptr->field0_0x0 + 8) - g_CGamePtr->delta_time_float,
       *(float *)(this_ptr->field0_0x0 + 8) < 0.0)) {
      this_ptr->field0_0x0[4] = '\x01';
      this_ptr->field0_0x0[5] = '\0';
      this_ptr->field0_0x0[6] = '\0';
      this_ptr->field0_0x0[7] = '\0';
      this_ptr->field0_0x0[8] = '\0';
      this_ptr->field0_0x0[9] = '\0';
      this_ptr->field0_0x0[10] = '\0';
      this_ptr->field0_0x0[0xb] = '\0';
    }
    *(float *)(this_ptr->field0_0x0 + 0x18) =
         g_CGamePtr->delta_time_float + *(float *)(this_ptr->field0_0x0 + 0x18);
    if ((float)0.20000000000000001 < *(float *)(this_ptr->field0_0x0 + 0x18)) {
      *(float *)(this_ptr->field0_0x0 + 0x18) =
           *(float *)(this_ptr->field0_0x0 + 0x18) + -0.2f;
      local_18.x = 0.0;
      local_18.y = 1.0;
      position = (CVector3f *)(this_ptr->field0_0x0 + 0x1c);
      local_18.z = 0.0;
      do {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                  (g_CFireEffectPtr,position,1.0,&local_18,0xffff);
        position = position + 1;
      } while (position != (CVector3f *)(this_ptr->field0_0x0 + 0x40));
    }
  }
  return;
}
