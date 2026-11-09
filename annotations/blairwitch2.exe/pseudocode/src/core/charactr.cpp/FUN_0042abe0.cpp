// Name: core_charactr.cpp_FUN_0042abe0
// Address: 0042abe0
// Address Range: [[0042abe0, 0042b25b]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042abe0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_0042abe0(CCharacter *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  byte bVar5;
  float afStackY_1128 [990];
  CMatrix3x3f *pCVar6;
  CVector3f *pCVar7;
  float fStack_198;
  float fStack_194;
  CMatrix3x3f aCStack_190 [40];
  CMatrix3x3f aCStack_168 [40];
  uint local_140;
  float local_13c [4];
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_118;
  uint uStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  uint uStack_f8;
  uint uStack_f4;
  float fStack_f0;
  float local_ec;
  float afStack_e8 [5];
  float local_d4;
  float fStack_c8;
  float afStack_c4 [2];
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  byte auStack_a4 [8];
  float afStack_9c [4];
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [5];
  uint uStack_50;
  float fStack_4c;
  uint uStack_48;
  uint local_44;
  float local_38;
  int local_34;
  uint uStack_30;
  float local_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  float *pfStack_1c;
  float *pfStack_18;
  float *local_14;
  
  bVar5 = 0;
  if (0.0 <= *(float *)&param_1->field_0x303c) {
    local_14 = (float *)&param_1->field_0x20;
    iVar2 = core_hero_cpp_FUN_004ce050(local_14);
    local_34 = iVar2;
    core_actor_cpp_FUN_00408de0(iVar2,local_14);
    local_8c = local_d4;
    afStack_9c[(uint)bVar5 * -2 + 5] = afStack_e8[(uint)bVar5 * -2 + 6];
    afStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 6] =
         afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    core_vecdir_cpp_FUN_005838f0(afStack_9c + 4);
    local_140 = afStack_64[2];
    local_13c[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2 + 3];
    local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    local_38 = ABS(local_13c[0]);
    local_110 = *local_14 - *(float *)(iVar2 + 0x20);
    local_10c = local_14[1] - *(float *)(iVar2 + 0x24);
    local_108 = local_14[2] - *(float *)(iVar2 + 0x28);
    local_ec = local_110;
    afStack_e8[(uint)bVar5 * -2] = local_13c[(uint)bVar5 * -2 + 0xc];
    afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    core_vecdir_cpp_FUN_005838f0(&local_ec);
    afStack_e8[2] = (float)local_44;
    afStack_e8[(uint)bVar5 * -2 + 3] = afStack_64[(uint)bVar5 * -2 + 9];
    afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    local_2c = afStack_e8[3];
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x154))(iVar2);
    if ((iVar2 != 0) && (local_38 < _DAT_005cd2e6)) {
      uStack_30 = (uint)(local_8c < 0.0);
      uStack_20 = 0;
      puVar4 = &param_1->field_0x3040;
      pfStack_1c = (float *)(local_34 + 0x20);
      do {
        uVar3 = uStack_20;
        if (uStack_30 != 0) {
          uVar3 = uStack_20 ^ 1;
        }
        local_14 = (float *)(local_2c + *(float *)(&DAT_00609aa0 + uVar3 * 4));
        uStack_50 = 0;
        uStack_48 = 0;
        fStack_4c = local_2c + *(float *)(&DAT_00609aa0 + uVar3 * 4);
        pCVar7 = (CVector3f *)auStack_a4;
        pCVar6 = aCStack_168;
        auStack_a4._0_4_ = 0;
        *(float *)(auStack_a4 + (uint)bVar5 * -8 + 4) = afStack_64[(uint)bVar5 * -2 + 6];
        *(float *)(auStack_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        core_dirmat_cpp_FUN_00449280(pCVar6,pCVar7);
        for (fStack_194 = 6.5; (float)_DAT_005cd31e < fStack_194;
            fStack_194 = fStack_194 + _DAT_005cd326) {
          uStack_f8 = 0;
          uStack_f4 = 0;
          fStack_f0 = fStack_194;
          core_dirmat_cpp_FUN_00449530(aCStack_168,&uStack_f8);
          pfVar1 = pfStack_1c;
          afStack_9c[1] = fStack_68;
          afStack_9c[(uint)bVar5 * -2 + 2] = afStack_64[(uint)bVar5 * -2];
          afStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3] =
               afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          fStack_128 = *pfVar1 + afStack_9c[1];
          fStack_124 = pfVar1[1] + afStack_9c[2];
          fStack_120 = pfVar1[2] + afStack_9c[3];
          local_13c[2] = *pfVar1 + afStack_9c[1];
          local_13c[(uint)bVar5 * 0xfffffffe + 3] = local_13c[(uint)bVar5 * 0xfffffffe + 6];
          local_13c[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4] =
               local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          if ((float *)puVar4 != local_13c + 2) {
            *(float *)puVar4 = local_13c[2];
            *(float *)&param_1->field_0x3044 = local_13c[3];
            *(uint *)&param_1->field_0x3048 = uStack_12c;
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            (param_1,(CVector3f *)puVar4,(CPathMap *)0x0,(CVector3f *)&DAT_0265370c,
                             0.0,0.0);
          if (-1 < iVar2) {
            *(uint *)&param_1->field_0x304c = 0;
            *(uint *)&param_1->field_0x303c = 0xc0800000;
            return 2;
          }
        }
        uStack_20 = uStack_20 + 1;
      } while ((int)uStack_20 < 6);
    }
    if (((ABS(fStack_88) <= (float)_DAT_005cd2f6) && (local_38 <= _DAT_005cd2fe)) &&
       (SQRT(fStack_84 * fStack_84 + local_8c * local_8c + fStack_88 * fStack_88) <=
        (float)_DAT_005cd306)) {
      param_2 = *(float *)&param_1->field_0x303c + param_2;
      *(float *)&param_1->field_0x303c = param_2;
      if (param_2 < (float)_DAT_005cd30e) {
        return 0;
      }
      uStack_24 = 0;
      pfStack_18 = (float *)(local_34 + 0x20);
      puVar4 = &param_1->field_0x3040;
      do {
        fStack_28 = (float)((int)uStack_24 / 2) * _DAT_005cd316 * _DAT_005cd31a;
        if ((uStack_24 & 1) != 0) {
          fStack_28 = -fStack_28;
        }
        local_14 = (float *)(local_2c + fStack_28);
        uStack_11c = 0;
        fStack_118 = local_2c + fStack_28;
        pCVar7 = &CStack_bc;
        uStack_114 = 0;
        pCVar6 = aCStack_190;
        CStack_bc._0_4_ = 0;
        *(float *)((int)&CStack_bc + (uint)bVar5 * -8 + 4) = local_13c[(uint)bVar5 * -2 + 9];
        *(float *)((int)&CStack_bc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        core_dirmat_cpp_FUN_00449280(pCVar6,pCVar7);
        for (fStack_198 = 4.5; (float)_DAT_005cd31e < fStack_198;
            fStack_198 = fStack_198 + _DAT_005cd326) {
          fStack_6c = fStack_198;
          uStack_74 = 0;
          uStack_70 = 0;
          core_dirmat_cpp_FUN_00449530(aCStack_190,&uStack_74);
          pfVar1 = pfStack_18;
          fStack_80 = fStack_104;
          afStack_9c[(uint)bVar5 * -2 + 8] = local_13c[(uint)bVar5 * -2 + 0xf];
          afStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
               local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
          fStack_b0 = *pfVar1 + fStack_80;
          afStack_ac[0] = pfVar1[1] + fStack_7c;
          afStack_ac[1] = pfVar1[2] + fStack_78;
          fStack_c8 = *pfVar1 + fStack_80;
          afStack_c4[(uint)bVar5 * -2] = afStack_ac[(uint)bVar5 * -2];
          afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if ((float *)puVar4 != &fStack_c8) {
            *(float *)puVar4 = fStack_c8;
            *(float *)&param_1->field_0x3044 = afStack_c4[0];
            *(float *)&param_1->field_0x3048 = afStack_c4[1];
          }
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            (param_1,(CVector3f *)puVar4,(CPathMap *)0x0,(CVector3f *)&DAT_0265370c,
                             0.0,0.0);
          if (-1 < iVar2) {
            *(uint *)&param_1->field_0x304c = 0;
            *(uint *)&param_1->field_0x303c = 0xc0a00000;
            return 1;
          }
        }
        uStack_24 = uStack_24 + 1;
        if (8 < (int)uStack_24) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s was in the way, but couldn't figure out where to move!\n",param_1)
          ;
          *(uint *)&param_1->field_0x303c = 0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    param_2 = *(float *)&param_1->field_0x303c + param_2;
    *(float *)&param_1->field_0x303c = param_2;
    if ((param_2 < 0.0) && (*(float *)&param_1->field_0x304c <= (float)_DAT_005cd2ee)) {
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        (param_1,(CVector3f *)&param_1->field_0x3040,(CPathMap *)0x0,
                         (CVector3f *)&DAT_0265370c,0.0,0.0);
      if (iVar2 == 0) {
        return 1;
      }
      *(uint *)&param_1->field_0x303c = 0;
      return 0;
    }
  }
  *(uint *)&param_1->field_0x303c = 0;
  return 0;
}
