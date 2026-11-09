// Name: unkafter_zombiepr.cpp_FUN_0058efb0
// Address: 0058efb0
// Address Range: [[0058efb0, 0058f497]]
// Convention: unknown
// Signature: undefined4 unkafter_zombiepr_cpp_FUN_0058efb0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_zombiepr_cpp_FUN_0058efb0(CCharacter *param_1,float param_2)

{
  CDemonActor *actor_ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1098 [988];
  CPathMap *path_map;
  CVector3f *direction;
  float fVar7;
  float fVar8;
  float fStack_110;
  float fStack_10c;
  float fStack_d8;
  byte auStack_d4 [12];
  uint auStack_c8 [6];
  uint uStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [5];
  float afStack_5c [3];
  CVector3f CStack_50;
  uint uStack_44;
  float afStack_40 [4];
  uint uStack_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar6 = 0;
  if (*(int *)&param_1[1].field_0xc == 0) {
    fVar7 = *(float *)&param_1[1].field_0x28c - param_2;
    *(float *)&param_1[1].field_0x28c = fVar7;
    if (0.0 < fVar7) {
      *(int *)&param_1[1].field_0x288 = *(int *)&param_1[1].field_0x288 + 1;
      local_18 = core_actor_cpp_FUN_0040ce40(0x40a00000,0x41200000);
      *(uint *)&param_1[1].field_0x28c = local_18;
    }
    if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0x2624 * 4) != 0) &&
       (*(int *)&param_1->field_0x2628 == 0)) {
      if (0.0 < *(float *)&param_1[1].field_0x290) {
        param_2 = *(float *)&param_1[1].field_0x290 - param_2;
        *(float *)&param_1[1].field_0x290 = param_2;
        if (param_2 < 0.0) {
          *(uint *)&param_1[1].field_0x290 = 0;
          return 0;
        }
      }
      else {
        iVar2 = *(int *)&param_1[1].field_0x294;
        if (iVar2 == 0) {
          local_2c = 0;
          local_20 = 0;
          local_1c = 0;
          local_28 = (float *)&param_1->field_0x20;
          for (local_24 = 0; local_24 < *(int *)&g_CDemonSetPtr->field_0x14d164;
              local_24 = local_24 + 1) {
            actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_20);
            iVar2 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr);
            if ((iVar2 == 0) &&
               (iVar2 = core_actor_cpp_FUN_0040c790(actor_ptr,"CTommyGun"), iVar2 != 0)) {
              fStack_74 = *(float *)&actor_ptr->field_0x20 - *local_28;
              afStack_70[0] = *(float *)&actor_ptr->field_0x24 - local_28[1];
              afStack_70[1] = *(float *)&actor_ptr->field_0x28 - local_28[2];
              fStack_98 = fStack_74;
              afStack_ac[(uint)bVar6 * -2 + 6] = afStack_70[(uint)bVar6 * -2];
              afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                   afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              fStack_94 = fStack_94 * fStack_94 * fStack_94 * fStack_94;
              fStack_110 = SQRT(fStack_90 * fStack_90 +
                                fStack_98 * fStack_98 + fStack_94 * fStack_94);
              if (((float)_DAT_005d8c40 <= fStack_110) && ((int)fStack_110 < 0x41700001)) {
                *(CDemonActor **)(&stack0xfffffef8 + local_1c) = actor_ptr;
                local_1c = local_1c + 4;
                local_2c = local_2c + 1;
                if (0x27 < local_1c) break;
              }
            }
            local_20 = local_20 + 4;
          }
          if (0 < local_2c) {
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_2c + -1);
            uVar1 = *(uint *)(&stack0xfffffef8 + iVar2 * 4);
            *(uint *)&param_1[1].field_0x290 = 0xc2200000;
            *(uint *)&param_1[1].field_0x294 = uVar1;
            *(int *)&param_1[1].field_0x288 = *(int *)&param_1[1].field_0x288 + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,1,1);
            return 1;
          }
        }
        else {
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x94))(iVar2);
          if (iVar2 != 0) {
            *(uint *)&param_1[1].field_0x294 = 0;
            *(uint *)&param_1[1].field_0x290 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,1,1);
            return 0;
          }
          fVar7 = *(float *)&param_1->field_0x20 -
                  *(float *)(*(int *)&param_1[1].field_0x294 + 0x20);
          fVar8 = *(float *)&param_1->field_0x28 -
                  *(float *)(*(int *)&param_1[1].field_0x294 + 0x28);
          fStack_10c = (float)_DAT_005d8c40 -
                       SQRT(fVar8 * fVar8 + fVar7 * fVar7) * (float)_DAT_005d8c38;
          if (fStack_10c < 1.0) {
            fStack_10c = 1.0;
          }
          fVar7 = param_2 * fStack_10c + *(float *)&param_1[1].field_0x290;
          iVar2 = -1;
          *(float *)&param_1[1].field_0x290 = fVar7;
          if ((fVar7 < 0.0) &&
             (iVar3 = (**(code **)(*(int *)(*(int *)&param_1[1].field_0x294 + 0x154) + 0x84))
                                (*(int *)&param_1[1].field_0x294,param_1), iVar3 == 3)) {
            iVar2 = *(int *)&param_1[1].field_0x294;
            (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
            puVar4 = auStack_c8;
            puVar5 = (uint *)&stack0xffffff20;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            uStack_30 = 0x3f000000;
            core_bodypart_cpp_FUN_00416c50(&stack0xffffff20,auStack_d4,afStack_40 + 4);
            afStack_5c[0] = (float)uStack_b0;
            afStack_70[(uint)bVar6 * -2 + 6] = afStack_ac[(uint)bVar6 * -2];
            afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                 afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            core_bodypart_cpp_FUN_00416bd0(afStack_70 + 5);
            puVar4 = &uStack_44;
            afStack_ac[2] = afStack_70[2];
            afStack_ac[(uint)bVar6 * -2 + 3] = afStack_70[(uint)bVar6 * -2 + 3];
            afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            fStack_9c = fStack_d8 + (float)_DAT_005d8c48;
            uStack_44 = afStack_ac[2];
            afStack_40[(uint)bVar6 * -2] = afStack_ac[(uint)bVar6 * -2 + 3];
            afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            core_actor_cpp_FUN_00408b80(iVar2,puVar4);
            fVar8 = 0.034906585;
            fVar7 = 0.3;
            CStack_8c._4_4_ = 0;
            CStack_8c._8_4_ = 0;
            direction = &CStack_8c;
            path_map = (CPathMap *)0x0;
            CStack_80._0_4_ = CStack_50._0_4_;
            *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + 4);
            *(uint *)((int)&CStack_80 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            CStack_8c._0_4_ = 0x3fc00000;
            iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              (param_1,&CStack_80,path_map,direction,fVar7,fVar8);
          }
          if (-1 < iVar2) {
            if (iVar2 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,7,1);
            return 1;
          }
          *(uint *)&param_1[1].field_0x294 = 0;
          *(uint *)&param_1[1].field_0x290 = 0x41a00000;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,1,1);
        }
      }
    }
  }
  return 0;
}
