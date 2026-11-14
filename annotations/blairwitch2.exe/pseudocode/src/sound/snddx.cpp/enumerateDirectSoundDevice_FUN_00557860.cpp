// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_00557860
// Address: 00557860
// Address Range: [[00557860, 00557906]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_00557860(UINT device_id,SSoundDeviceInfo *device_info)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_00557860(UINT device_id,SSoundDeviceInfo *device_info)

{
  DWORD DVar1;
  int iVar2;
  
  if (DAT_0061bf80 < 0) {
    DAT_0061bf80 = 0;
    DirectSoundEnumerateA
              (sound_snddx_cpp_directSoundEnumerationCallback_FUN_00557540,(LPVOID)0x0);
  }
  if ((-1 < (int)device_id) && ((int)device_id < DAT_0061bf80)) {
    device_info->device_id = device_id;
    iVar2 = device_id * 0x11c;
    device_info->api_type = 1;
    DVar1 = *(DWORD *)(iVar2 + 0x264998c);
    device_info->flags = 0;
    device_info->has_hardware_mixing = DVar1;
    device_info->is_emulated = *(DWORD *)(iVar2 + 0x2649988);
    device_info->is_primary_device = *(DWORD *)(iVar2 + 0x2649874);
    _sprintf(device_info->device_name,"DirectSound: %s");
    return 1;
  }
  return 0;
}
