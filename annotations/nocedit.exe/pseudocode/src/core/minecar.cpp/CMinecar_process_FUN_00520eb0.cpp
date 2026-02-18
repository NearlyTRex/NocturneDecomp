// Name: core_minecar.cpp_CMinecar_process_FUN_00520eb0
// Address: 00520eb0
// Address Range: [[00520eb0, 00520f1e]]
// Convention: __cdecl
// Signature: void __cdecl core_minecar_cpp_CMinecar_process_FUN_00520eb0(CMineCar *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_minecar_cpp_CMinecar_process_FUN_00520eb0(CMineCar *this_ptr,float delta_time)

{
  EPlatformStateType EVar1;
  float fVar2;
  
  core_platfrm_cpp_CPlatform_process_FUN_0054cc30(&this_ptr->base,delta_time);
  EVar1 = (this_ptr->base).state;
  if (((EVar1 == (PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END)) || (EVar1 == 4)) &&
     (fVar2 = (float)this_ptr->unk - delta_time, this_ptr->unk = (int)fVar2, fVar2 < 0.0)) {
    this_ptr->unk = 0x3dcccccd;
    core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
              (g_CFireEffectPtr,&(this_ptr->base).base.location.position,(CVector3f *)0x0,0x4000,
               0x10000,0,0xffff);
    return;
  }
  return;
}
