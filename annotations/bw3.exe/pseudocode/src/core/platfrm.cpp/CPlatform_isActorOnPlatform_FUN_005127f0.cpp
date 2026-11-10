// Name: core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005127f0
// Address: 005127f0
// Address Range: [[005127f0, 00512a3c]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005127f0(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005127f0(CPlatform *this_ptr,CDemonActor *actor)

{
  ECollisionType EVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  float fVar4;
  int iVar5;
  float unaff_ESI;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1028 [988];
  uint uVar9;
  float *pfVar10;
  CBoundingBox3D *out_box;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)&stack0xffffff58);
    out_box = (CBoundingBox3D *)0x0;
    EVar1 = (*((actor->vtable)._ub)->getCollisionType)(actor,(SCollisionInfo *)&stack0xffffff58);
    if (EVar1 == COLLISION_TYPE_CYLINDER) {
      fVar2 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0((this_ptr->base).orient.vec.x);
      fVar4 = (this_ptr->base).orient.vec.z;
      (this_ptr->base).orient.vec.x = fVar2;
      fVar2 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fVar4);
      fVar4 = (this_ptr->base).orient.vec.x;
      (this_ptr->base).orient.vec.z = fVar2;
      if ((ABS(fVar4) <= (float)_DAT_005cc483) &&
         (ABS((this_ptr->base).orient.vec.z) <= (float)_DAT_005cc483)) {
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,out_box);
        puVar6 = (uint *)&stack0xffffff90;
        puVar7 = &stack0xffffffa8;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        core_actor_cpp_FUN_00408bf0();
        *(uint *)(&stack0xfffffff4 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffc4 + (uint)bVar8 * -8);
        *(uint *)(&stack0xfffffff8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        if ((((fStack_58 <= fStack_40 + fStack_7c) && (fStack_40 - fStack_7c <= fStack_4c)) &&
            (fStack_50 <= unaff_ESI + fStack_7c)) &&
           (((unaff_ESI - fStack_7c <= fStack_44 && (fStack_54 <= fVar2 + fStack_80)) &&
            (fVar2 + fStack_84 <= fStack_48)))) {
          pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                             (&this_ptr->model);
          if (pCVar3->collision_triangle_list != (CDemonTriangle *)0x0) {
            uStack_28 = 0;
            uStack_20 = 0;
            pfVar10 = &stack0xffffffe4;
            fStack_1c = fStack_40;
            (&stack0xffffffe8)[(uint)bVar8 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xfffffff4 + (uint)bVar8 * -8);
            *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 *(uint *)(&stack0xfffffff8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            uVar9 = 0;
            fStack_18 = fStack_80 + _DAT_005cc48b + fStack_18;
            uStack_24 = 0x3f800000;
            pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                               (&this_ptr->model);
            fVar4 = (float)core_dmodel_cpp_FUN_004618a0(pCVar3,uVar9,pfVar10);
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
