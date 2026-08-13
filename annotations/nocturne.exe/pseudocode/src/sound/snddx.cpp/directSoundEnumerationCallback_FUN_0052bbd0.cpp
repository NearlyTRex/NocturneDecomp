// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_0052bbd0
// Address: 0052bbd0
// Address Range: [[0052bbd0, 0052bdee]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0052bbd0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0052bbd0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  char acStack_390 [400];
  char acStack_200 [400];
  DSCAPS DStack_70;
  LPDIRECTSOUND local_10;
  
  bVar9 = 0;
  if (0xb < DAT_005bed40) {
    return 0;
  }
  local_10 = (LPDIRECTSOUND)0x0;
  uVar2 = DirectSoundCreate(device_guid,&local_10,(LPUNKNOWN)0x0);
  if (uVar2 != 0) {
    pcVar8 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
    _sprintf(acStack_200,"DirectSux: Unable to %s.  (%s)","create DirectSound object",
               pcVar8);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_200);
    return 1;
  }
  if (local_10 != (LPDIRECTSOUND)0x0) {
    memset(&DStack_70,0,0x60);
    DStack_70.dwSize = 0x60;
    uVar2 = (*local_10->vtable->GetCaps)(local_10,&DStack_70);
    if (uVar2 != 0) {
      pcVar8 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(acStack_390,"DirectSux: Unable to %s.  (%s)","Querry DirectSound capabilities",
                 pcVar8);
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_390);
    }
    if (local_10 != (LPDIRECTSOUND)0x0) {
      (*local_10->vtable->Release)(local_10);
    }
    if (uVar2 == 0) {
      iVar3 = DAT_005bed40 * 0x11c;
      if (device_guid == (LPGUID)0x0) {
        *(uint *)(iVar3 + 0x2dc84c4) = 1;
      }
      else {
        *(uint *)(iVar3 + 0x2dc84c4) = 0;
        puVar6 = (uint *)(iVar3 + 0x2dc84cc + (uint)bVar9 * -8);
        puVar4 = (uint *)((int)device_guid + (uint)bVar9 * -8 + 4);
        *(ulong *)(iVar3 + 0x2dc84c8) = device_guid->Data1;
        puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar5 = puVar4 + (uint)bVar9 * -2 + 1;
        *puVar6 = *puVar4;
        *puVar7 = *puVar5;
        puVar7[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
      }
      iVar3 = DAT_005bed40;
      *(uint *)(DAT_005bed40 * 0x11c + 0x2dc85d8) = (uint)(((byte)DStack_70.dwFlags & 0x20) != 0);
      *(uint *)(iVar3 * 0x11c + 0x2dc85dc) = (uint)(DStack_70.dwMaxHwMixingStaticBuffers != 0);
      pcVar8 = (char *)(iVar3 * 0x11c + 0x2dc84d8);
      do {
        cVar1 = *description;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = description[1];
        description = description + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      DAT_005bed40 = DAT_005bed40 + 1;
      return 1;
    }
  }
  return 1;
}
