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
  CVector3f *input_world_point;
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
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  uint uStack_84;
  float afStack_80 [5];
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
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  bVar7 = 0;
  iVar2 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432c40(&this_ptr->base);
  if (iVar2 != 0) {
    return 0;
  }
  if (this_ptr->pushed_object == (CBoxActor *)0x0) {
    CStack_24.z = 0.0;
    for (CStack_24.y = 0.0; (int)CStack_24.y < g_CDemonSetPtr->actor_count;
        CStack_24.y = (float)((int)CStack_24.y + 1)) {
      this_ptr_01 = (CBoxActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)CStack_24.z),
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
        afStack_80[(uint)bVar7 * -2 + 0xf] = afStack_bc[(uint)bVar7 * -2];
        afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
             afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        fStack_3c = fStack_48 * _DAT_005e48c9;
        fStack_38 = fStack_44 * _DAT_005e48c9;
        fStack_34 = fStack_40 * _DAT_005e48c9;
        CStack_24.x = fStack_48 * _DAT_005e48c9;
        *(float *)((int)&CStack_24 + (uint)bVar7 * -8 + 4) = afStack_80[(uint)bVar7 * -2 + 0x12];
        *(float *)((int)&CStack_24 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr_01,&CStack_24,&CStack_90);
        input_world_point = &CStack_a8;
        CStack_a8.x = CStack_90.x;
        *(uint *)((int)&CStack_a8 + (uint)bVar7 * -8 + 4) =
             *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + 4);
        *(uint *)((int)&CStack_a8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        in_stack_ffffff00 = this_ptr;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,input_world_point,&CStack_30);
        fVar1 = local_e0;
        fVar4 = fStack_e4;
        fStack_9c = CStack_30.x;
        afStack_98[(uint)bVar7 * -2] = *(float *)((int)&CStack_30 + (uint)bVar7 * -8 + 4);
        afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             *(float *)((int)&CStack_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
        fStack_54 = fVar4 - fStack_f0;
        fStack_50 = fVar1 - fStack_ec;
        fStack_4c = fStack_dc - fStack_e8;
        afStack_bc[2] = fVar4 - fStack_f0;
        afStack_bc[(uint)bVar7 * -2 + 3] = afStack_80[(uint)bVar7 * -2 + 0xc];
        afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        fStack_6c = afStack_bc[2] * _DAT_005e48c9;
        fStack_68 = afStack_bc[3] * _DAT_005e48c9;
        fStack_64 = fStack_ac * _DAT_005e48c9;
        fStack_60 = afStack_bc[2] * _DAT_005e48c9;
        afStack_80[(uint)bVar7 * -2 + 9] = afStack_80[(uint)bVar7 * -2 + 6];
        afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        uStack_5c = 0;
        if (((afStack_98[1] - SQRT(fStack_58 * fStack_58 + fStack_60 * fStack_60) <=
              (float)_DAT_005e48cd) && (local_f8 = (double)afStack_98[0], 1.0 <= local_f8)) &&
           (local_f8 <= _DAT_005e48d5)) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&fStack_9c);
          afStack_80[2] = (float)uStack_84;
          afStack_80[(uint)bVar7 * -2 + 3] = afStack_80[(uint)bVar7 * -2];
          afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          in_stack_ffffff00 = (CHero *)0x4ebba3;
          fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_80[3]);
          if (ABS(fVar4) <= (float)_DAT_005e48dd) {
            this_ptr->pushed_object = this_ptr_01;
            break;
          }
        }
      }
      CStack_24.z = (float)((int)CStack_24.z + 4);
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
