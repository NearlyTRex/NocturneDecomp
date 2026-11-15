// Name: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004c90b0
// Address: 004c90b0
// Address Range: [[004c90b0, 004c911a]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004c90b0(CGhoul *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004c90b0(CGhoul *this_ptr,CVector3f *out_point)

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
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_0054d9c0
            (&(this_ptr->base).base.model,_DAT_01d22da0,&CStack_54);
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
  core_xform_cpp_transformVector3x4_FUN_00583260(&CStack_24,&CStack_84,&CStack_18);
  puVar4 = (uint *)((int)out_point + (uint)bVar5 * -8 + 4);
  out_point->x = CStack_18.x;
  *puVar4 = *(uint *)((int)&CStack_18 + (uint)bVar5 * -8 + 4);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&CStack_18 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  return out_point;
}
