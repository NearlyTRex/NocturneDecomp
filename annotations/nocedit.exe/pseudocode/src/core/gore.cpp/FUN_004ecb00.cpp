// Name: core_gore.cpp_FUN_004ecb00
// Address: 004ecb00
// Address Range: [[004ecb00, 004ecb81]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecb00()

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ecb00(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ecb00
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,FILE *param_6)

{
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%f,%f,%f\n",param_5 + 4,param_5 + 8,param_5 + 0xc);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%d,%d,%d\n",param_5 + 0x10,param_5 + 0x14,param_5,unaff_EBX);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%f,%f,%f\n",param_5 + 0x18,param_5 + 0x20,param_5 + 0x1c);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%d,%d,%d,%d,%d,%d,%d\n",param_5 + 0x28,param_5 + 0x2c,param_5 + 0x30,
             param_5 + 0x34,param_5 + 0x38,param_5 + 0x3c);
  return;
}
