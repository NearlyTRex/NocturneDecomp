// Name: core_dcamera.cpp_loadCameraFog_FUN_00453e50
// Address: 00453e50
// Address Range: [[00453e50, 00453f07]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_loadCameraFog_FUN_00453e50(SFog * fog, FILE * file_handle, int file_version)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_loadCameraFog_FUN_00453e50(SFog *fog,FILE *file_handle,int file_version)

{
  char local_108 [256];
  
  crt_stdio_c_fgets_FUN_005fefd0(local_108,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%d\n",fog,&(fog->color_index).g,&(fog->color_index).b);
  crt_stdio_c_fgets_FUN_005fefd0(local_108,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&fog->scroll,&(fog->scroll).y,&(fog->scroll).z);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f\n",&fog->height_threshold,&fog->density_multiplier);
  if (file_version < 0x1a) {
    fog->reserved = 50.0;
    return;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n",&fog->reserved);
  return;
}
