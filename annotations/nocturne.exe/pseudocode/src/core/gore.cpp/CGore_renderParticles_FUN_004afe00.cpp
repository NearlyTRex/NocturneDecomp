// Name: core_gore.cpp_CGore_renderParticles_FUN_004afe00
// Address: 004afe00
// Address Range: [[004afe00, 004afe76]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004afe00(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004afe00(CGore *this_ptr)

{
  int iVar1;
  CBloodParticle *this_ptr_00;
  
  if ((g_CGame_PTR_005b9354->blood_flag != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar1 == 0)
     ) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
              (g_CDemonSet_PTR_005be368,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    this_ptr_00 = g_CBloodParticle_ARRAY_01c78cec;
    core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ae0a0(g_CBloodParticle_ARRAY_01c78cec);
    do {
      if (0.0 < (this_ptr_00->base).lifetime_remaining) {
        (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
      }
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CBloodParticle *)&DAT_01c7ccec);
  }
  return;
}
