// Name: shape_design.c_sampleAndFilterPixel_FUN_0046ae20
// Address: 0046ae20
// Address Range: [[0046ae20, 0046b051]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_sampleAndFilterPixel_FUN_0046ae20(void *rgb_buffer,void *alpha_buffer,int col_coord,int row_coord,double coord_x1,double coord_y1,double coord_x2,double coord_y2,int atlas_width,int atlas_height,byte *red_out,byte *green_out,byte *blue_out,byte *alpha_out)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_sampleAndFilterPixel_FUN_0046ae20(void *rgb_buffer,void *alpha_buffer,int col_coord,int row_coord,double coord_x1,double coord_y1,double coord_x2,double coord_y2,int atlas_width,int atlas_height,byte *red_out,byte *green_out,byte *blue_out,byte *alpha_out)

{
  double dVar1;
  double dVar2;
  int local_60;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_4c = 0.0;
  local_44 = 0.0;
  local_3c = 0.0;
  local_34 = 0.0;
  local_2c = 0.0;
  dVar1 = floor(coord_y1);
  local_24 = (int)ROUND(ROUND(dVar1));
  dVar1 = ceil(coord_y2);
  local_20 = (int)ROUND(ROUND(dVar1));
  dVar1 = floor(coord_x1);
  local_1c = (int)ROUND(ROUND(dVar1));
  dVar1 = ceil(coord_x2);
  local_18 = (int)ROUND(ROUND(dVar1));
  for (local_14 = local_24; local_14 < local_20; local_14 = local_14 + 1) {
    dVar1 = shape_design_c_calculateSamplingWeight_FUN_0046adc0((double)local_14,coord_y1,coord_y2);
    for (local_60 = local_1c; local_60 < local_18; local_60 = local_60 + 1) {
      dVar2 = shape_design_c_calculateSamplingWeight_FUN_0046adc0
                        ((double)local_60,coord_x1,coord_x2);
      shape_design_c_samplePixelAndAccumulate_FUN_0046ad00
                (rgb_buffer,alpha_buffer,col_coord,row_coord,local_60,local_14,dVar2 * dVar1,
                 &local_4c,&local_44,&local_3c,&local_34);
      local_2c = local_2c + dVar2 * dVar1;
    }
  }
  if (0.0 < local_2c) {
    local_4c = local_4c / local_2c;
    local_44 = local_44 / local_2c;
    local_3c = local_3c / local_2c;
    local_34 = local_34 / local_2c;
  }
  *(int *)atlas_width = (int)ROUND(ROUND(local_4c + 0.5));
  *(int *)atlas_height = (int)ROUND(ROUND(local_44 + 0.5));
  *(int *)red_out = (int)ROUND(ROUND(local_3c + 0.5));
  *(int *)green_out = (int)ROUND(ROUND(local_34 + 0.5));
  return;
}
