// Name: core_dcamera.cpp_saveCameraFog_FUN_00453f10
// Address: 00453f10
// Address Range: [[00453f10, 00453fb3]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_saveCameraFog_FUN_00453f10(SFog * fog, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00453f10(SFog *fog,FILE *file_handle)

{
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fogR,fogG,fogB\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%d,%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"fogVel\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f\n",(double)(fog->scroll).x,(double)(fog->scroll).y,
             (double)(fog->scroll).z);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f\n",(double)fog->height_threshold,
             (double)fog->density_multiplier);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%f\n",(double)fog->reserved);
  return;
}
