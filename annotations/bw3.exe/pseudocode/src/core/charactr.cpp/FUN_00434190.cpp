// Name: core_charactr.cpp_FUN_00434190
// Address: 00434190
// Address Range: [[00434190, 0043480b]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00434190(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_00434190(CCharacter *param_1,float param_2)

{
  int iVar1;
  CHero *pCVar2;
  uint uVar3;
  byte *puVar4;
  float *unaff_EBP;
  byte bVar5;
  float afStackY_1124 [989];
  CMatrix3x3f *pCVar6;
  CVector3f *pCVar7;
  float fStack_194;
  float fStack_190;
  CMatrix3x3f aCStack_18c [40];
  CMatrix3x3f aCStack_164 [40];
  uint uStack_13c;
  float afStack_138 [4];
  uint uStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  uint uStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float afStack_e4 [5];
  float fStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [2];
  byte auStack_a0 [8];
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [5];
  uint uStack_4c;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  float fStack_34;
  CHero *pCStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  CHero *pCStack_18;
  CHero *pCStack_14;
  
  bVar5 = 0;
  if (0.0 <= *(float *)&param_1->field_0x3238) {
    pCStack_14 = (CHero *)&param_1->field_0x20;
    pCVar2 = core_hero_cpp_FUN_004d22c0((CLocation *)pCStack_14);
    pCStack_30 = pCVar2;
    core_actor_cpp_FUN_00408bf0(pCVar2,unaff_EBP);
    fStack_88 = fStack_d0;
    afStack_98[(uint)bVar5 * -2 + 5] = afStack_e4[(uint)bVar5 * -2 + 6];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 6] =
         afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    core_vecdir_cpp_FUN_00576250(afStack_98 + 4);
    uStack_13c = afStack_60[2];
    afStack_138[(uint)bVar5 * -2] = afStack_60[(uint)bVar5 * -2 + 3];
    afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    fStack_34 = ABS(afStack_138[0]);
    fStack_10c = *unaff_EBP - *(float *)(pCVar2 + 0x20);
    fStack_108 = unaff_EBP[1] - *(float *)(pCVar2 + 0x24);
    fStack_104 = unaff_EBP[2] - *(float *)(pCVar2 + 0x28);
    fStack_e8 = *unaff_EBP - *(float *)(pCVar2 + 0x20);
    afStack_e4[(uint)bVar5 * -2] = afStack_138[(uint)bVar5 * -2 + 0xc];
    afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    core_vecdir_cpp_FUN_00576250(&fStack_e8);
    afStack_e4[2] = (float)uStack_40;
    afStack_e4[(uint)bVar5 * -2 + 3] = afStack_60[(uint)bVar5 * -2 + 9];
    afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    fStack_28 = afStack_e4[3];
    iVar1 = (**(code **)(*(int *)(pCVar2 + 0x154) + 0x148))(pCVar2);
    if ((iVar1 != 0) && (fStack_34 < _DAT_005b88e2)) {
      uStack_2c = (uint)(fStack_88 < 0.0);
      uStack_1c = 0;
      puVar4 = &param_1->field_0x323c;
      pCStack_18 = pCStack_30 + 0x20;
      do {
        uVar3 = uStack_1c;
        if (uStack_2c != 0) {
          uVar3 = uStack_1c ^ 1;
        }
        uStack_4c = 0;
        uStack_44 = 0;
        fStack_48 = fStack_28 + *(float *)(uVar3 * 4 + 0x5f0f30);
        pCVar7 = (CVector3f *)auStack_a0;
        pCVar6 = aCStack_164;
        auStack_a0._0_4_ = 0;
        *(float *)(auStack_a0 + (uint)bVar5 * -8 + 4) = afStack_60[(uint)bVar5 * -2 + 6];
        *(float *)(auStack_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        core_dirmat_cpp_FUN_0045b550(pCVar6,pCVar7);
        for (fStack_190 = 6.5; (float)_DAT_005b8916 < fStack_190;
            fStack_190 = fStack_190 + _DAT_005b891e) {
          uStack_f4 = 0;
          uStack_f0 = 0;
          fStack_ec = fStack_190;
          core_dirmat_cpp_FUN_0045b800(aCStack_164,&uStack_f4);
          pCVar2 = pCStack_18;
          afStack_98[1] = fStack_64;
          afStack_98[(uint)bVar5 * -2 + 2] = afStack_60[(uint)bVar5 * -2];
          afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3] =
               afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          fStack_124 = *(float *)pCVar2 + afStack_98[1];
          fStack_120 = *(float *)(pCVar2 + 4) + afStack_98[2];
          fStack_11c = *(float *)(pCVar2 + 8) + afStack_98[3];
          afStack_138[2] = *(float *)pCVar2 + afStack_98[1];
          afStack_138[(uint)bVar5 * 0xfffffffe + 3] = afStack_138[(uint)bVar5 * 0xfffffffe + 6];
          afStack_138[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4] =
               afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          if ((float *)puVar4 != afStack_138 + 2) {
            *(float *)puVar4 = afStack_138[2];
            *(float *)&param_1->field_0x3240 = afStack_138[3];
            *(uint *)&param_1->field_0x3244 = uStack_128;
          }
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (param_1,(CVector3f *)puVar4,(CPathMap *)0x0,(CVector3f *)&DAT_02cfd900,
                             0.0,0.0);
          if (-1 < iVar1) {
            *(uint *)&param_1->field_0x3248 = 0;
            *(uint *)&param_1->field_0x3238 = 0xc0800000;
            return 2;
          }
        }
        uStack_1c = uStack_1c + 1;
      } while ((int)uStack_1c < 6);
    }
    if (((ABS(fStack_84) <= (float)_DAT_005b88ee) && (fStack_34 <= _DAT_005b88f6)) &&
       (SQRT(fStack_80 * fStack_80 + fStack_88 * fStack_88 + fStack_84 * fStack_84) <=
        (float)_DAT_005b88fe)) {
      param_2 = *(float *)&param_1->field_0x3238 + param_2;
      *(float *)&param_1->field_0x3238 = param_2;
      if (param_2 < (float)_DAT_005b8906) {
        return 0;
      }
      uStack_20 = 0;
      pCStack_14 = pCStack_30 + 0x20;
      puVar4 = &param_1->field_0x323c;
      do {
        fStack_24 = (float)((int)uStack_20 / 2) * _DAT_005b890e * _DAT_005b8912;
        if ((uStack_20 & 1) != 0) {
          fStack_24 = -fStack_24;
        }
        uStack_118 = 0;
        fStack_114 = fStack_28 + fStack_24;
        pCVar7 = &CStack_b8;
        uStack_110 = 0;
        pCVar6 = aCStack_18c;
        CStack_b8._0_4_ = 0;
        *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + 4) = afStack_138[(uint)bVar5 * -2 + 9];
        *(float *)((int)&CStack_b8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        core_dirmat_cpp_FUN_0045b550(pCVar6,pCVar7);
        for (fStack_194 = 4.5; (float)_DAT_005b8916 < fStack_194;
            fStack_194 = fStack_194 + _DAT_005b891e) {
          fStack_68 = fStack_194;
          uStack_70 = 0;
          uStack_6c = 0;
          core_dirmat_cpp_FUN_0045b800(aCStack_18c,&uStack_70);
          pCVar2 = pCStack_14;
          fStack_7c = fStack_100;
          afStack_98[(uint)bVar5 * -2 + 8] = afStack_138[(uint)bVar5 * -2 + 0xf];
          afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
               afStack_138[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
          fStack_ac = *(float *)pCVar2 + fStack_7c;
          afStack_a8[0] = *(float *)(pCVar2 + 4) + fStack_78;
          afStack_a8[1] = *(float *)(pCVar2 + 8) + fStack_74;
          fStack_c4 = *(float *)pCVar2 + fStack_7c;
          afStack_c0[(uint)bVar5 * -2] = afStack_a8[(uint)bVar5 * -2];
          afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if ((float *)puVar4 != &fStack_c4) {
            *(float *)puVar4 = fStack_c4;
            *(float *)&param_1->field_0x3240 = afStack_c0[0];
            *(float *)&param_1->field_0x3244 = afStack_c0[1];
          }
          iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            (param_1,(CVector3f *)puVar4,(CPathMap *)0x0,(CVector3f *)&DAT_02cfd900,
                             0.0,0.0);
          if (-1 < iVar1) {
            *(uint *)&param_1->field_0x3248 = 0;
            *(uint *)&param_1->field_0x3238 = 0xc0a00000;
            return 1;
          }
        }
        uStack_20 = uStack_20 + 1;
        if (8 < (int)uStack_20) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",param_1)
          ;
          *(uint *)&param_1->field_0x3238 = 0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    param_2 = *(float *)&param_1->field_0x3238 + param_2;
    *(float *)&param_1->field_0x3238 = param_2;
    if ((param_2 < 0.0) && (*(float *)&param_1->field_0x3248 <= (float)_DAT_005b88e6)) {
      iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        (param_1,(CVector3f *)&param_1->field_0x323c,(CPathMap *)0x0,
                         (CVector3f *)&DAT_02cfd900,0.0,0.0);
      if (iVar1 == 0) {
        return 1;
      }
      *(uint *)&param_1->field_0x3238 = 0;
      return 0;
    }
  }
  *(uint *)&param_1->field_0x3238 = 0;
  return 0;
}
