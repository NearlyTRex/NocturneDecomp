// Name: core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005127f0
// Address: 005127f0
// Address Range: [[005127f0, 00512a3c]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005127f0(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005127f0(CPlatform *this_ptr,CDemonActor *actor)

{
  ECollisionType EVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  float fVar4;
  int iVar5;
  float unaff_ESI;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  CKeyFramedModelInstance *apCStackY_1028 [988];
  CVector3f *ray_origin;
  CBoundingBox3D *out_box;
  CVector3f *ray_direction;
  CVector3f *output_normal;
  CKeyFramedModelInstance *pCStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_70 [6];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint auStack_3c [2];
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar8 = 0;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)&stack0xffffff58);
    out_box = (CBoundingBox3D *)0x0;
    EVar1 = (*((actor->vtable)._ub)->getCollisionType)(actor,(SCollisionInfo *)&stack0xffffff58);
    if (EVar1 == COLLISION_TYPE_CYLINDER) {
      fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((this_ptr->base).orient.vec.x);
      fVar4 = (this_ptr->base).orient.vec.z;
      (this_ptr->base).orient.vec.x = fVar2;
      fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fVar4);
      fVar4 = (this_ptr->base).orient.vec.x;
      (this_ptr->base).orient.vec.z = fVar2;
      if ((ABS(fVar4) <= (float)_DAT_005cc483) &&
         (ABS((this_ptr->base).orient.vec.z) <= (float)_DAT_005cc483)) {
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,out_box);
        pfVar6 = afStack_70;
        pfVar7 = &fStack_58;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        core_actor_cpp_FUN_00408bf0();
        *(uint *)(&stack0xfffffff4 + (uint)bVar8 * -8) = auStack_3c[(uint)bVar8 * -2];
        *(uint *)(&stack0xfffffff8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             auStack_3c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if ((((fStack_58 <= fStack_40 + fStack_7c) && (fStack_40 - fStack_7c <= fStack_4c)) &&
            (fStack_50 <= unaff_ESI + fStack_7c)) &&
           (((unaff_ESI - fStack_7c <= fStack_44 && (fStack_54 <= fVar2 + fStack_80)) &&
            (fVar2 + (float)pCStack_84 <= fStack_48)))) {
          pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                             (&this_ptr->model);
          if (pCVar3->collision_triangle_list != (CDemonTriangle *)0x0) {
            output_normal = &CStack_34;
            CStack_28.x = 0.0;
            ray_direction = &CStack_28;
            CStack_28.z = 0.0;
            ray_origin = &CStack_1c;
            CStack_1c.x = fStack_40;
            *(uint *)((int)&CStack_1c + (uint)bVar8 * -8 + 4) =
                 *(uint *)(&stack0xfffffff4 + (uint)bVar8 * -8);
            *(uint *)((int)&CStack_1c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)(&stack0xfffffff8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            iVar5 = 0;
            CStack_1c.y = fStack_80 + _DAT_005cc48b + CStack_1c.y;
            CStack_28.y = 1.0;
            pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                               (&this_ptr->model);
            fVar4 = core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004618a0
                              (pCVar3,iVar5,ray_origin,ray_direction,output_normal);
            if (fVar4 < 0.0) {
              return 0;
            }
            if (1.0 < fVar4) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
