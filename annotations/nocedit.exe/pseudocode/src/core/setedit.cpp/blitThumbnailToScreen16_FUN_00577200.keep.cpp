// Name: core_setedit.cpp_blitThumbnailToScreen16_FUN_00577200
// Address: 00577200
// MANUAL RECONSTRUCTION
// Address Range: [[00577200, 00577326]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_blitThumbnailToScreen16_FUN_00577200(int thumbnail_index,int screen_x,int screen_row)

#include "nocturne.h"

void __cdecl core_setedit_cpp_blitThumbnailToScreen16_FUN_00577200(int thumbnail_index,int screen_x,int screen_row)

{
  int iVar2;
  ushort *local_24;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar1;
  
  local_1c = screen_row << 2;
  local_14 = 0;
  local_18 = thumbnail_index * 0x3000;
  do {
    local_18 = local_18 + 0x100;
    local_24 = (ushort *)((uchar *)g_ScreenBufferArray[local_1c / 4] + screen_x * 2);
    iVar2 = thumbnail_index * 0x3000 + local_14 * 0x100;
    do {
      local_24 = local_24 + 1;
      uVar1 = ((uint *)g_ThumbnailImageBuffer)[iVar2 / 4];
      iVar2 = iVar2 + 4;
      *local_24 = (ushort)((uVar1 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                          (g_GreenBitPosition.bytes[0] & 0x1f)) |
                  (ushort)((uVar1 & 0xff) / (uint)g_RedScaleFactor <<
                          (g_RedBitPosition.bytes[0] & 0x1f)) |
                  (ushort)((uVar1 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                          (g_BlueBitPosition.bytes[0] & 0x1f));
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}
