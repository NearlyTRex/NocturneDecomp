// Name: core_dcamera.cpp_saveCameraFog_FUN_00454b70
// Address: 00454b70
// Address Range: [[00454b70, 00454c13]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00454b70(SFog *fog,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00454b70(SFog *fog,_FILE *file_handle)

{
  _fprintf(file_handle,"fogR,fogG,fogB\n");
  _fprintf(file_handle,"%d,%d,%d\n");
  _fprintf(file_handle,"fogVel\n");
  _fprintf(file_handle,"%f,%f,%f\n");
  _fprintf(file_handle,"%f,%f\n");
  _fprintf(file_handle,"%f\n");
  return;
}
