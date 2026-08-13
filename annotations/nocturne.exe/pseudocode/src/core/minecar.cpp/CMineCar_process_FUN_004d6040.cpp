// Name: core_minecar.cpp_CMineCar_process_FUN_004d6040
// Address: 004d6040
// Address Range: [[004d6040, 004d60ae]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMineCar_process_FUN_004d6040(CMineCar *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMineCar_process_FUN_004d6040(CMineCar *this_ptr,float delta_time)

{
  EPlatformStateType EVar1;
  float fVar2;
  
  core_platfrm_cpp_CPlatform_process_FUN_004f6170(&this_ptr->base,delta_time);
  EVar1 = (this_ptr->base).state;
  if (((EVar1 == (PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END)) || (EVar1 == 4)) &&
     (fVar2 = this_ptr->spark_timer - delta_time, this_ptr->spark_timer = fVar2, fVar2 < 0.0)) {
    this_ptr->spark_timer = 0.1;
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
              (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).base.location.position,(CVector3f *)0x0,
               0x4000,0x10000,0,0xffff);
    return;
  }
  return;
}
