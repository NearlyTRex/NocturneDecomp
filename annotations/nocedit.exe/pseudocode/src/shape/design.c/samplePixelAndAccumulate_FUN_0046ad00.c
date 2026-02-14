// Name: shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
// Address: 0046ad00
// Address Range: [[0046ad00, 0046adba]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_samplePixelAndAccumulate_FUN_0046ad00(void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height,int pixel_x,int pixel_y,double weight,double *red_accumulator,double *green_accumulator,double *blue_accumulator,double *alpha_accumulator)

#include "nocturne.h"

void __cdecl shape_design_c_samplePixelAndAccumulate_FUN_0046ad00(void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height,int pixel_x,int pixel_y,double weight,double *red_accumulator,double *green_accumulator,double *blue_accumulator,double *alpha_accumulator)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_design_c_wrapCoordinate_FUN_0046acc0(pixel_x,atlas_width);
  iVar2 = shape_design_c_wrapCoordinate_FUN_0046acc0(pixel_y,atlas_height);
  iVar1 = iVar1 + iVar2 * atlas_width;
  iVar2 = iVar1 * 3;
  *red_accumulator = (double)*(byte *)((int)rgb_buffer + iVar2 + 2) * weight + *red_accumulator;
  *green_accumulator = (double)*(byte *)((int)rgb_buffer + iVar2 + 1) * weight + *green_accumulator;
  *blue_accumulator = (double)*(byte *)((int)rgb_buffer + iVar2) * weight + *blue_accumulator;
  *alpha_accumulator = (double)*(byte *)((int)alpha_buffer + iVar1) * weight + *alpha_accumulator;
  return;
}
