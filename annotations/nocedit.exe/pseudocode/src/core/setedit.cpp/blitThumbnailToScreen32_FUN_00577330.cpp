// Name: core_setedit.cpp_blitThumbnailToScreen32_FUN_00577330
// Address: 00577330
// Address Range: [[00577330, 00577428]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_blitThumbnailToScreen32_FUN_00577330(int thumbnail_index,int screen_x,int screen_row)

#include "nocturne.h"

void __cdecl core_setedit_cpp_blitThumbnailToScreen32_FUN_00577330(int thumbnail_index,int screen_x,int screen_row)

{
  uint uVar1;
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = screen_row << 2;
  local_18 = thumbnail_index * 0x3000;
  do {
    local_18 = local_18 + 0x100;
    puVar1 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_1c) + screen_x * 4);
    iVar2 = local_14 * 0x100 + thumbnail_index * 0x3000;
    do {
      puVar1 = puVar1 + 1;
      uVar1 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar2);
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar1 >> 0x10 & 0xff;
      if (g_BitsPerPixel == 0x20) {
        uVar5 = (uVar1 & 0xff) << (g_RedBitPosition.bytes[0] & 0x1f) |
                uVar4 << (g_GreenBitPosition.bytes[0] & 0x1f);
        uVar3 = uVar3 << (g_BlueBitPosition.bytes[0] & 0x1f);
      }
      else {
        uVar5 = (uVar1 & 0xff) << 0x10 | uVar4 << 8;
      }
      iVar2 = iVar2 + 4;
      *puVar1 = uVar5 | uVar3;
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}
