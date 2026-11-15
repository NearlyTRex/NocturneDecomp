// Name: core_sentinel.cpp_CSentinel_attractActorToward_FUN_0052b6d0
// Address: 0052b6d0
// Address Range: [[0052b6d0, 0052b82a]]
// Convention: __cdecl
// Signature: int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_0052b6d0(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_0052b6d0(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point)

{
  byte bVar1;
  float afStackY_1064 [1012];
  CVector3f *pCVar2;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  float afStack_c [2];
  
  bVar1 = 0;
  if (actor == (CDemonActor *)0x0) {
    return 0;
  }
  core_xform_cpp_transformVector3x4_FUN_00591530
            ((CVector3f *)&DAT_0265370c,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01e66150,
             &CStack_1c);
  fStack_34 = CStack_1c.x;
  afStack_48[(uint)bVar1 * -2 + 6] = *(float *)((int)&CStack_1c + (uint)bVar1 * -8 + 4);
  afStack_48[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7] =
       *(float *)((int)&CStack_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  core_xform_cpp_transformVector3x4_FUN_00591530
            ((CVector3f *)&DAT_0265370c,
             (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01e66154,
             &CStack_28);
  fStack_10 = CStack_28.x;
  afStack_c[(uint)bVar1 * -2] = *(float *)((int)&CStack_28 + (uint)bVar1 * -8 + 4);
  afStack_c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  fStack_4c = fStack_10 + fStack_34;
  afStack_48[0] = afStack_c[0] + fStack_30;
  afStack_48[1] = afStack_c[1] + fStack_2c;
  fStack_70 = fStack_10 + fStack_34;
  afStack_6c[(uint)bVar1 * -2] = afStack_48[(uint)bVar1 * -2];
  afStack_6c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_48[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  pCVar2 = &CStack_58;
  afStack_6c[2] = fStack_70 * _DAT_005e53fd;
  afStack_6c[3] = afStack_6c[0] * _DAT_005e53fd;
  fStack_5c = afStack_6c[1] * _DAT_005e53fd;
  CStack_58.x = fStack_70 * _DAT_005e53fd;
  *(float *)((int)&CStack_58 + (uint)bVar1 * -8 + 4) = afStack_6c[(uint)bVar1 * -2 + 3];
  *(float *)((int)&CStack_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_6c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  CStack_58.z = CStack_58.z + _DAT_005e5401;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,pCVar2,&CStack_7c);
  pCVar2 = (CVector3f *)&actor->orient;
  CStack_40.x = CStack_7c.x;
  afStack_48[(uint)bVar1 * -2 + 3] = *(float *)((int)&CStack_7c + (uint)bVar1 * -8 + 4);
  afStack_48[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       *(float *)((int)&CStack_7c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  CStack_40.y = CStack_40.y + _DAT_005e5405;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,(CVector3f *)(afStack_48 + 2),pCVar2);
  return 1;
}
