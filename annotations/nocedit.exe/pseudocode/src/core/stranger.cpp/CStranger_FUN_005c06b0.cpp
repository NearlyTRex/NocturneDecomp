// Name: core_stranger.cpp_CStranger_FUN_005c06b0
// Address: 005c06b0
// Address Range: [[005c06b0, 005c07ac]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c06b0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c06b0(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float local_114 [12];
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar6 = 0;
  pCVar1 = *(CDemonActor **)(this_ptr->unk1 + 0x54);
  if (((pCVar1 != (CDemonActor *)0x0) &&
      (pCVar1 != (this_ptr->base).base.carry_hands[0].carry_actor)) &&
     (pCVar1 != (this_ptr->base).base.carry_hands[1].carry_actor)) {
    core_stranger_cpp_CStranger_FUN_005c07b0(this_ptr);
    pfVar3 = local_114;
    pCVar4 = &local_b4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar6 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_84,&(this_ptr->base).base.base.location.position,
               (CVector3f *)&(this_ptr->base).base.base.orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b4,&local_84,&local_54);
    pCVar4 = &local_54;
    pCVar5 = &local_e4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    iVar2 = *(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_e4,&local_24);
    core_xform_cpp_getTranslation_FUN_005f6110(&local_e4,&local_18);
    (**(code **)(iVar2 + 0x60))();
  }
  return;
}
