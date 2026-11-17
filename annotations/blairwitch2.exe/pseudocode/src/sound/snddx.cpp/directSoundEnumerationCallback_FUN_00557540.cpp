// Name: sound_snddx.cpp_directSoundEnumerationCallback_FUN_00557540
// Address: 00557540
// Address Range: [[00557540, 005577a6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_00557540(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_00557540(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  char *unaff_retaddr;
  char acStack_394 [392];
  char acStack_20c [404];
  byte bStack_78;
  DSCAPS DStack_74;
  LPDIRECTSOUND pIStack_14;
  
  bVar8 = 0;
  if (0xb < g_INT_0061bf80) {
    return 0;
  }
  pIStack_14 = (LPDIRECTSOUND)0x0;
  uVar2 = DirectSoundCreate(device_guid,&pIStack_14,(LPUNKNOWN)0x0);
  if (uVar2 != 0) {
    sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
    _sprintf(acStack_394,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_394);
    return 1;
  }
  if (pIStack_14 == (LPDIRECTSOUND)0x0) {
    return 1;
  }
  memset(&DStack_74,0,0x60);
  DStack_74.dwSize = 0x60;
  uVar2 = (*pIStack_14->vtable->GetCaps)(pIStack_14,&DStack_74);
  if (uVar2 != 0) {
    sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
    _sprintf(acStack_20c,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_20c);
  }
  if ((int *)DStack_74.dwReserved1 != (int *)0x0) {
    (**(code **)(*(int *)DStack_74.dwReserved1 + 8))(DStack_74.dwReserved1);
    DStack_74.dwReserved1 = 0;
  }
  iVar1 = g_INT_0061bf80;
  if (uVar2 == 0) {
    iVar3 = g_INT_0061bf80 * 0x11c;
    puVar4 = (uint *)(iVar3 + 0x2649874);
    memset(puVar4,0,0x11c);
    if (device_guid == (LPGUID)0x0) {
      *puVar4 = 1;
    }
    else {
      *puVar4 = 0;
      puVar6 = (uint *)(iVar3 + 0x264987c + (uint)bVar8 * -8);
      puVar4 = (uint *)((int)device_guid + (uint)bVar8 * -8 + 4);
      *(ulong *)(iVar3 + 0x2649878) = device_guid->Data1;
      puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
      *puVar6 = *puVar4;
      *puVar7 = *puVar5;
      puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
    }
    g_INT_ARRAY_0264998c[iVar1 * 0x47] = 0;
    if ((bStack_78 & 0x20) == 0) {
      *(uint *)(iVar3 + 0x2649988) = 0;
      if (DStack_74.dwPrimaryBuffers != 0) {
        g_INT_ARRAY_0264998c[iVar1 * 0x47] = 1;
      }
      if (DStack_74.dwFreeHwMixingStaticBuffers != 0) {
        g_INT_ARRAY_0264998c[iVar1 * 0x47] = 2;
      }
      if (DStack_74.dwFreeHw3DStaticBuffers == 0) {
        g_INT_0264ac0c = 1;
        wincore_winrun_cpp_outputDebugString_FUN_0058ffc0("SOUND: No onboard RAM detected.  Forcing samples to load in system memory.\n");
      }
      else {
        g_INT_0264ac0c = 1;
        wincore_winrun_cpp_outputDebugString_FUN_0058ffc0("SOUND: Onboard RAM detected.  Samples will be loaded into available onboard memory.\n");
      }
    }
    else {
      *(uint *)(iVar3 + 0x2649988) = 1;
    }
    _strncpy((char *)(iVar3 + 0x2649888),unaff_retaddr,0xff);
    g_INT_0061bf80 = g_INT_0061bf80 + 1;
    return 1;
  }
  return 1;
}
