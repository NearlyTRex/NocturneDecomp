// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_0055d0e0
// Address: 0055d0e0
// Address Range: [[0055d0e0, 0055d305]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0055d0e0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0055d0e0(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  char *unaff_retaddr;
  char acStack_394 [392];
  char acStack_20c [404];
  byte bStack_78;
  DSCAPS DStack_74;
  LPDIRECTSOUND pIStack_14;
  
  bVar7 = 0;
  if (0xb < DAT_00604510) {
    return 0;
  }
  pIStack_14 = (LPDIRECTSOUND)0x0;
  uVar1 = DirectSoundCreate(device_guid,&pIStack_14,(LPUNKNOWN)0x0);
  if (uVar1 != 0) {
    sound_snddx_cpp_FUN_0055a670(uVar1);
    _sprintf(acStack_394,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_FUN_0055a560(acStack_394);
    return 1;
  }
  if (pIStack_14 == (LPDIRECTSOUND)0x0) {
    return 1;
  }
  memset(&DStack_74,0,0x60);
  DStack_74.dwSize = 0x60;
  uVar1 = (*pIStack_14->vtable->GetCaps)(pIStack_14,&DStack_74);
  if (uVar1 != 0) {
    sound_snddx_cpp_FUN_0055a670(uVar1);
    _sprintf(acStack_20c,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_FUN_0055a560(acStack_20c);
  }
  if ((int *)DStack_74.dwReserved1 != (int *)0x0) {
    (**(code **)(*(int *)DStack_74.dwReserved1 + 8))(DStack_74.dwReserved1);
    DStack_74.dwReserved1 = 0;
  }
  if (uVar1 == 0) {
    iVar2 = DAT_00604510 * 0x11c;
    puVar3 = (uint *)(iVar2 + 0x2cf3c74);
    memset(puVar3,0,0x11c);
    if (device_guid == (LPGUID)0x0) {
      *puVar3 = 1;
    }
    else {
      *puVar3 = 0;
      puVar5 = (uint *)(iVar2 + 0x2cf3c7c + (uint)bVar7 * -8);
      puVar3 = (uint *)((int)device_guid + (uint)bVar7 * -8 + 4);
      *(ulong *)(iVar2 + 0x2cf3c78) = device_guid->Data1;
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
      *puVar5 = *puVar3;
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
    }
    *(uint *)(iVar2 + 0x2cf3d8c) = 0;
    if ((bStack_78 & 0x20) == 0) {
      *(uint *)(iVar2 + 0x2cf3d88) = 0;
      if (DStack_74.dwPrimaryBuffers != 0) {
        *(uint *)(iVar2 + 0x2cf3d8c) = 1;
      }
      if (DStack_74.dwFreeHwMixingStaticBuffers != 0) {
        *(uint *)(iVar2 + 0x2cf3d8c) = 2;
      }
    }
    else {
      *(uint *)(iVar2 + 0x2cf3d88) = 1;
    }
    _strncpy((char *)(iVar2 + 0x2cf3c88),unaff_retaddr,0xff);
    DAT_00604510 = DAT_00604510 + 1;
    return 1;
  }
  return 1;
}
