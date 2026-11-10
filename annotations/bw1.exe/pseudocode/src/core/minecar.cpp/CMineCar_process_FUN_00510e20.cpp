// Name: core_minecar.cpp_CMineCar_process_FUN_00510e20
// Address: 00510e20
// Address Range: [[00510e20, 00510e8e]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMineCar_process_FUN_00510e20(CMineCar *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMineCar_process_FUN_00510e20(CMineCar *this_ptr,float delta_time)

{
  EPlatformStateType EVar1;
  float fVar2;
  
  core_platfrm_cpp_CPlatform_process_FUN_00539810(&this_ptr->base,delta_time);
  EVar1 = (this_ptr->base).state;
  if (((EVar1 == PLATFORM_STATE_TYPE_MOVING_TO_END) ||
      (EVar1 == PLATFORM_STATE_TYPE_MOVING_TO_START)) &&
     (fVar2 = this_ptr->spark_timer - delta_time, this_ptr->spark_timer = fVar2, fVar2 < 0.0)) {
    this_ptr->spark_timer = 0.1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
              (0x01C57074,&(this_ptr->base).base.location.position,(CVector3f *)0x0,0x4000,0x10000
               ,0,0xffff);
    return;
  }
  return;
}
