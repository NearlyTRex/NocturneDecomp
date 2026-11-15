// Name: cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_00439090
// Address: 00439090
// Address Range: [[00439090, 004391c7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_rasterizeEdgeEndpoints_FUN_00439090(void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_rasterizeEdgeEndpoints_FUN_00439090(void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_114 [256];
  uint uStack_14;
  
  if (bitmap_buffer != (void *)0x0) {
    iVar3 = 0;
    uStack_14 = 0xfb;
    if (0 < edge_count) {
      iVar2 = buffer_width * buffer_height + -1;
      do {
        iVar1 = (int)edge_list->x0 + edge_list->y0 * buffer_width;
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(acStack_114,"Edge out of range: edge %d");
          _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
          _DAT_01d1d404 = 0x54a;
          core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_114);
        }
        *(byte *)(iVar1 + (int)bitmap_buffer) = (byte)uStack_14;
        iVar1 = (int)edge_list->x1 + buffer_width * ((short)(edge_list->y1 * 2) >> 1);
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(acStack_114,"Edge out of range: edge %d");
          _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
          _DAT_01d1d404 = 0x553;
          core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_114);
        }
        edge_list = edge_list + 1;
        iVar3 = iVar3 + 1;
        *(byte *)(iVar1 + (int)bitmap_buffer) = (byte)uStack_14;
      } while (iVar3 < edge_count);
    }
  }
  return;
}
