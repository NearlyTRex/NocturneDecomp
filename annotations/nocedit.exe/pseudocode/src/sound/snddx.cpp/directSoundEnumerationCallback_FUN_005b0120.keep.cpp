// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120
// Address: 005b0120
// MANUAL RECONSTRUCTION
// Address Range: [[005b0120, 005b033e] [00604f31, 00604f57]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_005b0120(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_005b0120(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  char cVar2;
  ushort uVar4;
  int iVar5;
  uint uVar3;
  uint error_code;
  int iVar4;
  char *pcVar6;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  char acStack_390 [400];
  char acStack_200 [400];
  DSCAPS DStack_70;
  LPDIRECTSOUND local_10;
  char cVar1;
  SDirectSoundDeviceInfo *pSVar2;
  
  if (0xb < g_DirectSoundDeviceCount) {
    return 0;
  }
  local_10 = (LPDIRECTSOUND)0x0;
  uVar3 = DirectSoundCreate(device_guid,&local_10,(LPUNKNOWN)0x0);
  if (uVar3 != 0) {
    pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
    _sprintf
              (acStack_200,"DirectSux: Unable to %s.  (%s)","create DirectSound object",
               pcVar6);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_200);
    return 1;
  }
  if (local_10 != (LPDIRECTSOUND)0x0) {
    memset(&DStack_70,0,0x60);
    DStack_70.dwSize = 0x60;
    error_code = (*local_10->vtable->GetCaps)(local_10,&DStack_70);
    if (error_code != 0) {
      pcVar6 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
      _sprintf
                (acStack_390,"DirectSux: Unable to %s.  (%s)","Querry DirectSound capabilities",
                 pcVar6);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_390);
    }
    if (local_10 != (LPDIRECTSOUND)0x0) {
      (*local_10->vtable->Release)((IUnknown *)local_10);
    }
    iVar5 = g_DirectSoundDeviceCount;
    if (error_code == 0) {
      if (device_guid == (LPGUID)0x0) {
        g_DirectSoundDevices[g_DirectSoundDeviceCount].is_primary_device = 1;
      }
      else {
        pSVar2 = g_DirectSoundDevices + g_DirectSoundDeviceCount;
        g_DirectSoundDevices[g_DirectSoundDeviceCount].is_primary_device = 0;
        (pSVar2->device_guid).Data1 = device_guid->Data1;
        uVar4 = device_guid->Data3;
        g_DirectSoundDevices[iVar5].device_guid.Data2 = device_guid->Data2;
        g_DirectSoundDevices[iVar5].device_guid.Data3 = uVar4;
        *(uint *)g_DirectSoundDevices[iVar5].device_guid.Data4 =
             *(uint *)device_guid->Data4;
        *(uint *)(g_DirectSoundDevices[iVar5].device_guid.Data4 + 4) =
             *(uint *)(device_guid->Data4 + 4);
      }
      iVar5 = g_DirectSoundDeviceCount;
      g_DirectSoundDevices[g_DirectSoundDeviceCount].is_emulated =
           (uint)(((byte)DStack_70.dwFlags & 0x20) != 0);
      g_DirectSoundDevices[iVar5].has_hardware_mixing =
           (uint)(DStack_70.dwMaxHwMixingStaticBuffers != 0);
      pcVar9 = g_DirectSoundDevices[iVar5].device_description;
      do {
        cVar1 = *description;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = description[1];
        description = description + 2;
        pcVar9[1] = cVar2;
        pcVar9 = pcVar9 + 2;
      } while (cVar2 != '\0');
      g_DirectSoundDeviceCount = g_DirectSoundDeviceCount + 1;
      return 1;
    }
  }
  return 1;
}
