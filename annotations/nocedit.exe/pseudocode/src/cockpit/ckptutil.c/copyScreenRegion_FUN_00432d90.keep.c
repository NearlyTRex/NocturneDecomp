// Name: cockpit_ckptutil.c_copyScreenRegion_FUN_00432d90
// Address: 00432d90
// MANUAL RECONSTRUCTION
// Address Range: [[00432d90, 00432dee]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_copyScreenRegion_FUN_00432d90(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_copyScreenRegion_FUN_00432d90(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height)

{
  int iVar1;
  int iVar3;
  uint *puVar4;
  byte *p_dest;

  if (0 < height) {
    iVar1 = start_row + height;
    p_dest = (byte *)dest_buffer;
    do {
      iVar3 = g_WindowWidth * start_row;
      start_row = start_row + 1;
      puVar4 = (uint *)(iVar3 + src_y + src_x);
      memcpy(p_dest, puVar4, bytes_per_row);
      p_dest = p_dest + bytes_per_row;
    } while (start_row < iVar1);
  }
  return;
}
