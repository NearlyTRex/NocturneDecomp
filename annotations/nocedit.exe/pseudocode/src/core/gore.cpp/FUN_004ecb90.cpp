// Name: core_gore.cpp_FUN_004ecb90
// Address: 004ecb90
// Address Range: [[004ecb90, 004ecc35]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecb90()

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ecb90(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ecb90
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               uint *param_5,FILE *param_6)

{
  crt_stdio_c_fprintf_FUN_005fe6d0
            (param_6,"%f,%f,%f\n",(double)(float)param_5[1],(double)(float)param_5[2],
             (double)(float)param_5[3]);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d,%d,%d\n",param_5[4],param_5[5],*param_5);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (param_6,"%f,%f,%f\n",(double)(float)param_5[6],(double)(float)param_5[8],
             (double)(float)param_5[7]);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (param_6,"%d,%d,%d,%d,%d,%d,%d\n",param_5[10],param_5[0xb],param_5[0xc],param_5[0xd],
             param_5[0xe],param_5[0xf],param_5[0x10],unaff_EBX);
  return;
}
