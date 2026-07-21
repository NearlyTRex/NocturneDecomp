// Name: core_menu.cpp_renderAudioSpectrumBar_FUN_004cf2b0
// Address: 004cf2b0
// Address Range: [[004cf2b0, 004cf43b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte local_2c [4];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  piVar1 = DAT_005ae704;
  if (0 < param_3 * 2) {
    iVar2 = (param_1 + -0x10) * 0x10000;
    *(int *)(*DAT_005ae704 + 0x10) = iVar2;
    *(int *)(*piVar1 + 0x14) = param_2 << 0x10;
    iVar3 = (param_1 + 0x10) * 0x10000;
    *(int *)(*piVar1 + 0x40) = iVar3;
    *(int *)(*piVar1 + 0x44) = param_2 << 0x10;
    *(int *)(*piVar1 + 0x70) = iVar3;
    iVar3 = (param_2 + param_3 * -2) * 0x10000;
    *(int *)(*piVar1 + 0x74) = iVar3;
    *(int *)(*piVar1 + 0xa0) = iVar2;
    *(int *)(*piVar1 + 0xa4) = iVar3;
    *(uint *)(*piVar1 + 0x18) = 0x80000;
    *(uint *)(*piVar1 + 0x1c) = 0xf80000;
    *(uint *)(*piVar1 + 0x48) = 0xf80000;
    *(uint *)(*piVar1 + 0x4c) = 0xf80000;
    *(uint *)(*piVar1 + 0x78) = 0xf80000;
    *(uint *)(*piVar1 + 0x7c) = 0x80000;
    *(uint *)(*piVar1 + 0xa8) = 0x80000;
    *(uint *)(*piVar1 + 0xac) = 0x80000;
    local_28 = 4;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_14 = 0;
    local_c = 2;
    local_8 = 3;
    local_10 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(piVar1,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,
               &DAT_005bae58 +
               (((int)((_DAT_01cc5b64 + (_DAT_01cc5b64 >> 0x1f) * -0x10000) -
                      (uint)((_DAT_01cc5b64 >> 0x1f) << 0xf < 0)) >> 0x10) + param_1 & 7U) * 0x18);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,local_2c,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  }
  return;
}
