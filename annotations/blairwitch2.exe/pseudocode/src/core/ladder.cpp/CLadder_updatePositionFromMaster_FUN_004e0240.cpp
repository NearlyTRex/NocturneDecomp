// Name: core_ladder.cpp_CLadder_updatePositionFromMaster_FUN_004e0240
// Address: 004e0240
// Address Range: [[004e0240, 004e0376]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_updatePositionFromMaster_FUN_004e0240(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_updatePositionFromMaster_FUN_004e0240(CLadder *this_ptr)

{
  UOrientationVector *pUVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_101c [965];
  float afStack_f4 [3];
  float fStack_e8;
  uint uStack_d8;
  uint uStack_c8;
  CMatrix3x4f CStack_c4;
  CMatrix3x4f CStack_94;
  CMatrix3x4f CStack_64;
  float fStack_34;
  float afStack_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar5 = 0;
  if (this_ptr->master_actor == (CDemonActor *)0x0) {
    return;
  }
  core_xform_cpp_FUN_00591c10
            (&CStack_c4,&this_ptr->relative_position,&this_ptr->cached_euler_angles);
  core_xform_cpp_FUN_00591c10
            (&CStack_94,&this_ptr->master_actor->location,&this_ptr->master_actor->orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&CStack_c4,&CStack_94,&CStack_64);
  pCVar3 = &CStack_64;
  pfVar4 = afStack_f4;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_10 = fStack_e8;
  uStack_c = uStack_d8;
  uStack_8 = uStack_c8;
  fStack_34 = fStack_e8;
  afStack_30[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2 + 9];
  afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  (this_ptr->base).location.position.x = fStack_34;
  (this_ptr->base).location.position.y = afStack_30[0];
  (this_ptr->base).location.position.z = afStack_30[1];
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(afStack_f4);
  pUVar1 = &(this_ptr->base).orient;
  afStack_30[2] = fStack_1c;
  afStack_30[(uint)bVar5 * -2 + 3] = afStack_30[(uint)bVar5 * -2 + 6];
  afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  if (pUVar1 != (UOrientationVector *)(afStack_30 + 2)) {
    (pUVar1->vec).x = afStack_30[2];
    (this_ptr->base).orient.vec.y = afStack_30[3];
    (this_ptr->base).orient.vec.z = fStack_20;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  return;
}
