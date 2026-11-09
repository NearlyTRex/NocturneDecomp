// Name: core_minecar.cpp_CMineCar_process_FUN_00510e20
// Address: 00510e20
// Address Range: [[00510e20, 00510e8e]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMineCar_process_FUN_00510e20(CMineCar *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMineCar_process_FUN_00510e20(CMineCar *this_ptr,float delta_time)

{
  float fVar1;
  
  core_platfrm_cpp_FUN_00539810((CPlatform *)this_ptr,delta_time);
  if (((*(int *)&this_ptr->field_0x2d4 == 3) || (*(int *)&this_ptr->field_0x2d4 == 4)) &&
     (fVar1 = *(float *)&this_ptr->field_0x728 - delta_time,
     *(float *)&this_ptr->field_0x728 = fVar1, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0x728 = 0x3dcccccd;
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    return;
  }
  return;
}
