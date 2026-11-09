// Name: core_mirror.cpp_FUN_00519cae
// Address: 00519cae
// Address Range: [[00519cae, 00519e39]]
// Convention: unknown
// Signature: int core_mirror_cpp_FUN_00519cae(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_mirror_cpp_FUN_00519cae(float *param_1)

{
  int iVar1;
  SMRGLHeaderPrimitive aSStack_64 [4];
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
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
  
  iStack_24 = (int)ROUND(*param_1 * _DAT_00603ce0);
  iStack_20 = (int)ROUND(param_1[1] * _DAT_00603ce0);
  iStack_1c = (int)ROUND(param_1[2] * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_24);
  iStack_30 = (int)ROUND(param_1[3] * _DAT_00603ce0);
  iStack_2c = (int)ROUND(param_1[4] * _DAT_00603ce0);
  iStack_28 = (int)ROUND(param_1[5] * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_30);
  iStack_3c = (int)ROUND(param_1[6] * _DAT_00603ce0);
  iStack_38 = (int)ROUND(param_1[7] * _DAT_00603ce0);
  iStack_34 = (int)ROUND(param_1[8] * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_3c);
  iStack_18 = (int)ROUND(param_1[9] * _DAT_00603ce0);
  iStack_14 = (int)ROUND(param_1[10] * _DAT_00603ce0);
  iStack_10 = (int)ROUND(param_1[0xb] * _DAT_00603ce0);
  engine_special_cpp_FUN_0058043c
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_18);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  uStack_60 = 4;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_4c = 0;
  uStack_48 = 1;
  uStack_44 = 2;
  uStack_40 = 3;
  iVar1 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                    (DAT_00612560,aSStack_64);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  return iVar1;
}
