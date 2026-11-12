// Name: core_ladder.cpp_CLadder_cacheRelativePosition_FUN_004dfa70
// Address: 004dfa70
// Address Range: [[004dfa70, 004dfbac]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_cacheRelativePosition_FUN_004dfa70(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_cacheRelativePosition_FUN_004dfa70(CLadder *this_ptr)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1024 [967];
  float local_f0;
  uint local_e0;
  uint local_d0;
  CMatrix3x4f local_cc;
  CMatrix3x4f local_9c;
  CMatrix3x4f local_6c;
  float local_3c;
  float afStack_38 [4];
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  if (this_ptr->master_actor != (CDemonActor *)0x0) {
    core_xform_cpp_FUN_00583940(&local_cc,&(this_ptr->base).location,&(this_ptr->base).orient);
    core_xform_cpp_FUN_00583800
              (&local_9c,&(this_ptr->master_actor->location).position,
               &(this_ptr->master_actor->orient).vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&local_cc,&local_9c,&local_6c);
    pCVar2 = &local_6c;
    pfVar3 = (float *)&stack0xffffff04;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = pCVar2->m[0].w;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    }
    local_24 = local_f0;
    local_20 = local_e0;
    local_1c = local_d0;
    afStack_38[2] = local_f0;
    afStack_38[(uint)bVar4 * -2 + 3] = afStack_38[(uint)bVar4 * -2 + 6];
    afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    if (&this_ptr->relative_position != (CVector3f *)(afStack_38 + 2)) {
      (this_ptr->relative_position).x = afStack_38[2];
      (this_ptr->relative_position).y = afStack_38[3];
      (this_ptr->relative_position).z = local_28;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&stack0xffffff04);
    local_18 = local_3c;
    afStack_38[(uint)bVar4 * -2 + 9] = afStack_38[(uint)bVar4 * -2];
    afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
         afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&this_ptr->cached_euler_angles != (CVector3f *)(afStack_38 + 8)) {
      (this_ptr->cached_euler_angles).x = local_18;
      (this_ptr->cached_euler_angles).y = local_14;
      (this_ptr->cached_euler_angles).z = local_10;
      return;
    }
  }
  return;
}
