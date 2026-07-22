// Name: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440
// Address: 0045c440
// Address Range: [[0045c440, 0045c720]]
// Convention: __cdecl
// Signature: undefined4 __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7,int param_8,int param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_0045c440(uint param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int in_EAX;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int in_EDX;
  byte bVar5;
  int iVar6;
  uint uStack_40;
  int iStack_20;
  
  bVar2 = param_9 < *param_3;
  if (*param_3 < param_7) {
    bVar2 = bVar2 | 2;
  }
  if (param_8 < *param_2) {
    bVar2 = bVar2 | 4;
  }
  if (*param_2 < param_6) {
    bVar2 = bVar2 | 8;
  }
  bVar3 = param_9 < *param_5;
  if (*param_5 < param_7) {
    bVar3 = bVar3 | 2;
  }
  if (param_8 < *param_4) {
    bVar3 = bVar3 | 4;
  }
  if (*param_4 < param_6) {
    bVar3 = bVar3 | 8;
  }
  iStack_20 = 0;
  do {
    iVar4 = *param_4 - *param_2;
    iVar6 = *param_5 - *param_3;
    if ((bVar2 == 0) && (bVar3 == 0)) {
      uStack_40 = 1;
      break;
    }
    if ((bVar3 & bVar2) != 0) {
      uStack_40 = 0;
      break;
    }
    bVar5 = bVar2;
    if (bVar2 == 0) {
      bVar5 = bVar3;
    }
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if (((bVar5 & 8) != 0) && (in_EDX = param_6, iVar4 != 0)) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(param_6 - *param_2) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(param_6 - *param_2) * 0x10000 & 0xffffffffU) / (longlong)iVar4)
                    * (longlong)iVar6;
            in_EAX = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + *param_3;
          }
        }
        else {
          in_EDX = param_8;
          if (iVar4 != 0) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(param_8 - *param_2) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(param_8 - *param_2) * 0x10000 & 0xffffffffU) / (longlong)iVar4)
                    * (longlong)iVar6;
            in_EAX = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + *param_3;
          }
        }
      }
      else {
        in_EAX = param_7;
        if (iVar6 != 0) {
          lVar1 = (longlong)
                  (int)((longlong)
                        ((((longlong)(param_7 - *param_3) & 0xffffffffffffU) >> 0x10) << 0x20 |
                        (longlong)(param_7 - *param_3) * 0x10000 & 0xffffffffU) / (longlong)iVar6) *
                  (longlong)iVar4;
          in_EDX = *param_2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
      }
    }
    else {
      in_EAX = param_9;
      if (iVar6 != 0) {
        lVar1 = (longlong)
                (int)((longlong)
                      ((((longlong)(param_9 - *param_3) & 0xffffffffffffU) >> 0x10) << 0x20 |
                      (longlong)(param_9 - *param_3) * 0x10000 & 0xffffffffU) / (longlong)iVar6) *
                (longlong)iVar4;
        in_EDX = *param_2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (bVar2 == 0) {
      *param_4 = in_EDX;
      *param_5 = in_EAX;
      bVar3 = param_9 < in_EAX;
      if (in_EAX < param_7) {
        bVar3 = bVar3 | 2;
      }
      if (param_8 < *param_4) {
        bVar3 = bVar3 | 4;
      }
      if (*param_4 < param_6) {
        bVar3 = bVar3 | 8;
      }
    }
    else {
      *param_2 = in_EDX;
      *param_3 = in_EAX;
      bVar2 = param_9 < in_EAX;
      if (in_EAX < param_7) {
        bVar2 = bVar2 | 2;
      }
      if (param_8 < *param_2) {
        bVar2 = bVar2 | 4;
      }
      if (*param_2 < param_6) {
        bVar2 = bVar2 | 8;
      }
    }
    iStack_20 = iStack_20 + 1;
  } while (iStack_20 < 100);
  if (iStack_20 == 100) {
    _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
    _DAT_01cc4804 = 0x369;
    FUN_004c8440("2d line clipping exceeded max iterations");
    return uStack_40;
  }
  return uStack_40;
}
