// Name: core_dcamera.cpp_saveCameraFog_FUN_00453f10
// Address: 00453f10
// Address Range: [[00453f10, 00453fb3]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_saveCameraFog_FUN_00453f10(SFog * fog, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00453f10(SFog *fog,FILE *file_handle)

{
  double dVar1;
  double dVar2;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fogR,fogG,fogB\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fogVel\n");
  dVar1 = (double)(fog->scroll).z;
  dVar2 = (double)(fog->scroll).y;
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(fog->scroll).x,SUB84 /* extract 2-byte value */(dVar2,0),
             (int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f\n",SUB84 /* extract 2-byte value */((double)fog->height_threshold,0),
             (int)((ulonglong)(double)fog->height_threshold >> 0x20),
             SUB84 /* extract 2-byte value */((double)fog->density_multiplier,0));
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f\n");
  return;
}
