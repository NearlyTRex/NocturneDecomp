// Name: dll_dx7.cpp_APIDLLinit_FUN_10001a80
// Address: 10001a80
// Address Range: [[10001a80, 10001d6c]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLinit_FUN_10001a80(HWND windowHandle,CExternalRendererBridge *interface)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLinit_FUN_10001a80(HWND windowHandle,CExternalRendererBridge *interface)

{
  char cVar1;
  HRESULT HVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  DDDEVICEIDENTIFIER *pDVar9;
  char *pcVar11;
  CExternalRendererBridge *pCVar12;
  byte bVar13;
  DWORD DStack_430;
  uint uStack_42c;
  DDDEVICEIDENTIFIER DStack_428;
  DDDEVICEIDENTIFIER *pDVar10;
  
                    /* 0x1a80  19  APIDLLinit */
  bVar13 = 0;
  dll_dx7_cpp_APIDLLkill_FUN_10002460();
  g_AdapterCount = 0;
  DirectDrawEnumerateExA(dll_dx7_cpp_enumAdapterCallback_FUN_100017b0,(void *)0x0,7);
  DStack_430 = 0;
  if (0 < g_AdapterCount) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      HVar2 = DirectDrawCreate(*(GUID **)((int)g_AdapterGuids + iVar7),&g_DirectDraw,(IUnknown *)0x0
                              );
      if (HVar2 != 0) {
        return 0;
      }
      HVar2 = (*g_DirectDraw->vtable->QueryInterface)
                        ((IUnknown *)g_DirectDraw,(GUID *)&g_IID_IDirectDraw4,&g_DirectDraw4);
      if (HVar2 != 0) {
        return 0;
      }
      pDVar10 = &DStack_428;
      for (iVar3 = 0x10a; iVar3 != 0; iVar3 = iVar3 + -1) {
        pDVar10->szDriver[0] = '\0';
        pDVar10->szDriver[1] = '\0';
        pDVar10->szDriver[2] = '\0';
        pDVar10->szDriver[3] = '\0';
        pDVar10 = (DDDEVICEIDENTIFIER *)((int)pDVar10 + ((uint)bVar13 * -2 + 1) * 4);
      }
      HVar2 = (*g_DirectDraw4->vtable->GetDeviceIdentifier)(g_DirectDraw4,&DStack_428,0);
      if (HVar2 != 0) {
        return 0;
      }
      uVar4 = 0xffffffff;
      pDVar10 = &DStack_428;
      do {
        pDVar9 = pDVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pDVar9 = (DDDEVICEIDENTIFIER *)((int)pDVar10 + (uint)bVar13 * -2 + 1);
        pcVar8 = pDVar10->szDriver;
        pDVar10 = pDVar9;
      } while (*pcVar8 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = (char *)((int)pDVar9 - uVar4);
      pcVar11 = g_AdapterDriverName[0] + iVar6;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)pcVar11 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + ((uint)bVar13 * -2 + 1) * 4;
        pcVar11 = pcVar11 + ((uint)bVar13 * -2 + 1) * 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar13 * -2 + 1;
        pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar8 = DStack_428.szDescription;
      do {
        pcVar11 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar8 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar11 + -uVar4;
      pcVar11 = g_AdapterDescription[0] + iVar6;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)pcVar11 = *(uint *)pcVar8;
        pcVar8 = pcVar8 + ((uint)bVar13 * -2 + 1) * 4;
        pcVar11 = pcVar11 + ((uint)bVar13 * -2 + 1) * 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar13 * -2 + 1;
        pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
      }
      *(DWORD *)((int)g_AdapterVendorId + iVar7) = DStack_428.dwVendorId;
      *(DWORD *)((int)g_AdapterDeviceId + iVar7) = DStack_428.dwDeviceId;
      if (g_DirectDraw4 != (IDirectDraw4 *)0x0) {
        (*g_DirectDraw4->vtable->Release)((IUnknown *)g_DirectDraw4);
        g_DirectDraw4 = (IDirectDraw4 *)0x0;
      }
      if (g_DirectDraw != (IDirectDraw *)0x0) {
        (*g_DirectDraw->vtable->Release)((IUnknown *)g_DirectDraw);
        g_DirectDraw = (IDirectDraw *)0x0;
      }
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x200;
      DStack_430 = DStack_430 + 1;
    } while ((int)DStack_430 < g_AdapterCount);
  }
  g_WindowHandle = windowHandle;
  pCVar12 = &g_ExternalRendererBridge;
  for (iVar6 = 0x23; iVar6 != 0; iVar6 = iVar6 + -1) {
    pCVar12->red_bit_position = interface->red_bit_position;
    interface = (CExternalRendererBridge *)((int)interface + (uint)bVar13 * -8 + 4);
    pCVar12 = (CExternalRendererBridge *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
  }
  HVar2 = DirectDrawCreate(g_AdapterGuids[g_SelectedCardIndex],&g_DirectDraw,(IUnknown *)0x0);
  if (HVar2 != 0) {
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  HVar2 = (*g_DirectDraw->vtable->QueryInterface)
                    ((IUnknown *)g_DirectDraw,(GUID *)&g_IID_IDirectDraw4,&g_DirectDraw4);
  dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
  if (HVar2 != 0) {
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  DStack_428.szDriver[4] = '\0';
  DStack_428.szDriver[5] = '\0';
  DStack_428.szDriver[6] = '\0';
  DStack_428.szDriver[7] = '\0';
  DStack_428.szDriver[8] = '\0';
  DStack_428.szDriver[9] = '\0';
  DStack_428.szDriver[10] = '\0';
  DStack_428.szDriver[0xb] = '\0';
  DStack_428.szDriver[0xc] = '\0';
  DStack_428.szDriver[0xd] = '\0';
  DStack_428.szDriver[0xe] = '\0';
  DStack_428.szDriver[0xf] = '\0';
  DStack_428.szDriver[0] = '\0';
  DStack_428.szDriver[1] = '\0';
  DStack_428.szDriver[2] = '\0';
  DStack_428.szDriver[3] = '\x10';
  HVar2 = (*g_DirectDraw4->vtable->GetAvailableVidMem)
                    (g_DirectDraw4,(DDSCAPS2 *)&DStack_428,&uStack_42c,&DStack_430);
  if (HVar2 != 0) {
    dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  g_LocalVideoMem = uStack_42c;
  DStack_428.szDriver[4] = '\0';
  DStack_428.szDriver[5] = '\0';
  DStack_428.szDriver[6] = '\0';
  DStack_428.szDriver[7] = '\0';
  DStack_428.szDriver[8] = '\0';
  DStack_428.szDriver[9] = '\0';
  DStack_428.szDriver[10] = '\0';
  DStack_428.szDriver[0xb] = '\0';
  DStack_428.szDriver[0xc] = '\0';
  DStack_428.szDriver[0xd] = '\0';
  DStack_428.szDriver[0xe] = '\0';
  DStack_428.szDriver[0xf] = '\0';
  DStack_428.szDriver[0] = '\0';
  DStack_428.szDriver[1] = '\0';
  DStack_428.szDriver[2] = '\0';
  DStack_428.szDriver[3] = ' ';
  HVar2 = (*g_DirectDraw4->vtable->GetAvailableVidMem)
                    (g_DirectDraw4,(DDSCAPS2 *)&DStack_428,&uStack_42c,&DStack_430);
  if (HVar2 != 0) {
    dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  g_NonLocalVideoMem = uStack_42c;
  dll_dx7_cpp_releaseAllTextures_FUN_10002ea0();
  iVar6 = dll_dx7_cpp_createDirect3D_FUN_10002f40();
  if (iVar6 == 0) {
    return 0;
  }
  dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
  return 1;
}
