// Name: core_waypoint.cpp_FUN_00587e90
// Address: 00587e90
// Address Range: [[00587e90, 0058822a]]
// Convention: unknown
// Signature: undefined4 core_waypoint_cpp_FUN_00587e90(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_waypoint_cpp_FUN_00587e90(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10a0 [983];
  float *pfVar6;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [5];
  float afStack_a0 [3];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  uint uStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float *pfStack_10;
  CDemonActor *pCStack_c;
  int iStack_8;
  
  bVar5 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (((iVar2 == 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) &&
     (*(int *)&g_CGameHookPtr->field_0x8 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
    puVar3 = (uint *)&stack0xfffffee8;
    puVar4 = &stack0xffffff00;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    fStack_34 = fStack_100 + fStack_f4;
    fStack_30 = fStack_fc + fStack_f0;
    fStack_2c = fStack_f8 + fStack_ec;
    fStack_28 = fStack_100 + fStack_f4;
    afStack_78[(uint)bVar5 * -2 + 0x15] = afStack_78[(uint)bVar5 * -2 + 0x12];
    afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
         afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
    fStack_7c = fStack_28 * _DAT_005ee107;
    afStack_78[0] = fStack_24 * _DAT_005ee107;
    afStack_78[1] = fStack_20 * _DAT_005ee107;
    fStack_1c = fStack_28 * _DAT_005ee107;
    afStack_78[(uint)bVar5 * -2 + 0x18] = afStack_78[(uint)bVar5 * -2];
    afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
         afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (afStack_b4 + 8 != afStack_78 + 0x17) {
      fStack_94 = fStack_1c;
      fStack_90 = fStack_18;
      fStack_8c = fStack_14;
    }
    iStack_d0 = (int)ROUND(fStack_94 * _DAT_005fde10);
    iStack_cc = (int)ROUND(fStack_90 * _DAT_005fde10);
    iStack_c8 = (int)ROUND(fStack_8c * _DAT_005fde10);
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_d0);
    iStack_8 = 0;
    if (0 < *(int *)&param_1[1].field_0x21c) {
      pfStack_10 = (float *)&stack0xffffff24;
      pCStack_c = param_1;
      do {
        pCVar1 = *(CDemonActor **)&pCStack_c[1].field_0x220;
        if (param_1 <= pCVar1) {
          _DAT_01c35e60 = 2;
          (**(code **)(*(int *)&pCVar1->field_0x2b0 + 0x24))(pCVar1);
          puVar3 = (uint *)&stack0xfffffed0;
          puVar4 = &stack0xffffff18;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          afStack_78[2] = fStack_e8 + *pfStack_10;
          afStack_78[3] = fStack_e4 + pfStack_10[1];
          fStack_68 = fStack_e0 + pfStack_10[2];
          fStack_b8 = fStack_e8 + *pfStack_10;
          afStack_b4[(uint)bVar5 * -2] = afStack_78[(uint)bVar5 * -2 + 3];
          afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          pfVar6 = afStack_b4 + 2;
          fStack_58 = fStack_b8 * _DAT_005ee107;
          fStack_54 = afStack_b4[0] * _DAT_005ee107;
          fStack_50 = afStack_b4[1] * _DAT_005ee107;
          afStack_b4[2] = fStack_b8 * _DAT_005ee107;
          afStack_b4[(uint)bVar5 * -2 + 3] = afStack_78[(uint)bVar5 * -2 + 9];
          afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          core_actor_cpp_FUN_00408d70(pCVar1,pfVar6);
          pfVar6 = afStack_b4 + 5;
          afStack_a0[0] = (float)uStack_64;
          afStack_b4[(uint)bVar5 * -2 + 6] = afStack_78[(uint)bVar5 * -2 + 6];
          afStack_b4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
          core_actor_cpp_FUN_00408de0(param_1,pfVar6);
          fStack_4c = fStack_40;
          afStack_78[(uint)bVar5 * -2 + 0xc] = afStack_78[(uint)bVar5 * -2 + 0xf];
          afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
               afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
          if (&fStack_c4 != afStack_78 + 0xb) {
            fStack_c4 = fStack_4c;
            fStack_c0 = fStack_48;
            fStack_bc = fStack_44;
          }
          iStack_88 = (int)ROUND(fStack_c4 * _DAT_005fde10);
          iStack_84 = (int)ROUND(fStack_c0 * _DAT_005fde10);
          iStack_80 = (int)ROUND(fStack_bc * _DAT_005fde10);
          engine_special_cpp_FUN_0055d723
                    ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_88);
          engine_3d_c_FUN_00407c40(0,1);
        }
        pCStack_c = (CDemonActor *)&pCStack_c->field_0x8;
        iStack_8 = iStack_8 + 1;
      } while (iStack_8 < *(int *)&param_1[1].field_0x21c);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return 1;
  }
  return 0;
}
