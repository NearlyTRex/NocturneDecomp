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
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *unaff_EBX;
  int iVar7;
  int *unaff_EDI;
  int *in_stack_00000024;
  int *in_stack_00000028;
  int local_18;
  int local_14;
  int *piVar3;
  undefined3 extraout_var_00;
  
  engine_2d_c_computeOutcode_FUN_00402c10((int)x1,(int)y1,x_min,y_min,x_max,y_max);
  bVar2 = engine_2d_c_computeOutcode_FUN_00402c10
                    ((int)y2,x_min,y_min,x_max,y_max,(int)in_stack_00000024);
  piVar3 = (int *)CONCAT31 /* combine 2-byte values */(extraout_var,bVar2);
  local_14 = 0;
  piVar5 = unaff_EDI;
  do {
    iVar7 = y_min - (int)y1;
    iVar6 = x_min - (int)x2;
    if ((piVar5 == (int *)0x0) && (piVar3 == (int *)0x0)) {
      local_18 = 1;
      break;
    }
    if (((uint)piVar5 & (uint)piVar3) != 0) {
      local_18 = 0;
      break;
    }
    piVar4 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar4 = piVar3;
    }
    if (((uint)piVar4 & 1) == 0) {
      if (((uint)piVar4 & 2) == 0) {
        if (((uint)piVar4 & 4) == 0) {
          if ((((uint)piVar4 & 8) != 0) && (unaff_EBX = (int *)x_max, iVar6 != 0)) {
            lVar1 = (longlong)(int)(((longlong)(x_max - (int)x2) * 0x10000) / (longlong)iVar6) *
                    (longlong)iVar7;
            unaff_EDI = (int *)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                               (int)y1);
          }
        }
        else {
          unaff_EBX = in_stack_00000024;
          if (iVar6 != 0) {
            lVar1 = (longlong)
                    (int)(((longlong)((int)in_stack_00000024 - (int)x2) * 0x10000) / (longlong)iVar6
                         ) * (longlong)iVar7;
            unaff_EDI = (int *)(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                               (int)y1);
          }
        }
      }
      else {
        unaff_EDI = (int *)y_max;
        if (iVar7 != 0) {
          lVar1 = (longlong)(int)(((longlong)(y_max - (int)y1) * 0x10000) / (longlong)iVar7) *
                  (longlong)iVar6;
          unaff_EBX = (int *)((int)x2 +
                             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
        }
      }
    }
    else {
      unaff_EDI = in_stack_00000028;
      if (iVar7 != 0) {
        lVar1 = (longlong)
                (int)(((longlong)((int)in_stack_00000028 - (int)y1) * 0x10000) / (longlong)iVar7) *
                (longlong)iVar6;
        unaff_EBX = (int *)((int)x2 +
                           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
      }
    }
    if (piVar5 == (int *)0x0) {
      bVar2 = engine_2d_c_computeOutcode_FUN_00402c10
                        ((int)unaff_EBX,(int)unaff_EDI,x_max,y_max,(int)in_stack_00000024,
                         (int)in_stack_00000028);
      piVar5 = (int *)CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar2);
      x_min = (int)unaff_EBX;
      y_min = (int)unaff_EDI;
    }
    else {
      engine_2d_c_computeOutcode_FUN_00402c10
                ((int)unaff_EBX,(int)unaff_EDI,x_max,y_max,(int)in_stack_00000024,
                 (int)in_stack_00000028);
      y1 = unaff_EDI;
      x2 = unaff_EBX;
    }
    local_14 = local_14 + 1;
  } while (local_14 < 100);
  if (local_14 == 100) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x870;
    core_main_c_displayErrorAndQuit_FUN_00506f10("2d line clipping exceeded max iterations");
  }
  if (local_18 != 0) {
    engine_2d_c_drawLine_FUN_004011b0((int)x2,(int)y1,x_min,y_min);
    return;
  }
  return;
}
