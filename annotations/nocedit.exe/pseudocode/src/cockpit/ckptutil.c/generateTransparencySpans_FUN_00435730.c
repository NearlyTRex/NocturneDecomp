// Name: cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
// Address: 00435730
// Address Range: [[00435730, 0043597e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730 (void *bitmap_buffer,char *filename,int width,int height,void *span_data_buffer, int transparent_color_index)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730
          (void *bitmap_buffer,char *filename,int width,int height,void *span_data_buffer,
          int transparent_color_index)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char local_130 [256];
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  if (0xff < (uint)transparent_color_index) {
    _sprintf
              (local_130,"Invalid transparent color index: %d",transparent_color_index);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x942;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_130);
  }
  local_20 = 0;
  if (0 < (int)span_data_buffer) {
    local_30 = height + -1;
    local_2c = height;
    local_24 = bitmap_buffer;
    local_28 = 0;
    local_1c = (int *)width;
    do {
      bVar1 = false;
      iVar2 = 0;
      local_14 = 0;
      if (0 < height) {
        iVar5 = -1;
        iVar6 = 0;
        local_18 = local_28;
        pbVar4 = local_24;
        do {
          iVar3 = width + local_28 + iVar6;
          if (bVar1) {
            if ((uint)*pbVar4 == transparent_color_index) {
              *(int *)(iVar3 + 0x44) = (iVar5 - *(int *)(iVar3 + 4)) + 1;
              iVar6 = iVar6 + 4;
              local_14 = local_14 + 1;
              bVar1 = false;
            }
          }
          else if ((uint)*pbVar4 != transparent_color_index) {
            bVar1 = true;
            *(int *)(iVar3 + 4) = iVar2;
          }
          pbVar4 = pbVar4 + 1;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar2 < height);
      }
      if (0xf < local_14) {
        _sprintf
                  (local_130,"Too many spans: bitmap %s, spans %d, scanline %d",filename,local_14,local_20);
        g_CurrentFilename = "..\\cockpit\\ckptutil.c";
        g_CurrentLineNumber = 0x972;
        core_main_c_displayErrorAndQuit_FUN_00506f10(local_130);
      }
      if (bVar1) {
        local_1c[local_14 + 0x11] = (local_30 - local_1c[local_14 + 1]) + 1;
        local_14 = local_14 + 1;
      }
      local_28 = local_28 + 0x84;
      local_20 = local_20 + 1;
      *local_1c = local_14;
      local_24 = local_24 + local_2c;
      local_1c = local_1c + 0x21;
    } while (local_20 < (int)span_data_buffer);
  }
  return;
}
