// Name: core_actor.cpp_FUN_00409f60
// Address: 00409f60
// Address Range: [[00409f60, 0040ac90]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_00409f60(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_00409f60(CDemonActor *param_1,uint param_2)

{
  byte auVar1 [4];
  float fVar2;
  CDemonActor *actor_ptr;
  int iVar3;
  CGlass *pCVar4;
  CTrigger *pCVar5;
  CFlameCan *this_ptr;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_117c [879];
  float *pfVar12;
  EBloodType blood_type;
  float fStack_390;
  SDamageInfo aSStack_38c [60];
  SDamageInfo aSStack_350 [4];
  float fStack_34c;
  SDamageInfo aSStack_314 [4];
  float fStack_310;
  SDamageInfo aSStack_2d8 [60];
  uint auStack_29c [3];
  float fStack_290;
  uint uStack_28c;
  uint uStack_288;
  uint uStack_280;
  float fStack_27c;
  uint uStack_278;
  SDamageInfo aSStack_260 [4];
  float fStack_25c;
  uint auStack_224 [6];
  uint auStack_20c [6];
  uint auStack_1f4 [6];
  uint auStack_1dc [6];
  uint auStack_1c4 [5];
  uint uStack_1b0;
  uint auStack_1ac [6];
  uint uStack_194;
  float afStack_190 [2];
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [4];
  float fStack_168;
  float fStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  CVector3f CStack_140;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  float afStack_118 [4];
  float fStack_108;
  uint uStack_104;
  float afStack_100 [5];
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  byte auStack_bc [4];
  float afStack_b8 [4];
  float fStack_a8;
  float fStack_a4;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  CGlass *pCStack_50;
  float fStack_4c;
  int iStack_48;
  uint uStack_44;
  CTrigger *pCStack_40;
  CCrate *pCStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  float *pfStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  CTrigger *pCStack_1c;
  float fStack_18;
  
  bVar10 = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  puVar8 = auStack_1dc;
  puVar7 = auStack_1c4;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
  }
  uStack_c0 = uStack_1b0;
  core_actor_cpp_FUN_00408b80();
  iVar6 = iStack_48;
  auStack_bc = (byte  [4])fStack_164;
  afStack_b8[(uint)bVar10 * -2] = afStack_178[(uint)bVar10 * -2 + 6];
  afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
  if (iVar6 == 1) {
    uStack_e4 = 0xc0400000;
    uStack_ec = 0;
    uStack_e8 = 0;
    core_actor_cpp_FUN_00408b00();
    fVar2 = afStack_b8[0];
    auVar1 = auStack_bc;
    afStack_dc[2] = fStack_80;
    afStack_dc[(uint)bVar10 * -2 + 3] = afStack_b8[(uint)bVar10 * -2 + 0xf];
    afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    afStack_b8[2] = (float)auVar1 + afStack_dc[2];
    afStack_b8[3] = fVar2 + afStack_dc[3];
    fStack_a8 = afStack_b8[1] + fStack_cc;
    afStack_178[2] = (float)auVar1 + afStack_dc[2];
    afStack_178[(uint)bVar10 * -2 + 3] = afStack_b8[(uint)bVar10 * -2 + 3];
    afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if (afStack_118 + 2 != afStack_178 + 2) {
      afStack_118[2] = afStack_178[2];
      afStack_118[3] = afStack_178[3];
      fStack_108 = fStack_168;
    }
  }
  iVar6 = core_actor_cpp_FUN_0040c790(param_1,"@CHolycross" + 1);
  if (iVar6 != 0) {
    iStack_48 = 1;
    if (afStack_118 + 2 != (float *)&param_1->field_0x20) {
      afStack_118[2] = *(float *)&param_1->field_0x20;
      afStack_118[3] = *(float *)&param_1->field_0x24;
      fStack_108 = *(float *)&param_1->field_0x28;
    }
    uStack_128 = 0;
    uStack_124 = 0x40000000;
    uStack_120 = 0;
    core_actor_cpp_FUN_00408b00();
    fStack_158 = fStack_a4;
    afStack_178[(uint)bVar10 * -2 + 9] = afStack_b8[(uint)bVar10 * -2 + 6];
    afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    fStack_e0 = *(float *)&param_1->field_0x20 + fStack_158;
    afStack_dc[0] = *(float *)&param_1->field_0x24 + fStack_154;
    afStack_dc[1] = *(float *)&param_1->field_0x28 + fStack_150;
    fStack_8c = fStack_e0;
    afStack_b8[(uint)bVar10 * -2 + 0xc] = afStack_dc[(uint)bVar10 * -2];
    afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if ((float *)auStack_bc != afStack_b8 + 0xb) {
      auStack_bc = (byte  [4])fStack_8c;
      afStack_b8[0] = fStack_88;
      afStack_b8[1] = fStack_84;
    }
  }
  uStack_30 = 0x40000000;
  uStack_134 = 0;
  uStack_12c = 0x3f800000;
  uStack_130 = 0;
  core_actor_cpp_FUN_00408b00();
  CStack_140._0_4_ = CStack_188._0_4_;
  *(uint *)((int)&CStack_140 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&CStack_188 + (uint)bVar10 * -8 + 4);
  *(uint *)((int)&CStack_140 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       *(uint *)((int)&CStack_188 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  pCStack_24 = (CDemonActor *)(**(code **)(*(int *)&param_1->field_0x154 + 0x94))(param_1);
  if (iStack_48 == 0) {
    iStack_2c = iStack_48;
    for (iStack_38 = iStack_48; iStack_38 < *(int *)&g_CDemonSetPtr->field_0x14d164;
        iStack_38 = iStack_38 + 1) {
      if ((*(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_2c) != param_1) &&
         (*(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_2c) != pCStack_24)) {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840();
        if (iVar6 == 0) {
          pCStack_1c = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c840();
          if (pCStack_1c == (CTrigger *)0x0) {
            pCStack_50 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c840();
            if (pCStack_50 != (CGlass *)0x0) {
              core_actor_cpp_FUN_00408bf0(pCStack_50,auStack_bc,uStack_30);
              pCVar4 = pCStack_50;
              pfVar12 = afStack_100 + 2;
              afStack_100[2] = (float)uStack_194;
              afStack_100[(uint)bVar10 * -2 + 3] = afStack_190[(uint)bVar10 * -2];
              afStack_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                   afStack_190[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              (**(code **)(*(int *)&pCVar4->field_0x154 + 0x1c))(pCVar4);
              puVar8 = auStack_1f4;
              puVar7 = auStack_1ac;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar7 = *puVar8;
                puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
              }
              iVar6 = core_box_cpp_FUN_0041eed0(CONCAT44(pfVar12,auStack_1ac));
              if (iVar6 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_2d8);
                pCVar4 = pCStack_50;
                (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))
                          (param_1,param_2,aSStack_2d8,pCStack_50);
                (**(code **)(*(int *)&param_1->field_0x154 + 0x80))
                          (param_1,param_2,aSStack_2d8,pCVar4);
                iVar6 = core_glass_cpp_FUN_004cc5d0(pCStack_50);
                if (iVar6 != 0) {
                  core_glass_cpp_FUN_004cc040();
                }
              }
            }
          }
          else {
            iVar6 = core_trigger_cpp_FUN_0056ede0(pCStack_1c,param_1);
            if (iVar6 != 0) {
              core_actor_cpp_FUN_00408bf0(pCStack_1c,auStack_bc,uStack_30);
              pCVar5 = pCStack_1c;
              puVar8 = &uStack_104;
              uStack_104 = uStack_5c;
              afStack_100[(uint)bVar10 * -2] = afStack_b8[(uint)bVar10 * -2 + 0x18];
              afStack_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
              (**(code **)(*(int *)&pCVar5->field_0x154 + 0x1c))(pCVar5);
              puVar7 = auStack_224;
              puVar9 = auStack_20c;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
                puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              }
              iVar6 = core_box_cpp_FUN_0041eed0(CONCAT44(puVar8,auStack_20c));
              if (iVar6 != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_350);
                pCVar5 = pCStack_1c;
                (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))
                          (param_1,param_2,aSStack_350,pCStack_1c);
                engine_console_cpp_FUN_00441ff0
                          (g_CConsolePtr,"%s causing %5.2f damage to %s\n",param_1,
                           (double)fStack_34c,pCVar5);
                core_trigger_cpp_FUN_0056ee20(pCVar5,fStack_34c);
                (**(code **)(*(int *)&param_1->field_0x154 + 0x80))
                          (param_1,param_2,aSStack_350,pCVar5);
              }
            }
          }
        }
        else if (((pCStack_24 == (CDemonActor *)0x0) ||
                 (iVar3 = (**(code **)(*(int *)(iVar6 + 0x154) + 0xe0))(iVar6), iVar3 == 0)) ||
                (iVar3 = core_actor_cpp_FUN_0040c790(pCStack_24,"CHero"), iVar3 == 0)) {
          uStack_30 = 0x40000000;
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_260);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))(param_1,param_2,aSStack_260,iVar6);
          (**(code **)(*(int *)(iVar6 + 0x154) + 0x100))(iVar6,auStack_bc,0x40000000,aSStack_260);
          if (0.0 < fStack_25c) {
            blood_type = *(EBloodType *)(iVar6 + 0x27a0);
            fVar11 = (float10)1 + (float10)fStack_25c * (float10)_DAT_005b5679;
            round();
            fStack_18 = (float)(int)ROUND(fVar11);
            core_gore_cpp_FUN_004ce9c0
                      (g_CGorePtr,(CVector3f *)auStack_bc,&CStack_140,(int)fStack_18,blood_type);
            (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,aSStack_260,iVar6);
            uStack_44 = 1;
          }
        }
      }
      iStack_2c = iStack_2c + 4;
    }
  }
  if (iStack_48 == 1) {
    core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
    core_setcolid_cpp_FUN_0053ebd0(g_CDemonSetPtr);
    if (pCStack_24 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_24);
    }
    iStack_34 = 0;
    pfStack_28 = (float *)&param_1->field_0x20;
    while( true ) {
      fStack_390 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,afStack_118 + 2,auStack_bc);
      fStack_18 = fStack_390;
      iVar6 = core_actor_cpp_FUN_0040c790(param_1,"CHolycross");
      if ((iVar6 != 0) && ((fStack_390 < 0.0 || (1.0 < fStack_390)))) {
        if (afStack_118 + 2 != pfStack_28) {
          afStack_118[2] = *pfStack_28;
          afStack_118[3] = pfStack_28[1];
          fStack_108 = pfStack_28[2];
        }
        afStack_118[3] = afStack_118[3] + _DAT_005b5689;
        fStack_390 = (float)core_setcolid_cpp_FUN_0053ccc0
                                      (g_CDemonSetPtr,afStack_118 + 2,auStack_bc);
        fStack_18 = fStack_390;
      }
      if ((fStack_390 < 0.0) || (1.0 < fStack_390)) break;
      iStack_20 = core_actor_cpp_castToClassHash_FUN_0040c840();
      if ((iStack_20 != 0) &&
         (iVar6 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0x10c))(iStack_20), 0 < iVar6)) {
        iStack_20 = 0;
      }
      pCVar4 = (CGlass *)core_actor_cpp_castToClassHash_FUN_0040c840();
      pCVar5 = (CTrigger *)core_actor_cpp_castToClassHash_FUN_0040c840();
      pCStack_40 = pCVar5;
      pCStack_3c = (CCrate *)core_actor_cpp_castToClassHash_FUN_0040c840();
      this_ptr = (CFlameCan *)core_actor_cpp_castToClassHash_FUN_0040c840();
      actor_ptr = pCStack_24;
      if (iStack_20 == 0) {
        if (pCVar4 == (CGlass *)0x0) {
          if (pCVar5 == (CTrigger *)0x0) {
            if (pCStack_3c == (CCrate *)0x0) {
              if (this_ptr == (CFlameCan *)0x0) {
                return uStack_44;
              }
              core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr);
            }
            else {
              core_crate_cpp_FUN_004461c0(pCStack_3c);
            }
          }
          else {
            iVar6 = core_trigger_cpp_FUN_0056ede0(pCVar5,param_1);
            if (iVar6 != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_314);
              (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))
                        (param_1,param_2,aSStack_314,pCVar5);
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s causing %5.2f damage to %s\n",param_1,
                         (double)fStack_310,pCVar5);
              core_trigger_cpp_FUN_0056ee20(pCVar5,fStack_310);
              (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,aSStack_314,0);
            }
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                      (g_CDemonSetPtr,(CDemonActor *)pCStack_40);
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_38c);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))(param_1,param_2,aSStack_38c,pCVar4);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,aSStack_38c,pCVar4);
          iVar6 = core_glass_cpp_FUN_004cc5d0(pCVar4);
          if (iVar6 == 0) {
            return uStack_44;
          }
          core_glass_cpp_FUN_004cc040();
        }
      }
      else if (((pCStack_24 == (CDemonActor *)0x0) ||
               (iVar6 = (**(code **)(*(int *)(iStack_20 + 0x154) + 0xe0))(iStack_20), iVar6 == 0))
              || (iVar6 = core_actor_cpp_FUN_0040c790(actor_ptr,"CHero"), iVar6 == 0)) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)auStack_29c);
        auStack_29c[0] = *(uint *)&g_CDemonSetPtr->field_0x14d148;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x7c))(param_1,param_2,auStack_29c,iStack_20);
        fStack_14c = *(float *)&g_CDemonSetPtr->field_0x14d11c -
                     *(float *)&g_CDemonSetPtr->field_0x14d110;
        fStack_148 = *(float *)&g_CDemonSetPtr->field_0x14d120 -
                     *(float *)&g_CDemonSetPtr->field_0x14d114;
        fStack_144 = *(float *)&g_CDemonSetPtr->field_0x14d124 -
                     *(float *)&g_CDemonSetPtr->field_0x14d118;
        fStack_17c = fStack_14c;
        afStack_178[(uint)bVar10 * -2] = afStack_178[(uint)bVar10 * -2 + 0xc];
        afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        fStack_4c = (float)_DAT_005b5681 /
                    SQRT(afStack_178[1] * afStack_178[1] +
                         fStack_17c * fStack_17c + afStack_178[0] * afStack_178[0]);
        fStack_68 = fStack_17c * fStack_4c;
        fStack_64 = afStack_178[0] * fStack_4c;
        fStack_60 = afStack_178[1] * fStack_4c;
        fStack_98 = fStack_17c * fStack_4c;
        afStack_b8[(uint)bVar10 * -2 + 9] = afStack_b8[(uint)bVar10 * -2 + 0x15];
        afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
        if (&fStack_290 != afStack_b8 + 8) {
          fStack_290 = fStack_98;
          uStack_28c = uStack_94;
          uStack_288 = uStack_90;
        }
        core_actor_cpp_FUN_00408bf0();
        uStack_11c = uStack_74;
        afStack_118[(uint)bVar10 * -2] = afStack_b8[(uint)bVar10 * -2 + 0x12];
        iVar6 = iStack_20;
        afStack_118[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
        if (&uStack_280 != &uStack_11c) {
          uStack_280 = uStack_11c;
          fStack_27c = afStack_118[0];
          uStack_278 = afStack_118[1];
        }
        (**(code **)(*(int *)(iStack_20 + 0x154) + 0x108))();
        uStack_44 = 1;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x80))(param_1,param_2,auStack_29c,iVar6);
        return uStack_44;
      }
      iStack_34 = iStack_34 + 1;
      if (3 < iStack_34) {
        return uStack_44;
      }
    }
  }
  return uStack_44;
}
