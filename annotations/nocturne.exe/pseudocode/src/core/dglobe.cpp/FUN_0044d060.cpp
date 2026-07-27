// Name: core_dglobe.cpp_FUN_0044d060
// Address: 0044d060
// Address Range: [[0044d060, 0044d1e9]]
// Convention: unknown
// Signature: void core_dglobe_cpp_FUN_0044d060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dglobe_cpp_FUN_0044d060(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  uint uVar6;
  byte *puVar7;
  byte auStack_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (0x01B4D738,param_1 + 0x24);
  iVar3 = 0;
  do {
    local_28 = (float)*(int *)((int)&DAT_005ad594 + iVar4) * (float)_DAT_0057c391 *
               *(float *)(param_1 + 0x30);
    local_24 = (float)*(int *)((int)&DAT_005ad598 + iVar4) * (float)_DAT_0057c391 *
               *(float *)(param_1 + 0x30);
    local_20 = (float)*(int *)((int)&DAT_005ad59c + iVar4) * (float)_DAT_0057c391 *
               *(float *)(param_1 + 0x30);
    local_1c = (int)ROUND(local_28 * _DAT_0059bff0);
    local_18 = (int)ROUND(local_24 * _DAT_0059bff0);
    local_14 = (int)ROUND(local_20 * _DAT_0059bff0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*0x01B4D738 + iVar3,&local_1c);
    piVar1 = 0x01B4D738;
    *(uint *)(iVar3 + 0x18 + *0x01B4D738) = 0x800000;
    *(uint *)(iVar3 + 0x1c + *piVar1) = 0x800000;
    *(uint *)(iVar3 + 0x2c + *piVar1) = 0x8000;
    *(uint *)(*piVar1 + 0x20 + iVar3) = 0xffff;
    *(uint *)(*piVar1 + 0x24 + iVar3) = 0xffff;
    iVar4 = iVar4 + 0xc;
    *(uint *)(iVar3 + 0x28 + *piVar1) = 0xffff;
    iVar3 = iVar3 + 0x30;
  } while (iVar4 != 0x2e8);
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(&DAT_005ad57c);
  iVar3 = 0;
  do {
    piVar2 = 0x01B4D738;
    puVar7 = auStack_50;
    local_4c = *(uint *)((int)&DAT_005ad87c + iVar3);
    local_48 = *(uint *)((int)&DAT_005ad880 + iVar3);
    local_44 = *(uint *)((int)&DAT_005ad884 + iVar3);
    local_40 = *(uint *)((int)&DAT_005ad888 + iVar3);
    piVar1 = (int *)((int)&DAT_005ad88c + iVar3);
    local_38 = *(uint *)((int)&DAT_005ad890 + iVar3);
    local_34 = *(uint *)((int)&DAT_005ad894 + iVar3);
    local_30 = *(uint *)((int)&DAT_005ad898 + iVar3);
    local_2c = *(uint *)((int)&DAT_005ad89c + iVar3);
    iVar3 = iVar3 + 0x24;
    uVar6 = 0x44d1cd;
    fVar5 = (float10)round
                               ((float10)*piVar1 * (float10)*(float *)(param_1 + 0x30));
    local_40 = (int)ROUND(fVar5);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(piVar2,uVar6,puVar7);
  } while (iVar3 != 0xbd0);
  return;
}
