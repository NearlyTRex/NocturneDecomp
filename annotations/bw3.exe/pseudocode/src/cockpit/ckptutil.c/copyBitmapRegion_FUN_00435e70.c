// Name: cockpit_ckptutil.c_copyBitmapRegion_FUN_00435e70
// Address: 00435e70
// Address Range: [[00435e70, 00435edd]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_copyBitmapRegion_FUN_00435e70(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_copyBitmapRegion_FUN_00435e70(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset)

{
  code *pcVar1;
  uchar *puVar2;
  int iVar3;
  
  if ((dest_buffer != (uchar *)0x0) && (src_buffer != (uchar *)0x0)) {
    pcVar1 = (code *)cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00434ea0();
    puVar2 = src_buffer + src_y_offset * src_stride + src_x_offset;
    iVar3 = 0;
    if (0 < num_rows) {
      do {
        iVar3 = iVar3 + 1;
        (*pcVar1)(puVar2,dest_buffer,bytes_per_row);
        dest_buffer = dest_buffer + bytes_per_row;
        puVar2 = puVar2 + src_stride;
      } while (iVar3 < num_rows);
      return;
    }
  }
  return;
}
