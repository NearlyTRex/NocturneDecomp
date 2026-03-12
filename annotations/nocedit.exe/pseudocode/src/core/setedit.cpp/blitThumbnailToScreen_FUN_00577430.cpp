// Name: core_setedit.cpp_blitThumbnailToScreen_FUN_00577430
// Address: 00577430
// Address Range: [[00577430, 0057772e]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_blitThumbnailToScreen_FUN_00577430(int thumbnail_index,int screen_x,int screen_row)

#include "nocturne.h"

void __cdecl core_setedit_cpp_blitThumbnailToScreen_FUN_00577430(int thumbnail_index,int screen_x,int screen_row)

{
  int iVar2;
  uchar *puVar3;
  uint *puVar4;
  int iVar1;
  uint uVar2;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_54;
  int local_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_14;
  uint uVar1;
  
  if ((((-1 < screen_x) && (-1 < screen_row)) && (screen_x + 0x40 <= g_WindowWidth)) &&
     (screen_row + 0x30 <= g_WindowHeight)) {
    iVar2 = thumbnail_index * 0x3000;
    local_50 = screen_row << 2;
    local_54 = iVar2 + 0x100;
    if (g_BitsPerPixel == 8) {
      local_1c = 0;
      local_30 = local_50;
      do {
        puVar3 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_30) + screen_x);
        iVar1 = local_1c * 0x100 + iVar2;
        do {
          puVar3 = puVar3 + 1;
          uVar2 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar1);
          iVar1 = iVar1 + 4;
          *puVar3 = g_ColorCubeLookup
                    [((uVar2 >> 8 & 0xff) >> 3) * 0x20 + ((uVar2 & 0xff) >> 3) * 0x400 +
                     ((uVar2 >> 0x10 & 0xff) >> 3)];
        } while (iVar1 != local_54);
        local_30 = local_30 + 4;
        local_1c = local_1c + 1;
        local_54 = local_54 + 0x100;
      } while (local_1c < 0x30);
    }
    else if (g_BitsPerPixel == 0x10) {
      local_20 = 0;
      local_34 = local_54;
      do {
        local_14 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_50) + screen_x * 2);
        iVar5 = iVar2 + local_20 * 0x100;
        do {
          local_14 = local_14 + 1;
          uVar1 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar5);
          *local_14 = (ushort)((uVar1 & 0xff) / (uint)g_RedScaleFactor <<
                              (g_RedBitPosition.bytes[0] & 0x1f)) |
                      (ushort)((uVar1 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                              (g_GreenBitPosition.bytes[0] & 0x1f)) |
                      (ushort)((uVar1 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                              (g_BlueBitPosition.bytes[0] & 0x1f));
          iVar5 = iVar5 + 4;
        } while (iVar5 != local_34);
        local_50 = local_50 + 4;
        local_20 = local_20 + 1;
        local_34 = local_34 + 0x100;
      } while (local_20 < 0x30);
    }
    else if (g_BitsPerPixel == 0x20) {
      local_24 = 0;
      local_2c = local_54;
      local_28 = local_50;
      do {
        puVar4 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_28) + screen_x * 4);
        iVar1 = local_24 * 0x100 + iVar2;
        do {
          puVar4 = puVar4 + 1;
          uVar2 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar1);
          uVar7 = uVar2 >> 8 & 0xff;
          uVar6 = uVar2 >> 0x10 & 0xff;
          if (g_BitsPerPixel == 0x20) {
            uVar2 = uVar6 << (g_BlueBitPosition.bytes[0] & 0x1f) |
                    uVar7 << (g_GreenBitPosition.bytes[0] & 0x1f) |
                    (uVar2 & 0xff) << (g_RedBitPosition.bytes[0] & 0x1f);
          }
          else {
            uVar2 = uVar7 << 8 | (uVar2 & 0xff) << 0x10 | uVar6;
          }
          iVar1 = iVar1 + 4;
          *puVar4 = uVar2;
        } while (iVar1 != local_2c);
        local_28 = local_28 + 4;
        local_24 = local_24 + 1;
        local_2c = local_2c + 0x100;
      } while (local_24 < 0x30);
    }
  }
  return;
}
