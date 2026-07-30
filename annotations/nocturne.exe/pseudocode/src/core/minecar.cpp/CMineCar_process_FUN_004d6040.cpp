// Name: core_minecar.cpp_CMineCar_process_FUN_004d6040
// Address: 004d6040
// Address Range: [[004d6040, 004d60ae]]
// Convention: unknown
// Signature: void core_minecar_cpp_CMineCar_process_FUN_004d6040(CPlatform *param_1,float param_2)

#include "nocturne.h"

void core_minecar_cpp_CMineCar_process_FUN_004d6040(CPlatform *param_1,float param_2)

{
  core_platfrm_cpp_CPlatform_process_FUN_004f6170(param_1,param_2);
  if (((param_1->state == (PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END)) ||
      (param_1->state == 4)) &&
     (param_2 = (float)param_1->rendered_in_background - param_2,
     param_1->rendered_in_background = (int)param_2, param_2 < 0.0)) {
    param_1->rendered_in_background = 0x3dcccccd;
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
              (0x01C08D04,&(param_1->base).location.position,(CVector3f *)0x0,0x4000,0x10000,0,
               0xffff);
    return;
  }
  return;
}
