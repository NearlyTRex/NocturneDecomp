// Name: unkafter_superopt.cpp_CSimpleParticleSystem_process_FUN_005a8180
// Address: 005a8180
// Address Range: [[005a8180, 005a8212]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180(CSimpleParticleSystem *this_ptr,float param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((this_ptr->standalone == 0) && (this_ptr->owner == (CDemonActor *)0x0)) {
    return;
  }
  if (this_ptr->active != 0) {
    if (((0.0 < this_ptr->fade_timer) &&
        (fVar1 = this_ptr->fade_timer - param_2, this_ptr->fade_timer = fVar1, fVar1 <= 0.0)) &&
       (this_ptr->stop_after_fade != 0)) {
      unkaddr_005a7eb0_cpp_CSimpleParticleSystem_stop_FUN_005a8100(this_ptr,0);
    }
    iVar4 = 0;
    if (0 < this_ptr->max_particles) {
      iVar3 = 0;
      do {
        while (piVar2 = (int *)((int)this_ptr->particles + iVar3), *piVar2 != 0) {
          unkafter_superopt_cpp_FUN_005a85c0(piVar2,param_2);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x60;
          if (this_ptr->max_particles <= iVar4) {
            return;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x60;
      } while (iVar4 < this_ptr->max_particles);
    }
  }
  return;
}
