// Name: core_minecar.cpp_CMineCar_process_FUN_004f2090
// Address: 004f2090
// Address Range: [[004f2090, 004f20fe]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMineCar_process_FUN_004f2090(CMineCar *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMineCar_process_FUN_004f2090(CMineCar *this_ptr,float delta_time)

{
  EPlatformStateType EVar1;
  float fVar2;
  
  core_platfrm_cpp_CPlatform_process_FUN_005184c0(&this_ptr->base,delta_time);
  EVar1 = (this_ptr->base).state;
  if (((EVar1 == PLATFORM_STATE_TYPE_MOVING_TO_END) ||
      (EVar1 == PLATFORM_STATE_TYPE_MOVING_TO_START)) &&
     (fVar2 = this_ptr->spark_timer - delta_time, this_ptr->spark_timer = fVar2, fVar2 < 0.0)) {
    this_ptr->spark_timer = 0.1;
    core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
              (0x01C3DEB4,&(this_ptr->base).base.location.position,(CVector3f *)0x0,0x4000,0x10000
               ,0,0xffff);
    return;
  }
  return;
}
