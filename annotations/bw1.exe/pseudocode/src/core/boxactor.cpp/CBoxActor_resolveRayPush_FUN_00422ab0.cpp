// Name: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0
// Address: 00422ab0
// Address Range: [[00422ab0, 00422c24]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  CBoundingBox3D *pCVar6;
  byte bVar7;
  float afStackY_1058 [1002];
  CVector3f *input_vector;
  CBoundingBox3D *in_stack_ffffff58;
  CBoundingBox3D CStack_98;
  float afStack_80 [4];
  float local_70;
  float local_6c;
  CVector3f local_68;
  byte auStack_5c [8];
  float afStack_54 [4];
  byte local_44 [8];
  float afStack_3c [4];
  float fStack_2c;
  float afStack_28 [4];
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
            (&this_ptr->base,ray_origin,(CVector3f *)(auStack_5c + 4));
  afStack_54[2] = (float)auStack_5c._4_4_;
  afStack_54[(uint)bVar7 * -2 + 3] = afStack_54[(uint)bVar7 * -2];
  input_vector = ray_direction;
  *(float *)(local_44 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
            (&this_ptr->base,input_vector,(CVector3f *)(local_44 + 4));
  local_70 = (float)local_44._4_4_;
  (&local_6c)[(uint)bVar7 * -2] = afStack_3c[(uint)bVar7 * -2];
  *(float *)((int)&local_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       afStack_3c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (local_68.x * (float)local_44._0_4_ + local_70 * afStack_54[2] + local_6c * afStack_54[3] < 0.0
     ) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff58);
    pfVar5 = afStack_80;
    pCVar6 = &CStack_98;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      (pCVar6->min).x = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
      pCVar6 = (CBoundingBox3D *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
    fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420ee0
                          (&CStack_98,(CVector3f *)local_44,&local_68,(CVector3f *)auStack_5c);
    if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
      fStack_14 = (float)1.01 - fStack_14;
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
