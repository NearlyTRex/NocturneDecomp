// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0057a290
// Address: 0057a290
// Address Range: [[0057a290, 0057a336]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0057a290(UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0057a290(UINT device_id,SSoundDeviceInfo *device_info)

{
  DWORD DVar1;
  
  if (g_INT_006235d0 < 0) {
    g_INT_006235d0 = 0;
    DirectSoundEnumerateA
              (sound_snddx_cpp_directSoundEnumerationCallback_FUN_00579f70,(LPVOID)0x0);
  }
  if ((-1 < (int)device_id) && ((int)device_id < g_INT_006235d0)) {
    device_info->device_id = device_id;
    device_info->api_type = 1;
    DVar1 = g_SDirectSoundDeviceInfo_ARRAY_02c81044[device_id].has_hardware_mixing;
    device_info->flags = 0;
    device_info->has_hardware_mixing = DVar1;
    device_info->is_emulated = g_SDirectSoundDeviceInfo_ARRAY_02c81044[device_id].is_emulated;
    device_info->is_primary_device =
         g_SDirectSoundDeviceInfo_ARRAY_02c81044[device_id].is_primary_device;
    _sprintf(device_info->device_name,"DirectSound: %s");
    return 1;
  }
  return 0;
}
