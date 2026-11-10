// Name: core_lightsta.cpp_CLightStaff_getMuzzlePoint_FUN_004e3de0
// Address: 004e3de0
// Address Range: [[004e3de0, 004e3e59]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_lightsta_cpp_CLightStaff_getMuzzlePoint_FUN_004e3de0(CLightStaff *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_lightsta_cpp_CLightStaff_getMuzzlePoint_FUN_004e3de0(CLightStaff *this_ptr,CVector3f *out_point)

{
  CVector3f *unaff_ESI;
  float *pfVar1;
  byte bVar2;
  float afStackY_1014 [1017];
  CVector3f *in_stack_ffffffd4;
  CVector3f *pCStack_20;
  float afStack_1c [2];
  CVector3f *pCStack_14;
  float afStack_10 [2];
  
  bVar2 = 0;
  core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_0057b820((CWeapon *)this_ptr,in_stack_ffffffd4);
  pCStack_14 = in_stack_ffffffd4;
  afStack_10[(uint)bVar2 * -2] = *(float *)(&stack0xffffffd8 + (uint)bVar2 * -8);
  afStack_10[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&pCStack_20 != &pCStack_14) {
    pCStack_20 = pCStack_14;
    afStack_1c[0] = afStack_10[0];
    afStack_1c[1] = afStack_10[1];
  }
  pCStack_20 = (CVector3f *)((float)pCStack_20 + _DAT_005c6aa6);
  afStack_1c[0] = afStack_1c[0] + _DAT_005c6aaa;
  pfVar1 = (float *)((int)unaff_ESI + (uint)bVar2 * -8 + 4);
  unaff_ESI->x = (float)pCStack_20;
  *pfVar1 = afStack_1c[(uint)bVar2 * -2];
  pfVar1[(uint)bVar2 * -2 + 1] = afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return unaff_ESI;
}
