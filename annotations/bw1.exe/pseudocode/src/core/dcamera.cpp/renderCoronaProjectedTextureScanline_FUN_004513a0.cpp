// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004513a0
// Address: 004513a0
// Address Range: [[004513a0, 004515a2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004513a0(int scanline_y,int x_start,int x_end)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_004513a0(int scanline_y,int x_start,int x_end)

{
  uint uVar1;
  float *pfVar2;
  byte bVar3;
  int aiStackY_1028 [1016];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  CVector3i CStack_34;
  uint uStack_28;
  CVector3i *pCStack_24;
  uint *puStack_20;
  uint *puStack_1c;
  char *pcStack_18;
  
  bVar3 = 0;
  pCStack_24 = (CVector3i *)(scanline_y * 0xf00 + 0x939bd8 + x_start * 0xc);
  pcStack_18 = (char *)(x_start + scanline_y * 0x140 + 0xb10718);
  puStack_1c = (uint *)(scanline_y * 0x500 + 0x14df1d0 + x_start * 4);
  puStack_20 = (uint *)(*(int *)(&DAT_01c4480c + (scanline_y << (DAT_01323d00 & 0x1f)) * 4) +
                       (x_start << (DAT_01323d00 & 0x1f)) * 4);
  pfVar2 = (float *)(x_start * 0xc + scanline_y * 0xf00 + 0xa1bad8);
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*puStack_20 < *puStack_1c) &&
       (0.0 <= pfVar2[2] * _DAT_01323cf8 + *pfVar2 * _DAT_01323ce0 + pfVar2[1] * _DAT_01323cec)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0
                (_DAT_01323cd4,pCStack_24,&CStack_34);
      iStack_40 = CStack_34.x;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((0 < iStack_38) &&
         ((uVar1 = (uint)*(ushort *)
                          (_DAT_01323cd4[2].rect_array[0x43].x_min +
                          ((iStack_40 >> 0x10) +
                          (iStack_3c >> 0x10) * _DAT_01323cd4[1].rect_array[0x62].x_max) * 2),
          (int)uVar1 < _DAT_00b81c9c && (iStack_38 < (int)(uVar1 + 0x80))))) {
        uStack_28 = _DAT_01323cd4[1].rect_array[0x5c].y_max &
                    iStack_40 >> ((byte)_DAT_01323cd4[1].rect_array[0x62].y_max & 0x1f);
        *pcStack_18 = *pcStack_18 +
                      (char)((int)((_DAT_00b81c9c - uVar1) *
                                  (uint)*(byte *)(((iStack_3c >>
                                                    ((byte)_DAT_01323cd4[1].rect_array[99].x_min &
                                                    0x1f) & _DAT_01323cd4[1].rect_array[0x5c].y_max)
                                                  << ((byte)_DAT_01323cd4[1].rect_array[0x5c].x_max
                                                     & 0x1f)) + uStack_28 +
                                                 _DAT_01323cd4[1].rect_array[0x5b].y_min)) >>
                            (DAT_00b81ca0 & 0x1f));
      }
    }
    pfVar2 = pfVar2 + 3;
    puStack_1c = puStack_1c + 1;
    pCStack_24 = pCStack_24 + 1;
    puStack_20 = puStack_20 + (1 << (DAT_01323d00 & 0x1f));
    pcStack_18 = pcStack_18 + 1;
  }
  return;
}
