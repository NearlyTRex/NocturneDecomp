// Name: core_bride.cpp_CBride_getTargetPoint_FUN_00424e20
// Address: 00424e20
// Address Range: [[00424e20, 00424e8a]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_bride_cpp_CBride_getTargetPoint_FUN_00424e20(CBride *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __stack_esi core_bride_cpp_CBride_getTargetPoint_FUN_00424e20(CBride *this_ptr,CVector3f *out_point)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1000 [989];
  CMatrix3x4f CStack_84;
  CMatrix3x4f CStack_54;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
            (&(this_ptr->base).base.model,DAT_007c5388,&CStack_54);
  pCVar2 = &CStack_54;
  pCVar3 = &CStack_84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
  }
  CStack_24.x = 0.0;
  CStack_24.y = 0.7;
  CStack_24.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_005b5080(&CStack_24,&CStack_84,&CStack_18);
  puVar4 = (uint *)((int)out_point + (uint)bVar5 * -8 + 4);
  out_point->x = CStack_18.x;
  *puVar4 = *(uint *)((int)&CStack_18 + (uint)bVar5 * -8 + 4);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&CStack_18 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  return out_point;
}
