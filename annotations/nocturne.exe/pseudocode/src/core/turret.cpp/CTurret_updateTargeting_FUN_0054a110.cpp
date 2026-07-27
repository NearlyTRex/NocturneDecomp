// Name: core_turret.cpp_CTurret_updateTargeting_FUN_0054a110
// Address: 0054a110
// Address Range: [[0054a110, 0054a633]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_updateTargeting_FUN_0054a110(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  byte auStack_e4 [24];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  byte auStack_84 [12];
  byte auStack_78 [12];
  byte auStack_6c [12];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  byte auStack_54 [12];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  byte auStack_3c [12];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  byte auStack_24 [16];
  int iStack_14;
  
  iVar5 = *(int *)(param_1 + 0x778);
  if (iVar5 == 0) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s has no guard trigger!\n",param_1);
    return;
  }
  (**(code **)(*(int *)(iVar5 + 0x14c) + 0x14))(iVar5,&local_b4);
  iVar5 = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(&fStack_cc);
  do {
    uVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(&local_b4,auStack_78,iVar5);
    uVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      (*(uint *)(param_1 + 0x778),auStack_6c,uVar2);
    iVar5 = iVar5 + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&fStack_cc,uVar2);
  } while (iVar5 < 8);
  iStack_14 = param_1 + 0x77c;
  uStack_9c = 0x41700000;
  uStack_98 = 0x41700000;
  uStack_94 = 0x41700000;
  fStack_90 = 999.0;
  fStack_8c = 999.0;
  fStack_88 = 999.0;
  fStack_cc = fStack_cc + -15.0f;
  fStack_c8 = fStack_c8 + -15.0f;
  fStack_c4 = fStack_c4 + -15.0f;
  fStack_c0 = fStack_c0 + 15.0f;
  fStack_bc = fStack_bc + 15.0f;
  fStack_b8 = fStack_b8 + 15.0f;
  iVar6 = 0;
  iVar5 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar6) {
        if ((int)fStack_8c < 0x42c60001) {
          core_turret_cpp_CTurret_aimAtTarget_FUN_0054a640(param_1,auStack_3c,param_2);
          if (*(float *)(param_1 + 0x2f8) <= 0.0) {
            (**(code **)(*(int *)(param_1 + 0x14c) + 0xdc))(param_1);
          }
          *(uint *)(param_1 + 0x864) = 0x3f800000;
          return;
        }
        core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(param_1,param_2);
        return;
      }
      iVar1 = *(int *)(0x01E57284 + 0x14cd70 + iVar5);
      iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar1,iStack_14);
      if ((((iVar3 != 0) && (fStack_cc <= *(float *)(iVar1 + 0x20))) &&
          (fStack_c8 <= *(float *)(iVar1 + 0x24))) &&
         (((fStack_c4 <= *(float *)(iVar1 + 0x28) && (*(float *)(iVar1 + 0x20) <= fStack_c0)) &&
          ((*(float *)(iVar1 + 0x24) <= fStack_bc && (*(float *)(iVar1 + 0x28) <= fStack_b8))))))
      break;
LAB_0054a296:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
    iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x54))(iVar1);
    if (iVar3 == 0) goto LAB_0054a296;
    __arrinit(&fStack_15c,10,&g_CVectorTypeInfo_005993b0);
    iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x4c))(iVar1,&fStack_15c);
    if (iVar3 < 1) {
      pfVar4 = (float *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_e4);
      fStack_30 = *pfVar4 + pfVar4[3];
      fStack_2c = pfVar4[1] + pfVar4[4];
      fStack_60 = fStack_30 * 0.5f;
      fStack_28 = pfVar4[2] + pfVar4[5];
      fStack_5c = fStack_2c * 0.5f;
      fStack_58 = fStack_28 * 0.5f;
      if (&fStack_15c != &fStack_60) {
        fStack_15c = fStack_60;
        fStack_158 = fStack_5c;
        fStack_154 = fStack_58;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar1,auStack_54,&fStack_15c);
    pfVar4 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                (*(uint *)(param_1 + 0x778),auStack_24,auStack_54);
    if (((*pfVar4 < local_b4) || (pfVar4[1] < fStack_b0)) ||
       ((pfVar4[2] < fStack_ac ||
        (((fStack_a8 < *pfVar4 || (fStack_a4 < pfVar4[1])) || (fStack_a0 < pfVar4[2]))))))
    goto LAB_0054a296;
    uVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,auStack_84,auStack_54)
    ;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&fStack_48,uVar2);
    if (((fStack_48 < -0.5235988f) || (1.22173f < fStack_48)) ||
       (SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c) <
        SQRT(fStack_40 * fStack_40 + fStack_48 * fStack_48 + fStack_44 * fStack_44)))
    goto LAB_0054a296;
    if (&fStack_90 != &fStack_48) {
      fStack_90 = fStack_48;
      fStack_8c = fStack_44;
      fStack_88 = fStack_40;
    }
    if (auStack_3c == auStack_54) goto LAB_0054a296;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
