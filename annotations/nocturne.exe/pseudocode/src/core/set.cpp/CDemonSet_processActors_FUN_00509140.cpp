// Name: core_set.cpp_CDemonSet_processActors_FUN_00509140
// Address: 00509140
// Address Range: [[00509140, 00509756]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_processActors_FUN_00509140(int param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_74;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint uStack_4c;
  int iStack_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x14cd6c)) {
    do {
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x14cd6c));
  }
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_44 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_20 = 0;
  }
  _DAT_01fba2d8 = 0;
  _DAT_01fba2ec = 0;
  fVar3 = *(float *)(0x01C775EC + 0x264);
  iVar6 = CONCAT22((short)((uint)fVar3 >> 0x10),
                   (ushort)(0.0 < fVar3) << 8 | (ushort)NAN(fVar3) << 10 |
                   (ushort)(fVar3 == 0.0) << 0xe);
  if (0.0 < fVar3) {
    local_50 = fVar3;
    core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0();
    iVar7 = 0;
    iVar6 = param_1;
    if (0 < *(int *)(param_1 + 0x14cd6c)) {
      do {
        *(int *)(*(int *)(iVar6 + 0x14cd70) + 0x6c) = iVar7;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x14cd6c));
    }
    if (0.0 < fVar3) {
      local_24 = -999999;
      iVar6 = local_24;
      do {
        local_24 = iVar6;
        local_1c = 999999;
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0x14cd6c)) {
          iVar9 = local_20 << 2;
          iVar7 = param_1;
          do {
            iVar8 = *(int *)(iVar7 + 0x14cd70);
            if (*(int *)(iVar8 + 0x104) == 0) {
              iVar4 = *(int *)(iVar8 + 100);
              if (iVar4 == local_24) {
                local_5c = *(float *)(iVar8 + 0x30);
                local_58 = *(float *)(iVar8 + 0x34);
                local_54 = *(float *)(iVar8 + 0x38);
                DAT_00763e44 = iVar8;
                if (*(int *)(0x01C775EC + 0x20c) == 2) {
                  local_28 = wincore_winrun_cpp_getTime_FUN_00558a30();
                }
                (**(code **)(*(int *)(DAT_00763e44 + 0x14c) + 4))(DAT_00763e44,fVar3);
                if (*(int *)(0x01C775EC + 0x20c) == 2) {
                  iVar8 = wincore_winrun_cpp_getTime_FUN_00558a30();
                  *(int *)(iVar9 + 0x1ffb078) = iVar8 - local_28;
                  *(int *)(iVar9 + 0x1ffcfb8) = DAT_00763e44;
                }
                if (*(int *)(0x01C775EC + 0x20c) != 0) {
                  local_20 = local_20 + 1;
                  iVar9 = iVar9 + 4;
                }
                iVar8 = (**(code **)(*(int *)(DAT_00763e44 + 0x14c) + 0xbc))();
                if (iVar8 != 0) {
                  FUN_004f0360(iVar8);
                }
                if (((local_58 == *(float *)(DAT_00763e44 + 0x34)) &&
                    (local_5c == *(float *)(DAT_00763e44 + 0x30))) &&
                   (local_54 == *(float *)(DAT_00763e44 + 0x38))) {
                  DAT_00763e44 = 0;
                }
                else {
                  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000();
                  DAT_00763e44 = 0;
                }
              }
              else if ((local_24 < iVar4) && (iVar4 < local_1c)) {
                local_1c = iVar4;
              }
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar6 < *(int *)(param_1 + 0x14cd6c));
        }
        iVar6 = local_1c;
      } while (local_1c < 999999);
    }
    iVar7 = 0;
    iVar6 = param_1;
    if (0 < *(int *)(param_1 + 0x14cd6c)) {
      do {
        iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar6 + 0x14cd70),CDemonActorType_00765a60.name_hash);
        local_38 = iVar9;
        if (((iVar9 != 0) && (iVar8 = (**(code **)(*(int *)(iVar9 + 0x14c) + 0x104))(), iVar8 == 0))
           && (iStack_48 = iVar8,
              iVar9 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                                (0x01C08D04,iVar9 + 0x20,0,&uStack_68), iVar9 != 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0();
          uStack_74 = 4;
          if (&uStack_98 != &uStack_68) {
            uStack_98 = uStack_68;
            uStack_94 = uStack_64;
            uStack_90 = uStack_60;
          }
          (**(code **)(*(int *)(local_38 + 0x14c) + 0x100))(local_38);
        }
        iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar6 + 0x14cd70),_DAT_01c78c78);
        if (iVar9 != 0) {
          iStack_34 = iVar9 + 0x20;
          iVar8 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                            (0x01C08D04,iStack_34,0,0);
          if ((iVar8 != 0) && (iVar8 = FUN_004aded0(), iVar8 != 0)) {
            FUN_004ada20(iVar9);
          }
        }
        iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar6 + 0x14cd70),_DAT_02dd10bc);
        if (((iVar9 != 0) && (*(int *)(iVar9 + 0x16c) == 7)) && (*(char *)(iVar9 + 0x2fc) == '\0'))
        {
          uStack_4c = 0;
          iVar8 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                            (0x01C08D04,iVar9 + 0x20,0,0);
          if (iVar8 != 0) {
            core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(iVar9);
          }
        }
        iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar6 + 0x14cd70),_DAT_01c7068c);
        if ((iVar9 != 0) &&
           (iVar9 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                              (0x01C08D04,iVar9 + 0x20,0), iVar9 != 0)) {
          core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550();
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x14cd6c));
    }
    if (*(int *)(0x01C775EC + 0x20c) != 0) {
      if (*(int *)(0x01C775EC + 0x20c) == 2) {
        local_3c = local_20 + -1;
        local_30 = 0;
        local_2c = 0;
        if (0 < local_3c) {
          local_40 = local_20 << 2;
          do {
            if (local_2c + 1 < local_20) {
              iVar6 = (local_2c + 1) * 4;
              do {
                iVar7 = *(int *)(local_30 + 0x1ffb078);
                if (iVar7 < *(int *)(iVar6 + 0x1ffb078)) {
                  *(uint *)(local_30 + 0x1ffb078) = *(uint *)(iVar6 + 0x1ffb078);
                  *(int *)(iVar6 + 0x1ffb078) = iVar7;
                  uVar5 = *(uint *)(local_30 + 0x1ffcfb8);
                  *(uint *)(local_30 + 0x1ffcfb8) = *(uint *)(iVar6 + 0x1ffcfb8);
                  *(uint *)(iVar6 + 0x1ffcfb8) = uVar5;
                }
                iVar6 = iVar6 + 4;
              } while (iVar6 < local_40);
            }
            local_30 = local_30 + 4;
            local_2c = local_2c + 1;
          } while (local_2c < local_3c);
        }
        iVar6 = 0x14;
        if (local_20 < 0x14) {
          iVar6 = local_20;
        }
        if (0 < iVar6) {
          iVar9 = 0;
          iVar7 = 0;
          do {
            piVar1 = (int *)(iVar9 + 0x1ffb078);
            puVar2 = (uint *)(iVar9 + 0x1ffcfb8);
            iVar9 = iVar9 + 4;
            iVar8 = iVar7 + 1;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%d. %s : %3.2f ms\n",iVar7,*puVar2,
                       ((double)*piVar1 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                       (double)fVar3);
            iVar7 = iVar8;
          } while (iVar8 < iVar6);
        }
      }
      iStack_18 = wincore_winrun_cpp_getTime_FUN_00558a30();
      iStack_18 = iStack_18 - local_44;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"Process time (%d actors) : %3.2f ms\n",local_20,
                 ((double)iStack_18 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
                 (double)fVar3);
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x14cd6c)) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x14cd6c));
    }
  }
  return iVar6;
}
