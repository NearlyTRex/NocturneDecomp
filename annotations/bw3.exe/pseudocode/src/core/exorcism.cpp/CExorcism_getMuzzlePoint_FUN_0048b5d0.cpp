// Name: core_exorcism.cpp_CExorcism_getMuzzlePoint_FUN_0048b5d0
// Address: 0048b5d0
// Address Range: [[0048b5d0, 0048b637]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_exorcism_cpp_CExorcism_getMuzzlePoint_FUN_0048b5d0(CExorcism *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_exorcism_cpp_CExorcism_getMuzzlePoint_FUN_0048b5d0(CExorcism *this_ptr,CVector3f *out_point)

{
  CVector3f *unaff_ESI;
  float *pfVar1;
  byte bVar2;
  float afStackY_1014 [1017];
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  
  bVar2 = 0;
  core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_0057b820(&this_ptr->base,&CStack_2c);
  afStack_1c[2] = CStack_2c.x;
  afStack_1c[(uint)bVar2 * -2 + 3] = *(float *)((int)&CStack_2c + (uint)bVar2 * -8 + 4);
  afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&CStack_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&fStack_20 != afStack_1c + 2) {
    fStack_20 = afStack_1c[2];
    afStack_1c[0] = afStack_1c[3];
    afStack_1c[1] = fStack_c;
  }
  afStack_1c[1] = afStack_1c[1] + -0.5f;
  pfVar1 = (float *)((int)unaff_ESI + (uint)bVar2 * -8 + 4);
  unaff_ESI->x = fStack_20;
  *pfVar1 = afStack_1c[(uint)bVar2 * -2];
  pfVar1[(uint)bVar2 * -2 + 1] = afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return unaff_ESI;
}
