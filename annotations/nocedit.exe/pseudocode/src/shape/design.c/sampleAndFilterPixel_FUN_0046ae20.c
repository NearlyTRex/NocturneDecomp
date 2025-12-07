// Name: shape_design.c_sampleAndFilterPixel_FUN_0046ae20
// Address: 0046ae20
// Address Range: [[0046ae20, 0046b051]]
// Convention: __cdecl
// Signature: void shape_design.c_sampleAndFilterPixel_FUN_0046ae20(void * rgb_buffer, void * alpha_buffer, int col_coord, int row_coord, double coord_x1, double coord_y1, double coord_x2, double coord_y2, int atlas_width, int atlas_height, byte * red_out, byte * green_out, byte * blue_out, byte * alpha_out)

#include "nocturne.h"

void __cdecl
shape_design_c_sampleAndFilterPixel_FUN_0046ae20
          (void *rgb_buffer,void *alpha_buffer,int col_coord,int row_coord,double coord_x1,
          double coord_y1,double coord_x2,double coord_y2,int atlas_width,int atlas_height,
          byte *red_out,byte *green_out,byte *blue_out,byte *alpha_out)

{
  uint in_EAX;
  uint in_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  double dVar1;
  double dVar2;
  double *alpha_accumulator;
  uint uStack_84;
  uint uStack_7c;
  uint uStack_74;
  uint uStack_6c;
  int local_60;
  ulonglong local_54;
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
  dVar1 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  local_54 = (double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX);
  uStack_6c = (uint)((ulonglong)coord_y1 >> 0x20);
  dVar2 = crt_math_c_round_FUN_005fe6b0(local_54);
  local_24 = (int)ROUND(dVar2);
  dVar1 = crt_math_c_ceil_FUN_006001b2(dVar1);
  local_54 = (double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX);
  uStack_74 = (uint)((ulonglong)coord_y2 >> 0x20);
  dVar2 = crt_math_c_round_FUN_005fe6b0(local_54);
  local_20 = (int)ROUND(dVar2);
  dVar1 = crt_math_c_floor_FUN_005feb90(dVar1);
  local_54 = (double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX);
  uStack_7c = (uint)((ulonglong)coord_x1 >> 0x20);
  dVar2 = crt_math_c_round_FUN_005fe6b0(local_54);
  local_1c = (int)ROUND(dVar2);
  uStack_84 = (uint)((ulonglong)coord_x2 >> 0x20);
  crt_math_c_ceil_FUN_006001b2(dVar1);
  local_54 = (double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX);
  alpha_accumulator = (double *)0x46aef7;
  dVar1 = crt_math_c_round_FUN_005fe6b0(local_54);
  local_18 = (int)ROUND(dVar1);
  for (local_14 = local_24; local_14 < local_20; local_14 = local_14 + 1) {
    dVar1 = shape_design_c_calculateSamplingWeight_FUN_0046adc0
                      ((double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_y1,0),(int)((ulonglong)(double)local_14 >> 0x20)
                                       ),(double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_y2,0),uStack_6c),
                       (double)CONCAT44 /* combine 2-byte values */(alpha_accumulator,uStack_74));
    for (local_60 = local_1c; local_60 < local_18; local_60 = local_60 + 1) {
      dVar2 = shape_design_c_calculateSamplingWeight_FUN_0046adc0
                        ((double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_x1,0),
                                          (int)((ulonglong)(double)local_60 >> 0x20)),
                         (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_x2,0),uStack_7c),
                         (double)CONCAT44 /* combine 2-byte values */(alpha_accumulator,uStack_84));
      alpha_accumulator = &local_34;
      shape_design_c_samplePixelAndAccumulate_FUN_0046ad00
                (rgb_buffer,alpha_buffer,col_coord,row_coord,local_60,local_14,dVar2 * dVar1,
                 &local_4c,&local_44,&local_3c,alpha_accumulator);
      local_2c = local_2c + dVar2 * dVar1;
    }
  }
  if (0.0 < local_2c) {
    local_4c = local_4c / local_2c;
    local_44 = local_44 / local_2c;
    local_3c = local_3c / local_2c;
    local_34 = local_34 / local_2c;
  }
  dVar1 = crt_math_c_round_FUN_005fe6b0(local_4c + 0.5);
  *(int *)atlas_width = (int)ROUND(dVar1);
  dVar1 = crt_math_c_round_FUN_005fe6b0(local_44 + 0.5);
  *(int *)atlas_height = (int)ROUND(dVar1);
  dVar1 = crt_math_c_round_FUN_005fe6b0(local_3c + 0.5);
  *(int *)red_out = (int)ROUND(dVar1);
  dVar1 = crt_math_c_round_FUN_005fe6b0(local_34 + 0.5);
  *(int *)green_out = (int)ROUND(dVar1);
  return;
}
