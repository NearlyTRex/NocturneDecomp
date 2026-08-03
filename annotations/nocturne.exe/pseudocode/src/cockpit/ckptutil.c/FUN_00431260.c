// Name: cockpit_ckptutil.c_FUN_00431260
// Address: 00431260
// Address Range: [[00431260, 004314ae]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_FUN_00431260(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_FUN_00431260(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte local_130 [256];
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  SScanlineSpans *local_1c;
  int local_18;
  int local_14;
  
  if (0xff < (uint)transparent_color_index) {
    _sprintf(local_130,"Invalid transparent color index: %d",transparent_color_index);
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    g_INT_01cc4804 = 0x93a;
    core_main_c_FUN_004c8440(local_130);
  }
  local_20 = 0;
  if (0 < height) {
    local_30 = width + -1;
    local_2c = width;
    local_24 = bitmap_buffer;
    local_28 = 0;
    local_1c = span_output;
    do {
      bVar1 = false;
      iVar3 = 0;
      local_14 = 0;
      if (0 < width) {
        iVar5 = -1;
        iVar6 = 0;
        local_18 = local_28;
        pbVar4 = local_24;
        do {
          iVar2 = iVar6 + local_28;
          if (bVar1) {
            if ((uint)*pbVar4 == transparent_color_index) {
              *(int *)((int)span_output->lengths + iVar2) =
                   (iVar5 - *(int *)((int)span_output->starts + iVar2)) + 1;
              iVar6 = iVar6 + 4;
              local_14 = local_14 + 1;
              bVar1 = false;
            }
          }
          else if ((uint)*pbVar4 != transparent_color_index) {
            bVar1 = true;
            *(int *)((int)span_output->starts + iVar2) = iVar3;
          }
          pbVar4 = pbVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar3 < width);
      }
      if (0xf < local_14) {
        _sprintf(local_130,"Too many spans: bitmap %s, spans %d, scanline %d",filename,local_14,local_20);
        g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
        g_INT_01cc4804 = 0x96a;
        core_main_c_FUN_004c8440(local_130);
      }
      if (bVar1) {
        local_1c->lengths[local_14] = (local_30 - local_1c->starts[local_14]) + 1;
        local_14 = local_14 + 1;
      }
      local_28 = local_28 + 0x84;
      local_20 = local_20 + 1;
      local_1c->span_count = local_14;
      local_24 = local_24 + local_2c;
      local_1c = local_1c + 1;
    } while (local_20 < height);
  }
  return;
}
