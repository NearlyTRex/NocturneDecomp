// Name: core_dcamera.cpp_saveCameraFog_FUN_00453f10
// Address: 00453f10
// MANUAL RECONSTRUCTION
// Address Range: [[00453f10, 00453fb3]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00453f10(SFog *fog,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00453f10(SFog *fog,_FILE *file_handle)

{
  _fprintf(file_handle,"fogR,fogG,fogB\n");
  _fprintf(file_handle,"%d,%d,%d\n",(fog->color_index).r,(fog->color_index).g,(fog->color_index).b);
  _fprintf(file_handle,"fogVel\n");
  _fprintf(file_handle,"%f,%f,%f\n",(double)(fog->scroll).x,(double)(fog->scroll).y,
             (double)(fog->scroll).z);
  _fprintf(file_handle,"%f,%f\n",(double)fog->height_threshold,
             (double)fog->density_multiplier);
  _fprintf(file_handle,"%f\n",(double)fog->temperature);
  return;
}
