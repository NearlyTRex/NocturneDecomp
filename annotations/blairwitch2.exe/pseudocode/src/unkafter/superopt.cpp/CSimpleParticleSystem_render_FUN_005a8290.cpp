// Name: unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290
// Address: 005a8290
// Address Range: [[005a8290, 005a82ff]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem *this_ptr)

#include "nocturne.h"

void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem *this_ptr)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    if ((this_ptr->standalone == 0) && (this_ptr->owner == (CDemonActor *)0x0)) {
      return;
    }
    if ((this_ptr->active != 0) && (iVar1 = 0, 0 < this_ptr->max_particles)) {
      iVar3 = 0;
      do {
        while (piVar2 = (int *)((int)this_ptr->particles + iVar3), *piVar2 != 0) {
          unkafter_superopt_cpp_FUN_005a86a0(piVar2);
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x60;
          if (this_ptr->max_particles <= iVar1) {
            return;
          }
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x60;
      } while (iVar1 < this_ptr->max_particles);
    }
  }
  return;
}
