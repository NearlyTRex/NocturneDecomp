// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00
// Address: 004b1d00
// Address Range: [[004b1d00, 004b1de7]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(int *param_1,int param_2,int param_3)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0
            (param_1[10],*(ushort *)(param_1[9] + 2 + (param_3 * *param_1 + param_2) * 4));
  (&DAT_005c502c)[param_1[0x14] * 0xc] = 0xf80000;
  *(uint *)(&DAT_005c5030 + param_1[0x14] * 0x30) = 0xf80000;
  (&DAT_005c502c)[param_1[0x13] * 0xc] = 0x80000;
  *(uint *)(&DAT_005c5030 + param_1[0x13] * 0x30) = 0xf80000;
  (&DAT_005c502c)[param_1[0x16] * 0xc] = 0x80000;
  *(uint *)(&DAT_005c5030 + param_1[0x16] * 0x30) = 0x80000;
  (&DAT_005c502c)[param_1[0x15] * 0xc] = 0xf80000;
  *(uint *)(&DAT_005c5030 + param_1[0x15] * 0x30) = 0x80000;
  return;
}
