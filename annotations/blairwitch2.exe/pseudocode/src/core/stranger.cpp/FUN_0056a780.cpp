// Name: core_stranger.cpp_FUN_0056a780
// Address: 0056a780
// Address Range: [[0056a780, 0056accd]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_FUN_0056a780(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_FUN_0056a780(CStranger *this_ptr)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1108 [998];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float local_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  float local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte *local_28;
  float fStack_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  *(uint *)&this_ptr->field_0x25694 = 0;
  local_14 = (float)core_charactr_cpp_FUN_0042a5a0(this_ptr,0);
  if ((float)_DAT_005ebb05 <= local_14) {
    if ((*(int *)&this_ptr->field_0x2620 == 0) && (*(int *)&this_ptr->field_0x2698 == 0)) {
      local_28 = &this_ptr->field_0x20;
      local_1c = 0;
      for (local_20 = 0; local_20 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_20 = local_20 + 1
          ) {
        iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_1c),
                           g_CLadderClassInfo.name_hash);
        local_18 = iVar2;
        if ((iVar2 != 0) &&
           (ABS(*(float *)&this_ptr->field_0x24 -
                (*(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x434))) <= (float)_DAT_005ebb15)) {
          core_actor_cpp_FUN_00408de0(iVar2,local_28);
          local_f0 = local_114;
          (&stack0xffffff14)[(uint)bVar5 * 0xfffffffe] =
               (float)*(uint *)(&stack0xfffffef0 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffff18 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xfffffef4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if ((ABS(local_e8) <= (float)_DAT_005ebb1d) && (local_e8 <= 0.0)) {
            (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
            puVar3 = (uint *)&stack0xfffffeb0;
            puVar4 = &stack0xfffffec8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
            }
            if (fStack_12c < local_f0) {
              if (fStack_12c + 1.0 < local_f0) goto LAB_0056a80b;
              local_f0 = fStack_12c;
            }
            if (local_f0 < local_138) {
              if (local_f0 < local_138 + (float)_DAT_005ebb25) goto LAB_0056a80b;
              local_f0 = local_138;
            }
            fStack_9c = local_138 + fStack_12c;
            fStack_98 = fStack_134 + fStack_128;
            fStack_94 = fStack_130 + fStack_124;
            fStack_cc = local_138 + fStack_12c;
            *(uint *)((int)&stack0xffffff38 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            fStack_108 = fStack_cc * _DAT_005ebb0d;
            fStack_104 = fStack_c8 * _DAT_005ebb0d;
            fStack_100 = fStack_c4 * _DAT_005ebb0d;
            fStack_120 = fStack_cc * _DAT_005ebb0d;
            *(uint *)(&stack0xfffffee4 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xfffffefc + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xfffffee8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff00 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            local_e8 = fStack_118;
            core_actor_cpp_FUN_00408d70(local_18,&stack0xffffff10);
            fStack_84 = fStack_a8;
            (&stack0xffffff80)[(uint)bVar5 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xffffff5c + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)(&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            if (&stack0xffffff10 != &stack0xffffff7c) {
              local_f0 = fStack_84;
              fStack_ec = fStack_80;
              local_e8 = fStack_7c;
            }
            fStack_ec = fStack_ec + *(float *)(local_18 + 0x434);
            fStack_38 = *(float *)&this_ptr->field_0x44;
            fStack_34 = *(float *)&this_ptr->field_0x50;
            fStack_3c = *(float *)&this_ptr->field_0x5c;
            fStack_30 = *(float *)(local_18 + 0x44);
            fStack_2c = *(float *)(local_18 + 0x50);
            fStack_24 = *(float *)(local_18 + 0x5c);
            fVar6 = (float10)fcos((float10)_DAT_005ebb2d);
            fVar1 = ABS(fStack_3c * fStack_24 + fStack_38 * fStack_30 + fStack_34 * fStack_2c);
            if (fVar6 <= (float10)fVar1) {
              core_actor_cpp_FUN_00408de0(this_ptr,local_18 + 0x20);
              uStack_d8 = uStack_78;
              *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * 0xfffffffe * 4) =
                   *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
              *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                   *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
              if (0.0 < fStack_d0) {
                engine_console_cpp_FUN_00436710
                          (g_CConsolePtr,"?Ladder dot : %f\n" + 1,(double)fVar1);
                *(int *)&this_ptr->field_0x25694 = local_18;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&this_ptr->field_0x2b4,0x2b,1);
                *(uint *)&this_ptr->field_0x10a74 = 0;
                uStack_e0 = *(uint *)(local_18 + 0x434);
                uStack_e4 = 0;
                uStack_dc = 0xbfc00000;
                core_actor_cpp_FUN_00408d70(local_18,&stack0xffffff1c);
                fStack_c0 = fStack_b4;
                *(uint *)((int)&stack0xffffff44 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8);
                *(uint *)((int)&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                fStack_54 = fStack_c0 - *(float *)&this_ptr->field_0x20;
                fStack_50 = fStack_bc - *(float *)&this_ptr->field_0x24;
                fStack_4c = fStack_b8 - *(float *)&this_ptr->field_0x28;
                fStack_90 = fStack_54;
                (&stack0xffffff74)[(uint)bVar5 * 0xfffffffe] =
                     *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8);
                *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                if ((float *)&this_ptr->field_0x258c0 != &stack0xffffff70) {
                  *(float *)&this_ptr->field_0x258c0 = fStack_90;
                  *(uint *)&this_ptr->field_0x258c4 = uStack_8c;
                  *(uint *)&this_ptr->field_0x258c8 = uStack_88;
                }
                fStack_48 = local_f0 - *(float *)&this_ptr->field_0x20;
                fStack_44 = fStack_ec - *(float *)&this_ptr->field_0x24;
                fStack_40 = local_e8 - *(float *)&this_ptr->field_0x28;
                fStack_fc = fStack_48;
                *(uint *)((int)&stack0xffffff08 + (uint)bVar5 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8);
                *(uint *)(&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                core_vecdir_cpp_FUN_005838f0(&stack0xffffff04);
                uStack_60 = uStack_6c;
                *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8);
                *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                *(uint *)&this_ptr->field_0x258d0 = 0x3f800000;
                *(uint *)&this_ptr->field_0x258cc = uStack_5c;
                return 1;
              }
            }
          }
        }
LAB_0056a80b:
        local_1c = local_1c + 4;
      }
    }
  }
  return 0;
}
