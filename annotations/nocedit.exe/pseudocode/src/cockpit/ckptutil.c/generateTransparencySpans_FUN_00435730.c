// Name: cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
// Address: 00435730
// Address Range: [[00435730, 0043597e]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730(void * bitmap_buffer, char * filename, int width, int height, void * span_data_buffer, int transparent_color_index)

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
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int iStack_12c;
  char acStack_124 [252];
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int *local_14;
  int iVar7;
  
  if (0xff < (uint)transparent_color_index) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffed0,"Invalid transparent color index: %d",transparent_color_index);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x942;
    core_main_c_displayErrorAndQuit_FUN_00506f10((char *)&iStack_12c);
  }
  local_18 = 0;
  if (0 < in_stack_0000001c) {
    local_28 = transparent_color_index + -1;
    local_24 = transparent_color_index;
    local_1c = (byte *)width;
    local_20 = 0;
    local_14 = (int *)span_data_buffer;
    do {
      bVar1 = false;
      iVar3 = 0;
      iVar7 = 0;
      if (0 < transparent_color_index) {
        iVar5 = -1;
        iVar6 = 0;
        pbVar4 = local_1c;
        do {
          iVar2 = iVar6 + local_20;
          if (bVar1) {
            if (*pbVar4 == in_stack_00000020) {
              *(int *)((int)span_data_buffer + iVar2 + 0x44) =
                   (iVar5 - *(int *)((int)span_data_buffer + iVar2 + 4)) + 1;
              iVar6 = iVar6 + 4;
              iVar7 = iVar7 + 1;
              bVar1 = false;
            }
          }
          else if (*pbVar4 != in_stack_00000020) {
            bVar1 = true;
            *(int *)((int)span_data_buffer + iVar2 + 4) = iVar3;
          }
          pbVar4 = pbVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar3 < transparent_color_index);
      }
      if (0xf < iVar7) {
        iStack_12c = local_18;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffed8,"Too many spans: bitmap %s, spans %d, scanline %d",height);
        g_CurrentFilename = "..\\cockpit\\ckptutil.c";
        g_CurrentLineNumber = 0x972;
        iStack_12c = 0x435878;
        core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_124);
      }
      iVar3 = iVar7;
      if (bVar1) {
        iVar3 = iVar7 + 1;
        local_14[iVar7 + 0x11] = (local_28 - local_14[iVar7 + 1]) + 1;
      }
      local_20 = local_20 + 0x84;
      local_18 = local_18 + 1;
      *local_14 = iVar3;
      local_1c = local_1c + local_24;
      local_14 = local_14 + 0x21;
    } while (local_18 < in_stack_0000001c);
  }
  return;
}
