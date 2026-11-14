// Name: core_hero.cpp_FUN_004eb890
// Address: 004eb890
// Address Range: [[004eb890, 004ebbd2]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004eb890(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_hero_cpp_FUN_004eb890(CCharacter *param_1)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  double *pdVar7;
  byte bVar8;
  float afStackY_10a8 [1000];
  CCharacter *in_stack_ffffff00;
  float *pfVar9;
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
  
  bVar8 = 0;
  iVar2 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432c40(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  if (param_1[2].flames[0x1a].flame_size.x == 0.0) {
    local_1c[0] = 0.0;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_1c[0]),
                          g_CBoxActorClassInfo.name_hash);
      if (((pCVar3 != (CDemonActor *)0x0) && (pCVar3[2].direction_hint != 0)) &&
         (pCVar3[2].lifecycle_state == ACTOR_NOT_CREATED)) {
        (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,(CBoundingBox3D *)in_stack_ffffff00);
        puVar6 = auStack_d8;
        pdVar7 = &local_f8;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pdVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          pdVar7 = (double *)((int)pdVar7 + (uint)bVar8 * -8 + 4);
        }
        fStack_c0 = fStack_f0 + fStack_e4;
        afStack_bc[0] = fStack_ec + local_e0;
        afStack_bc[1] = fStack_e8 + fStack_dc;
        fStack_48 = fStack_f0 + fStack_e4;
        afStack_bc[(uint)bVar8 * -2 + 0x1e] = afStack_bc[(uint)bVar8 * -2];
        afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
             afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fStack_3c = fStack_48 * _DAT_005e48c9;
        fStack_38 = fStack_44 * _DAT_005e48c9;
        fStack_34 = fStack_40 * _DAT_005e48c9;
        fStack_24 = fStack_48 * _DAT_005e48c9;
        local_1c[(uint)bVar8 * -2 + -1] = afStack_bc[(uint)bVar8 * -2 + 0x21];
        local_1c[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
             afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22];
        core_actor_cpp_FUN_00408b40(pCVar3,afStack_bc + 0x26);
        pfVar9 = afStack_bc + 5;
        afStack_a8[0] = (float)uStack_90;
        afStack_bc[(uint)bVar8 * -2 + 6] = afStack_bc[(uint)bVar8 * -2 + 0xc];
        afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        in_stack_ffffff00 = param_1;
        core_actor_cpp_FUN_00408bb0(param_1,pfVar9);
        fVar1 = local_e0;
        fVar5 = fStack_e4;
        fStack_9c = (float)uStack_30;
        afStack_bc[(uint)bVar8 * -2 + 9] = afStack_bc[(uint)bVar8 * -2 + 0x24];
        afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25];
        fStack_54 = fVar5 - fStack_f0;
        fStack_50 = fVar1 - fStack_ec;
        fStack_4c = fStack_dc - fStack_e8;
        afStack_bc[2] = fVar5 - fStack_f0;
        afStack_bc[(uint)bVar8 * -2 + 3] = afStack_bc[(uint)bVar8 * -2 + 0x1b];
        afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
        fStack_6c = afStack_bc[2] * _DAT_005e48c9;
        fStack_68 = afStack_bc[3] * _DAT_005e48c9;
        fStack_64 = fStack_ac * _DAT_005e48c9;
        fStack_60 = afStack_bc[2] * _DAT_005e48c9;
        afStack_bc[(uint)bVar8 * -2 + 0x18] = afStack_bc[(uint)bVar8 * -2 + 0x15];
        afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
             afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
        uStack_5c = 0;
        if (((fStack_94 - SQRT(fStack_58 * fStack_58 + fStack_60 * fStack_60) <=
              (float)_DAT_005e48cd) && (local_f8 = (double)fStack_98, 1.0 <= local_f8)) &&
           (local_f8 <= _DAT_005e48d5)) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_bc + 8);
          uStack_78 = uStack_84;
          afStack_bc[(uint)bVar8 * -2 + 0x12] = afStack_bc[(uint)bVar8 * -2 + 0xf];
          afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
               afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
          in_stack_ffffff00 = (CCharacter *)0x4ebba3;
          fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_74);
          if (ABS(fVar5) <= (float)_DAT_005e48dd) {
            param_1[2].flames[0x1a].flame_size.x = (float)pCVar3;
            break;
          }
        }
      }
      local_1c[0] = (float)((int)local_1c[0] + 4);
    }
    pCVar3 = (CDemonActor *)param_1[2].flames[0x1a].flame_size.x;
    if (pCVar3 == (CDemonActor *)0x0) {
      return 0;
    }
    pCVar3 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar3,g_CBoxActorClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      pCVar3[2].lifecycle_state = (EActorLifecycleState)param_1;
      uVar4 = (*((pCVar3->vtable)._ub)->playAmbientSound)(pCVar3,pCVar3[2].create_event + 4);
      *(uint *)pCVar3[2].create_event = uVar4;
    }
  }
  return 1;
}
