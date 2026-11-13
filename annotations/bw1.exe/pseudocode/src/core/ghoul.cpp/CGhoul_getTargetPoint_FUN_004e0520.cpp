// Name: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004e0520
// Address: 004e0520
// Address Range: [[004e0520, 004e058a]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004e0520(CGhoul *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004e0520(CGhoul *this_ptr,CVector3f *out_point)

{
  int iVar1;
  CVector3f *unaff_ESI;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1000 [989];
  CMatrix3x4f CStack_54;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  uint auStack_14 [2];
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
            (&(this_ptr->base).base.model,_DAT_01cd0d98,&CStack_54);
  pCVar2 = &CStack_54;
  pfVar3 = (float *)&stack0xffffff7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
  }
  uStack_24 = 0;
  uStack_20 = 0x3f333333;
  uStack_1c = 0x3e99999a;
  core_xform_cpp_FUN_005b5080(&uStack_24,&stack0xffffff7c);
  puVar4 = (uint *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
  unaff_ESI->x = fStack_18;
  *puVar4 = auStack_14[(uint)bVar5 * -2];
  puVar4[(uint)bVar5 * -2 + 1] = auStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  return unaff_ESI;
}
