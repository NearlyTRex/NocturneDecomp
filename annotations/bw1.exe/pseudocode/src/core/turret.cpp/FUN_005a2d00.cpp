// Name: core_turret.cpp_FUN_005a2d00
// Address: 005a2d00
// Address Range: [[005a2d00, 005a334d]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_005a2d00(CTurret *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_turret_cpp_FUN_005a2d00(CTurret *param_1,float param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_10e8 [955];
  CBoundingBox3D *this_ptr;
  uint *puVar6;
  CVector3f *pCVar7;
  float fStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint auStack_160 [6];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [3];
  uint local_130 [6];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  uint uStack_100;
  float afStack_fc [5];
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [4];
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [4];
  float fStack_98;
  CVector3f CStack_94;
  uint uStack_88;
  float afStack_84 [4];
  float fStack_74;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  uint uStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  char *pcStack_28;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  
  bVar5 = 0;
  iVar1 = *(int *)&param_1->field_0x780;
  if (iVar1 == 0) {
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s has no guard trigger!\n",param_1);
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
  iVar2 = 0;
  pfVar3 = (float *)local_130;
  pfVar4 = &local_178;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  core_box_cpp_CBoundingBox3D_reset_FUN_00421570((CBoundingBox3D *)&fStack_118);
  do {
    core_box_cpp_FUN_00420570(&local_178,iVar2);
    puVar6 = &uStack_88;
    uStack_88 = uStack_40;
    afStack_84[(uint)bVar5 * -2] = afStack_3c[(uint)bVar5 * -2];
    afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0x780,puVar6);
    pCVar7 = &CStack_34;
    this_ptr = (CBoundingBox3D *)&fStack_118;
    iVar2 = iVar2 + 1;
    CStack_34._0_4_ = CStack_94._0_4_;
    *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_94 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500(this_ptr,pCVar7);
  } while (iVar2 < 8);
  fStack_64 = 999.0;
  fStack_60 = 999.0;
  fStack_5c = 999.0;
  pfStack_1c = afStack_13c;
  iStack_20 = 0;
  fStack_118 = fStack_118 + _DAT_005f8b60;
  fStack_114 = fStack_114 + _DAT_005f8b60;
  fStack_110 = fStack_110 + _DAT_005f8b60;
  fStack_10c = fStack_10c + _DAT_005f8b64;
  fStack_108 = fStack_108 + _DAT_005f8b64;
  fStack_104 = fStack_104 + _DAT_005f8b64;
  pcStack_28 = &param_1->field_0x784;
  for (iStack_18 = 0; iStack_18 < *(int *)&g_CDemonSetPtr->field_0x14d164; iStack_18 = iStack_18 + 1
      ) {
    actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iStack_20);
    iVar1 = core_actor_cpp_FUN_0040c550(actor_ptr,pcStack_28);
    if ((((iVar1 != 0) && (fStack_118 <= *(float *)&actor_ptr->field_0x20)) &&
        (fStack_114 <= *(float *)&actor_ptr->field_0x24)) &&
       (((fStack_110 <= *(float *)&actor_ptr->field_0x28 &&
         (*(float *)&actor_ptr->field_0x20 <= fStack_10c)) &&
        ((*(float *)&actor_ptr->field_0x24 <= fStack_108 &&
         (*(float *)&actor_ptr->field_0x28 <= fStack_104)))))) {
      iVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x5c))(actor_ptr);
      if (iVar1 != 0) {
        __arrinit(&fStack_1f0,10,&g_CVectorTypeInfo);
        iVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x54))(actor_ptr,&fStack_1f0);
        if (iVar1 < 1) {
          (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x1c))(actor_ptr);
          pfVar3 = (float *)auStack_160;
          pfVar4 = &fStack_148;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar4 = *pfVar3;
            pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
            pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
          }
          fStack_c4 = fStack_148 + *pfStack_1c;
          fStack_c0 = fStack_144 + pfStack_1c[1];
          fStack_bc = fStack_140 + pfStack_1c[2];
          afStack_84[2] = fStack_148 + *pfStack_1c;
          afStack_84[(uint)bVar5 * -2 + 3] = afStack_d8[(uint)bVar5 * -2 + 6];
          afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          fStack_dc = afStack_84[2] * _DAT_005f8b68;
          afStack_d8[0] = afStack_84[3] * _DAT_005f8b68;
          afStack_d8[1] = fStack_74 * _DAT_005f8b68;
          afStack_d8[2] = afStack_84[2] * _DAT_005f8b68;
          afStack_d8[(uint)bVar5 * -2 + 3] = afStack_d8[(uint)bVar5 * -2];
          afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (&fStack_1f0 != afStack_d8 + 2) {
            fStack_1f0 = afStack_d8[2];
            uStack_1ec = afStack_d8[3];
            uStack_1e8 = uStack_c8;
          }
        }
        core_actor_cpp_FUN_00408b40(actor_ptr,&fStack_1f0);
        pCVar7 = &CStack_b8;
        CStack_b8._0_4_ = CStack_4c._0_4_;
        *(uint *)((int)&CStack_b8 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + 4);
        *(uint *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        core_actor_cpp_FUN_00408bb0(*(uint *)&param_1->field_0x780,pCVar7);
        fStack_ac = fStack_58;
        afStack_a8[(uint)bVar5 * -2] = afStack_54[(uint)bVar5 * -2];
        afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (((local_178 <= fStack_ac) && (fStack_174 <= afStack_a8[0])) &&
           ((fStack_170 <= afStack_a8[1] &&
            (((fStack_ac <= fStack_16c && (afStack_a8[0] <= fStack_168)) &&
             (afStack_a8[1] <= fStack_164)))))) {
          core_actor_cpp_FUN_00408bb0(param_1,&CStack_b8);
          afStack_70[0] = (float)uStack_100;
          afStack_84[(uint)bVar5 * -2 + 6] = afStack_fc[(uint)bVar5 * -2];
          afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          core_vecdir_cpp_FUN_005a7520(afStack_84 + 5);
          afStack_a8[2] = afStack_fc[2];
          afStack_a8[(uint)bVar5 * -2 + 3] = afStack_fc[(uint)bVar5 * -2 + 3];
          afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_fc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          if (((0xBF060A92 <= afStack_a8[2]) && (afStack_a8[2] <= 0x3F9C61AA)) &&
             (SQRT(fStack_98 * fStack_98 +
                   afStack_a8[2] * afStack_a8[2] + afStack_a8[3] * afStack_a8[3]) <=
              SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60))) {
            if (afStack_84 + 8 != afStack_a8 + 2) {
              fStack_64 = afStack_a8[2];
              fStack_60 = afStack_a8[3];
              fStack_5c = fStack_98;
            }
            if (&CStack_e8 != &CStack_b8) {
              CStack_e8._0_4_ = CStack_b8._0_4_;
            }
          }
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  if ((int)fStack_60 < 0x42c60001) {
    core_turret_cpp_FUN_005a3350(param_1,&CStack_e8,param_2);
    if (*(float *)&param_1->field_0x300 <= 0.0) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0xe4))(param_1);
    }
    *(uint *)&param_1->field_0x86c = 0x3f800000;
    return;
  }
  core_turret_cpp_CTurret_updatePatrol_FUN_005a3650(param_1,param_2);
  return;
}
