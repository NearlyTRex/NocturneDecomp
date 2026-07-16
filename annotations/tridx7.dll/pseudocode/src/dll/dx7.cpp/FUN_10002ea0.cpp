// Name: dll_dx7.cpp_FUN_10002ea0
// Address: 10002ea0
// Address Range: [[10002ea0, 10002f35]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10002ea0(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10002ea0(void)

{
  int *piVar1;
  IDirect3DTexture2 *this_ptr;
  IDirectDrawSurface *this_ptr_00;
  int iVar2;
  int iVar3;
  STextureSurfaceSlot *pSVar4;
  int iVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar3 = 0;
  do {
    iVar5 = 4;
    iVar2 = iVar3;
    do {
      piVar1 = *(int **)((int)&DAT_10138f30 + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(uint *)((int)&DAT_10138f30 + iVar2) = 0;
      }
      piVar1 = *(int **)((int)&DAT_10139048 + iVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(uint *)((int)&DAT_10139048 + iVar2) = 0;
      }
      iVar2 = iVar2 + 0x20;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x20);
  pSVar4 = g_TextureSurfaces;
  do {
    this_ptr = pSVar4->texture;
    if (this_ptr != (IDirect3DTexture2 *)0x0) {
      (*this_ptr->vtable->Release)((IUnknown *)this_ptr);
      pSVar4->texture = (IDirect3DTexture2 *)0x0;
    }
    this_ptr_00 = pSVar4->surface;
    if (this_ptr_00 != (IDirectDrawSurface *)0x0) {
      (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
      pSVar4->surface = (IDirectDrawSurface *)0x0;
    }
    pSVar4 = pSVar4 + 1;
  } while (pSVar4 < (STextureSurfaceSlot *)&DAT_10215e40);
  pSVar4 = g_TextureSurfaces;
  for (iVar3 = 0x2000; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar4->texture = (IDirect3DTexture2 *)0x0;
    pSVar4 = (STextureSurfaceSlot *)&pSVar4[-(uint)bVar6].surface;
  }
  return;
}
