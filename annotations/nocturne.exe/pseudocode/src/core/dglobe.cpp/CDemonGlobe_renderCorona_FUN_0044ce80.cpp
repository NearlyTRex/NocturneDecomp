// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80
// Address: 0044ce80
// Address Range: [[0044ce80, 0044d050]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  uint uVar6;
  byte *puVar7;
  byte *puVar8;
  byte local_64 [4];
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (0x01B4D738,(float *)(param_1 + 0x24));
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(DAT_005ae704,&local_18);
  local_24 = local_18 - *(float *)(param_1 + 0x24);
  local_20 = local_14 - *(float *)(param_1 + 0x28);
  local_1c = local_10 - *(float *)(param_1 + 0x2c);
  if (&local_18 != &local_24) {
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
  }
  if (*(float *)(param_1 + 0x18) <= local_10 * local_10 + local_18 * local_18 + local_14 * local_14)
  {
    local_c = *(float *)(param_1 + 0x30) * (float)0.00390625;
    iVar4 = 0;
    iVar3 = 0;
    do {
      local_3c = (float)*(int *)((int)&DAT_005ad594 + iVar3) * local_c;
      local_38 = (float)*(int *)((int)&DAT_005ad598 + iVar3) * local_c;
      local_34 = (float)*(int *)((int)&DAT_005ad59c + iVar3) * local_c;
      local_30 = (int)ROUND(local_3c * _DAT_0059bff0);
      local_2c = (int)ROUND(local_38 * _DAT_0059bff0);
      local_28 = (int)ROUND(local_34 * _DAT_0059bff0);
      iVar3 = iVar3 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*0x01B4D738 + iVar4,&local_30);
      iVar4 = iVar4 + 0x30;
    } while (iVar3 != 0x2e8);
    iVar3 = 0;
    do {
      piVar2 = 0x01B4D738;
      local_60 = *(uint *)((int)&DAT_005ad87c + iVar3);
      local_5c = *(uint *)((int)&DAT_005ad880 + iVar3);
      local_58 = *(uint *)((int)&DAT_005ad884 + iVar3);
      local_54 = *(uint *)((int)&DAT_005ad888 + iVar3);
      piVar1 = (int *)((int)&DAT_005ad88c + iVar3);
      local_4c = *(uint *)((int)&DAT_005ad890 + iVar3);
      local_48 = *(uint *)((int)&DAT_005ad894 + iVar3);
      local_44 = *(uint *)((int)&DAT_005ad898 + iVar3);
      puVar8 = &LAB_00444180;
      local_40 = *(uint *)((int)&DAT_005ad89c + iVar3);
      puVar7 = local_64;
      iVar3 = iVar3 + 0x24;
      uVar6 = 0x44d008;
      fVar5 = (float10)round
                                 ((float10)*piVar1 * (float10)*(float *)(param_1 + 0x30));
      local_54 = (int)ROUND(fVar5);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                (piVar2,uVar6,puVar7,puVar8);
    } while (iVar3 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_00444140();
  return;
}
