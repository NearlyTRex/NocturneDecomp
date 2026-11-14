// Name: core_hero.cpp_CHero_tryPushNearbyBox_FUN_004eb890
// Address: 004eb890
// Address Range: [[004eb890, 004ebbd2]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004eb890(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryPushNearbyBox_FUN_004eb890(CHero *this_ptr)

{
  float fVar1;
  int iVar2;
  CDemonActor *this_ptr_00;
  uint uVar3;
  CBoxActor *this_ptr_01;
  float fVar4;
  uint *puVar5;
  double *pdVar6;
  byte bVar7;
  float afStackY_10a8 [1000];
  CHero *in_stack_ffffff00;
  float *pfVar8;
  double local_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  uint auStack_d8 [6];
  float fStack_c0;
  float afStack_bc [4];
  float fStack_ac;
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_84;
  uint uStack_78;
  float fStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  float fStack_24;
  int local_20;
  float local_1c [3];
  
  bVar7 = 0;
  iVar2 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432c40(&this_ptr->base);
  if (iVar2 != 0) {
    return 0;
  }
  if (this_ptr->pushed_object == (CBoxActor *)0x0) {
    local_1c[0] = 0.0;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr_01 = (CBoxActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_1c[0]),
                               g_CBoxActorClassInfo.name_hash);
      if (((this_ptr_01 != (CBoxActor *)0x0) && (this_ptr_01->can_be_pushed != 0)) &&
         (this_ptr_01->pushed_by_actor == (CDemonActor *)0x0)) {
        (*((this_ptr_01->base).vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_01,(CBoundingBox3D *)in_stack_ffffff00);
        puVar5 = auStack_d8;
        pdVar6 = &local_f8;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pdVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          pdVar6 = (double *)((int)pdVar6 + (uint)bVar7 * -8 + 4);
        }
        fStack_c0 = fStack_f0 + fStack_e4;
        afStack_bc[0] = fStack_ec + local_e0;
        afStack_bc[1] = fStack_e8 + fStack_dc;
        fStack_48 = fStack_f0 + fStack_e4;
        afStack_bc[(uint)bVar7 * -2 + 0x1e] = afStack_bc[(uint)bVar7 * -2];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1f] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        fStack_3c = fStack_48 * _DAT_005e48c9;
        fStack_38 = fStack_44 * _DAT_005e48c9;
        fStack_34 = fStack_40 * _DAT_005e48c9;
        fStack_24 = fStack_48 * _DAT_005e48c9;
        local_1c[(uint)bVar7 * -2 + -1] = afStack_bc[(uint)bVar7 * -2 + 0x21];
        local_1c[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x22];
        core_actor_cpp_FUN_00408b40(this_ptr_01,afStack_bc + 0x26);
        pfVar8 = afStack_bc + 5;
        afStack_a8[0] = (float)uStack_90;
        afStack_bc[(uint)bVar7 * -2 + 6] = afStack_bc[(uint)bVar7 * -2 + 0xc];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        in_stack_ffffff00 = this_ptr;
        core_actor_cpp_FUN_00408bb0(this_ptr,pfVar8);
        fVar1 = local_e0;
        fVar4 = fStack_e4;
        fStack_9c = (float)uStack_30;
        afStack_bc[(uint)bVar7 * -2 + 9] = afStack_bc[(uint)bVar7 * -2 + 0x24];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x25];
        fStack_54 = fVar4 - fStack_f0;
        fStack_50 = fVar1 - fStack_ec;
        fStack_4c = fStack_dc - fStack_e8;
        afStack_bc[2] = fVar4 - fStack_f0;
        afStack_bc[(uint)bVar7 * -2 + 3] = afStack_bc[(uint)bVar7 * -2 + 0x1b];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1c];
        fStack_6c = afStack_bc[2] * _DAT_005e48c9;
        fStack_68 = afStack_bc[3] * _DAT_005e48c9;
        fStack_64 = fStack_ac * _DAT_005e48c9;
        fStack_60 = afStack_bc[2] * _DAT_005e48c9;
        afStack_bc[(uint)bVar7 * -2 + 0x18] = afStack_bc[(uint)bVar7 * -2 + 0x15];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
        uStack_5c = 0;
        if (((fStack_94 - SQRT(fStack_58 * fStack_58 + fStack_60 * fStack_60) <=
              (float)_DAT_005e48cd) && (local_f8 = (double)fStack_98, 1.0 <= local_f8)) &&
           (local_f8 <= _DAT_005e48d5)) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_bc + 8);
          uStack_78 = uStack_84;
          afStack_bc[(uint)bVar7 * -2 + 0x12] = afStack_bc[(uint)bVar7 * -2 + 0xf];
          afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
               afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          in_stack_ffffff00 = (CHero *)0x4ebba3;
          fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_74);
          if (ABS(fVar4) <= (float)_DAT_005e48dd) {
            this_ptr->pushed_object = this_ptr_01;
            break;
          }
        }
      }
      local_1c[0] = (float)((int)local_1c[0] + 4);
    }
    if (this_ptr->pushed_object == (CBoxActor *)0x0) {
      return 0;
    }
    this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (&this_ptr->pushed_object->base,g_CBoxActorClassInfo.name_hash);
    if (this_ptr_00 != (CDemonActor *)0x0) {
      this_ptr_00[2].lifecycle_state = (EActorLifecycleState)this_ptr;
      uVar3 = (*((this_ptr_00->vtable)._ub)->playAmbientSound)
                        (this_ptr_00,this_ptr_00[2].create_event + 4);
      *(uint *)this_ptr_00[2].create_event = uVar3;
    }
  }
  return 1;
}
