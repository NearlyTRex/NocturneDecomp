// Name: engine_2d.c_clipAndDrawLine_FUN_00403990
// Address: 00403990
// Address Range: [[00403990, 00403bc4]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_clipAndDrawLine_FUN_00403990(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)

#include "nocturne.h"

void __cdecl engine_2d_c_clipAndDrawLine_FUN_00403990(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  int unaff_EDI;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = engine_2d_c_computeOutcode_FUN_00403900(x1,y1,x_min,y_min,x_max,y_max);
  local_18 = engine_2d_c_computeOutcode_FUN_00403900(x2,y2,x_min,y_min,x_max,y_max);
  local_1c = 0;
  do {
    iVar4 = y2 - y1;
    iVar3 = x2 - x1;
    if ((local_14 == 0) && (local_18 == 0)) {
      local_20 = 1;
      break;
    }
    if ((local_14 & local_18) != 0) {
      local_20 = 0;
      break;
    }
    uVar2 = local_14;
    if (local_14 == 0) {
      uVar2 = local_18;
    }
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) == 0) {
        if ((uVar2 & 4) == 0) {
          if (((uVar2 & 8) != 0) && (unaff_EBX = x_min, iVar3 != 0)) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(x_min - x1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(x_min - x1) * 0x10000 & 0xffffffffU) / (longlong)iVar3) *
                    (longlong)iVar4;
            unaff_EDI = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + y1;
          }
        }
        else {
          unaff_EBX = x_max;
          if (iVar3 != 0) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(x_max - x1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(x_max - x1) * 0x10000 & 0xffffffffU) / (longlong)iVar3) *
                    (longlong)iVar4;
            unaff_EDI = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + y1;
          }
        }
      }
      else {
        unaff_EDI = y_min;
        if (iVar4 != 0) {
          lVar1 = (longlong)
                  (int)((longlong)
                        ((((longlong)(y_min - y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                        (longlong)(y_min - y1) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                  (longlong)iVar3;
          unaff_EBX = x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
      }
    }
    else {
      unaff_EDI = y_max;
      if (iVar4 != 0) {
        lVar1 = (longlong)
                (int)((longlong)
                      ((((longlong)(y_max - y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                      (longlong)(y_max - y1) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                (longlong)iVar3;
        unaff_EBX = x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (local_14 == 0) {
      local_18 = engine_2d_c_computeOutcode_FUN_00403900
                           (unaff_EBX,unaff_EDI,x_min,y_min,x_max,y_max);
      x2 = unaff_EBX;
      y2 = unaff_EDI;
    }
    else {
      local_14 = engine_2d_c_computeOutcode_FUN_00403900
                           (unaff_EBX,unaff_EDI,x_min,y_min,x_max,y_max);
      y1 = unaff_EDI;
      x1 = unaff_EBX;
    }
    local_1c = local_1c + 1;
  } while (local_1c < 100);
  if (local_1c == 100) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 2158;
    core_main_c_displayErrorAndQuit_FUN_004c8440("2d line clipping exceeded max iterations");
  }
  if (local_20 != 0) {
    engine_2d_c_drawLine_FUN_004015a0(x1,y1,x2,y2);
    return;
  }
  return;
}
