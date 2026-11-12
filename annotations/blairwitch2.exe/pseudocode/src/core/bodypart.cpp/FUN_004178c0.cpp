// Name: core_bodypart.cpp_FUN_004178c0
// Address: 004178c0
// Address Range: [[004178c0, 00417a66]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_004178c0(CBodyPart *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_004178c0(CBodyPart *param_1)

{
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1044 [999];
  CBox *this_ptr;
  CVector3f *position;
  CVector3f *pCVar5;
  CVector3f *extents;
  float *pfVar6;
  float volume;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_50;
  float fStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CVector3f CStack_20;
  float fStack_14;
  float afStack_10 [3];
  
  bVar4 = 0;
  if ((2 < param_1->vertex_count) && (0 < param_1->tri_count)) {
    (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,unaff_ESI);
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
    *(float *)((int)&stack0xffffffb4 + ((uint)bVar4 * -2 + 3) * 4) = afStack_28[(uint)bVar4 * -2];
    *(float *)((int)&stack0xffffffb4 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4) =
         afStack_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    pfVar6 = &stack0xffffffb0;
    afStack_10[2] = fStack_44 * _DAT_005cbfb6;
    fStack_50 = fStack_44 * _DAT_005cbfb6;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffffc + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffb4 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
         *(uint *)(&stack0x00000000 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    core_actor_cpp_FUN_00408d70(param_1,pfVar6);
    extents = &CStack_20;
    volume = 5.0;
    CStack_38.x = fStack_5c;
    *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffa8 + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_14 = fStack_68 - fStack_74;
    pCVar5 = (CVector3f *)&(param_1->base).orient;
    afStack_10[0] = fStack_64 - fStack_70;
    position = &CStack_38;
    this_ptr = &param_1->physics_box;
    afStack_10[1] = fStack_60 - fStack_6c;
    CStack_20.x = fStack_68 - fStack_74;
    *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + 4) = afStack_10[(uint)bVar4 * -2];
    *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_box_cpp_CBox_setupCorners_FUN_005b1c80(this_ptr,position,pCVar5,extents,volume);
    return;
  }
  (param_1->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415890(param_1,0,0);
  pCVar5 = &(param_1->bounding_box).max;
  if (pCVar5 != (CVector3f *)&DAT_0265370c) {
    pCVar5->x = _DAT_0265370c;
    (param_1->bounding_box).max.y = _DAT_02653710;
    (param_1->bounding_box).max.z = _DAT_02653714;
  }
  if (&param_1->bounding_box != (CBoundingBox3D *)pCVar5) {
    (param_1->bounding_box).min.x = pCVar5->x;
    (param_1->bounding_box).min.y = (param_1->bounding_box).max.y;
    (param_1->bounding_box).min.z = (param_1->bounding_box).max.z;
  }
  return;
}
