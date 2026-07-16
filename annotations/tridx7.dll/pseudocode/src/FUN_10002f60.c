// Name: FUN_10002f60
// Address: 10002f60
// Address Range: [[10002f60, 10003085]]
// Convention: unknown
// Signature: int FUN_10002f60(DWORD param_1)

#include "nocturne.h"

int FUN_10002f60(DWORD param_1)

{
  IDirectDrawSurface *this_ptr;
  int iVar1;
  HRESULT HVar2;
  int iVar3;
  DWORD *pDVar4;
  DDSURFACEDESC *pDVar5;
  DDPIXELFORMAT *pDVar6;
  DDSURFACEDESC local_7c;
  
  pDVar5 = &local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar5->dwSize = 0;
    pDVar5 = (DDSURFACEDESC *)&pDVar5->dwFlags;
  }
  pDVar4 = &DAT_10226a58;
  pDVar6 = &local_7c.ddpfPixelFormat;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pDVar6->dwSize = *pDVar4;
    pDVar4 = pDVar4 + 1;
    pDVar6 = (DDPIXELFORMAT *)&pDVar6->dwFlags;
  }
  local_7c.dwSize = 0x7c;
  local_7c.dwFlags = 0x101007;
  if (*g_ExternalRendererBridge.agp_texture_mode == 0) {
    param_1 = (int)param_1 / 2;
  }
  local_7c.ddsCaps.dwCaps = 0x5000;
  local_7c.dwHeight = param_1;
  local_7c.dwWidth = param_1;
  if (DAT_10060670 == 0) {
    if (DAT_10014168 == 0) {
      local_7c.dwFlags = 0x121007;
      local_7c.dwMipMapOrRefresh.dwMipMapCount = 1;
      local_7c.ddsCaps.dwCaps = 0x405008;
    }
  }
  else {
    local_7c.dwFlags = 0x121007;
    iVar3 = FUN_10003090(param_1);
    local_7c.ddsCaps.dwCaps = local_7c.ddsCaps.dwCaps | 0x400008;
    local_7c.dwMipMapOrRefresh.dwMipMapCount = iVar3 - 3;
  }
  iVar3 = DAT_10014214 * 2;
  iVar1 = DAT_10014214 * 2;
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,&local_7c,(IDirectDrawSurface **)(&DAT_1020de44 + iVar3),
                     (IUnknown *)0x0);
  if (HVar2 != 0) {
    return -1;
  }
  this_ptr = (IDirectDrawSurface *)(&DAT_1020de44)[iVar3];
  HVar2 = (*this_ptr->vtable->QueryInterface)
                    ((IUnknown *)this_ptr,(GUID *)&DAT_100121f8,(void **)(&DAT_1020de40 + iVar1));
  if (HVar2 != 0) {
    FUN_10002340("D3D won't let me convert a surface to a texture.");
  }
  iVar3 = DAT_10014214;
  DAT_10014214 = DAT_10014214 + 1;
  if (0x1000 < DAT_10014214) {
    FUN_10002340("Too many textures requested");
  }
  return iVar3;
}
