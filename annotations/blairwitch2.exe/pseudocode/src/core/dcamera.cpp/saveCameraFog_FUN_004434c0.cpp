// Name: core_dcamera.cpp_saveCameraFog_FUN_004434c0
// Address: 004434c0
// Address Range: [[004434c0, 00443563]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_saveCameraFog_FUN_004434c0(SFog *fog,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_004434c0(SFog *fog,_FILE *file_handle)

{
  FUN_005b8010(file_handle,0x5ce77d);
  FUN_005b8010();
  FUN_005b8010(file_handle,0x5ce797);
  FUN_005b8010
            (file_handle,0x5ce79f,(double)(fog->scroll).x,(double)(fog->scroll).y,
             (double)(fog->scroll).z);
  FUN_005b8010
            (file_handle,0x5ce7a9,(double)fog->height_threshold,(double)fog->density_multiplier);
  FUN_005b8010(file_handle,0x5ce7b0,(double)fog->temperature);
  return;
}
