// Name: core_gore.cpp_FUN_004ed160
// Address: 004ed160
// Address Range: [[004ed160, 004ed1bb]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed160()

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ed160(uint param_1, uint param_2) */

void core_gore_cpp_FUN_004ed160
               (uint param_1,uint param_2,uint unaff_EBX,uint param_4,
               int param_5,FILE *param_6)

{
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%f,%f,%f\n",param_5 + 4,param_5 + 8,param_5 + 0xc);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d,%d\n",param_5,param_5 + 0x10,unaff_EBX);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%d,%f,%d,%d,%d\n",param_5 + 0x14,param_5 + 0x18,param_5 + 0x1c,
             param_5 + 0x20,param_5 + 0x24);
  return;
}
