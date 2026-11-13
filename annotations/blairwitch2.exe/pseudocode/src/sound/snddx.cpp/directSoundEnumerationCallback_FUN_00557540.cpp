// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_00557540
// Address: 00557540
// Address Range: [[00557540, 005577a6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_00557540(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_00557540(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

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
  if (0xb < DAT_0061bf80) {
    return 0;
  }
  pIStack_14 = (LPDIRECTSOUND)0x0;
  uVar1 = DirectSoundCreate(device_guid,&pIStack_14,(LPUNKNOWN)0x0);
  if (uVar1 != 0) {
    sound_snddx_cpp_FUN_00554ad0(uVar1);
    _sprintf(acStack_394,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_394);
    return 1;
  }
  if (pIStack_14 == (LPDIRECTSOUND)0x0) {
    return 1;
  }
  memset(&DStack_74,0,0x60);
  DStack_74.dwSize = 0x60;
  uVar1 = (*pIStack_14->vtable->GetCaps)(pIStack_14,&DStack_74);
  if (uVar1 != 0) {
    sound_snddx_cpp_FUN_00554ad0(uVar1);
    _sprintf(acStack_20c,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_20c);
  }
  if ((int *)DStack_74.dwReserved1 != (int *)0x0) {
    (**(code **)(*(int *)DStack_74.dwReserved1 + 8))(DStack_74.dwReserved1);
    DStack_74.dwReserved1 = 0;
  }
  if (uVar1 == 0) {
    iVar2 = DAT_0061bf80 * 0x11c;
    puVar3 = (uint *)(iVar2 + 0x2649874);
    memset(puVar3,0,0x11c);
    if (device_guid == (LPGUID)0x0) {
      *puVar3 = 1;
    }
    else {
      *puVar3 = 0;
      puVar5 = (uint *)(iVar2 + 0x264987c + (uint)bVar7 * -8);
      puVar3 = (uint *)((int)device_guid + (uint)bVar7 * -8 + 4);
      *(ulong *)(iVar2 + 0x2649878) = device_guid->Data1;
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
      *puVar5 = *puVar3;
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
    }
    *(uint *)(iVar2 + 0x264998c) = 0;
    if ((bStack_78 & 0x20) == 0) {
      *(uint *)(iVar2 + 0x2649988) = 0;
      if (DStack_74.dwPrimaryBuffers != 0) {
        *(uint *)(iVar2 + 0x264998c) = 1;
      }
      if (DStack_74.dwFreeHwMixingStaticBuffers != 0) {
        *(uint *)(iVar2 + 0x264998c) = 2;
      }
      if (DStack_74.dwFreeHw3DStaticBuffers == 0) {
        _DAT_0264ac0c = 1;
        wincore_winrun_cpp_FUN_0058ffc0("SOUND: No onboard RAM detected.  Forcing samples to load in system memory.\n");
      }
      else {
        _DAT_0264ac0c = 1;
        wincore_winrun_cpp_FUN_0058ffc0("SOUND: Onboard RAM detected.  Samples will be loaded into available onboard memory.\n");
      }
    }
    else {
      *(uint *)(iVar2 + 0x2649988) = 1;
    }
    _strncpy((char *)(iVar2 + 0x2649888),unaff_retaddr,0xff);
    DAT_0061bf80 = DAT_0061bf80 + 1;
    return 1;
  }
  return 1;
}
