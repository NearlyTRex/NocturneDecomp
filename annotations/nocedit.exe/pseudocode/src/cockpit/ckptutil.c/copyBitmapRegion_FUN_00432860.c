// Name: cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860
// Address: 00432860
// Address Range: [[00432860, 004328cd]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_copyBitmapRegion_FUN_00432860(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_copyBitmapRegion_FUN_00432860(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset)

{
  OptimizedMemcpyFunc *pOVar1;
  uchar *dest_buffer_00;
  int iVar2;
  
  if ((dest_buffer != (uchar *)0x0) && (src_buffer != (uchar *)0x0)) {
    pOVar1 = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780();
    dest_buffer_00 = src_buffer + src_y_offset * src_stride + src_x_offset;
    iVar2 = 0;
    if (0 < num_rows) {
      do {
        iVar2 = iVar2 + 1;
        (*pOVar1)(dest_buffer_00,dest_buffer,bytes_per_row);
        dest_buffer = dest_buffer + bytes_per_row;
        dest_buffer_00 = dest_buffer_00 + src_stride;
      } while (iVar2 < num_rows);
      return;
    }
  }
  return;
}
