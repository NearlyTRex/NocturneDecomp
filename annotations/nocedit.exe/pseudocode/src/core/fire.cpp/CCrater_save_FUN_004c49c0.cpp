// Name: core_fire.cpp_CCrater_save_FUN_004c49c0
// Address: 004c49c0
// Address Range: [[004c49c0, 004c4afa]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_save_FUN_004c49c0(CCrater * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_save_FUN_004c49c0(CCrater *this_ptr,FILE *file_handle)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%d,%d,%f,%f\n",*(uint *)this_ptr->field0_0x0,
             *(uint *)(this_ptr->field0_0x0 + 4),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 8),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 8) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x18),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x18) >> 0x20));
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0xc),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0xc) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x10),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x10) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x14),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x14) >> 0x20));
  pcVar4 = this_ptr->field0_0x0;
  do {
    pcVar1 = pcVar4 + 0x24;
    pcVar2 = pcVar4 + 0x20;
    pcVar3 = pcVar4 + 0x1c;
    pcVar4 = pcVar4 + 0xc;
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file_handle,"%f,%f,%f\n",SUB84 /* extract 2-byte value */((double)*(float *)pcVar3,0),
               (int)((ulonglong)(double)*(float *)pcVar3 >> 0x20),SUB84 /* extract 2-byte value */((double)*(float *)pcVar2,0),
               (int)((ulonglong)(double)*(float *)pcVar2 >> 0x20),SUB84 /* extract 2-byte value */((double)*(float *)pcVar1,0),
               (int)((ulonglong)(double)*(float *)pcVar1 >> 0x20));
  } while (pcVar4 != this_ptr->field0_0x0 + 0x24);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x40),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x40) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x44),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x44) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x48),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x48) >> 0x20));
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x4c),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x4c) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x50),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x50) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x54),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x54) >> 0x20));
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x58),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x58) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x5c),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x5c) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x60),0));
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 100),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 100) >> 0x20),
             SUB84 /* extract 2-byte value */((double)*(float *)(this_ptr->field0_0x0 + 0x68),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->field0_0x0 + 0x68) >> 0x20));
  return;
}
