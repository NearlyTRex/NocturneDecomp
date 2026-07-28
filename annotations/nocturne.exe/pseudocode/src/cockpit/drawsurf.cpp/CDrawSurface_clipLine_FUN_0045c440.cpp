// Name: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440
// Address: 0045c440
// Address Range: [[0045c440, 0045c720]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)

{
  longlong lVar1;
  int in_EAX;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int in_EDX;
  byte bVar5;
  int iVar6;
  int iStack_40;
  int iStack_20;
  
  bVar2 = clip_bottom < *y1;
  if (*y1 < clip_top) {
    bVar2 = bVar2 | 2;
  }
  if (clip_right < *x1) {
    bVar2 = bVar2 | 4;
  }
  if (*x1 < clip_left) {
    bVar2 = bVar2 | 8;
  }
  bVar3 = clip_bottom < *y2;
  if (*y2 < clip_top) {
    bVar3 = bVar3 | 2;
  }
  if (clip_right < *x2) {
    bVar3 = bVar3 | 4;
  }
  if (*x2 < clip_left) {
    bVar3 = bVar3 | 8;
  }
  iStack_20 = 0;
  do {
    iVar4 = *x2 - *x1;
    iVar6 = *y2 - *y1;
    if ((bVar2 == 0) && (bVar3 == 0)) {
      iStack_40 = 1;
      break;
    }
    if ((bVar3 & bVar2) != 0) {
      iStack_40 = 0;
      break;
    }
    bVar5 = bVar2;
    if (bVar2 == 0) {
      bVar5 = bVar3;
    }
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if (((bVar5 & 8) != 0) && (in_EDX = clip_left, iVar4 != 0)) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(clip_left - *x1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(clip_left - *x1) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                    (longlong)iVar6;
            in_EAX = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + *y1;
          }
        }
        else {
          in_EDX = clip_right;
          if (iVar4 != 0) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(clip_right - *x1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(clip_right - *x1) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                    (longlong)iVar6;
            in_EAX = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + *y1;
          }
        }
      }
      else {
        in_EAX = clip_top;
        if (iVar6 != 0) {
          lVar1 = (longlong)
                  (int)((longlong)
                        ((((longlong)(clip_top - *y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                        (longlong)(clip_top - *y1) * 0x10000 & 0xffffffffU) / (longlong)iVar6) *
                  (longlong)iVar4;
          in_EDX = *x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
      }
    }
    else {
      in_EAX = clip_bottom;
      if (iVar6 != 0) {
        lVar1 = (longlong)
                (int)((longlong)
                      ((((longlong)(clip_bottom - *y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                      (longlong)(clip_bottom - *y1) * 0x10000 & 0xffffffffU) / (longlong)iVar6) *
                (longlong)iVar4;
        in_EDX = *x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (bVar2 == 0) {
      *x2 = in_EDX;
      *y2 = in_EAX;
      bVar3 = clip_bottom < in_EAX;
      if (in_EAX < clip_top) {
        bVar3 = bVar3 | 2;
      }
      if (clip_right < *x2) {
        bVar3 = bVar3 | 4;
      }
      if (*x2 < clip_left) {
        bVar3 = bVar3 | 8;
      }
    }
    else {
      *x1 = in_EDX;
      *y1 = in_EAX;
      bVar2 = clip_bottom < in_EAX;
      if (in_EAX < clip_top) {
        bVar2 = bVar2 | 2;
      }
      if (clip_right < *x1) {
        bVar2 = bVar2 | 4;
      }
      if (*x1 < clip_left) {
        bVar2 = bVar2 | 8;
      }
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 100);
  if (iStack_20 == 100) {
    PTR_01cc4800 = "..\\cockpit\\drawsurf.cpp";
    INT_01cc4804 = 0x369;
    core_main_c_FUN_004c8440("2d line clipping exceeded max iterations");
    return iStack_40;
  }
  return iStack_40;
}
