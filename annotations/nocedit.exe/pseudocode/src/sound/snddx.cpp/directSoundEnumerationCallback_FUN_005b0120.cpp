// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120
// Address: 005b0120
// Address Range: [[005b0120, 005b033e]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_005b0120(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_005b0120(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  char cVar1;
  SDirectSoundDeviceInfo *pSVar2;
  uint uVar3;
  int iVar4;
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
  
  bVar10 = 0;
  if (0xb < g_DirectSoundDeviceCount) {
    return 0;
  }
  local_10 = (LPDIRECTSOUND)0x0;
  uVar3 = DirectSoundCreate(device_guid,&local_10,(LPUNKNOWN)0x0);
  if (uVar3 != 0) {
    pcVar9 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
    _sprintf
              (acStack_200,"DirectSux: Unable to %s.  (%s)","create DirectSound object",
               pcVar9);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_200);
    return 1;
  }
  if (local_10 != (LPDIRECTSOUND)0x0) {
    memset(&DStack_70,0,0x60);
    DStack_70.dwSize = 0x60;
    uVar3 = (*local_10->vtable->GetCaps)(local_10,&DStack_70);
    if (uVar3 != 0) {
      pcVar9 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      _sprintf
                (acStack_390,"DirectSux: Unable to %s.  (%s)","Querry DirectSound capabilities",
                 pcVar9);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_390);
    }
    if (local_10 != (LPDIRECTSOUND)0x0) {
      (*local_10->vtable->Release)(local_10);
    }
    if (uVar3 == 0) {
      iVar4 = g_DirectSoundDeviceCount * 0x11c;
      if (device_guid == (LPGUID)0x0) {
        g_DirectSoundDevices[g_DirectSoundDeviceCount].device_id_part = 1;
      }
      else {
        pSVar2 = g_DirectSoundDevices + g_DirectSoundDeviceCount;
        g_DirectSoundDevices[g_DirectSoundDeviceCount].device_id_part = 0;
        puVar7 = (uint *)(iVar4 + 0x3f69c68 + (uint)bVar10 * -8);
        puVar5 = (uint *)((int)device_guid + (uint)bVar10 * -8 + 4);
        *(ulong *)pSVar2->field_4 = device_guid->Data1;
        puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar6 = puVar5 + (uint)bVar10 * -2 + 1;
        *puVar7 = *puVar5;
        *puVar8 = *puVar6;
        puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
      }
      iVar4 = g_DirectSoundDeviceCount;
      g_DirectSoundDevices[g_DirectSoundDeviceCount].value2 =
           (uint)(((byte)DStack_70.dwFlags & 0x20) != 0);
      g_DirectSoundDevices[iVar4].value1 = (uint)(DStack_70.dwMaxHwMixingStaticBuffers != 0);
      pcVar9 = g_DirectSoundDevices[iVar4].device_description;
      do {
        cVar1 = *description;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = description[1];
        description = description + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      g_DirectSoundDeviceCount = g_DirectSoundDeviceCount + 1;
      return 1;
    }
  }
  return 1;
}
