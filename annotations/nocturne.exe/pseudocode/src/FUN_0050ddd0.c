// Name: FUN_0050ddd0
// Address: 0050ddd0
// Address Range: [[0050ddd0, 0050decc]]
// Convention: unknown
// Signature: void FUN_0050ddd0(int param_1,int param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0050ddd0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte local_38 [4];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*(int *)(0x01C775EC + 0x1f0) == 0) {
    if ((*(int *)(0x01C775EC + 500) != 0) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar1 == 0)) {
      core_set_cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670(param_1,param_2,param_3,0xffff);
      return;
    }
    if ((*(int *)(param_1 + 0x15a890) != 0) && (iVar2 = 0, iVar1 = param_2, 0 < param_3)) {
      do {
        local_34 = *(uint *)(iVar1 + 4);
        local_30 = *(uint *)(iVar1 + 8);
        local_2c = *(uint *)(iVar1 + 0xc);
        local_28 = *(uint *)(iVar1 + 0x10);
        local_24 = *(uint *)(iVar1 + 0x14);
        local_20 = *(uint *)(iVar1 + 0x18);
        local_1c = *(uint *)(iVar1 + 0x24);
        local_18 = *(uint *)(iVar1 + 0x30);
        local_14 = *(uint *)(iVar1 + 0x3c);
        iVar1 = iVar1 + 0x48;
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                  (DAT_005ae704,local_38,&DAT_00444440);
      } while (iVar2 < param_3);
    }
    engine_drender_cpp_CDemonRenderer_renderQuadBatch_FUN_00461440
              (DAT_005ae704,param_2,param_3,param_4);
  }
  return;
}
