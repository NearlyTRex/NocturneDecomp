// Name: core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0053ab00
// Address: 0053ab00
// Address Range: [[0053ab00, 0053ad4c]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_0053ab00(CPlatform *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_0053ab00(CPlatform *this_ptr,CDemonActor *actor)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1038 [989];
  uint uVar7;
  uint *puVar8;
  byte *puVar9;
  byte local_a8 [24];
  float fStack_90;
  float fStack_8c;
  float afStack_80 [6];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float afStack_4c [2];
  byte auStack_44 [12];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float afStack_28 [4];
  float fStack_18;
  uint uStack_14;
  
  bVar6 = 0;
  if (actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)local_a8);
    local_a8._0_4_ = 0;
    iVar1 = (**(code **)(*(int *)&actor->field_0x154 + 0x3c))(actor,local_a8);
    if (iVar1 == 2) {
      uStack_14 = core_actor_cpp_FUN_0040cd60(*(uint *)&this_ptr->field_0x30);
      *(uint *)&this_ptr->field_0x30 = uStack_14;
      uStack_14 = core_actor_cpp_FUN_0040cd60(*(uint *)&this_ptr->field_0x38);
      *(uint *)&this_ptr->field_0x38 = uStack_14;
      if ((ABS(*(float *)&this_ptr->field_0x30) <= (float)_DAT_005ed61b) &&
         (ABS(*(float *)&this_ptr->field_0x38) <= (float)_DAT_005ed61b)) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
        pfVar4 = afStack_80;
        pfVar5 = &fStack_68;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
        }
        core_actor_cpp_FUN_00408bb0(this_ptr,&actor->field_0x20);
        afStack_28[2] = fStack_50;
        afStack_28[(uint)bVar6 * -2 + 3] = afStack_4c[(uint)bVar6 * -2];
        afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_4c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if ((((fStack_68 <= afStack_28[2] + fStack_8c) && (afStack_28[2] - fStack_8c <= fStack_5c))
            && (fStack_60 <= fStack_18 + fStack_8c)) &&
           (((fStack_18 - fStack_8c <= fStack_54 && (fStack_64 <= afStack_28[3] + fStack_90)) &&
            (afStack_28[3] + (float)local_a8._20_4_ <= fStack_58)))) {
          pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                             ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
          if (*(int *)&pCVar2->field_0x358 != 0) {
            puVar9 = auStack_44;
            uStack_38 = 0;
            puVar8 = &uStack_38;
            uStack_30 = 0;
            pfVar4 = &fStack_2c;
            fStack_2c = afStack_28[2];
            afStack_28[(uint)bVar6 * -2] = afStack_28[(uint)bVar6 * -2 + 3];
            afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            uVar7 = 0;
            afStack_28[0] = fStack_90 + _DAT_005ed623 + afStack_28[0];
            uStack_34 = 0x3f800000;
            pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                               ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
            fVar3 = (float)core_dmodel_cpp_FUN_00467c00(pCVar2,uVar7,pfVar4,puVar8,puVar9);
            if (fVar3 < 0.0) {
              return 0;
            }
            if (1.0 < fVar3) {
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
