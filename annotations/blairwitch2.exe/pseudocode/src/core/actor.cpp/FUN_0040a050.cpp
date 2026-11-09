// Name: core_actor.cpp_FUN_0040a050
// Address: 0040a050
// Address Range: [[0040a050, 0040ad42]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_0040a050(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_0040a050(CDemonActor *param_1,uint param_2)

{
  float fVar1;
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
  float afStackY_1198 [868];
  float *pfVar11;
  EBloodType EVar12;
  uint auStack_3d8 [3];
  float fStack_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  uint uStack_3bc;
  float fStack_3b8;
  uint uStack_3b4;
  SDamageInfo aSStack_39c [4];
  float fStack_398;
  SDamageInfo aSStack_360 [4];
  float fStack_35c;
  SDamageInfo aSStack_324 [4];
  float fStack_320;
  SDamageInfo aSStack_2e8 [60];
  SDamageInfo aSStack_2ac [60];
  uint auStack_270 [5];
  float fStack_25c;
  uint auStack_258 [5];
  uint uStack_244;
  uint auStack_240 [6];
  uint auStack_228 [6];
  uint auStack_210 [6];
  uint auStack_1f8 [6];
  uint auStack_1e0 [6];
  uint auStack_1c8 [6];
  uint uStack_1b0;
  float afStack_1ac [5];
  CVector3f CStack_198;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [2];
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [5];
  CVector3f CStack_120;
  uint uStack_114;
  float afStack_110 [5];
  float fStack_fc;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  float afStack_e0 [4];
  float fStack_d0;
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [4];
  uint uStack_ac;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  float afStack_74 [4];
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  CTrigger *pCStack_44;
  CCrate *pCStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  uint uStack_2c;
  CDemonActor *pCStack_28;
  CGlass *pCStack_24;
  CTrigger *pCStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_2c = 0x3f800000;
  iStack_48 = 0;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
  puVar7 = auStack_1f8;
  puVar6 = auStack_258;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  uStack_e8 = uStack_244;
  core_actor_cpp_FUN_00408d70();
  uStack_174 = 0;
  uStack_170 = 0;
  fStack_138 = fStack_fc;
  afStack_134[(uint)bVar9 * -2] = afStack_110[(uint)bVar9 * -2 + 6];
  afStack_134[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_110[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
  puVar7 = auStack_240;
  puVar6 = auStack_270;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  fStack_16c = fStack_25c + _DAT_005ca6ca;
  core_actor_cpp_FUN_00408d70();
  CStack_15c._0_4_ = CStack_9c._0_4_;
  *(uint *)((int)&CStack_15c + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_9c + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&CStack_15c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&CStack_9c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  if (&CStack_a8 != &CStack_15c) {
    CStack_a8._0_4_ = CStack_15c._0_4_;
    CStack_a8._4_4_ = CStack_15c._4_4_;
    CStack_a8._8_4_ = CStack_15c._8_4_;
  }
  uStack_184 = uStack_2c;
  uStack_18c = 0;
  uStack_188 = 0;
  core_actor_cpp_FUN_00408d70();
  CStack_90._0_4_ = CStack_cc._0_4_;
  *(uint *)((int)&CStack_90 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_cc + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&CStack_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&CStack_cc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  if (&CStack_120 != &CStack_90) {
    CStack_120._0_4_ = CStack_90._0_4_;
    CStack_120._4_4_ = CStack_90._4_4_;
    CStack_120._8_4_ = CStack_90._8_4_;
  }
  if (iStack_48 == 1) {
    uStack_180 = 0;
    uStack_178 = 0xc0400000;
    uStack_17c = 0;
    core_actor_cpp_FUN_00408cf0();
    fVar1 = fStack_138;
    afStack_e0[2] = fStack_150;
    afStack_e0[(uint)bVar9 * -2 + 3] = afStack_14c[(uint)bVar9 * -2];
    afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_14c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    fStack_54 = fVar1 + afStack_e0[2];
    fStack_50 = afStack_134[0] + afStack_e0[3];
    fStack_4c = afStack_134[1] + fStack_d0;
    afStack_bc[2] = fVar1 + afStack_e0[2];
    afStack_bc[(uint)bVar9 * -2 + 3] = afStack_74[(uint)bVar9 * -2 + 9];
    afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    if (&fStack_84 != afStack_bc + 2) {
      fStack_84 = afStack_bc[2];
      uStack_80 = afStack_bc[3];
      uStack_7c = uStack_ac;
    }
  }
  afStack_134[2] = 0.0;
  afStack_134[3] = 0.0;
  afStack_134[4] = 1.0;
  core_actor_cpp_FUN_00408cf0();
  CStack_198._0_4_ = CStack_144._0_4_;
  *(uint *)((int)&CStack_198 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_144 + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&CStack_198 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&CStack_144 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  pCStack_28 = (CDemonActor *)(**(code **)(*(int *)&param_1->field_0x2b0 + 0x9c))(param_1);
  if (iStack_48 == 0) {
    iStack_34 = iStack_48;
    for (iStack_38 = iStack_48; iStack_38 < *(int *)&g_CDemonSetPtr->field_0x14d164;
        iStack_38 = iStack_38 + 1) {
      if ((*(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_34) != param_1) &&
         (*(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_34) != pCStack_28)) {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
        if (iVar5 == 0) {
          pCStack_20 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c8f0();
          if (pCStack_20 == (CTrigger *)0x0) {
            pCStack_24 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c8f0();
            if (pCStack_24 != (CGlass *)0x0) {
              core_actor_cpp_FUN_00408de0(pCStack_24,&fStack_138,uStack_2c);
              pfVar11 = afStack_1ac + 2;
              afStack_1ac[2] = afStack_110[2];
              afStack_1ac[(uint)bVar9 * -2 + 3] = afStack_110[(uint)bVar9 * -2 + 3];
              afStack_1ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                   afStack_110[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
              (**(code **)(*(int *)&pCStack_24->field_0x2b0 + 0x24))(pCStack_24);
              puVar7 = auStack_1c8;
              puVar6 = auStack_1e0;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar6 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_0041bc20(CONCAT44(pfVar11,auStack_1e0));
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_2ac);
                pCVar3 = pCStack_24;
                (**(code **)(*(int *)&param_1->field_0x2b0 + 0x84))
                          (param_1,param_2,aSStack_2ac,pCStack_24);
                (**(code **)(*(int *)&param_1->field_0x2b0 + 0x88))
                          (param_1,param_2,aSStack_2ac,pCVar3);
                iVar5 = core_glass_cpp_FUN_004c72d0(pCVar3);
                if (iVar5 != 0) {
                  core_glass_cpp_FUN_004c6d40();
                }
              }
            }
          }
          else {
            iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(pCStack_20,param_1);
            if (iVar5 != 0) {
              core_actor_cpp_FUN_00408de0(pCStack_20,&fStack_138,uStack_2c);
              pCVar4 = pCStack_20;
              puVar7 = &uStack_1b0;
              uStack_1b0 = uStack_114;
              afStack_1ac[(uint)bVar9 * -2] = afStack_110[(uint)bVar9 * -2];
              afStack_1ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_110[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              (**(code **)(*(int *)&pCVar4->field_0x2b0 + 0x24))(pCVar4);
              puVar6 = auStack_228;
              puVar8 = auStack_210;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              iVar5 = core_box_cpp_FUN_0041bc20(CONCAT44(puVar7,auStack_210));
              if (iVar5 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_360);
                pCVar4 = pCStack_20;
                (**(code **)(*(int *)&param_1->field_0x2b0 + 0x84))
                          (param_1,param_2,aSStack_360,pCStack_20);
                engine_console_cpp_FUN_00436710
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",param_1,
                           (double)fStack_35c,pCVar4);
                core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(pCVar4,fStack_35c);
                (**(code **)(*(int *)&param_1->field_0x2b0 + 0x88))
                          (param_1,param_2,aSStack_360,pCVar4);
              }
            }
          }
        }
        else if (((pCStack_28 == (CDemonActor *)0x0) ||
                 (iVar2 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0xe8))(iVar5), iVar2 == 0)) ||
                (iVar2 = core_actor_cpp_FUN_0040c840(pCStack_28,"@CHero" + 1), iVar2 == 0))
        {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_324);
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x84))(param_1,param_2,aSStack_324,iVar5);
          iVar2 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x108))
                            (iVar5,&CStack_120,uStack_2c,aSStack_324);
          if ((iVar2 != 0) && (0.0 < fStack_320)) {
            EVar12 = *(EBloodType *)(iVar5 + 0x280c);
            fVar10 = (float10)1 + (float10)fStack_320 * (float10)_DAT_005ca6ce;
            round();
            fStack_18 = (float)(int)ROUND(fVar10);
            core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_120,&CStack_198,(int)fStack_18,EVar12);
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x88))(param_1,param_2,aSStack_324,iVar5);
          }
          iVar2 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x108))
                            (iVar5,&CStack_a8,uStack_2c,aSStack_324);
          if ((iVar2 != 0) && (0.0 < fStack_320)) {
            EVar12 = *(EBloodType *)(iVar5 + 0x280c);
            fVar10 = (float10)1 + (float10)fStack_320 * (float10)_DAT_005ca6ce;
            round();
            fStack_18 = (float)(int)ROUND(fVar10);
            core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_a8,&CStack_198,(int)fStack_18,EVar12);
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x88))(param_1,param_2,aSStack_324,iVar5);
          }
        }
      }
      iStack_34 = iStack_34 + 4;
    }
  }
  if (iStack_48 == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
    core_setcolid_cpp_FUN_00537df0(g_CDemonSetPtr);
    if (pCStack_28 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_28);
    }
    iStack_3c = 0;
    while ((fStack_18 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&fStack_84,&fStack_138)
           , 0.0 <= fStack_18 && (fStack_18 <= 1.0))) {
      iStack_1c = core_actor_cpp_castToClassHash_FUN_0040c8f0();
      if ((iStack_1c != 0) &&
         (iVar5 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x114))(iStack_1c), 0 < iVar5)) {
        iStack_1c = 0;
      }
      pCVar3 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c8f0();
      pCVar4 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c8f0();
      pCStack_44 = pCVar4;
      pCStack_40 = (CCrate *)core_actor_cpp_castToClassHash_FUN_0040c8f0();
      this_ptr = (CFlameCan *)core_actor_cpp_castToClassHash_FUN_0040c8f0();
      actor_ptr = pCStack_28;
      if (iStack_1c == 0) {
        if (pCVar3 == (CGlass *)0x0) {
          if (pCVar4 == (CTrigger *)0x0) {
            if (pCStack_40 == (CCrate *)0x0) {
              if (this_ptr == (CFlameCan *)0x0) {
                return 0;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr);
            }
            else {
              core_crate_cpp_FUN_0043a350(pCStack_40);
            }
          }
          else {
            iVar5 = core_trigger_cpp_CTrigger_acceptsDamageFrom_FUN_00578570(pCVar4,param_1);
            if (iVar5 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_39c);
              (**(code **)(*(int *)&param_1->field_0x2b0 + 0x84))
                        (param_1,param_2,aSStack_39c,pCVar4);
              engine_console_cpp_FUN_00436710
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",param_1,
                         (double)fStack_398,pCVar4);
              core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(pCVar4,fStack_398);
              (**(code **)(*(int *)&param_1->field_0x2b0 + 0x88))(param_1,param_2,aSStack_39c,0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                      (g_CDemonSetPtr,(CDemonActor *)pCStack_44);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_2e8);
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x84))(param_1,param_2,aSStack_2e8,pCVar3);
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x88))(param_1,param_2,aSStack_2e8,pCVar3);
          iVar5 = core_glass_cpp_FUN_004c72d0(pCVar3);
          if (iVar5 == 0) {
            return 0;
          }
          core_glass_cpp_FUN_004c6d40();
        }
      }
      else if (((pCStack_28 == (CDemonActor *)0x0) ||
               (iVar5 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0xe8))(iStack_1c), iVar5 == 0))
              || (iVar5 = core_actor_cpp_FUN_0040c840(actor_ptr,"CHero"), iVar5 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)auStack_3d8);
        auStack_3d8[0] = *(uint *)&g_CDemonSetPtr->field_0x14d148;
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x84))(param_1,param_2,auStack_3d8,iStack_1c);
        fStack_168 = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                     *(float *)&g_CDemonSetPtr->field_0x14d110;
        afStack_164[0] =
             *(float *)&g_CDemonSetPtr->field_0x14d120 - *(float *)&g_CDemonSetPtr->field_0x14d114;
        afStack_164[1] =
             *(float *)&g_CDemonSetPtr->field_0x14d124 - *(float *)&g_CDemonSetPtr->field_0x14d118;
        fStack_60 = fStack_168;
        afStack_74[(uint)bVar9 * -2 + 6] = afStack_164[(uint)bVar9 * -2];
        afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_164[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fStack_30 = (float)_DAT_005ca6d6 /
                    SQRT(fStack_58 * fStack_58 + fStack_60 * fStack_60 + fStack_5c * fStack_5c);
        fStack_c0 = fStack_60 * fStack_30;
        afStack_bc[0] = fStack_5c * fStack_30;
        afStack_bc[1] = fStack_58 * fStack_30;
        afStack_74[2] = fStack_60 * fStack_30;
        afStack_74[(uint)bVar9 * -2 + 3] = afStack_bc[(uint)bVar9 * -2];
        afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_bc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (&fStack_3cc != afStack_74 + 2) {
          fStack_3cc = afStack_74[2];
          uStack_3c8 = afStack_74[3];
          uStack_3c4 = uStack_64;
        }
        core_actor_cpp_FUN_00408de0();
        uStack_78 = uStack_e4;
        afStack_74[(uint)bVar9 * -2] = afStack_e0[(uint)bVar9 * -2];
        iVar5 = iStack_1c;
        afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (&uStack_3bc != &uStack_78) {
          uStack_3bc = uStack_78;
          fStack_3b8 = afStack_74[0];
          uStack_3b4 = afStack_74[1];
        }
        (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x110))();
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x88))(param_1,param_2,auStack_3d8,iVar5);
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,*(CDemonActor **)&g_CDemonSetPtr->field_0x14d144);
      }
      iStack_3c = iStack_3c + 1;
      if (3 < iStack_3c) {
        return 0;
      }
    }
  }
  return 0;
}
