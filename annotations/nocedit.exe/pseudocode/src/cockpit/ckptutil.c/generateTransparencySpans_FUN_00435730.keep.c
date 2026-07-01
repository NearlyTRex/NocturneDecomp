// Name: cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
// Address: 00435730
// MANUAL RECONSTRUCTION
// Address Range: [[00435730, 0043597e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index)

{
  int iVar2;
  byte *pbVar4;
  int iVar5;
  char local_130 [256];
  byte *local_24;
  int local_20;
  SScanlineSpans *local_1c;
  int local_14;
  bool bVar1;

  if (0xff < (uint)transparent_color_index) {
    _sprintf(local_130,"Invalid transparent color index: %d",transparent_color_index);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 2370;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_130);
  }
  local_20 = 0;
  if (0 < height) {
    local_24 = (byte *)bitmap_buffer;
    local_1c = span_output;
    do {
      bVar1 = false;
      iVar2 = 0;
      local_14 = 0;
      if (0 < width) {
        iVar5 = -1;
        pbVar4 = local_24;
        do {
          if (bVar1) {
            if ((uint)*pbVar4 == transparent_color_index) {
              local_1c->lengths[local_14] = (iVar5 - local_1c->starts[local_14]) + 1;
              local_14 = local_14 + 1;
              bVar1 = false;
            }
          }
          else if ((uint)*pbVar4 != transparent_color_index) {
            bVar1 = true;
            local_1c->starts[local_14] = iVar2;
          }
          pbVar4 = pbVar4 + 1;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar2 < width);
      }
      if (0xf < local_14) {
        _sprintf(local_130,"Too many spans: bitmap %s, spans %d, scanline %d",filename,local_14,local_20);
        g_CurrentFilename = "..\\cockpit\\ckptutil.c";
        g_CurrentLineNumber = 2418;
        core_main_c_displayErrorAndQuit_FUN_00506f10(local_130);
      }
      if (bVar1) {
        local_1c->lengths[local_14] = width - local_1c->starts[local_14];
        local_14 = local_14 + 1;
      }
      local_20 = local_20 + 1;
      local_1c->span_count = local_14;
      local_24 = local_24 + width;
      local_1c = local_1c + 1;
    } while (local_20 < height);
  }
  return;
}
