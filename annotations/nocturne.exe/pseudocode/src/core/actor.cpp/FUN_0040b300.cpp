// Name: core_actor.cpp_FUN_0040b300
// Address: 0040b300
// Address Range: [[0040b300, 0040bc93]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_0040b300(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040b300(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  uint uVar8;
  byte auStack_290 [4];
  float fStack_28c;
  byte auStack_254 [60];
  uint auStack_218 [3];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  byte auStack_1dc [56];
  byte auStack_1a4 [4];
  byte auStack_1a0 [4];
  float fStack_19c;
  byte auStack_164 [4];
  float fStack_160;
  byte auStack_128 [48];
  byte auStack_f8 [24];
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  byte auStack_a4 [12];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte auStack_80 [12];
  byte auStack_74 [8];
  byte auStack_6c [4];
  byte auStack_68 [12];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [12];
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  local_44 = 0;
  if (param_2 == 1) {
    local_44 = param_2;
  }
  local_d4 = 0;
  local_d0 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))();
  uStack_cc = *(uint *)(iVar1 + 0x14);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_c8,&local_d4);
  if (local_44 == 1) {
    uStack_d8 = 0xc0400000;
    uStack_e0 = 0;
    uStack_dc = 0;
    pfVar2 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (param_1,auStack_a4,&uStack_e0);
    fStack_98 = fStack_c8 + *pfVar2;
    fStack_94 = fStack_c4 + pfVar2[1];
    fStack_90 = fStack_c0 + pfVar2[2];
    if (&fStack_bc != &fStack_98) {
      fStack_bc = fStack_98;
      fStack_b8 = fStack_94;
      fStack_b4 = fStack_90;
    }
  }
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0x3f800000;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,auStack_68,&uStack_b0);
  iStack_28 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (local_44 == 0) {
    iStack_30 = local_44;
    for (iStack_38 = local_44; iStack_38 < *(int *)(0x01E57284 + 0x14cd6c);
        iStack_38 = iStack_38 + 1) {
      iStack_24 = *(int *)(0x01E57284 + iStack_30 + 0x14cd70);
      if ((param_1 != iStack_24) && (iStack_24 != iStack_28)) {
        iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890();
        if (iVar1 == 0) {
          iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890();
          if (iVar1 == 0) {
            iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890();
            if (iVar1 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (iVar1,auStack_80,&fStack_c8,0x40000000);
              uVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_f8);
              iVar3 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200(uVar4);
              if (iVar3 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_254);
                (**(code **)(*(int *)(param_1 + 0x14c) + 0x74))(param_1,param_2,auStack_254,iVar1);
                (**(code **)(*(int *)(param_1 + 0x14c) + 0x78))(param_1,param_2,auStack_254,iVar1);
                iVar1 = FUN_004aded0(iVar1);
                if (iVar1 != 0) {
                  FUN_004ada20();
                }
              }
            }
          }
          else {
            iVar3 = FUN_005485a0();
            if (iVar3 != 0) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (iVar1,auStack_74,&fStack_c8,0x40000000);
              uVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_128);
              iVar3 = core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_0041e200(uVar4);
              if (iVar3 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_290);
                (**(code **)(*(int *)(param_1 + 0x14c) + 0x74))(param_1,param_2,auStack_290,iVar1);
                engine_console_cpp_CConsole_printf_FUN_0043ac60
                          (PTR_DAT_005ad350,"%s causing %5.2f damage to %s\n",param_1,
                           (double)fStack_28c,iVar1);
                core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0();
                (**(code **)(*(int *)(param_1 + 0x14c) + 0x78))(param_1,param_2,auStack_290,iVar1);
              }
            }
          }
        }
        else if (((iStack_28 == 0) ||
                 (iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xd8))(iVar1), iVar3 == 0)) ||
                (iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(), iVar3 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_1a0);
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x74))(param_1,param_2,auStack_1a0,iVar1);
          (**(code **)(*(int *)(iVar1 + 0x14c) + 0xf8))(iVar1,&fStack_c8,0x40000000,auStack_1a0);
          if (0.0 < fStack_19c) {
            uVar4 = *(uint *)(iVar1 + 0x2608);
            uVar8 = 0x40b5c3;
            fVar7 = (float10)round
                                       ((float10)1 + (float10)fStack_19c * (float10)0.5)
            ;
            iStack_1c = (int)ROUND(fVar7);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                      (0x01C78C7C,&uStack_cc,auStack_6c,iStack_1c,uVar8,uVar4);
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x78))(param_1,param_2,auStack_1a4);
          }
        }
      }
      iStack_30 = iStack_30 + 4;
    }
  }
  if (local_44 == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800();
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780();
    FUN_00511740(0x01E57284);
    if (iStack_28 != 0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780();
    }
    iStack_34 = 0;
    while ((fStack_18 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                         (0x01E57284,&fStack_bc,&fStack_c8), 0.0 <= fStack_18 &&
           (fStack_18 <= 1.0))) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890();
      if ((iVar1 != 0) && (iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1), 0 < iVar3)
         ) {
        iVar1 = 0;
      }
      iStack_1c = core_actor_cpp_castToClassHash_FUN_0040d890();
      iStack_40 = core_actor_cpp_castToClassHash_FUN_0040d890();
      iStack_20 = iStack_40;
      iStack_3c = core_actor_cpp_castToClassHash_FUN_0040d890();
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890();
      iVar3 = iStack_20;
      if (iVar1 == 0) {
        if (iStack_1c == 0) {
          if (iStack_20 == 0) {
            if (iStack_3c == 0) {
              if (iVar5 == 0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(iVar5);
            }
            else {
              core_crate_cpp_CCrate_explode_FUN_0043cdb0(iStack_3c);
            }
          }
          else {
            iVar1 = FUN_005485a0();
            if (iVar1 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_164);
              (**(code **)(*(int *)(param_1 + 0x14c) + 0x74))(param_1,param_2,auStack_164,iVar3);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s causing %5.2f damage to %s\n",param_1,
                         (double)fStack_160,iVar3);
              core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0();
              (**(code **)(*(int *)(param_1 + 0x14c) + 0x78))(param_1,param_2,auStack_164,iStack_1c)
              ;
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00511780();
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_1dc);
          iVar1 = iStack_1c;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x74))(param_1,param_2,auStack_1dc,iStack_1c);
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x78))(param_1,param_2,auStack_1dc,iVar1);
          iVar1 = FUN_004aded0(iVar1);
          if (iVar1 == 0) {
            return 0;
          }
          FUN_004ada20();
        }
      }
      else if (((iStack_28 == 0) ||
               (iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xd8))(iVar1), iVar3 == 0)) ||
              (iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(), iVar3 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_218);
        auStack_218[0] = *(uint *)(0x01E57284 + 0x14cd60);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x74))(param_1,param_2,auStack_218,iVar1);
        fStack_8c = *(float *)(0x01E57284 + 0x14cd34) - *(float *)(0x01E57284 + 0x14cd28);
        fStack_88 = *(float *)(0x01E57284 + 0x14cd38) - *(float *)(0x01E57284 + 0x14cd2c);
        fStack_84 = *(float *)(0x01E57284 + 0x14cd3c) - *(float *)(0x01E57284 + 0x14cd30);
        fStack_2c = (float)10 /
                    SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
        fStack_5c = fStack_8c * fStack_2c;
        fStack_58 = fStack_88 * fStack_2c;
        fStack_54 = fStack_84 * fStack_2c;
        if (&fStack_20c != &fStack_5c) {
          fStack_20c = fStack_5c;
          fStack_208 = fStack_58;
          fStack_204 = fStack_54;
        }
        puVar6 = (uint *)
                 core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (iVar1,auStack_50,0x01E57284 + 0x14cd50);
        if (&uStack_1fc != puVar6) {
          uStack_1fc = *puVar6;
          uStack_1f8 = puVar6[1];
          uStack_1f4 = puVar6[2];
        }
        (**(code **)(*(int *)(iVar1 + 0x14c) + 0x100))();
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x78))(param_1,param_2,auStack_218,iVar1);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780();
      }
      iStack_34 = iStack_34 + 1;
      if (3 < iStack_34) {
        return 0;
      }
    }
  }
  return 0;
}
