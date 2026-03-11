// Name: shape_design.c_readPixelRowFromFile_FUN_0046abf0
// Address: 0046abf0
// Address Range: [[0046abf0, 0046ac6a]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_readPixelRowFromFile_FUN_0046abf0(_FILE *file_handle,uchar *rgb_buffer,uchar *alpha_buffer,int pixel_count,int pixel_depth)

#include "nocturne.h"

void __cdecl shape_design_c_readPixelRowFromFile_FUN_0046abf0(_FILE *file_handle,uchar *rgb_buffer,uchar *alpha_buffer,int pixel_count,int pixel_depth)

{
  uchar *puVar1;
  int iVar2;
  
  for (; 0 < pixel_count; pixel_count = pixel_count + -1) {
    iVar2 = _fgetc(file_handle);
    *rgb_buffer = (uchar)iVar2;
    iVar2 = _fgetc(file_handle);
    puVar1 = rgb_buffer + 2;
    rgb_buffer[1] = (uchar)iVar2;
    iVar2 = _fgetc(file_handle);
    rgb_buffer = rgb_buffer + 3;
    *puVar1 = (uchar)iVar2;
    if (pixel_depth == 0x20) {
      iVar2 = _fgetc(file_handle);
      *alpha_buffer = (uchar)iVar2;
    }
    else {
      *alpha_buffer = 0xff;
    }
    alpha_buffer = alpha_buffer + 1;
  }
  return;
}
