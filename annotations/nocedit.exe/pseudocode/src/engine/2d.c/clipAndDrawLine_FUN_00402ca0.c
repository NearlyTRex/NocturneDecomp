// Name: engine_2d.c_clipAndDrawLine_FUN_00402ca0
// Address: 00402ca0
// Address Range: [[00402ca0, 00402ed4]]
// Convention: __cdecl
// Signature: void engine_2d.c_clipAndDrawLine_FUN_00402ca0(int * x1, int * y1, int * x2, int * y2, int x_min, int y_min, int x_max, int y_max)

#include "nocturne.h"

void __cdecl
engine_2d_c_clipAndDrawLine_FUN_00402ca0
          (int *x1,int *y1,int *x2,int *y2,int x_min,int y_min,int x_max,int y_max)

{
  longlong lVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar4;
  int *unaff_EBX;
  int iVar5;
  int *unaff_EDI;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  bVar2 = engine_2d_c_computeOutcode_FUN_00402c10((int)x1,(int)y1,x_min,y_min,x_max,y_max);
  local_14 = CONCAT31(extraout_var,bVar2);
  bVar2 = engine_2d_c_computeOutcode_FUN_00402c10((int)x2,(int)y2,x_min,y_min,x_max,y_max);
  local_18 = CONCAT31(extraout_var_00,bVar2);
  local_1c = 0;
  do {
    iVar5 = (int)y2 - (int)y1;
    iVar4 = (int)x2 - (int)x1;
    if ((local_14 == 0) && (local_18 == 0)) {
      local_20 = 1;
      break;
    }
    if ((local_14 & local_18) != 0) {
      local_20 = 0;
      break;
    }
    uVar3 = local_14;
    if (local_14 == 0) {
      uVar3 = local_18;
    }
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 2) == 0) {
        if ((uVar3 & 4) == 0) {
          if (((uVar3 & 8) != 0) && (unaff_EBX = (int *)x_min, iVar4 != 0)) {
            lVar1 = (longlong)(int)(((longlong)(x_min - (int)x1) * 0x10000) / (longlong)iVar4) *
                    (longlong)iVar5;
            unaff_EDI = (int *)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                               (int)y1);
          }
        }
        else {
          unaff_EBX = (int *)x_max;
          if (iVar4 != 0) {
            lVar1 = (longlong)(int)(((longlong)(x_max - (int)x1) * 0x10000) / (longlong)iVar4) *
                    (longlong)iVar5;
            unaff_EDI = (int *)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                               (int)y1);
          }
        }
      }
      else {
        unaff_EDI = (int *)y_min;
        if (iVar5 != 0) {
          lVar1 = (longlong)(int)(((longlong)(y_min - (int)y1) * 0x10000) / (longlong)iVar5) *
                  (longlong)iVar4;
          unaff_EBX = (int *)((int)x1 +
                             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
        }
      }
    }
    else {
      unaff_EDI = (int *)y_max;
      if (iVar5 != 0) {
        lVar1 = (longlong)(int)(((longlong)(y_max - (int)y1) * 0x10000) / (longlong)iVar5) *
                (longlong)iVar4;
        unaff_EBX = (int *)((int)x1 +
                           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
      }
    }
    if (local_14 == 0) {
      bVar2 = engine_2d_c_computeOutcode_FUN_00402c10
                        ((int)unaff_EBX,(int)unaff_EDI,x_min,y_min,x_max,y_max);
      local_18 = CONCAT31(extraout_var_02,bVar2);
      x2 = unaff_EBX;
      y2 = unaff_EDI;
    }
    else {
      bVar2 = engine_2d_c_computeOutcode_FUN_00402c10
                        ((int)unaff_EBX,(int)unaff_EDI,x_min,y_min,x_max,y_max);
      local_14 = CONCAT31(extraout_var_01,bVar2);
      y1 = unaff_EDI;
      x1 = unaff_EBX;
    }
    local_1c = local_1c + 1;
  } while (local_1c < 100);
  if (local_1c == 100) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x870;
    core_main_c_displayErrorAndQuit_FUN_00506f10("2d line clipping exceeded max iterations");
  }
  if (local_20 != 0) {
    engine_2d_c_drawLine_FUN_004011b0((int)x1,(int)y1,(int)x2,(int)y2);
    return;
  }
  return;
}
