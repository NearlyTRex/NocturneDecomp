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
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  uint extraout_EAX_02;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint uVar1;
  uint extraout_EDX_03;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double *in_stack_ffffff98;
  uint uStack_64;
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
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  local_54 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  fVar2 = (float10)local_54;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_24 = (int)ROUND(fVar2);
  dVar5 = crt_math_c_ceil_FUN_006001b2(coord_y2);
  fVar2 = (float10)dVar5;
  local_54 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
  fVar3 = (float10)local_54;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
  local_20 = (int)ROUND(fVar3);
  crt_math_c_floor_FUN_005feb90((double)fVar2);
  local_54 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01);
  fVar2 = (float10)local_54;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,extraout_EAX_01));
  local_1c = (int)ROUND(fVar2);
  crt_math_c_ceil_FUN_006001b2(coord_x2);
  local_54 = (double)CONCAT44 /* combine 2-byte values */(extraout_EDX_02,extraout_EAX_02);
  fVar2 = (float10)local_54;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_02,extraout_EAX_02));
  uVar1 = (uint)((ulonglong)dVar5 >> 0x20);
  local_18 = (int)ROUND(fVar2);
  for (local_14 = local_24; local_14 < local_20; local_14 = local_14 + 1) {
    dVar5 = shape_design_c_calculateSamplingWeight_FUN_0046adc0
                      ((double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_y1,0),(int)((ulonglong)(double)local_14 >> 0x20)
                                       ),
                       (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_y2,0),(int)((ulonglong)coord_y1 >> 0x20)),
                       (double)CONCAT44 /* combine 2-byte values */(in_stack_ffffff98,(int)((ulonglong)coord_y2 >> 0x20)));
    uVar1 = (uint)((ulonglong)dVar5 >> 0x20);
    for (local_60 = local_1c; local_60 < local_18; local_60 = local_60 + 1) {
      dVar4 = shape_design_c_calculateSamplingWeight_FUN_0046adc0
                        ((double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_x1,0),
                                          (int)((ulonglong)(double)local_60 >> 0x20)),
                         (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(coord_x2,0),(int)((ulonglong)coord_x1 >> 0x20)),
                         (double)CONCAT44 /* combine 2-byte values */(in_stack_ffffff98,(int)((ulonglong)coord_x2 >> 0x20)));
      uStack_64 = (uint)((ulonglong)(dVar4 * dVar5) >> 0x20);
      in_stack_ffffff98 = &local_34;
      shape_design_c_samplePixelAndAccumulate_FUN_0046ad00
                (rgb_buffer,alpha_buffer,col_coord,row_coord,local_60,local_14,
                 (double)CONCAT44 /* combine 2-byte values */(uStack_64,in_stack_ffffff98),&local_4c,&local_44,&local_3c,
                 in_stack_ffffff98);
      local_2c = local_2c + (double)CONCAT44 /* combine 2-byte values */(uStack_64,in_stack_ffffff98);
      uVar1 = extraout_EDX_03;
    }
  }
  if (0.0 < local_2c) {
    local_4c = local_4c / local_2c;
    local_44 = local_44 / local_2c;
    local_3c = local_3c / local_2c;
    local_34 = local_34 / local_2c;
  }
  fVar2 = (float10)local_4c + (float10)0.5;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar1,atlas_width));
  *SUB84 /* extract 2-byte value */(dVar5,0) = (int)ROUND(fVar2);
  fVar2 = (float10)local_44 + (float10)0.5;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),atlas_height));
  *SUB84 /* extract 2-byte value */(dVar5,0) = (int)ROUND(fVar2);
  fVar2 = (float10)local_3c + (float10)0.5;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),red_out));
  *SUB84 /* extract 2-byte value */(dVar5,0) = (int)ROUND(fVar2);
  fVar2 = (float10)local_34 + (float10)0.5;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),green_out))
  ;
  *SUB84 /* extract 2-byte value */(dVar5,0) = (int)ROUND(fVar2);
  return;
}
