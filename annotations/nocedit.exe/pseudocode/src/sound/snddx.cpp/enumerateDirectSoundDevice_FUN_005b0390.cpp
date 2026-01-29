// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
// Address: 005b0390
// Address Range: [[005b0390, 005b0436]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390 (UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390
          (UINT device_id,SSoundDeviceInfo *device_info)

{
  DWORD DVar1;
  
  if (g_DirectSoundDeviceCount < 0) {
    g_DirectSoundDeviceCount = 0;
    crt_dsound_c_DirectSoundEnumerateA
              (sound_snddx_cpp_directSoundEnumerationCallback_FUN_005b0120,(LPVOID)0x0);
  }
  if ((-1 < (int)device_id) && ((int)device_id < g_DirectSoundDeviceCount)) {
    device_info->device_id = device_id;
    device_info->api_type = 1;
    DVar1 = g_DirectSoundDevices[device_id].value1;
    device_info->flags = 0;
    device_info->device_value1 = DVar1;
    device_info->device_value2 = g_DirectSoundDevices[device_id].value2;
    device_info->device_guid = g_DirectSoundDevices[device_id].device_id_part;
    sprintf
              (device_info->device_name,"DirectSound: %s",device_id * 0x11c + 0x3f69c74);
    return 1;
  }
  return 0;
}
