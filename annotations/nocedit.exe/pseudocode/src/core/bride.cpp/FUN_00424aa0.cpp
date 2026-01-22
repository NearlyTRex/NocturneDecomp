// Name: core_bride.cpp_FUN_00424aa0
// Address: 00424aa0
// Address Range: [[00424aa0, 00424b02]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424aa0()

#include "nocturne.h"

/* Signature: byte actors_enemy_bride.cpp_FUN_00424aa0(uint param_1, uint param_2)
    */

CVector3f * core_bride_cpp_FUN_00424aa0(void)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x4f local_7c;
  CMatrix3x4f local_4c;
  CVector3f local_1c;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_00822cdc,&local_4c);
  pCVar2 = &local_4c;
  pCVar3 = &local_7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_005f4dc0(in_stack_00000008,&local_1c,&local_7c);
  return in_stack_00000008;
}
