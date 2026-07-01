// Name: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
// Address: 00487e20
// Address Range: [[00487e20, 00488100]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom)

{
  longlong lVar2;
  int local_e1;
  byte bVar3;
  byte bVar4;
  int iVar4;
  int local_e2;
  byte bVar5;
  int iVar6;
  int local_40;
  int local_20;
  longlong lVar1;
  
  bVar3 = clip_bottom < *y1;
  if (*y1 < clip_top) {
    bVar3 = bVar3 | 2;
  }
  if (clip_right < *x1) {
    bVar3 = bVar3 | 4;
  }
  if (*x1 < clip_left) {
    bVar3 = bVar3 | 8;
  }
  bVar4 = clip_bottom < *y2;
  if (*y2 < clip_top) {
    bVar4 = bVar4 | 2;
  }
  if (clip_right < *x2) {
    bVar4 = bVar4 | 4;
  }
  if (*x2 < clip_left) {
    bVar4 = bVar4 | 8;
  }
  local_20 = 0;
  do {
    iVar4 = *x2 - *x1;
    iVar6 = *y2 - *y1;
    if ((bVar3 == 0) && (bVar4 == 0)) {
      local_40 = 1;
      break;
    }
    if ((bVar4 & bVar3) != 0) {
      local_40 = 0;
      break;
    }
    bVar5 = bVar3;
    if (bVar3 == 0) {
      bVar5 = bVar4;
    }
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if (((bVar5 & 8) != 0) && (local_e2 = clip_left, iVar4 != 0)) {
            lVar2 = (longlong)
                    (int)((longlong)
                          ((((longlong)(clip_left - *x1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(clip_left - *x1) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                    (longlong)iVar6;
            local_e1 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + *y1;
          }
        }
        else {
          local_e2 = clip_right;
          if (iVar4 != 0) {
            lVar2 = (longlong)
                    (int)((longlong)
                          ((((longlong)(clip_right - *x1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(clip_right - *x1) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                    (longlong)iVar6;
            local_e1 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + *y1;
          }
        }
      }
      else {
        local_e1 = clip_top;
        if (iVar6 != 0) {
          lVar2 = (longlong)
                  (int)((longlong)
                        ((((longlong)(clip_top - *y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                        (longlong)(clip_top - *y1) * 0x10000 & 0xffffffffU) / (longlong)iVar6) *
                  (longlong)iVar4;
          local_e2 = *x1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        }
      }
    }
    else {
      local_e1 = clip_bottom;
      if (iVar6 != 0) {
        lVar1 = (longlong)
                (int)((longlong)
                      ((((longlong)(clip_bottom - *y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                      (longlong)(clip_bottom - *y1) * 0x10000 & 0xffffffffU) / (longlong)iVar6) *
                (longlong)iVar4;
        local_e2 = *x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (bVar3 == 0) {
      *x2 = local_e2;
      *y2 = local_e1;
      bVar4 = clip_bottom < local_e1;
      if (local_e1 < clip_top) {
        bVar4 = bVar4 | 2;
      }
      if (clip_right < *x2) {
        bVar4 = bVar4 | 4;
      }
      if (*x2 < clip_left) {
        bVar4 = bVar4 | 8;
      }
    }
    else {
      *x1 = local_e2;
      *y1 = local_e1;
      bVar3 = clip_bottom < local_e1;
      if (local_e1 < clip_top) {
        bVar3 = bVar3 | 2;
      }
      if (clip_right < *x1) {
        bVar3 = bVar3 | 4;
      }
      if (*x1 < clip_left) {
        bVar3 = bVar3 | 8;
      }
    }
    local_20 = local_20 + 1;
  } while (local_20 < 100);
  if (local_20 == 100) {
    g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
    g_CurrentLineNumber = 873;
    core_main_c_displayErrorAndQuit_FUN_00506f10("2d line clipping exceeded max iterations");
    return local_40;
  }
  return local_40;
}
