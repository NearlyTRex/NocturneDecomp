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
  float *pfVar2;
  CVector3f *new_orientation;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [5];
  float fStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  bVar1 = 0;
  if (actor == (CDemonActor *)0x0) {
    return 0;
  }
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01e66150 * 0x30);
  fStack_34 = fStack_1c;
  afStack_30[(uint)bVar1 * -2] = afStack_30[(uint)bVar1 * -2 + 6];
  afStack_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01e66154 * 0x30);
  fStack_10 = afStack_30[2];
  afStack_30[(uint)bVar1 * -2 + 9] = afStack_30[(uint)bVar1 * -2 + 3];
  afStack_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 10] =
       afStack_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  fStack_4c = fStack_10 + fStack_34;
  fStack_48 = fStack_c + afStack_30[0];
  fStack_44 = fStack_8 + afStack_30[1];
  fStack_70 = fStack_10 + fStack_34;
  *(float *)((int)&stack0xffffff94 + (uint)bVar1 * -8) = afStack_30[(uint)bVar1 * -2 + -6];
  *(float *)((int)&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       afStack_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -5];
  pfVar2 = &stack0xffffffa8;
  fStack_64 = fStack_70 * _DAT_005e53fd;
  fStack_60 = fStack_6c * _DAT_005e53fd;
  fStack_5c = fStack_68 * _DAT_005e53fd;
  fStack_58 = fStack_70 * _DAT_005e53fd;
  *(uint *)((int)&stack0xffffffac + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * -8);
  afStack_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -8] =
       *(float *)((int)&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_50 = fStack_50 + _DAT_005e5401;
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar2);
  new_orientation = (CVector3f *)&actor->orient;
  CStack_40.x = fStack_7c;
  *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffff88 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_40 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  CStack_40.y = CStack_40.y + _DAT_005e5405;
  (*((actor->vtable)._ub)->setPositionAndOrientation)(actor,&CStack_40,new_orientation);
  return 1;
}
