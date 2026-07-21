// Name: FUN_0042c4c0
// Address: 0042c4c0
// Address Range: [[0042c4c0, 0042ca80]]
// Convention: unknown
// Signature: undefined4 FUN_0042c4c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042c4c0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  byte auStack_b8 [4];
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  byte local_90 [24];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
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
  int iStack_10;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_90,0);
    uVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar3);
    *(uint *)(param_1 + 0x56c) = uVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    if (*(int *)(param_1 + 0x56c) != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,param_1 + 0x164);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
      uStack_b4 = 4;
      uStack_a4 = 0;
      uStack_a8 = 0;
      uStack_ac = 0;
      uStack_b0 = 0;
      uStack_a0 = 0;
      uStack_9c = 1;
      uStack_98 = 2;
      uStack_94 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
      pfVar5 = (float *)(param_1 + 0x284);
      pfVar4 = (float *)(param_1 + 0x2a8);
      for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x150) + -1; iVar2 = iVar2 + 1) {
        iStack_3c = (int)ROUND(*pfVar5 * _DAT_0059b220);
        iStack_38 = (int)ROUND(pfVar5[1] * _DAT_0059b220);
        iStack_34 = (int)ROUND(pfVar5[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704,&iStack_3c);
        iStack_78 = (int)ROUND(*pfVar5 * _DAT_0059b220);
        iStack_74 = (int)ROUND(pfVar5[1] * _DAT_0059b220);
        iStack_70 = (int)ROUND(pfVar5[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x30,&iStack_78);
        iStack_48 = (int)ROUND(*pfVar4 * _DAT_0059b220);
        iStack_44 = (int)ROUND(pfVar4[1] * _DAT_0059b220);
        iStack_40 = (int)ROUND(pfVar4[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x60,&iStack_48);
        iStack_18 = (int)ROUND(*pfVar4 * _DAT_0059b220);
        iStack_14 = (int)ROUND(pfVar4[1] * _DAT_0059b220);
        iStack_10 = (int)ROUND(pfVar4[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x90,&iStack_18);
        piVar1 = DAT_005ae704;
        *(int *)(*DAT_005ae704 + 4) = *(int *)(*DAT_005ae704 + 4) + -0x40;
        *(int *)(*piVar1 + 0x34) = *(int *)(*piVar1 + 0x34) + 0x40;
        *(int *)(*piVar1 + 100) = *(int *)(*piVar1 + 100) + 0x40;
        *(int *)(*piVar1 + 0x94) = *(int *)(*piVar1 + 0x94) + -0x40;
        *(uint *)(*piVar1 + 0x10) = 0x80000000;
        *(uint *)(*piVar1 + 0x40) = 0x80000000;
        *(uint *)(*piVar1 + 0x70) = 0x80000000;
        *(uint *)(*piVar1 + 0xa0) = 0x80000000;
        *(uint *)(*piVar1 + 0x18) = 0x80000;
        *(uint *)(*piVar1 + 0x1c) = 0x80000;
        *(uint *)(*piVar1 + 0x48) = 0x80000;
        *(uint *)(*piVar1 + 0x4c) = 0xf80000;
        *(uint *)(*piVar1 + 0x78) = 0xf80000;
        *(uint *)(*piVar1 + 0x7c) = 0xf80000;
        *(uint *)(*piVar1 + 0xa8) = 0xf80000;
        *(uint *)(*piVar1 + 0xac) = 0x80000;
        iStack_6c = (int)ROUND(*pfVar5 * _DAT_0059b220);
        iStack_68 = (int)ROUND(pfVar5[1] * _DAT_0059b220);
        iStack_64 = (int)ROUND(pfVar5[2] * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&iStack_6c,0,0,2);
        iStack_6c = (int)ROUND(*pfVar4 * _DAT_0059b220);
        iStack_68 = (int)ROUND(pfVar4[1] * _DAT_0059b220);
        iStack_64 = (int)ROUND(pfVar4[2] * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&iStack_6c,0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,auStack_b8);
        iStack_30 = (int)ROUND(*pfVar5 * _DAT_0059b220);
        iStack_2c = (int)ROUND(pfVar5[1] * _DAT_0059b220);
        iStack_28 = (int)ROUND(pfVar5[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704,&iStack_30);
        iStack_60 = (int)ROUND(*pfVar5 * _DAT_0059b220);
        iStack_5c = (int)ROUND(pfVar5[1] * _DAT_0059b220);
        iStack_58 = (int)ROUND(pfVar5[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x30,&iStack_60);
        iStack_54 = (int)ROUND(*pfVar4 * _DAT_0059b220);
        iStack_50 = (int)ROUND(pfVar4[1] * _DAT_0059b220);
        iStack_4c = (int)ROUND(pfVar4[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x60,&iStack_54);
        iStack_24 = (int)ROUND(*pfVar4 * _DAT_0059b220);
        iStack_20 = (int)ROUND(pfVar4[1] * _DAT_0059b220);
        iStack_1c = (int)ROUND(pfVar4[2] * _DAT_0059b220);
        wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x90,&iStack_24);
        piVar1 = DAT_005ae704;
        *(int *)*DAT_005ae704 = *(int *)*DAT_005ae704 + -0x40;
        *(int *)(*piVar1 + 0x30) = *(int *)(*piVar1 + 0x30) + 0x40;
        *(int *)(*piVar1 + 0x60) = *(int *)(*piVar1 + 0x60) + 0x40;
        *(int *)(*piVar1 + 0x90) = *(int *)(*piVar1 + 0x90) + -0x40;
        *(uint *)(*piVar1 + 0x10) = 0x80000000;
        *(uint *)(*piVar1 + 0x40) = 0x80000000;
        *(uint *)(*piVar1 + 0x70) = 0x80000000;
        *(uint *)(*piVar1 + 0xa0) = 0x80000000;
        *(uint *)(*piVar1 + 0x18) = 0x80000;
        *(uint *)(*piVar1 + 0x1c) = 0x80000;
        *(uint *)(*piVar1 + 0x48) = 0x80000;
        *(uint *)(*piVar1 + 0x4c) = 0xf80000;
        *(uint *)(*piVar1 + 0x78) = 0xf80000;
        *(uint *)(*piVar1 + 0x7c) = 0xf80000;
        *(uint *)(*piVar1 + 0xa8) = 0xf80000;
        *(uint *)(*piVar1 + 0xac) = 0x80000;
        iStack_6c = (int)ROUND(*pfVar5 * _DAT_0059b220);
        iStack_68 = (int)ROUND(pfVar5[1] * _DAT_0059b220);
        iStack_64 = (int)ROUND(pfVar5[2] * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&iStack_6c,0,0,2);
        iStack_6c = (int)ROUND(*pfVar4 * _DAT_0059b220);
        iStack_68 = (int)ROUND(pfVar4[1] * _DAT_0059b220);
        iStack_64 = (int)ROUND(pfVar4[2] * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&iStack_6c,0,2,2);
        pfVar5 = pfVar5 + 9;
        pfVar4 = pfVar4 + 9;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,auStack_b8);
      }
      return 1;
    }
  }
  return 0;
}
