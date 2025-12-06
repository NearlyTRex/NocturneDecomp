// Name: core_setutil.cpp_C3DSLight_save_FUN_00587090
// Address: 00587090
// Address Range: [[00587090, 00587447]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_save_FUN_00587090(C3DSLight * this_ptr, FILE * file_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,FILE *file_ptr)

{
  int iVar1;
  int iVar2;
  ulonglong in_stack_0000000c;
  ulonglong in_stack_00000014;
  int in_stack_0000005c;
  uint uStack00000064;
  int in_stack_00000078;
  int in_stack_0000007c;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"-- light name ------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"pos\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f,%f\n",(double)*(float *)(in_stack_0000000c._4_4_ + 0x104),
             (double)*(float *)(in_stack_0000000c._4_4_ + 0x108),
             (double)*(float *)(in_stack_0000000c._4_4_ + 0x10c));
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"orient\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f,%f\n",(double)*(float *)(in_stack_00000014._4_4_ + 0x110),
             (double)*(float *)(in_stack_00000014._4_4_ + 0x118));
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"fov\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"aspect\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"intensity\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"type\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"R,G,B, attenStart, attenEnd\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f,%f,%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"sizeX, sizeY\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"filterCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"blendFilter\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  iVar1 = 0;
  if (0 < *(int *)(in_stack_0000005c + 0x11ec)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f,%d,%s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_0000005c + 0x11ec));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"filterFrame\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"moveFilter,filterVelX,filterVelY,filterPosX,filterPosY\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d,%d,%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"onTime, cycleTime\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"visible\n");
  iVar1 = in_stack_00000078 + 0xfa;
  do {
    in_stack_00000078 = in_stack_00000078 + 1;
  } while (in_stack_00000078 != iVar1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  iVar2 = 0;
  iVar1 = in_stack_0000007c;
  do {
    if (*(char *)(iVar1 + 0x128) != '\0') {
      uStack00000064 = *(uint *)(in_stack_0000007c + 0x230);
      crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d,%d,%d,%d\n");
    }
    in_stack_0000007c = in_stack_0000007c + 0x10;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 0xfa);
  return;
}
