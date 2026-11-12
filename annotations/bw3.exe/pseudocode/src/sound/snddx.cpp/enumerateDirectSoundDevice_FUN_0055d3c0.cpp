// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0055d3c0
// Address: 0055d3c0
// Address Range: [[0055d3c0, 0055d466]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(UINT device_id,SSoundDeviceInfo *device_info)

{
  DWORD DVar1;
  int iVar2;
  
  if (DAT_00604510 < 0) {
    DAT_00604510 = 0;
    DirectSoundEnumerateA((LPDSENUMCALLBACKA)0x55d0e0,(LPVOID)0x0);
  }
  if ((-1 < (int)device_id) && ((int)device_id < DAT_00604510)) {
    device_info->device_id = device_id;
    iVar2 = device_id * 0x11c;
    device_info->api_type = 1;
    DVar1 = *(DWORD *)(iVar2 + 0x2cf3d8c);
    device_info->flags = 0;
    device_info->has_hardware_mixing = DVar1;
    device_info->is_emulated = *(DWORD *)(iVar2 + 0x2cf3d88);
    device_info->is_primary_device = *(DWORD *)(iVar2 + 0x2cf3c74);
    _sprintf(device_info->device_name,"DirectSound: %s");
    return 1;
  }
  return 0;
}
