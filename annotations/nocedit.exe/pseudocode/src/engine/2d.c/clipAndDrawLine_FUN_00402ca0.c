// Name: engine_2d.c_clipAndDrawLine_FUN_00402ca0
// Address: 00402ca0
// Address Range: [[00402ca0, 00402ed4]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_clipAndDrawLine_FUN_00402ca0(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)

#include "nocturne.h"

void __cdecl engine_2d_c_clipAndDrawLine_FUN_00402ca0(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)

{
  longlong lVar2;
  uint uVar2;
  int iVar3;
  int new_x;
  int iVar4;
  int new_y;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  longlong lVar1;
  
  local_14 = engine_2d_c_computeOutcode_FUN_00402c10(x1,y1,x_min,y_min,x_max,y_max);
  local_18 = engine_2d_c_computeOutcode_FUN_00402c10(x2,y2,x_min,y_min,x_max,y_max);
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
          if (((uVar2 & 8) != 0) && (new_x = x_min, iVar3 != 0)) {
            lVar2 = (longlong)(int)(((longlong)(x_min - x1) * 0x10000) / (longlong)iVar3) *
                    (longlong)iVar4;
            new_y = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + y1;
          }
        }
        else {
          new_x = x_max;
          if (iVar3 != 0) {
            lVar2 = (longlong)(int)(((longlong)(x_max - x1) * 0x10000) / (longlong)iVar3) *
                    (longlong)iVar4;
            new_y = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + y1;
          }
        }
      }
      else {
        new_y = y_min;
        if (iVar4 != 0) {
          lVar2 = (longlong)(int)(((longlong)(y_min - y1) * 0x10000) / (longlong)iVar4) *
                  (longlong)iVar3;
          new_x = x1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        }
      }
    }
    else {
      new_y = y_max;
      if (iVar4 != 0) {
        lVar1 = (longlong)(int)(((longlong)(y_max - y1) * 0x10000) / (longlong)iVar4) *
                (longlong)iVar3;
        new_x = x1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (local_14 == 0) {
      local_18 = engine_2d_c_computeOutcode_FUN_00402c10(new_x,new_y,x_min,y_min,x_max,y_max);
      x2 = new_x;
      y2 = new_y;
    }
    else {
      local_14 = engine_2d_c_computeOutcode_FUN_00402c10(new_x,new_y,x_min,y_min,x_max,y_max);
      y1 = new_y;
      x1 = new_x;
    }
    local_1c = local_1c + 1;
  } while (local_1c < 100);
  if (local_1c == 100) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x870;
    core_main_c_displayErrorAndQuit_FUN_00506f10("2d line clipping exceeded max iterations");
  }
  if (local_20 != 0) {
    engine_2d_c_drawLine_FUN_004011b0(x1,y1,x2,y2);
    return;
  }
  return;
}
