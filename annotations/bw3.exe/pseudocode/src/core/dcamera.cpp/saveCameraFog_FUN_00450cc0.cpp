// Name: core_dcamera.cpp_saveCameraFog_FUN_00450cc0
// Address: 00450cc0
// Address Range: [[00450cc0, 00450d63]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00450cc0(SFog *fog,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00450cc0(SFog *fog,_FILE *file_handle)

{
  _fprintf(file_handle,"fogR,fogG,fogB\n");
  _fprintf(file_handle,"%d,%d,%d\n");
  _fprintf(file_handle,"fogVel\n");
  _fprintf(file_handle,"%f,%f,%f\n");
  _fprintf(file_handle,"%f,%f\n");
  _fprintf(file_handle,"%f\n");
  return;
}
