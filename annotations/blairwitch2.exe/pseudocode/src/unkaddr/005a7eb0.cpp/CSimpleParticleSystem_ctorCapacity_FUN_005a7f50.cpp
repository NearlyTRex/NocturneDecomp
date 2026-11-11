// Name: unkaddr_005a7eb0.cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50
// Address: 005a7f50
// Address Range: [[005a7f50, 005a7ffd]]
// Convention: __cdecl
// Signature: int __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50(CSimpleParticleSystem *this_ptr,int param_2)

#include "nocturne.h"

int __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_ctorCapacity_FUN_005a7f50(CSimpleParticleSystem *this_ptr,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  this_ptr->vtable = (void *)0x6002e4;
  this_ptr->next_particle = 0;
  this_ptr->owner = (CDemonActor *)0x0;
  this_ptr->particles = (void *)0x0;
  this_ptr->fade_current = 1.0;
  this_ptr->fade_start = 1.0;
  this_ptr->fade_end = 1.0;
  this_ptr->max_particles = param_2;
  this_ptr->fade_duration = 1.0;
  this_ptr->fade_timer = 0.0;
  this_ptr->stop_after_fade = 0;
  this_ptr->active = 0;
  this_ptr->standalone = 1;
  iVar2 = 0;
  pvVar1 = malloc(this_ptr->max_particles * 0x60);
  this_ptr->particles = pvVar1;
  if (0 < this_ptr->max_particles) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      unkafter_superopt_cpp_FUN_005a84c0((int)this_ptr->particles + iVar3);
      iVar3 = iVar3 + 0x60;
    } while (iVar2 < this_ptr->max_particles);
  }
  this_ptr->active = 1;
  return (int)this_ptr;
}
