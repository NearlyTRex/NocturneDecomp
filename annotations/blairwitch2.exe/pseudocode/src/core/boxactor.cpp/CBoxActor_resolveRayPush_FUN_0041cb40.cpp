// Name: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40
// Address: 0041cb40
// Address Range: [[0041cb40, 0041ccb4]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  byte *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1058 [1002];
  CVector3f *pCVar6;
  CBoundingBox3D *in_stack_ffffff58;
  uint auStack_98 [6];
  uint auStack_80 [4];
  float local_70;
  float local_6c;
  float local_68 [3];
  byte auStack_5c [4];
  float local_58;
  float afStack_54 [4];
  float local_44;
  float local_40;
  float fStack_2c;
  float afStack_28 [4];
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  core_actor_cpp_FUN_00408de0(this_ptr,ray_origin);
  afStack_54[2] = local_58;
  afStack_54[(uint)bVar5 * -2 + 3] = afStack_54[(uint)bVar5 * -2];
  pCVar6 = ray_direction;
  afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408d30(this_ptr,pCVar6);
  local_70 = local_40;
  *(float *)((int)local_68 + ((uint)bVar5 * -2 + -1) * 4) = afStack_54[(uint)bVar5 * -2 + 6];
  *(float *)((int)local_68 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
       afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  if (local_68[0] * local_44 + local_70 * afStack_54[2] + local_6c * afStack_54[3] < 0.0) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff58);
    puVar3 = auStack_80;
    puVar4 = auStack_98;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    fStack_14 = (float)core_box_cpp_FUN_0041af70(auStack_98,afStack_54 + 4,local_68,auStack_5c);
    if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
      fStack_14 = (float)_DAT_005cc671 - fStack_14;
      afStack_28[2] = ray_direction->x * fStack_14;
      puVar1 = &(this_ptr->base).field_0x20;
      afStack_28[3] = ray_direction->y * fStack_14;
      fStack_18 = ray_direction->z * fStack_14;
      fStack_2c = afStack_28[2];
      afStack_28[(uint)bVar5 * -2] = afStack_28[(uint)bVar5 * -2 + 3];
      afStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      *(float *)puVar1 = *(float *)puVar1 + fStack_2c;
      *(float *)&(this_ptr->base).field_0x24 =
           *(float *)&(this_ptr->base).field_0x24 + afStack_28[0];
      *(float *)&(this_ptr->base).field_0x28 =
           *(float *)&(this_ptr->base).field_0x28 + afStack_28[1];
      core_boxactor_cpp_FUN_0041bf10(this_ptr);
      core_boxactor_cpp_FUN_0041cda0(this_ptr);
      return;
    }
  }
  return;
}
