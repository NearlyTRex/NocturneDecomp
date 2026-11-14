// Name: core_dcamera.cpp_saveCameraFog_FUN_00454b70
// Address: 00454b70
// Address Range: [[00454b70, 00454c13]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00454b70(SFog *fog,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_saveCameraFog_FUN_00454b70(SFog *fog,_FILE *file_handle)

{
  FUN_005c03c0(file_handle,0x5d7a46);
  FUN_005c03c0();
  FUN_005c03c0(file_handle,0x5d7a60);
  FUN_005c03c0
            (file_handle,0x5d7a68,(double)(fog->scroll).x,(double)(fog->scroll).y,
             (double)(fog->scroll).z);
  FUN_005c03c0
            (file_handle,0x5d7a72,(double)fog->height_threshold,(double)fog->density_multiplier);
  FUN_005c03c0(file_handle,0x5d7a79,(double)fog->temperature);
  return;
}
