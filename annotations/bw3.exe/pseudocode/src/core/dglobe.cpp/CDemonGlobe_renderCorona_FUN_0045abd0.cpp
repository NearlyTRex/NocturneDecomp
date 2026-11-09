// Name: core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0
// Address: 0045abd0
// Address Range: [[0045abd0, 0045adc0]]
// Convention: __cdecl
// Signature: void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045abd0(CDemonGlobe *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045abd0(CDemonGlobe *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float afStackY_1044 [1005];
  SMRGLHeaderPrimitive *prim;
  code *scanline_renderer;
  SMRGLHeaderPrimitive local_84 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58 [5];
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28 [4];
  float local_18;
  float local_14;
  
  bVar3 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (0x01BDD7E4,(CVector3f *)(this_ptr + 0x24));
  engine_matrix_c_FUN_0046d1c0(DAT_005f2afc);
  local_5c = local_58[2];
  local_58[(uint)bVar3 * -2] = local_58[(uint)bVar3 * -2 + 3];
  local_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  local_28[2] = local_5c - *(float *)(this_ptr + 0x24);
  local_28[3] = local_58[0] - *(float *)(this_ptr + 0x28);
  local_18 = local_58[1] - *(float *)(this_ptr + 0x2c);
  local_2c = local_28[2];
  local_28[(uint)bVar3 * -2] = local_28[(uint)bVar3 * -2 + 3];
  local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if (&local_5c != &local_2c) {
    local_5c = local_2c;
    local_58[0] = local_28[0];
    local_58[1] = local_28[1];
  }
  if (*(float *)(this_ptr + 0x18) <=
      local_58[1] * local_58[1] + local_5c * local_5c + local_58[0] * local_58[0]) {
    local_14 = *(float *)(this_ptr + 0x30) * (float)_DAT_005bafe9;
    iVar2 = 0;
    iVar1 = 0;
    do {
      local_44 = (float)*(int *)((int)&DAT_005f1954 + iVar1) * local_14;
      local_40 = (float)*(int *)((int)&DAT_005f1958 + iVar1) * local_14;
      local_3c = (float)*(int *)((int)&DAT_005f195c + iVar1) * local_14;
      local_38 = (int)ROUND(local_44 * _DAT_005de380);
      local_34 = (int)ROUND(local_40 * _DAT_005de380);
      local_30 = (int)ROUND(local_3c * _DAT_005de380);
      iVar1 = iVar1 + 0xc;
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)0x01BDD7E4 + iVar2),(CVector3i *)&local_38);
      iVar2 = iVar2 + 0x30;
    } while (iVar1 != 0x2e8);
    iVar1 = 0;
    do {
      this_ptr_00 = 0x01BDD7E4;
      local_80 = *(uint *)((int)&DAT_005f1c3c + iVar1);
      local_7c = *(uint *)((int)&DAT_005f1c40 + iVar1);
      local_78 = *(uint *)((int)&DAT_005f1c44 + iVar1);
      local_74 = *(uint *)((int)&DAT_005f1c48 + iVar1);
      local_6c = *(uint *)((int)&DAT_005f1c50 + iVar1);
      fVar4 = (float10)*(int *)((int)&DAT_005f1c4c + iVar1) * (float10)*(float *)(this_ptr + 0x30);
      local_68 = *(uint *)((int)&DAT_005f1c54 + iVar1);
      local_64 = *(uint *)((int)&DAT_005f1c58 + iVar1);
      scanline_renderer = core_dcamera_cpp_renderCoronaDepthScanline_FUN_0044d060;
      local_60 = *(uint *)((int)&DAT_005f1c5c + iVar1);
      iVar1 = iVar1 + 0x24;
      prim = local_84;
      round();
      local_70 = (int)ROUND(fVar4);
      engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
                (this_ptr_00,prim,scanline_renderer);
    } while (iVar1 != 0xbd0);
    return;
  }
  core_dcamera_cpp_initializeCoronaBuffers_FUN_0044d020();
  return;
}
