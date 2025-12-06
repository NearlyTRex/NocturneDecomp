// Name: core_dcamera.cpp_loadCameraFog_FUN_00453e50
// Address: 00453e50
// Address Range: [[00453e50, 00453f07]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_loadCameraFog_FUN_00453e50(SFog * fog, FILE * file_handle, int file_version)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_loadCameraFog_FUN_00453e50(SFog *fog,FILE *file_handle,int file_version)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000020;
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef8,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d\n",fog,&(fog->color_index).g);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff00,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f\n");
  if (in_stack_00000020 < 0x1a) {
    fog->reserved = 50.0;
    return;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f\n");
  return;
}
