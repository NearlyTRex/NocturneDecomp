// Name: FUN_00447c60
// Address: 00447c60
// Address Range: [[00447c60, 00447d0c]]
// Convention: unknown
// Signature: void FUN_00447c60(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00447c60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 / *(int *)(param_1 + 0x14c);
  iVar2 = (param_3 / *(int *)(param_1 + 0x14c)) * 0x140;
  core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886
            (*(int *)(param_1 + 0x144) * 2 +
             *(int *)(&DAT_01bd2fa0 + (*(int *)(param_1 + 0x148) + param_3) * 4) + param_2 * 2,
             *(int *)(param_1 + 0x13c) * param_3 * 4 + *(int *)(param_1 + 0x158) + param_2 * 4,
             iVar2 + 0xaafdb8 + iVar1 + param_4,&DAT_012ceb78 + param_4 + iVar1 + iVar2);
  return;
}
