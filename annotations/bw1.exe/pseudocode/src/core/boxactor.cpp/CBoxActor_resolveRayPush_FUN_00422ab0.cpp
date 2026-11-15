// Name: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0
// Address: 00422ab0
// Address Range: [[00422ab0, 00422c24]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1058 [1002];
  CVector3f *input_vector;
  CBoundingBox3D *in_stack_ffffff58;
  uint auStack_98 [6];
  uint auStack_80 [4];
  float local_70;
  float local_6c;
  float local_68 [3];
  byte auStack_5c [4];
  CVector3f local_58;
  float local_4c;
  float local_48 [2];
  CVector3f local_40;
  float fStack_2c;
  float afStack_28 [4];
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(&this_ptr->base,ray_origin,&local_58);
  local_4c = local_58.x;
  local_48[(uint)bVar7 * -2] = *(float *)((int)&local_58 + (uint)bVar7 * -8 + 4);
  input_vector = ray_direction;
  local_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&local_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
            (&this_ptr->base,input_vector,&local_40);
  local_70 = local_40.x;
  *(uint *)((int)local_68 + ((uint)bVar7 * -2 + -1) * 4) =
       *(uint *)((int)&local_40 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)local_68 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
       *(uint *)((int)&local_40 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  if (local_68[0] * local_48[1] + local_70 * local_4c + local_6c * local_48[0] < 0.0) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff58);
    puVar5 = auStack_80;
    puVar6 = auStack_98;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    fStack_14 = (float)core_box_cpp_FUN_00420ee0(auStack_98,local_48 + 1,local_68,auStack_5c);
    if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
      fStack_14 = (float)_DAT_005d4d60 - fStack_14;
      afStack_28[2] = ray_direction->x * fStack_14;
      pCVar1 = &(this_ptr->base).location;
      afStack_28[3] = ray_direction->y * fStack_14;
      fStack_18 = ray_direction->z * fStack_14;
      fStack_2c = afStack_28[2];
      afStack_28[(uint)bVar7 * -2] = afStack_28[(uint)bVar7 * -2 + 3];
      afStack_28[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_28[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      fVar2 = (this_ptr->base).location.position.y;
      fVar3 = (this_ptr->base).location.position.z;
      (pCVar1->position).x = (pCVar1->position).x + fStack_2c;
      (this_ptr->base).location.position.y = fVar2 + afStack_28[0];
      (this_ptr->base).location.position.z = fVar3 + afStack_28[1];
      core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_00421e80(this_ptr);
      core_boxactor_cpp_CBoxActor_constrainToExtents_FUN_00422d10(this_ptr);
      return;
    }
  }
  return;
}
