// Name: core_actor.cpp_FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 0040aa5e]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_00409f20(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_00409f20(CDemonActor *param_1,uint param_2)

{
  byte auVar1 [4];
  CDemonActor *actor_ptr;
  int iVar2;
  CGlass *pCVar3;
  CTrigger *pCVar4;
  CFlameCan *this_ptr;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1138 [882];
  float *pfVar11;
  EBloodType blood_type;
  SDamageInfo aSStack_348 [4];
  float fStack_344;
  SDamageInfo aSStack_30c [60];
  uint auStack_2d0 [3];
  float fStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  float fStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  SDamageInfo aSStack_294 [60];
  SDamageInfo aSStack_258 [4];
  float fStack_254;
  SDamageInfo aSStack_21c [4];
  float fStack_218;
  uint auStack_1e0 [6];
  uint auStack_1c8 [6];
  uint auStack_1b0 [6];
  uint auStack_198 [6];
  uint auStack_180 [6];
  uint auStack_168 [5];
  uint uStack_154;
  float fStack_150;
  float afStack_14c [5];
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  float fStack_12c;
  uint uStack_128;
  uint uStack_124;
  byte auStack_120 [4];
  float afStack_11c [4];
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  CVector3f CStack_f0;
  uint uStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  uint uStack_cc;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  CVector3f CStack_90;
  uint uStack_84;
  float afStack_80 [5];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  CDemonActor *pCStack_48;
  int iStack_44;
  CTrigger *pCStack_40;
  CCrate *pCStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  float fStack_28;
  CGlass *pCStack_24;
  CTrigger *pCStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  iStack_44 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  puVar6 = auStack_180;
  puVar7 = auStack_168;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
  }
  uStack_130 = uStack_154;
  core_actor_cpp_FUN_00408b40();
  iVar5 = iStack_44;
  auStack_120 = (byte  [4])afStack_14c[2];
  afStack_11c[(uint)bVar9 * -2] = afStack_14c[(uint)bVar9 * -2 + 3];
  afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_14c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  if (iVar5 == 1) {
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0xc0400000;
    core_actor_cpp_FUN_00408ac0();
    auVar1 = auStack_120;
    afStack_11c[2] = afStack_80[2];
    afStack_11c[(uint)bVar9 * -2 + 3] = afStack_80[(uint)bVar9 * -2 + 3];
    afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fStack_150 = (float)auVar1 + afStack_11c[2];
    afStack_14c[0] = afStack_11c[0] + afStack_11c[3];
    afStack_14c[1] = afStack_11c[1] + fStack_10c;
    fStack_c0 = (float)auVar1 + afStack_11c[2];
    afStack_e0[(uint)bVar9 * -2 + 9] = afStack_14c[(uint)bVar9 * -2];
    afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_14c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (&fStack_12c != afStack_e0 + 8) {
      fStack_12c = fStack_c0;
      uStack_128 = uStack_bc;
      uStack_124 = uStack_b8;
    }
  }
  uStack_30 = 0x40000000;
  uStack_54 = 0;
  uStack_4c = 0x3f800000;
  uStack_50 = 0;
  core_actor_cpp_FUN_00408ac0();
  CStack_90._0_4_ = CStack_f0._0_4_;
  *(uint *)((int)&CStack_90 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_f0 + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&CStack_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&CStack_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  pCStack_48 = (CDemonActor *)(**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
  if (iStack_44 == 0) {
    iStack_34 = iStack_44;
    for (iStack_38 = iStack_44; iStack_38 < *(int *)&g_CDemonSetPtr->field_0x14d164;
        iStack_38 = iStack_38 + 1) {
      if ((*(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_34) != param_1) &&
         (*(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_34) != pCStack_48)) {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600();
        if (iVar5 == 0) {
          pCStack_20 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600();
          if (pCStack_20 == (CTrigger *)0x0) {
            pCStack_24 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c600();
            if (pCStack_24 != (CGlass *)0x0) {
              core_actor_cpp_FUN_00408bb0(pCStack_24,auStack_120,uStack_30);
              puVar6 = &uStack_e4;
              uStack_e4 = uStack_cc;
              afStack_e0[(uint)bVar9 * -2] = afStack_e0[(uint)bVar9 * -2 + 6];
              afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
              (**(code **)(*(int *)&pCStack_24->field_0x154 + 0x1c))(pCStack_24);
              puVar7 = auStack_1e0;
              puVar8 = auStack_1b0;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_00421b90(CONCAT44(puVar6,auStack_1b0));
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_30c);
                pCVar3 = pCStack_24;
                (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))
                          (param_1,param_2,aSStack_30c,pCStack_24);
                (**(code **)(*(int *)&param_1->field_0x154 + 0x80))
                          (param_1,param_2,aSStack_30c,pCVar3);
                iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(pCStack_24);
                if (iVar5 != 0) {
                  core_glass_cpp_FUN_004e34b0();
                }
              }
            }
          }
          else {
            iVar5 = core_trigger_cpp_FUN_0059bdf0(pCStack_20,param_1);
            if (iVar5 != 0) {
              core_actor_cpp_FUN_00408bb0(pCStack_20,auStack_120,uStack_30);
              pfVar11 = afStack_80 + 8;
              afStack_60[0] = (float)uStack_84;
              afStack_80[(uint)bVar9 * -2 + 9] = afStack_80[(uint)bVar9 * -2];
              afStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
                   afStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              (**(code **)(*(int *)&pCStack_20->field_0x154 + 0x1c))(pCStack_20);
              puVar6 = auStack_1c8;
              puVar7 = auStack_198;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_00421b90(CONCAT44(pfVar11,auStack_198));
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_348);
                (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))
                          (param_1,param_2,aSStack_348,pCStack_20);
                engine_console_cpp_FUN_00445430
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",param_1,
                           (double)fStack_344,pCStack_20);
                pCVar4 = pCStack_20;
                core_trigger_cpp_FUN_0059be30(pCStack_20,fStack_344);
                (**(code **)(*(int *)&param_1->field_0x154 + 0x80))
                          (param_1,param_2,aSStack_348,pCVar4);
              }
            }
          }
        }
        else if (((pCStack_48 == (CDemonActor *)0x0) ||
                 (iVar2 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xe0))(iVar5), iVar2 == 0)) ||
                (iVar2 = core_actor_cpp_FUN_0040c550(pCStack_48,"@CHero" + 1), iVar2 == 0))
        {
          uStack_30 = 0x40000000;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_258);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))(param_1,param_2,aSStack_258,iVar5);
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x100))(iVar5,auStack_120,0x40000000,aSStack_258);
          if (0.0 < fStack_254) {
            blood_type = *(EBloodType *)(iVar5 + 0x27a0);
            fVar10 = (float10)1 + (float10)fStack_254 * (float10)_DAT_005d2631;
            round();
            fStack_18 = (float)(int)ROUND(fVar10);
            core_gore_cpp_FUN_004e6060
                      (g_CGorePtr,(CVector3f *)auStack_120,&CStack_90,(int)fStack_18,blood_type);
            (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,aSStack_258,iVar5);
          }
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  if (iStack_44 == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,param_1);
    core_setcolid_cpp_FUN_00559210(g_CDemonSetPtr);
    if (pCStack_48 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_48);
    }
    iStack_2c = 0;
    while ((fStack_18 = (float)core_setcolid_cpp_FUN_00557300
                                         (g_CDemonSetPtr,&fStack_12c,auStack_120), 0.0 <= fStack_18
           && (fStack_18 <= 1.0))) {
      iStack_1c = core_actor_cpp_castToClassHash_FUN_0040c600();
      if ((iStack_1c != 0) &&
         (iVar5 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x10c))(iStack_1c), 0 < iVar5)) {
        iStack_1c = 0;
      }
      pCVar3 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c600();
      pCVar4 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c600();
      pCStack_40 = pCVar4;
      pCStack_3c = (CCrate *)core_actor_cpp_castToClassHash_FUN_0040c600();
      this_ptr = (CFlameCan *)core_actor_cpp_castToClassHash_FUN_0040c600();
      actor_ptr = pCStack_48;
      if (iStack_1c == 0) {
        if (pCVar3 == (CGlass *)0x0) {
          if (pCVar4 == (CTrigger *)0x0) {
            if (pCStack_3c == (CCrate *)0x0) {
              if (this_ptr == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr);
            }
            else {
              core_crate_cpp_FUN_00449600(pCStack_3c);
            }
          }
          else {
            iVar5 = core_trigger_cpp_FUN_0059bdf0(pCVar4,param_1);
            if (iVar5 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_21c);
              (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))
                        (param_1,param_2,aSStack_21c,pCVar4);
              engine_console_cpp_FUN_00445430
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",param_1,
                         (double)fStack_218,pCVar4);
              core_trigger_cpp_FUN_0059be30(pCVar4,fStack_218);
              (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,aSStack_21c,0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                      (g_CDemonSetPtr,(CDemonActor *)pCStack_40);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_294);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))(param_1,param_2,aSStack_294,pCVar3);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,aSStack_294,pCVar3);
          iVar5 = core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(pCVar3);
          if (iVar5 == 0) {
            return 0;
          }
          core_glass_cpp_FUN_004e34b0();
        }
      }
      else if (((pCStack_48 == (CDemonActor *)0x0) ||
               (iVar5 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0xe0))(iStack_1c), iVar5 == 0))
              || (iVar5 = core_actor_cpp_FUN_0040c550(actor_ptr,"CHero"), iVar5 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)auStack_2d0);
        auStack_2d0[0] = *(uint *)&g_CDemonSetPtr->field_0x14d148;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))(param_1,param_2,auStack_2d0,iStack_1c);
        afStack_e0[2] =
             *(float *)&g_CDemonSetPtr->field_0x14d11c - *(float *)&g_CDemonSetPtr->field_0x14d110;
        afStack_e0[3] =
             *(float *)&g_CDemonSetPtr->field_0x14d120 - *(float *)&g_CDemonSetPtr->field_0x14d114;
        fStack_d0 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                    *(float *)&g_CDemonSetPtr->field_0x14d118;
        fStack_108 = afStack_e0[2];
        afStack_11c[(uint)bVar9 * -2 + 6] = afStack_e0[(uint)bVar9 * -2 + 3];
        afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        fStack_28 = (float)_DAT_005d2639 /
                    SQRT(fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104
                        );
        fStack_6c = fStack_108 * fStack_28;
        fStack_68 = fStack_104 * fStack_28;
        fStack_64 = fStack_100 * fStack_28;
        fStack_fc = fStack_108 * fStack_28;
        afStack_11c[(uint)bVar9 * -2 + 9] = afStack_80[(uint)bVar9 * -2 + 6];
        afStack_11c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             afStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        if (&fStack_2c4 != afStack_11c + 8) {
          fStack_2c4 = fStack_fc;
          uStack_2c0 = uStack_f8;
          uStack_2bc = uStack_f4;
        }
        core_actor_cpp_FUN_00408bb0();
        fStack_a8 = fStack_b4;
        afStack_e0[(uint)bVar9 * -2 + 0xf] = afStack_e0[(uint)bVar9 * -2 + 0xc];
        iVar5 = iStack_1c;
        afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
             afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
        if (&fStack_2b4 != afStack_e0 + 0xe) {
          fStack_2b4 = fStack_a8;
          uStack_2b0 = uStack_a4;
          uStack_2ac = uStack_a0;
        }
        (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))();
        (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,auStack_2d0,iVar5);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
      }
      iStack_2c = iStack_2c + 1;
      if (3 < iStack_2c) {
        return 0;
      }
    }
  }
  return 0;
}
