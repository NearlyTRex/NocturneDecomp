// Name: core_dcamera.cpp_FUN_00447bb0
// Address: 00447bb0
// Address Range: [[00447bb0, 00447c57]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00447bb0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00447bb0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 / *(int *)(param_1 + 0x14c);
  iVar2 = (param_3 / *(int *)(param_1 + 0x14c)) * 0x140;
  core_dstrender_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0
            (*(int *)(param_1 + 0x144) * 4 +
             *(int *)(&DAT_01bd2fa0 + (*(int *)(param_1 + 0x148) + param_3) * 4) + param_2 * 4,
             *(int *)(param_1 + 0x13c) * param_3 * 4 + *(int *)(param_1 + 0x158) + param_2 * 4,
             iVar1 + iVar2 + 0xaafdb8 + param_4,&DAT_012ceb78 + param_4 + iVar1 + iVar2);
  return;
}
