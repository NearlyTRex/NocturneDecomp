// Name: core_gore.cpp_FUN_004ce5b0
// Address: 004ce5b0
// Address Range: [[004ce5b0, 004ce626]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ce5b0(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ce5b0(CGore *this_ptr)

{
  int iVar1;
  CBloodParticle *pCVar2;
  
  if ((*(int *)&g_CGamePtr->field_0x14 != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar1 == 0)
     ) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    pCVar2 = g_BloodParticles;
    core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ccaf0(g_BloodParticles);
    do {
      if (0.0 < *(float *)&pCVar2->field_0x24) {
        (**(code **)(*(int *)&pCVar2->field_0x3c + 8))(pCVar2);
      }
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != (CBloodParticle *)&DAT_01d276b4);
  }
  return;
}
