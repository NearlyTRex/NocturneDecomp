// Name: core_fire.cpp_CShell_process_FUN_004c6300
// Address: 004c6300
// Address Range: [[004c6300, 004c6379]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CShell_process_FUN_004c6300(CShell * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_process_FUN_004c6300(CShell *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((this_ptr->base).lifetime_remaining <= 0.0) {
    return;
  }
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  fVar4 = g_CGamePtr->delta_time_float;
  fVar1 = *(float *)(this_ptr->unk + 0x10);
  fVar2 = *(float *)(this_ptr->unk + 0x14);
  fVar3 = *(float *)(this_ptr->unk + 4);
  *(float *)this_ptr->unk = *(float *)this_ptr->unk + *(float *)(this_ptr->unk + 0xc) * fVar4;
  *(float *)(this_ptr->unk + 4) = fVar3 + fVar1 * fVar4;
  *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) + fVar2 * fVar4;
  return;
}
