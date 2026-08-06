// Name: cockpit_ckptutil.c_copyScreenRegion_FUN_0042e750
// Address: 0042e750
// Address Range: [[0042e750, 0042e7ae]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_copyScreenRegion_FUN_0042e750(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_copyScreenRegion_FUN_0042e750(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (0 < height) {
    iVar1 = start_row + height;
    do {
      iVar3 = g_WindowWidth * start_row;
      start_row = start_row + 1;
      puVar4 = (uint *)(iVar3 + src_y + src_x);
      puVar5 = dest_buffer;
      for (uVar2 = (uint)bytes_per_row >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = bytes_per_row & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(byte *)puVar5 = *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      dest_buffer = (void *)((int)dest_buffer + bytes_per_row);
    } while (start_row < iVar1);
  }
  return;
}
