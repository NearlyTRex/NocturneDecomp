// Name: cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0
// Address: 004317b0
// Address Range: [[004317b0, 0043182d]]
// Convention: __cdecl
// Signature: void * cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0(char * filename, int width, int height, void * span_data_buffer, void * buffer, int transparent_color_index)

#include "nocturne.h"

void * __cdecl
cockpit_ckptutil_c_loadBitmapWithPalette_FUN_004317b0
          (char *filename,int width,int height,void *span_data_buffer,void *buffer,
          int transparent_color_index)

{
  void *pvVar1;
  int size;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  size = width * height;
  pvVar1 = buffer;
  if (buffer == (void *)0x0) {
    pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0x99);
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  pvVar1 = cockpit_ckptutil_c_readBitmapFile_FUN_00431870(filename,pvVar1,size);
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0(filename,pvVar1,size,in_stack_00000020);
  if (in_stack_0000001c != 0) {
    cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730
              (pvVar1,filename,in_stack_0000001c,(int)buffer,(void *)transparent_color_index,
               in_stack_00000024);
  }
  return pvVar1;
}
