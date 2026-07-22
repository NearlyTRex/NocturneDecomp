// Name: core_charactr.cpp_FUN_0042af70
// Address: 0042af70
// Address Range: [[0042af70, 0042b48b]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042af70(int param_1,float param_2)

#include "nocturne.h"

uint core_charactr_cpp_FUN_0042af70(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float fStack_118;
  float fStack_110;
  byte auStack_10c [40];
  byte auStack_e4 [40];
  byte local_bc [12];
  uint uStack_b0;
  uint uStack_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  byte local_8c [12];
  uint uStack_80;
  float fStack_7c;
  uint uStack_78;
  byte auStack_74 [12];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  float fStack_58;
  uint uStack_54;
  byte auStack_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  uint uStack_38;
  uint uStack_34;
  float fStack_30;
  int local_2c;
  uint uStack_28;
  float local_24;
  float fStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  if (0.0 <= *(float *)(param_1 + 0x2dbc)) {
    pfVar1 = (float *)(param_1 + 0x20);
    iVar3 = core_hero_cpp_closestHeroToPoint_FUN_004b4500(pfVar1);
    local_2c = iVar3;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(iVar3,&local_a4,pfVar1);
    iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_bc,&local_a4);
    fVar2 = *(float *)(iVar4 + 4);
    local_44 = *pfVar1 - *(float *)(iVar3 + 0x20);
    local_40 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
    local_3c = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
    iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_8c,&local_44);
    local_24 = *(float *)(iVar4 + 4);
    iVar4 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x140))(iVar3);
    iVar3 = local_2c;
    if ((iVar4 != 0) && (ABS(fVar2) < (float)0.78539816337500001)) {
      uStack_28 = (uint)(local_a4 < 0.0);
      pfVar1 = (float *)(param_1 + 0x2dc0);
      uStack_1c = 0;
      pfVar7 = (float *)(local_2c + 0x20);
      do {
        uVar6 = uStack_1c;
        if (uStack_28 != 0) {
          uVar6 = uStack_1c ^ 1;
        }
        fStack_7c = local_24 + *(float *)(&DAT_005ad1d0 + uVar6 * 4);
        uStack_80 = 0;
        uStack_78 = 0;
        fStack_14 = fStack_7c;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(auStack_10c,&uStack_80);
        for (fStack_110 = 6.5; (float)2.3999999999999999 < fStack_110;
            fStack_110 = fStack_110 + -1.0f) {
          fStack_a8 = fStack_110;
          uStack_b0 = 0;
          uStack_ac = 0;
          pfVar5 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (auStack_10c,auStack_74,&uStack_b0);
          fStack_68 = *pfVar7 + *pfVar5;
          fStack_64 = *(float *)(iVar3 + 0x24) + pfVar5[1];
          fStack_60 = *(float *)(iVar3 + 0x28) + pfVar5[2];
          if (pfVar1 != &fStack_68) {
            *pfVar1 = fStack_68;
            *(float *)(param_1 + 0x2dc4) = fStack_64;
            *(float *)(param_1 + 0x2dc8) = fStack_60;
          }
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,pfVar1,0,&DAT_02dd1184,0,0);
          if (-1 < iVar4) {
            *(uint *)(param_1 + 0x2dcc) = 0;
            *(uint *)(param_1 + 0x2dbc) = 0xc0800000;
            return 2;
          }
        }
        uStack_1c = uStack_1c + 1;
      } while ((int)uStack_1c < 6);
    }
    iVar3 = local_2c;
    if (((ABS(fStack_a0) <= (float)4) && (ABS(fVar2) <= (float)0.52359877558333301)) &&
       (SQRT(fStack_9c * fStack_9c + local_a4 * local_a4 + fStack_a0 * fStack_a0) <=
        (float)4.5)) {
      param_2 = *(float *)(param_1 + 0x2dbc) + param_2;
      *(float *)(param_1 + 0x2dbc) = param_2;
      if (param_2 < (float)1.75) {
        return 0;
      }
      pfVar1 = (float *)(param_1 + 0x2dc0);
      uStack_18 = 0;
      pfVar7 = (float *)(local_2c + 0x20);
      do {
        fStack_20 = (float)((int)uStack_18 / 2) * (float)1.57079632675 * (float)0.25;
        if ((uStack_18 & 1) != 0) {
          fStack_20 = -fStack_20;
        }
        fStack_58 = local_24 + fStack_20;
        uStack_5c = 0;
        uStack_54 = 0;
        fStack_14 = fStack_58;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(auStack_e4,&uStack_5c);
        for (fStack_118 = 4.5; (float)2.3999999999999999 < fStack_118;
            fStack_118 = fStack_118 + -1.0f) {
          fStack_30 = fStack_118;
          uStack_38 = 0;
          uStack_34 = 0;
          pfVar5 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (auStack_e4,auStack_50,&uStack_38);
          fStack_98 = *pfVar7 + *pfVar5;
          fStack_94 = *(float *)(iVar3 + 0x24) + pfVar5[1];
          fStack_90 = *(float *)(iVar3 + 0x28) + pfVar5[2];
          if (pfVar1 != &fStack_98) {
            *pfVar1 = fStack_98;
            *(float *)(param_1 + 0x2dc4) = fStack_94;
            *(float *)(param_1 + 0x2dc8) = fStack_90;
          }
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,pfVar1,0,&DAT_02dd1184,0,0);
          if (-1 < iVar4) {
            *(uint *)(param_1 + 0x2dcc) = 0;
            *(uint *)(param_1 + 0x2dbc) = 0xc0a00000;
            return 1;
          }
        }
        uStack_18 = uStack_18 + 1;
        if (8 < (int)uStack_18) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s was in the way, but couldn't figure out where to move!\n",param_1);
          *(uint *)(param_1 + 0x2dbc) = 0;
          return 0;
        }
      } while( true );
    }
  }
  else {
    param_2 = *(float *)(param_1 + 0x2dbc) + param_2;
    *(float *)(param_1 + 0x2dbc) = param_2;
    if (((param_2 < 0.0) && (*(float *)(param_1 + 0x2dcc) <= (float)1.5)) &&
       (iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,param_1 + 0x2dc0,0,&DAT_02dd1184,0,0), iVar3 == 0)) {
      return 1;
    }
  }
  *(uint *)(param_1 + 0x2dbc) = 0;
  return 0;
}
