// Name: core_gore.cpp_CGore_renderParticles_FUN_004c9440
// Address: 004c9440
// Address Range: [[004c9440, 004c94b6]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004c9440(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004c9440(CGore *this_ptr)

{
  int iVar1;
  CBloodParticle *pCVar2;
  
  if ((*(int *)&g_CGamePtr->field_0x14 != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar1 == 0)
     ) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    pCVar2 = g_BloodParticles;
    core_gore_cpp_CBloodParticle_setupRenderState_FUN_004c7490(g_BloodParticles);
    do {
      if (0.0 < *(float *)&pCVar2->field_0x24) {
        (**(code **)(*(int *)&pCVar2->field_0x3c + 8))(pCVar2);
      }
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != (CBloodParticle *)&DAT_01cbcaf4);
  }
  return;
}
