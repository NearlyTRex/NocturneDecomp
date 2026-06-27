// Name: cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0
// Address: 004317b0
// Address Range: [[004317b0, 0043182d]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_loadBitmapWithPalette_FUN_004317b0(char *filename,int width,int height,SScanlineSpans *span_data_buffer,void *buffer,int transparent_color_index)

#include "nocturne.h"

void * __cdecl cockpit_ckptutil_c_loadBitmapWithPalette_FUN_004317b0(char *filename,int width,int height,SScanlineSpans *span_data_buffer,void *buffer,int transparent_color_index)

{
  void *bitmap_buffer;
  int size;
  
  size = width * height;
  if (buffer == (void *)0x0) {
    buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0x99);
    if (buffer == (void *)0x0) {
      return (void *)0x0;
    }
  }
  bitmap_buffer = cockpit_ckptutil_c_readBitmapFile_FUN_00431870(filename,buffer,size);
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0
            (filename,bitmap_buffer,size,transparent_color_index);
  if (span_data_buffer != (SScanlineSpans *)0x0) {
    cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730
              (bitmap_buffer,filename,span_data_buffer,width,height,transparent_color_index);
  }
  return bitmap_buffer;
}
