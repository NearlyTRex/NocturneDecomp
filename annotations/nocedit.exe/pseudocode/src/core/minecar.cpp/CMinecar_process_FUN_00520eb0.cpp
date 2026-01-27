// Name: core_minecar.cpp_CMinecar_process_FUN_00520eb0
// Address: 00520eb0
// Address Range: [[00520eb0, 00520f1e]]
// Convention: __cdecl
// Signature: void core_minecar.cpp_CMinecar_process_FUN_00520eb0(CMineCar * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMinecar_process_FUN_00520eb0(CMineCar *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  
  core_platfrm_cpp_FUN_0054cc30();
  iVar1 = (this_ptr->base).state;
  if (((iVar1 == 3) || (iVar1 == 4)) &&
     (fVar2 = (float)this_ptr->unk - delta_time, this_ptr->unk = (int)fVar2, fVar2 < 0.0)) {
    this_ptr->unk = 0x3dcccccd;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    return;
  }
  return;
}
