// Name: core_stranger.cpp_FUN_0058ce80
// Address: 0058ce80
// Address Range: [[0058ce80, 0058d3bb]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_FUN_0058ce80(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_FUN_0058ce80(CStranger *this_ptr)

{
  CConsole *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1108 [1001];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b4;
  uint uStack_a8;
  float fStack_a0;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  *(uint *)&this_ptr->field_0x1ff84 = 0;
  local_14 = (float)core_charactr_cpp_FUN_00434590(this_ptr,0);
  if ((float)_DAT_005f6d31 <= local_14) {
    if ((*(int *)&this_ptr->field_0x25b0 == 0) && (*(int *)&this_ptr->field_0x2628 == 0)) {
      local_24 = &this_ptr->field_0x20;
      local_20 = 0;
      local_1c = 0;
      while( true ) {
        if (*(int *)&g_CDemonSetPtr->field_0x14d164 <= local_1c) break;
        iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_20),
                           g_CLadderClassInfo.name_hash);
        local_18 = iVar2;
        if ((iVar2 != 0) &&
           (ABS(*(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24)) <= (float)_DAT_005f6d41)
           ) {
          core_actor_cpp_FUN_00408bb0(iVar2,local_24);
          local_6c = local_f0;
          (&stack0xffffff98)[(uint)bVar5 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff14 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffff18 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if ((ABS(local_64) <= (float)_DAT_005f6d49) && (0.0 <= local_64)) {
            (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
            puVar3 = (uint *)&stack0xfffffeb0;
            puVar4 = &stack0xfffffec8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
            }
            if (fStack_12c < local_6c) {
              if (fStack_12c + 1.0 < local_6c) goto LAB_0058cf0b;
              local_6c = fStack_12c;
            }
            if (local_6c < local_138) {
              if (local_6c < local_138 + (float)_DAT_005f6d51) goto LAB_0058cf0b;
              local_6c = local_138;
            }
            fStack_fc = local_138 + fStack_12c;
            fStack_f8 = fStack_134 + fStack_128;
            fStack_f4 = fStack_130 + fStack_124;
            fStack_90 = local_138 + fStack_12c;
            *(uint *)((int)&stack0xffffff74 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff08 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffff0c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            fStack_54 = fStack_90 * _DAT_005f6d39;
            fStack_50 = fStack_8c * _DAT_005f6d39;
            fStack_4c = fStack_88 * _DAT_005f6d39;
            fStack_48 = fStack_90 * _DAT_005f6d39;
            *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8);
            *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            local_64 = fStack_40;
            core_actor_cpp_FUN_00408b40(local_18,&stack0xffffff94);
            fStack_108 = fStack_78;
            (&stack0xfffffefc)[(uint)bVar5 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffff8c + (uint)bVar5 * 0xfffffffe * 4);
            *(uint *)((int)&stack0xffffff00 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                 *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
            if (&stack0xffffff94 != &stack0xfffffef8) {
              local_6c = fStack_108;
              fStack_68 = fStack_104;
              local_64 = fStack_100;
            }
            fStack_2c = *(float *)&this_ptr->field_0x44;
            fStack_34 = *(float *)&this_ptr->field_0x50;
            fStack_3c = *(float *)&this_ptr->field_0x5c;
            fStack_28 = *(float *)(local_18 + 0x44);
            fStack_38 = *(float *)(local_18 + 0x50);
            fStack_30 = *(float *)(local_18 + 0x5c);
            fVar6 = (float10)fcos((float10)_DAT_005f6d59);
            if (fVar6 <= ABS((float10)fStack_3c * (float10)fStack_30 +
                             (float10)fStack_2c * (float10)fStack_28 +
                             (float10)fStack_34 * (float10)fStack_38)) {
              core_actor_cpp_FUN_00408bb0(this_ptr,local_18 + 0x20);
              uStack_a8 = uStack_b4;
              *(uint *)(&stack0xffffff5c + (uint)bVar5 * -8) =
                   *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8);
              *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                   *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
              if (0.0 < fStack_a0) {
                *(int *)&this_ptr->field_0x1ff84 = local_18;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&this_ptr->field_0x158,0x37,1);
                *(uint *)&this_ptr->field_0xc1e4 = 0;
                uStack_84 = 0;
                uStack_7c = 0x40000000;
                uStack_80 = 0;
                core_actor_cpp_FUN_00408b40(local_18,&stack0xffffff7c);
                fStack_60 = fStack_e4;
                *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff20 + (uint)bVar5 * -8);
                *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff24 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                fStack_d8 = fStack_60 - *(float *)&this_ptr->field_0x20;
                fStack_d4 = fStack_5c - *(float *)&this_ptr->field_0x24;
                fStack_d0 = fStack_58 - *(float *)&this_ptr->field_0x28;
                fStack_cc = fStack_d8;
                (&stack0xffffff38)[(uint)bVar5 * 0xfffffffe] =
                     (float)*(uint *)((int)&stack0xffffff2c + (uint)bVar5 * -8);
                *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                if ((float *)&this_ptr->field_0x20228 != &stack0xffffff34) {
                  *(float *)&this_ptr->field_0x20228 = fStack_cc;
                  *(float *)&this_ptr->field_0x2022c = fStack_c8;
                  *(uint *)&this_ptr->field_0x20230 = uStack_c4;
                }
                fStack_114 = local_6c - *(float *)&this_ptr->field_0x20;
                fStack_110 = fStack_68 - *(float *)&this_ptr->field_0x24;
                fStack_10c = local_64 - *(float *)&this_ptr->field_0x28;
                fStack_120 = fStack_114;
                *(uint *)((int)&stack0xfffffee4 + (uint)bVar5 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xfffffef0 + (uint)bVar5 * -8);
                *(uint *)(&stack0xfffffee8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)((int)&stack0xfffffef4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                core_vecdir_cpp_FUN_005a7520(&stack0xfffffee0);
                uStack_c0 = uStack_9c;
                *(uint *)((int)&stack0xffffff44 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff68 + (uint)bVar5 * -8);
                *(uint *)(&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)(&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                *(uint *)&this_ptr->field_0x20234 = uStack_bc;
                pCVar1 = g_CConsolePtr;
                *(uint *)&this_ptr->field_0x20238 = 0x3f800000;
                engine_console_cpp_FUN_00445430(pCVar1,"Climbing ladder %s\n",local_18);
                return 1;
              }
            }
          }
        }
LAB_0058cf0b:
        local_1c = local_1c + 1;
        local_20 = local_20 + 4;
      }
    }
  }
  return 0;
}
