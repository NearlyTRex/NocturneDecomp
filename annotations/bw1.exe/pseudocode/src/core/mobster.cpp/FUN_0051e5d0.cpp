// Name: core_mobster.cpp_FUN_0051e5d0
// Address: 0051e5d0
// Address Range: [[0051e5d0, 0051eab7]]
// Convention: __cdecl
// Signature: int __cdecl core_mobster_cpp_FUN_0051e5d0(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mobster_cpp_FUN_0051e5d0(CMobster *this_ptr,float delta_time)

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
  if (*(int *)&this_ptr->field_0xc1dc == 0) {
    fVar7 = *(float *)&this_ptr->field_0xc26c - delta_time;
    *(float *)&this_ptr->field_0xc26c = fVar7;
    if (0.0 < fVar7) {
      *(int *)&this_ptr->field_0xc268 = *(int *)&this_ptr->field_0xc268 + 1;
      local_18 = core_actor_cpp_FUN_0040cc00(0x40a00000,0x41200000);
      *(uint *)&this_ptr->field_0xc26c = local_18;
    }
    if ((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0x2624 * 4) != 0) &&
       (*(int *)&this_ptr->field_0x2628 == 0)) {
      if (0.0 < *(float *)&this_ptr->field_0xc270) {
        fVar7 = *(float *)&this_ptr->field_0xc270 - delta_time;
        *(float *)&this_ptr->field_0xc270 = fVar7;
        if (fVar7 < 0.0) {
          *(uint *)&this_ptr->field_0xc270 = 0;
          return 0;
        }
      }
      else {
        iVar2 = *(int *)&this_ptr->field_0xc274;
        if (iVar2 == 0) {
          local_2c = 0;
          local_20 = 0;
          local_1c = 0;
          local_28 = (float *)&this_ptr->field_0x20;
          for (local_24 = 0; local_24 < *(int *)&g_CDemonSetPtr->field_0x14d164;
              local_24 = local_24 + 1) {
            actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_20);
            iVar2 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr);
            if ((iVar2 == 0) &&
               (iVar2 = core_actor_cpp_FUN_0040c550(actor_ptr,"CTommyGun"), iVar2 != 0)) {
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
              if (((float)_DAT_005e9e8a <= fStack_110) && ((int)fStack_110 < 0x41700001)) {
                *(CDemonActor **)(&stack0xfffffef8 + local_1c) = actor_ptr;
                local_1c = local_1c + 4;
                local_2c = local_2c + 1;
                if (0x27 < local_1c) break;
              }
            }
            local_20 = local_20 + 4;
          }
          if (0 < local_2c) {
            iVar2 = core_actor_cpp_FUN_0040cc60(0,local_2c + -1);
            uVar1 = *(uint *)(&stack0xfffffef8 + iVar2 * 4);
            *(uint *)&this_ptr->field_0xc270 = 0xc2200000;
            *(uint *)&this_ptr->field_0xc274 = uVar1;
            *(int *)&this_ptr->field_0xc268 = *(int *)&this_ptr->field_0xc268 + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,1,1);
            return 1;
          }
        }
        else {
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x94))(iVar2);
          if (iVar2 != 0) {
            *(uint *)&this_ptr->field_0xc274 = 0;
            *(uint *)&this_ptr->field_0xc270 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,1,1);
            return 0;
          }
          fVar7 = *(float *)&this_ptr->field_0x20 -
                  *(float *)(*(int *)&this_ptr->field_0xc274 + 0x20);
          fVar8 = *(float *)&this_ptr->field_0x28 -
                  *(float *)(*(int *)&this_ptr->field_0xc274 + 0x28);
          fStack_10c = (float)_DAT_005e9e8a -
                       SQRT(fVar8 * fVar8 + fVar7 * fVar7) * (float)_DAT_005e9e82;
          if (fStack_10c < 1.0) {
            fStack_10c = 1.0;
          }
          fVar7 = delta_time * fStack_10c + *(float *)&this_ptr->field_0xc270;
          iVar2 = -1;
          *(float *)&this_ptr->field_0xc270 = fVar7;
          if ((fVar7 < 0.0) &&
             (iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc274 + 0x154) + 0x84))
                                (*(int *)&this_ptr->field_0xc274,this_ptr), iVar3 == 3)) {
            iVar2 = *(int *)&this_ptr->field_0xc274;
            (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
            puVar4 = auStack_c8;
            puVar5 = (uint *)&stack0xffffff20;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            uStack_30 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b020(&stack0xffffff20,auStack_d4,afStack_40 + 4);
            afStack_5c[0] = (float)uStack_b0;
            afStack_70[(uint)bVar6 * -2 + 6] = afStack_ac[(uint)bVar6 * -2];
            afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                 afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            core_bodypart_cpp_FUN_0041afa0(afStack_70 + 5);
            puVar4 = &uStack_44;
            afStack_ac[2] = afStack_70[2];
            afStack_ac[(uint)bVar6 * -2 + 3] = afStack_70[(uint)bVar6 * -2 + 3];
            afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            fStack_9c = fStack_d8 + (float)_DAT_005e9e92;
            uStack_44 = afStack_ac[2];
            afStack_40[(uint)bVar6 * -2] = afStack_ac[(uint)bVar6 * -2 + 3];
            afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            core_actor_cpp_FUN_00408b40(iVar2,puVar4);
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
            iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                              ((CCharacter *)this_ptr,&CStack_80,path_map,direction,fVar7,fVar8);
          }
          if (-1 < iVar2) {
            if (iVar2 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,7,1);
            return 1;
          }
          *(uint *)&this_ptr->field_0xc274 = 0;
          *(uint *)&this_ptr->field_0xc270 = 0x41a00000;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,1,1);
        }
      }
    }
  }
  return 0;
}
