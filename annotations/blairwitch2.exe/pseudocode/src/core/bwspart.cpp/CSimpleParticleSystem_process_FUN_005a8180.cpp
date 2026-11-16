// Name: core_bwspart.cpp_CSimpleParticleSystem_process_FUN_005a8180
// Address: 005a8180
// Address Range: [[005a8180, 005a8212]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem *this_ptr,float param_2)

{
  float fVar1;
  int *particle;
  int iVar2;
  int iVar3;
  
  if ((this_ptr->standalone == 0) && (this_ptr->owner == (CDemonActor *)0x0)) {
    return;
  }
  if (this_ptr->active != 0) {
    if (((0.0 < this_ptr->fade_timer) &&
        (fVar1 = this_ptr->fade_timer - param_2, this_ptr->fade_timer = fVar1, fVar1 <= 0.0)) &&
       (this_ptr->stop_after_fade != 0)) {
      core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100(this_ptr,0);
    }
    iVar3 = 0;
    if (0 < this_ptr->max_particles) {
      iVar2 = 0;
      do {
        while (particle = (int *)((int)this_ptr->particles + iVar2), *particle != 0) {
          core_bwspart_cpp_processSimpleParticle_FUN_005a85c0(particle,param_2);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x60;
          if (this_ptr->max_particles <= iVar3) {
            return;
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x60;
      } while (iVar3 < this_ptr->max_particles);
    }
  }
  return;
}
