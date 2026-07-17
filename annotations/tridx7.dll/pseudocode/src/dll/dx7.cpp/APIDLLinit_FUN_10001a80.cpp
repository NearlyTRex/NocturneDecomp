// Name: dll_dx7.cpp_APIDLLinit_FUN_10001a80
// Address: 10001a80
// Address Range: [[10001a80, 10001d6c]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLinit_FUN_10001a80(HWND windowHandle,CExternalRendererBridge *interface)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLinit_FUN_10001a80(HWND windowHandle,CExternalRendererBridge *interface)

{
  char cVar1;
  DWORD *pDVar2;
  HRESULT HVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  DDSCAPS *pDVar10;
  char *pcVar12;
  CExternalRendererBridge *pCVar13;
  byte bVar14;
  DWORD DStack_430;
  uint uStack_42c;
  DDSCAPS DStack_428;
  char acStack_424 [508];
  char acStack_228 [520];
  DWORD DStack_20;
  DWORD DStack_1c;
  DDSCAPS *pDVar11;
  
                    /* 0x1a80  19  APIDLLinit */
  bVar14 = 0;
  dll_dx7_cpp_APIDLLkill_FUN_10002460();
  g_AdapterCount = 0;
  DirectDrawEnumerateExA(dll_dx7_cpp_enumAdapterCallback_FUN_100017b0,(void *)0x0,7);
  DStack_430 = 0;
  if (0 < g_AdapterCount) {
    iVar8 = 0;
    iVar7 = 0;
    do {
      HVar3 = DirectDrawCreate(*(GUID **)((int)g_AdapterGuids + iVar8),&g_DirectDraw,(IUnknown *)0x0
                              );
      if (HVar3 != 0) {
        return 0;
      }
      HVar3 = (*g_DirectDraw->vtable->QueryInterface)
                        ((IUnknown *)g_DirectDraw,(GUID *)&g_IID_IDirectDraw4,&g_DirectDraw4);
      if (HVar3 != 0) {
        return 0;
      }
      pDVar11 = &DStack_428;
      for (iVar4 = 0x10a; iVar4 != 0; iVar4 = iVar4 + -1) {
        pDVar11->dwCaps = 0;
        pDVar11 = pDVar11 + (uint)bVar14 * -2 + 1;
      }
      HVar3 = (*g_DirectDraw4->vtable->GetDeviceIdentifier)
                        (g_DirectDraw4,(DDDEVICEIDENTIFIER *)&DStack_428,0);
      if (HVar3 != 0) {
        return 0;
      }
      uVar5 = 0xffffffff;
      pDVar11 = &DStack_428;
      do {
        pDVar10 = pDVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pDVar10 = (DDSCAPS *)((int)pDVar11 + (uint)bVar14 * -2 + 1);
        pDVar2 = &pDVar11->dwCaps;
        pDVar11 = pDVar10;
      } while ((char)*pDVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = (char *)((int)pDVar10 - uVar5);
      pcVar12 = g_AdapterDriverName[0] + iVar7;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar12 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
        pcVar12 = pcVar12 + ((uint)bVar14 * -2 + 1) * 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar12 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
        pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar9 = acStack_228;
      do {
        pcVar12 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar9 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar12 + -uVar5;
      pcVar12 = g_AdapterDescription[0] + iVar7;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint *)pcVar12 = *(uint *)pcVar9;
        pcVar9 = pcVar9 + ((uint)bVar14 * -2 + 1) * 4;
        pcVar12 = pcVar12 + ((uint)bVar14 * -2 + 1) * 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar12 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar14 * -2 + 1;
        pcVar12 = pcVar12 + (uint)bVar14 * -2 + 1;
      }
      *(DWORD *)((int)g_AdapterVendorId + iVar8) = DStack_20;
      *(DWORD *)((int)g_AdapterDeviceId + iVar8) = DStack_1c;
      if (g_DirectDraw4 != (IDirectDraw4 *)0x0) {
        (*g_DirectDraw4->vtable->Release)((IUnknown *)g_DirectDraw4);
        g_DirectDraw4 = (IDirectDraw4 *)0x0;
      }
      if (g_DirectDraw != (IDirectDraw *)0x0) {
        (*g_DirectDraw->vtable->Release)((IUnknown *)g_DirectDraw);
        g_DirectDraw = (IDirectDraw *)0x0;
      }
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x200;
      DStack_430 = DStack_430 + 1;
    } while ((int)DStack_430 < g_AdapterCount);
  }
  g_WindowHandle = windowHandle;
  pCVar13 = &g_ExternalRendererBridge;
  for (iVar7 = 0x23; iVar7 != 0; iVar7 = iVar7 + -1) {
    pCVar13->red_bit_position = interface->red_bit_position;
    interface = (CExternalRendererBridge *)((int)interface + (uint)bVar14 * -8 + 4);
    pCVar13 = (CExternalRendererBridge *)((int)pCVar13 + ((uint)bVar14 * -2 + 1) * 4);
  }
  HVar3 = DirectDrawCreate(g_AdapterGuids[g_SelectedCardIndex],&g_DirectDraw,(IUnknown *)0x0);
  if (HVar3 != 0) {
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  HVar3 = (*g_DirectDraw->vtable->QueryInterface)
                    ((IUnknown *)g_DirectDraw,(GUID *)&g_IID_IDirectDraw4,&g_DirectDraw4);
  dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar3);
  if (HVar3 != 0) {
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  acStack_424[0] = '\0';
  acStack_424[1] = '\0';
  acStack_424[2] = '\0';
  acStack_424[3] = '\0';
  acStack_424[4] = '\0';
  acStack_424[5] = '\0';
  acStack_424[6] = '\0';
  acStack_424[7] = '\0';
  acStack_424[8] = '\0';
  acStack_424[9] = '\0';
  acStack_424[10] = '\0';
  acStack_424[0xb] = '\0';
  DStack_428.dwCaps = 0x10000000;
  HVar3 = (*g_DirectDraw4->vtable->GetAvailableVidMem)
                    (g_DirectDraw4,&DStack_428,&uStack_42c,&DStack_430);
  if (HVar3 != 0) {
    dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  g_LocalVideoMem = uStack_42c;
  acStack_424[0] = '\0';
  acStack_424[1] = '\0';
  acStack_424[2] = '\0';
  acStack_424[3] = '\0';
  acStack_424[4] = '\0';
  acStack_424[5] = '\0';
  acStack_424[6] = '\0';
  acStack_424[7] = '\0';
  acStack_424[8] = '\0';
  acStack_424[9] = '\0';
  acStack_424[10] = '\0';
  acStack_424[0xb] = '\0';
  DStack_428.dwCaps = 0x20000000;
  HVar3 = (*g_DirectDraw4->vtable->GetAvailableVidMem)
                    (g_DirectDraw4,&DStack_428,&uStack_42c,&DStack_430);
  if (HVar3 != 0) {
    dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  g_NonLocalVideoMem = uStack_42c;
  dll_dx7_cpp_FUN_10002ea0();
  iVar7 = dll_dx7_cpp_FUN_10002f40();
  if (iVar7 == 0) {
    return 0;
  }
  dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
  return 1;
}
