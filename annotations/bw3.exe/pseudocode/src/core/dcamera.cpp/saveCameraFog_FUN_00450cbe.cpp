// Name: core_dcamera.cpp_saveCameraFog_FUN_00450cbe
// Address: 00450cbe
// Address Range: [[00450cbe, 00450d63]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00450cbe(SFog *fog,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00450cbe(SFog *fog,_FILE *file_handle)

{
  FUN_005a3140(file_handle,0x5ba0ad);
  FUN_005a3140();
  FUN_005a3140(file_handle,0x5ba0c7);
  FUN_005a3140
            (file_handle,0x5ba0cf,(double)(fog->scroll).x,(double)(fog->scroll).y,
             (double)(fog->scroll).z);
  FUN_005a3140
            (file_handle,0x5ba0d9,(double)fog->height_threshold,(double)fog->density_multiplier);
  FUN_005a3140(file_handle,0x5ba0e0,(double)fog->temperature);
  return;
}
