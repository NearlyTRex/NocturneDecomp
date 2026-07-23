// Name: core_terrain.cpp_CTerrain_render_FUN_00549310
// Address: 00549310
// Address Range: [[00549310, 00549407]]
// Convention: __cdecl
// Signature: void __cdecl core_terrain_cpp_CTerrain_render_FUN_00549310(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_terrain_cpp_CTerrain_render_FUN_00549310(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uStack_3c;
  uint uStack_38;
  byte *puStack_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puStack_34 = (byte *)&local_30;
  if (_DAT_02dd10cc == 0) {
    return;
  }
  uStack_38 = DAT_005ae704;
  uStack_3c = 0x54933b;
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30();
  puStack_34 = (byte *)0x40800;
  uStack_38 = 0;
  uStack_3c = 0x01CADF80;
  local_24 = 0x40800;
  local_1c = 0;
  iVar3 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004b21b0();
  iVar2 = local_1c;
  iVar1 = local_24;
  fVar4 = (float10)256;
  puStack_34 = (byte *)0x54938a;
  local_20 = iVar3;
  fVar5 = (float10)round((float10)local_30 * fVar4);
  uStack_38 = 0x549391;
  fVar6 = (float10)round((float10)local_2c * fVar4);
  uStack_3c = 0x5493aa;
  local_20 = (int)ROUND(fVar6);
  fVar4 = (float10)round((float10)local_28 * fVar4);
  local_2c = (float)((int)ROUND(fVar6) + iVar3);
  local_24 = (int)ROUND(fVar4);
  local_28 = (float)((iVar2 + local_24) - *param_1);
  local_30 = (float)(iVar1 + (int)ROUND(fVar5));
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0(DAT_005ae704,&local_30);
  core_ground_cpp_CGround_render_FUN_004b2110(0x01CADF80);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (DAT_005ae704,&uStack_3c);
  return;
}
