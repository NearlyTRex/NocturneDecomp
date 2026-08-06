// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_0052bbd0
// Address: 0052bbd0
// Address Range: [[0052bbd0, 0052bdee]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0052bbd0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0052bbd0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *unaff_EBP;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  char acStack_20c [396];
  byte bStack_80;
  uint auStack_7c [4];
  int iStack_6c;
  int *piStack_24;
  int *piStack_1c;
  uint local_10;
  
  bVar9 = 0;
  if (0xb < DAT_005bed40) {
    return 0;
  }
  local_10 = 0;
  uVar2 = Ordinal_1();
  if (uVar2 != 0) {
    sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
    _sprintf(acStack_20c,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_FUN_00529980();
    return 1;
  }
  if (piStack_1c != (int *)0x0) {
    memset(auStack_7c,0,0x60);
    auStack_7c[0] = 0x60;
    uVar2 = (**(code **)(*piStack_1c + 0x10))();
    if (uVar2 != 0) {
      pcVar8 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(&stack0xfffffc5c,"DirectSux: Unable to %s.  (%s)",
                 "Querry DirectSound capabilities",pcVar8);
      sound_sndmain_cpp_FUN_00529980(&stack0xfffffc5c);
    }
    if (piStack_24 != (int *)0x0) {
      (**(code **)(*piStack_24 + 8))(piStack_24);
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
      *(uint *)(DAT_005bed40 * 0x11c + 0x2dc85d8) = (uint)((bStack_80 & 0x20) != 0);
      *(uint *)(iVar3 * 0x11c + 0x2dc85dc) = (uint)(iStack_6c != 0);
      pcVar8 = (char *)(iVar3 * 0x11c + 0x2dc84d8);
      do {
        cVar1 = *unaff_EBP;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = unaff_EBP[1];
        unaff_EBP = unaff_EBP + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      DAT_005bed40 = DAT_005bed40 + 1;
      return 1;
    }
  }
  return 1;
}
