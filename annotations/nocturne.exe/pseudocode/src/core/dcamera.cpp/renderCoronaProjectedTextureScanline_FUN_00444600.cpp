// Name: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_00444600
// Address: 00444600
// Address Range: [[00444600, 00444802]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_00444600(int scanline_y,int x_start,int x_end)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_renderCoronaProjectedTextureScanline_FUN_00444600(int scanline_y,int x_start,int x_end)

{
  uint uVar1;
  CVector3f *pCVar2;
  byte bVar3;
  int aiStackY_1028 [1016];
  int local_40;
  int local_3c;
  int local_38;
  CVector3i local_34;
  uint local_28;
  CVector3i *local_24;
  uint *local_20;
  uint *local_1c;
  char *local_18;
  
  bVar3 = 0;
  local_24 = (CVector3i *)(scanline_y * 0xf00 + 0x8d9278 + x_start * 0xc);
  local_18 = (char *)(x_start + scanline_y * 0x140 + 0xa9d078);
  local_1c = (uint *)(scanline_y * 0x500 + 0x146ba10 + x_start * 4);
  local_20 = (uint *)(*(int *)(&DAT_01bd4260 + (scanline_y << (DAT_012b0660 & 0x1f)) * 4) +
                     (x_start << (DAT_012b0660 & 0x1f)) * 4);
  pCVar2 = g_CVector3f_ARRAY_009bb178 + scanline_y * 0x140 + x_start;
  for (; x_start < x_end; x_start = x_start + 1) {
    if ((*local_20 < *local_1c) &&
       (0.0 <= pCVar2->z * _DAT_012b0658 + pCVar2->x * _DAT_012b0640 + pCVar2->y * _DAT_012b064c)) {
      core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                (_DAT_012b0634,local_24,&local_34);
      local_40 = local_34.x;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
           *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if ((0 < local_38) &&
         ((uVar1 = (uint)*(ushort *)
                          (_DAT_012b0634[2].rect_array[0x43].x_min +
                          ((local_40 >> 0x10) +
                          (local_3c >> 0x10) * _DAT_012b0634[1].rect_array[0x62].x_max) * 2),
          (int)uVar1 < _DAT_00b0e5fc && (local_38 < (int)(uVar1 + 0x80))))) {
        local_28 = _DAT_012b0634[1].rect_array[0x5c].y_max &
                   local_40 >> ((byte)_DAT_012b0634[1].rect_array[0x62].y_max & 0x1f);
        *local_18 = *local_18 +
                    (char)((int)((_DAT_00b0e5fc - uVar1) *
                                (uint)*(byte *)(((local_3c >>
                                                  ((byte)_DAT_012b0634[1].rect_array[99].x_min &
                                                  0x1f) & _DAT_012b0634[1].rect_array[0x5c].y_max)
                                                << ((byte)_DAT_012b0634[1].rect_array[0x5c].x_max &
                                                   0x1f)) + local_28 +
                                               _DAT_012b0634[1].rect_array[0x5b].y_min)) >>
                          (DAT_00b0e600 & 0x1f));
      }
    }
    pCVar2 = pCVar2 + 1;
    local_1c = local_1c + 1;
    local_24 = local_24 + 1;
    local_20 = local_20 + (1 << (DAT_012b0660 & 0x1f));
    local_18 = local_18 + 1;
  }
  return;
}
