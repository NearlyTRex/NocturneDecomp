// Name: cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_0042f050
// Address: 0042f050
// Address Range: [[0042f050, 0042f187]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_rasterizeEdgeEndpoints_FUN_0042f050(void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_rasterizeEdgeEndpoints_FUN_0042f050(void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_114 [256];
  uint local_14;
  
  if (bitmap_buffer != (void *)0x0) {
    iVar3 = 0;
    local_14 = 0xfb;
    if (0 < edge_count) {
      iVar2 = buffer_width * buffer_height + -1;
      do {
        iVar1 = (int)edge_list->x0 + edge_list->y0 * buffer_width;
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(local_114,"Edge out of range: edge %d",iVar3);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 1355;
          core_main_c_displayErrorAndQuit_FUN_004c8440(local_114);
        }
        *(byte *)(iVar1 + (int)bitmap_buffer) = (byte)local_14;
        iVar1 = (int)edge_list->x1 + buffer_width * ((short)(edge_list->y1 * 2) >> 1);
        if ((iVar1 < 0) || (iVar2 < iVar1)) {
          _sprintf(local_114,"Edge out of range: edge %d",iVar3);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 1364;
          core_main_c_displayErrorAndQuit_FUN_004c8440(local_114);
        }
        edge_list = edge_list + 1;
        iVar3 = iVar3 + 1;
        *(byte *)(iVar1 + (int)bitmap_buffer) = (byte)local_14;
      } while (iVar3 < edge_count);
    }
  }
  return;
}
