// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40
// Address: 0052be40
// Address Range: [[0052be40, 0052bee6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(UINT device_id,SSoundDeviceInfo *device_info)

{
  DWORD DVar1;
  int iVar2;
  
  if (DAT_005bed40 < 0) {
    DAT_005bed40 = 0;
    DirectSoundEnumerateA
              (sound_snddx_cpp_directSoundEnumerationCallback_FUN_0052bbd0,(LPVOID)0x0);
  }
  if ((-1 < (int)device_id) && ((int)device_id < DAT_005bed40)) {
    device_info->device_id = device_id;
    iVar2 = device_id * 0x11c;
    device_info->api_type = 1;
    DVar1 = *(DWORD *)(iVar2 + 0x2dc85dc);
    device_info->flags = 0;
    device_info->has_hardware_mixing = DVar1;
    device_info->is_emulated = *(DWORD *)(iVar2 + 0x2dc85d8);
    device_info->is_primary_device = *(DWORD *)(iVar2 + 0x2dc84c4);
    _sprintf(device_info->device_name,"DirectSound: %s",iVar2 + 0x2dc84d8);
    return 1;
  }
  return 0;
}
