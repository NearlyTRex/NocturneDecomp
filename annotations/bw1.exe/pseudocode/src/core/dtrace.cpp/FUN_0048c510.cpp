// Name: core_dtrace.cpp_FUN_0048c510
// Address: 0048c510
// Address Range: [[0048c510, 0048ca33]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0048c510(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_0048c510(int param_1,float *param_2)

{
  uint uVar1;
  SMRGLPrimitivePoly aSStack_e8 [4];
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_c4;
  uint uStack_b8;
  uint uStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fStack_58 = *(float *)(param_1 + 0x28) * _DAT_005db964;
  fStack_54 = *(float *)(param_1 + 0x2c) * _DAT_005db964;
  fStack_50 = *(float *)(param_1 + 0x30) * _DAT_005db964;
  if (&fStack_a0 != &fStack_4c) {
    fStack_a0 = fStack_58;
    fStack_9c = fStack_54;
    fStack_98 = fStack_50;
  }
  fStack_4c = fStack_58;
  fStack_48 = fStack_54;
  fStack_44 = fStack_50;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
            (0x01BC120C,(CVector3i *)0x1c3d424);
  iStack_94 = (int)ROUND(*param_2 * _DAT_005ff620);
  iStack_90 = (int)ROUND(param_2[1] * _DAT_005ff620);
  iStack_8c = (int)ROUND(param_2[2] * _DAT_005ff620);
  engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_94);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1];
  fStack_74 = param_2[2];
  iStack_70 = (int)ROUND(fStack_7c * _DAT_005ff620);
  iStack_6c = (int)ROUND(fStack_78 * _DAT_005ff620);
  iStack_68 = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_70);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1];
  fStack_74 = param_2[2] + fStack_98;
  iStack_40 = (int)ROUND(fStack_7c * _DAT_005ff620);
  iStack_3c = (int)ROUND(fStack_78 * _DAT_005ff620);
  iStack_38 = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_40);
  fStack_7c = *param_2;
  fStack_78 = param_2[1];
  fStack_74 = param_2[2] + fStack_98;
  iStack_64 = (int)ROUND(fStack_7c * _DAT_005ff620);
  iStack_60 = (int)ROUND(fStack_78 * _DAT_005ff620);
  iStack_5c = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_64);
  fStack_7c = *param_2;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2];
  iStack_34 = (int)ROUND(fStack_7c * _DAT_005ff620);
  iStack_30 = (int)ROUND(fStack_78 * _DAT_005ff620);
  iStack_2c = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0xc0),(CVector3i *)&iStack_34);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2];
  iStack_88 = (int)ROUND(fStack_7c * _DAT_005ff620);
  iStack_84 = (int)ROUND(fStack_78 * _DAT_005ff620);
  iStack_80 = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0xf0),(CVector3i *)&iStack_88);
  fStack_7c = *param_2 + fStack_a0;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2] + fStack_98;
  iStack_1c = (int)ROUND(fStack_7c * _DAT_005ff620);
  iStack_18 = (int)ROUND(fStack_78 * _DAT_005ff620);
  iStack_14 = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x120),(CVector3i *)&iStack_1c);
  fStack_7c = *param_2;
  fStack_78 = param_2[1] + fStack_9c;
  fStack_74 = param_2[2] + fStack_98;
  iStack_28 = (int)ROUND(fStack_7c * _DAT_005ff620);
  iStack_24 = (int)ROUND(fStack_78 * _DAT_005ff620);
  iStack_20 = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x150),(CVector3i *)&iStack_28);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(DAT_00612560,uVar1 & 0xff);
  uStack_e4 = 4;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  uStack_ac = 0;
  uStack_b8 = 1;
  uStack_d0 = 4;
  uStack_c4 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_ac = 2;
  uStack_b8 = 3;
  uStack_c4 = 7;
  uStack_d0 = 6;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_c4 = 7;
  uStack_ac = 0;
  uStack_b8 = 4;
  uStack_d0 = 3;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_ac = 1;
  uStack_b8 = 2;
  uStack_c4 = 6;
  uStack_d0 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_c4 = 6;
  uStack_ac = 4;
  uStack_b8 = 5;
  uStack_d0 = 7;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_b8 = 2;
  uStack_c4 = 1;
  uStack_ac = 3;
  uStack_d0 = 0;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return;
}
