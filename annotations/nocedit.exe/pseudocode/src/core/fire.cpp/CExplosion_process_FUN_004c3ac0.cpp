// Name: core_fire.cpp_CExplosion_process_FUN_004c3ac0
// Address: 004c3ac0
// Address Range: [[004c3ac0, 004c3b04]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_process_FUN_004c3ac0(CExplosion *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_process_FUN_004c3ac0(CExplosion *this_ptr)

{
  float fVar1;
  
  if ((0.0 < *(float *)(this_ptr->unk + 0xc)) &&
     (fVar1 = *(float *)(this_ptr->unk + 0xc) - g_CGamePtr->delta_time_float,
     *(float *)(this_ptr->unk + 0xc) = fVar1, fVar1 < 0.0)) {
    this_ptr->unk[0xc] = '\0';
    this_ptr->unk[0xd] = '\0';
    this_ptr->unk[0xe] = '\0';
    this_ptr->unk[0xf] = '\0';
    return;
  }
  return;
}
