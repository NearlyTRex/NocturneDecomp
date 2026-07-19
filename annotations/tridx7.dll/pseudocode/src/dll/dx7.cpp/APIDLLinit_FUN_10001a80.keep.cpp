// Name: dll_dx7.cpp_APIDLLinit_FUN_10001a80
// Address: 10001a80
// MANUAL RECONSTRUCTION
// Address Range: [[10001a80, 10001d6c]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLinit_FUN_10001a80(HWND windowHandle,CExternalRendererBridge *interface)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLinit_FUN_10001a80(HWND windowHandle,CExternalRendererBridge *interface)

{
  HRESULT HVar3;
  int iVar7;
  int adapter_index;
  DWORD vidmem_total;
  DWORD vidmem_free;
  DDSCAPS2 vidmem_caps;
  DDDEVICEIDENTIFIER device_id;

                    /* 0x1a80  19  APIDLLinit */
  dll_dx7_cpp_APIDLLkill_FUN_10002460();
  g_AdapterCount = 0;
  DirectDrawEnumerateExA(dll_dx7_cpp_enumAdapterCallback_FUN_100017b0,(void *)0x0,7);
  adapter_index = 0;
  if (0 < g_AdapterCount) {
    do {
      HVar3 = DirectDrawCreate(g_AdapterGuids[adapter_index],&g_DirectDraw,(IUnknown *)0x0);
      if (HVar3 != 0) {
        return 0;
      }
      HVar3 = (*g_DirectDraw->vtable->QueryInterface)
                        ((IUnknown *)g_DirectDraw,(GUID *)&g_IID_IDirectDraw4,(void **)&g_DirectDraw4);
      if (HVar3 != 0) {
        return 0;
      }
      memset(&device_id,0,sizeof(device_id));
      HVar3 = (*g_DirectDraw4->vtable->GetDeviceIdentifier)(g_DirectDraw4,&device_id,0);
      if (HVar3 != 0) {
        return 0;
      }
      strcpy(g_AdapterDriverName[adapter_index],device_id.szDriver);
      strcpy(g_AdapterDescription[adapter_index],device_id.szDescription);
      g_AdapterVendorId[adapter_index] = device_id.dwVendorId;
      g_AdapterDeviceId[adapter_index] = device_id.dwDeviceId;
      if (g_DirectDraw4 != (IDirectDraw4 *)0x0) {
        (*g_DirectDraw4->vtable->Release)((IUnknown *)g_DirectDraw4);
        g_DirectDraw4 = (IDirectDraw4 *)0x0;
      }
      if (g_DirectDraw != (IDirectDraw *)0x0) {
        (*g_DirectDraw->vtable->Release)((IUnknown *)g_DirectDraw);
        g_DirectDraw = (IDirectDraw *)0x0;
      }
      adapter_index = adapter_index + 1;
    } while (adapter_index < g_AdapterCount);
  }
  g_WindowHandle = windowHandle;
  g_ExternalRendererBridge = *interface;
  HVar3 = DirectDrawCreate(g_AdapterGuids[g_SelectedCardIndex],&g_DirectDraw,(IUnknown *)0x0);
  if (HVar3 != 0) {
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  HVar3 = (*g_DirectDraw->vtable->QueryInterface)
                    ((IUnknown *)g_DirectDraw,(GUID *)&g_IID_IDirectDraw4,(void **)&g_DirectDraw4);
  dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar3);
  if (HVar3 != 0) {
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  memset(&vidmem_caps,0,sizeof(vidmem_caps));
  vidmem_caps.dwCaps = 0x10000000;
  HVar3 = (*g_DirectDraw4->vtable->GetAvailableVidMem)
                    (g_DirectDraw4,&vidmem_caps,&vidmem_total,&vidmem_free);
  if (HVar3 != 0) {
    dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  g_LocalVideoMem = vidmem_total;
  memset(&vidmem_caps,0,sizeof(vidmem_caps));
  vidmem_caps.dwCaps = 0x20000000;
  HVar3 = (*g_DirectDraw4->vtable->GetAvailableVidMem)
                    (g_DirectDraw4,&vidmem_caps,&vidmem_total,&vidmem_free);
  if (HVar3 != 0) {
    dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
    dll_dx7_cpp_APIDLLkill_FUN_10002460();
    return 0;
  }
  g_NonLocalVideoMem = vidmem_total;
  dll_dx7_cpp_releaseAllTextures_FUN_10002ea0();
  iVar7 = dll_dx7_cpp_createDirect3D_FUN_10002f40();
  if (iVar7 == 0) {
    return 0;
  }
  dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
  return 1;
}
