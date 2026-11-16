// Name: cockpit_ckptutil.c_generateTransparencySpans_FUN_0043b090
// Address: 0043b090
// Address Range: [[0043b090, 0043b2de]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_generateTransparencySpans_FUN_0043b090(void *bitmap_buffer,char *filename,void *span_output,int width,int height,int transparent_color_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_generateTransparencySpans_FUN_0043b090(void *bitmap_buffer,char *filename,void *span_output,int width,int height,int transparent_color_index)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char acStack_130 [256];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  byte *pbStack_24;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0xff < (uint)transparent_color_index) {
    _sprintf(acStack_130,"Invalid transparent color index: %d");
    _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
    _DAT_01d1d404 = 0x939;
    core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_130);
  }
  iStack_20 = 0;
  if (0 < height) {
    iStack_30 = width + -1;
    iStack_2c = width;
    pbStack_24 = bitmap_buffer;
    iStack_28 = 0;
    piStack_1c = span_output;
    do {
      bVar1 = false;
      iVar3 = 0;
      iStack_14 = 0;
      if (0 < width) {
        iVar5 = -1;
        iVar6 = 0;
        iStack_18 = iStack_28;
        pbVar4 = pbStack_24;
        do {
          iVar2 = iVar6 + iStack_28;
          if (bVar1) {
            if ((uint)*pbVar4 == transparent_color_index) {
              *(int *)((int)span_output + iVar2 + 0x44) =
                   (iVar5 - *(int *)((int)span_output + iVar2 + 4)) + 1;
              iVar6 = iVar6 + 4;
              iStack_14 = iStack_14 + 1;
              bVar1 = false;
            }
          }
          else if ((uint)*pbVar4 != transparent_color_index) {
            bVar1 = true;
            *(int *)((int)span_output + iVar2 + 4) = iVar3;
          }
          pbVar4 = pbVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar3 < width);
      }
      if (0xf < iStack_14) {
        _sprintf(acStack_130,"Too many spans: bitmap %s, spans %d, scanline %d");
        _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
        _DAT_01d1d404 = 0x969;
        core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_130);
      }
      if (bVar1) {
        piStack_1c[iStack_14 + 0x11] = (iStack_30 - piStack_1c[iStack_14 + 1]) + 1;
        iStack_14 = iStack_14 + 1;
      }
      iStack_28 = iStack_28 + 0x84;
      iStack_20 = iStack_20 + 1;
      *piStack_1c = iStack_14;
      pbStack_24 = pbStack_24 + iStack_2c;
      piStack_1c = piStack_1c + 0x21;
    } while (iStack_20 < height);
  }
  return;
}
