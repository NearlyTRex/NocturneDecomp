// Name: sound_snddx.cpp_FUN_0055d0de
// Address: 0055d0de
// Address Range: [[0055d0de, 0055d305]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_FUN_0055d0de(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_FUN_0055d0de(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  char *unaff_retaddr;
  byte auStack_394 [392];
  byte auStack_20c [404];
  byte bStack_78;
  DSCAPS DStack_74;
  LPDIRECTSOUND pIStack_14;
  
  bVar8 = 0;
  if (0xb < DAT_00604510) {
    return 0;
  }
  pIStack_14 = (LPDIRECTSOUND)0x0;
  uVar1 = DirectSoundCreate(device_guid,&pIStack_14,(LPUNKNOWN)0x0);
  if (uVar1 != 0) {
    pcVar2 = sound_snddx_cpp_FUN_0055a670(uVar1);
    FUN_005a28c0
              (auStack_394,"DirectSux: Unable to %s.  (%s)","create DirectSound object",
               pcVar2);
    sound_sndmain_cpp_FUN_0055a560(auStack_394);
    return 1;
  }
  if (pIStack_14 == (LPDIRECTSOUND)0x0) {
    return 1;
  }
  memset(&DStack_74,0,0x60);
  DStack_74.dwSize = 0x60;
  uVar1 = (*pIStack_14->vtable->GetCaps)(pIStack_14,&DStack_74);
  if (uVar1 != 0) {
    pcVar2 = sound_snddx_cpp_FUN_0055a670(uVar1);
    FUN_005a28c0
              (auStack_20c,"DirectSux: Unable to %s.  (%s)","Querry DirectSound capabilities",
               pcVar2);
    sound_sndmain_cpp_FUN_0055a560(auStack_20c);
  }
  if ((int *)DStack_74.dwReserved1 != (int *)0x0) {
    (**(code **)(*(int *)DStack_74.dwReserved1 + 8))(DStack_74.dwReserved1);
    DStack_74.dwReserved1 = 0;
  }
  if (uVar1 == 0) {
    iVar3 = DAT_00604510 * 0x11c;
    puVar4 = (uint *)(iVar3 + 0x2cf3c74);
    memset(puVar4,0,0x11c);
    if (device_guid == (LPGUID)0x0) {
      *puVar4 = 1;
    }
    else {
      *puVar4 = 0;
      puVar6 = (uint *)(iVar3 + 0x2cf3c7c + (uint)bVar8 * -8);
      puVar4 = (uint *)((int)device_guid + (uint)bVar8 * -8 + 4);
      *(ulong *)(iVar3 + 0x2cf3c78) = device_guid->Data1;
      puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
      *puVar6 = *puVar4;
      *puVar7 = *puVar5;
      puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    }
    *(uint *)(iVar3 + 0x2cf3d8c) = 0;
    if ((bStack_78 & 0x20) == 0) {
      *(uint *)(iVar3 + 0x2cf3d88) = 0;
      if (DStack_74.dwPrimaryBuffers != 0) {
        *(uint *)(iVar3 + 0x2cf3d8c) = 1;
      }
      if (DStack_74.dwFreeHwMixingStaticBuffers != 0) {
        *(uint *)(iVar3 + 0x2cf3d8c) = 2;
      }
    }
    else {
      *(uint *)(iVar3 + 0x2cf3d88) = 1;
    }
    _strncpy((char *)(iVar3 + 0x2cf3c88),unaff_retaddr,0xff);
    DAT_00604510 = DAT_00604510 + 1;
    return 1;
  }
  return 1;
}
