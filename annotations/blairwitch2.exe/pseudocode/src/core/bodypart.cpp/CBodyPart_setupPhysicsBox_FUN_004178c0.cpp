// Name: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_004178c0
// Address: 004178c0
// Address Range: [[004178c0, 00417a66]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_004178c0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_004178c0(CBodyPart *this_ptr)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1044 [999];
  CBox *this_ptr_00;
  CVector3f *position;
  CVector3f *pCVar5;
  CVector3f *extents;
  float volume;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CVector3f CStack_20;
  float fStack_14;
  float afStack_10 [3];
  
  bVar4 = 0;
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
    puVar2 = (uint *)&stack0xffffff74;
    puVar3 = (uint *)&stack0xffffff84;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_2c = fStack_74 + fStack_68;
    afStack_28[0] = fStack_70 + fStack_64;
    afStack_28[1] = fStack_6c + fStack_60;
    fStack_44 = fStack_74 + fStack_68;
    afStack_40[(uint)bVar4 * -2] = afStack_28[(uint)bVar4 * -2];
    afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pCVar5 = &CStack_50;
    afStack_10[2] = fStack_44 * 0.5f;
    CStack_50.x = fStack_44 * 0.5f;
    *(uint *)((int)&CStack_50 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xfffffffc + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0x00000000 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&this_ptr->base,pCVar5,&CStack_5c);
    extents = &CStack_20;
    volume = 5.0;
    CStack_38.x = CStack_5c.x;
    *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    fStack_14 = fStack_68 - fStack_74;
    pCVar5 = (CVector3f *)&(this_ptr->base).orient;
    afStack_10[0] = fStack_64 - fStack_70;
    position = &CStack_38;
    this_ptr_00 = &this_ptr->physics_box;
    afStack_10[1] = fStack_60 - fStack_6c;
    CStack_20.x = fStack_68 - fStack_74;
    *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + 4) = afStack_10[(uint)bVar4 * -2];
    *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_box_cpp_CBox_setupCorners_FUN_005b1c80(this_ptr_00,position,pCVar5,extents,volume);
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415890(this_ptr,0,0);
  pCVar5 = &(this_ptr->bounding_box).max;
  if (pCVar5 != &g_ZeroVector) {
    pCVar5->x = g_ZeroVector.x;
    (this_ptr->bounding_box).max.y = g_ZeroVector.y;
    (this_ptr->bounding_box).max.z = g_ZeroVector.z;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar5) {
    (this_ptr->bounding_box).min.x = pCVar5->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
