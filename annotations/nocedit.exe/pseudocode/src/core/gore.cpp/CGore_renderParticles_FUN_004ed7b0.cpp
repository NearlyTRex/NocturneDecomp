// Name: core_gore.cpp_CGore_renderParticles_FUN_004ed7b0
// Address: 004ed7b0
// Address Range: [[004ed7b0, 004ed826]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(CGore *this_ptr)

{
  int iVar1;
  CBloodParticle *this_ptr_00;
  
  if ((g_CGamePtr->blood_flag != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar1 == 0)) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    this_ptr_00 = g_BloodParticles;
    core_gore_cpp_CBloodParticle_setupRenderState_FUN_004eb9d0(g_BloodParticles);
    do {
      if (0.0 < (this_ptr_00->base).lifetime_remaining) {
        (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
      }
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]));
  }
  return;
}
