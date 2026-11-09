// Name: core_gore.cpp_FUN_004e5c50
// Address: 004e5c50
// Address Range: [[004e5c50, 004e5cc6]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004e5c50(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004e5c50(CGore *this_ptr)

{
  int iVar1;
  CBloodParticle *pCVar2;
  
  if ((*(int *)&g_CGamePtr->field_0x14 != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar1 == 0)
     ) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    pCVar2 = g_BloodParticles;
    core_gore_cpp_FUN_004e3e50(g_BloodParticles);
    do {
      if (0.0 < *(float *)&pCVar2->field_0x24) {
        (**(code **)(*(int *)&pCVar2->field_0x3c + 8))(pCVar2);
      }
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != (CBloodParticle *)&DAT_01cd56ac);
  }
  return;
}
