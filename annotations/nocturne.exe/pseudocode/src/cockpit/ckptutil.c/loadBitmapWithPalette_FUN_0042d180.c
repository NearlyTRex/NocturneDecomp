// Name: cockpit_ckptutil.c_loadBitmapWithPalette_FUN_0042d180
// Address: 0042d180
// Address Range: [[0042d180, 0042d1f3]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_loadBitmapWithPalette_FUN_0042d180(char *filename,int width,int height,SScanlineSpans *span_data_buffer,void *buffer,int transparent_color_index)

#include "nocturne.h"

void * __cdecl cockpit_ckptutil_c_loadBitmapWithPalette_FUN_0042d180(char *filename,int width,int height,SScanlineSpans *span_data_buffer,void *buffer,int transparent_color_index)

{
  void *bitmap_buffer;
  ulong size;
  
  size = width * height;
  if (buffer == (void *)0x0) {
    buffer = malloc(size);
    if (buffer == (void *)0x0) {
      return (void *)0x0;
    }
  }
  bitmap_buffer = cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(filename,buffer,size);
  cockpit_ckptutil_c_applyActPalette_FUN_0042d370
            (filename,bitmap_buffer,size,transparent_color_index);
  if (span_data_buffer != (SScanlineSpans *)0x0) {
    cockpit_ckptutil_c_generateTransparencySpans_FUN_00431260
              (bitmap_buffer,filename,span_data_buffer,width,height,transparent_color_index);
  }
  return bitmap_buffer;
}
