// Name: FUN_10003400
// Address: 10003400
// Address Range: [[10003400, 100035a3]]
// Convention: unknown
// Signature: undefined4 FUN_10003400(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10003400(void)

{
  IDirectDrawSurface *this_ptr;
  HRESULT HVar1;
  DDPIXELFORMAT_union2 DVar2;
  DDPIXELFORMAT_union3 DVar3;
  DDPIXELFORMAT_union4 DVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  DWORD *pDVar8;
  DDSURFACEDESC *pDVar9;
  DDPIXELFORMAT *pDVar10;
  byte bVar11;
  int local_80;
  DDSURFACEDESC local_7c;
  
  bVar11 = 0;
  FUN_10002ea0();
  local_80 = 0;
  do {
    iVar6 = 0;
    iVar7 = local_80;
    do {
      pDVar9 = &local_7c;
      for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
        pDVar9->dwSize = 0;
        pDVar9 = (DDSURFACEDESC *)((int)pDVar9 + ((uint)bVar11 * -2 + 1) * 4);
      }
      pDVar8 = &DAT_10226a58;
      pDVar10 = &local_7c.ddpfPixelFormat;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        pDVar10->dwSize = *pDVar8;
        pDVar8 = pDVar8 + (uint)bVar11 * -2 + 1;
        pDVar10 = (DDPIXELFORMAT *)((int)pDVar10 + ((uint)bVar11 * -2 + 1) * 4);
      }
      local_7c.dwHeight = *(DWORD *)(&DAT_10226848 + local_80);
      local_7c.dwSize = 0x7c;
      local_7c.dwFlags = 0x1007;
      local_7c.ddsCaps.dwCaps = 0x1800;
      local_7c.dwWidth = local_7c.dwHeight;
      HVar1 = (*g_DirectDraw4->vtable->CreateSurface)
                        (g_DirectDraw4,&local_7c,(IDirectDrawSurface **)((int)&DAT_10139048 + iVar7)
                         ,(IUnknown *)0x0);
      if (HVar1 != 0) {
        return 0;
      }
      this_ptr = *(IDirectDrawSurface **)((int)&DAT_10139048 + iVar7);
      HVar1 = (*this_ptr->vtable->QueryInterface)
                        ((IUnknown *)this_ptr,(GUID *)&DAT_100121f8,
                         (void **)((int)&DAT_10138f30 + iVar7));
      if (HVar1 != 0) {
        return 0;
      }
      iVar7 = iVar7 + 0x20;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    local_80 = local_80 + 4;
    if (0x1f < local_80) {
      _DAT_101386a8 = 0;
      for (DVar2 = local_7c.ddpfPixelFormat.dwRedYMask; (DVar2.dwRBitMask & 1) == 0;
          DVar2.dwRBitMask = DVar2.dwRBitMask >> 1) {
        _DAT_101386a8 = _DAT_101386a8 + 1;
      }
      _DAT_10226a78 =
           (uint)
           (0xff / (ulonglong)
                   (local_7c.ddpfPixelFormat.dwRedYMask.dwRBitMask >> ((byte)_DAT_101386a8 & 0x1f)))
      ;
      _DAT_10240620 = 0;
      for (DVar3 = local_7c.ddpfPixelFormat.dwGreenUMask; (DVar3.dwGBitMask & 1) == 0;
          DVar3.dwGBitMask = DVar3.dwGBitMask >> 1) {
        _DAT_10240620 = _DAT_10240620 + 1;
      }
      _DAT_102268b0 =
           (uint)
           (0xff / (ulonglong)
                   (local_7c.ddpfPixelFormat.dwGreenUMask.dwGBitMask >> ((byte)_DAT_10240620 & 0x1f)
                   ));
      _DAT_10226e80 = 0;
      for (DVar4 = local_7c.ddpfPixelFormat.dwBlueVMask; (DVar4.dwBBitMask & 1) == 0;
          DVar4.dwBBitMask = DVar4.dwBBitMask >> 1) {
        _DAT_10226e80 = _DAT_10226e80 + 1;
      }
      _DAT_101b88d8 =
           (uint)
           (0xff / (ulonglong)
                   (local_7c.ddpfPixelFormat.dwBlueVMask.dwBBitMask >> ((byte)_DAT_10226e80 & 0x1f))
           );
      if (DAT_100141fc == 0) {
        _DAT_1013b8d0 = 0;
      }
      else {
        _DAT_1013b8d0 = local_7c.ddpfPixelFormat.dwAlphaBitMask;
      }
      DAT_10014214 = 0;
      _DAT_10240628 = local_7c.ddpfPixelFormat.dwBitCount;
      FUN_10001200();
      return 1;
    }
  } while( true );
}
