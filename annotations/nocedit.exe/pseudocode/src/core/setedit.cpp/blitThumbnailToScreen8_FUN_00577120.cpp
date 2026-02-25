// Name: core_setedit.cpp_blitThumbnailToScreen8_FUN_00577120
// Address: 00577120
// Address Range: [[00577120, 005771f0]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_blitThumbnailToScreen8_FUN_00577120(int thumbnail_index,int screen_x,int screen_row)

#include "nocturne.h"

void __cdecl core_setedit_cpp_blitThumbnailToScreen8_FUN_00577120(int thumbnail_index,int screen_x,int screen_row)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = screen_row << 2;
  local_18 = thumbnail_index * 0x3000;
  do {
    local_18 = local_18 + 0x100;
    puVar3 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_1c) + screen_x);
    iVar2 = local_14 * 0x100 + thumbnail_index * 0x3000;
    do {
      puVar3 = puVar3 + 1;
      uVar1 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar2);
      iVar2 = iVar2 + 4;
      *puVar3 = g_ColorCubeLookup
                [((uVar1 >> 0x10 & 0xff) >> 3) +
                 ((uVar1 & 0xff) >> 3) * 0x400 + ((uVar1 >> 8 & 0xff) >> 3) * 0x20];
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}
