// Name: unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050
// Address: 005a8050
// Address Range: [[005a8050, 005a80cc]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem *this_ptr,CDemonActor *param_2)

#include "nocturne.h"

void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem *this_ptr,CDemonActor *param_2)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (this_ptr->owner == (CDemonActor *)0x0) {
    this_ptr->owner = param_2;
    iVar3 = 0;
    pvVar2 = malloc(this_ptr->max_particles * 0x60);
    this_ptr->particles = pvVar2;
    if (0 < this_ptr->max_particles) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 1;
        unkafter_superopt_cpp_FUN_005a84c0((int)this_ptr->particles + iVar4);
        iVar4 = iVar4 + 0x60;
      } while (iVar3 < this_ptr->max_particles);
    }
    pCVar1 = this_ptr->owner;
    if (this_ptr != (CSimpleParticleSystem *)&pCVar1->location) {
      (this_ptr->position).x = (pCVar1->location).position.x;
      (this_ptr->position).y = (pCVar1->location).position.y;
      (this_ptr->position).z = (pCVar1->location).position.z;
    }
    this_ptr->active = 0;
    return;
  }
  return;
}
