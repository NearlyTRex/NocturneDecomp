// Name: core_blundrbs.cpp_CBlunderbus_getMuzzlePoint_FUN_00411790
// Address: 00411790
// Address Range: [[00411790, 00411809]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_blundrbs_cpp_CBlunderbus_getMuzzlePoint_FUN_00411790(CBlunderbus *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_blundrbs_cpp_CBlunderbus_getMuzzlePoint_FUN_00411790(CBlunderbus *this_ptr,CVector3f *out_point)

{
  CVector3f *unaff_ESI;
  float *pfVar1;
  byte bVar2;
  float afStackY_1014 [1017];
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  uint uStack_c;
  
  bVar2 = 0;
  core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_0057b820(&this_ptr->base,&CStack_2c);
  afStack_1c[2] = CStack_2c.x;
  afStack_1c[(uint)bVar2 * -2 + 3] = *(float *)((int)&CStack_2c + (uint)bVar2 * -8 + 4);
  afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&CStack_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&fStack_20 != afStack_1c + 2) {
    fStack_20 = afStack_1c[2];
    afStack_1c[0] = afStack_1c[3];
    afStack_1c[1] = (float)uStack_c;
  }
  fStack_20 = fStack_20 + _DAT_005b654a;
  afStack_1c[0] = afStack_1c[0] + _DAT_005b654e;
  pfVar1 = (float *)((int)unaff_ESI + (uint)bVar2 * -8 + 4);
  unaff_ESI->x = fStack_20;
  *pfVar1 = afStack_1c[(uint)bVar2 * -2];
  pfVar1[(uint)bVar2 * -2 + 1] = afStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  return unaff_ESI;
}
