// Name: engine_2d.c_clipAndDrawLine_FUN_00402cf0
// Address: 00402cf0
// Address Range: [[00402cf0, 00402f24]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_clipAndDrawLine_FUN_00402cf0(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00402d81) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_clipAndDrawLine_FUN_00402cf0(int x1,int y1,int x2,int y2,int x_min,int y_min,int x_max,int y_max)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int unaff_EDI;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  
  engine_2d_c_computeOutcode_FUN_00402c60(x1,y1,x_min,y_min,x_max,y_max);
  uVar2 = engine_2d_c_computeOutcode_FUN_00402c60
                    (in_stack_00000024,in_stack_00000028,in_stack_0000002c,in_stack_00000030,
                     in_stack_00000034,in_stack_00000038);
  do {
    iVar5 = in_stack_00000040 - y1;
    iVar4 = in_stack_0000003c - in_stack_00000034;
    if ((x_max == 0) && (uVar2 == 0)) {
      y2 = 1;
      break;
    }
    if ((x_max & uVar2) != 0) {
      y2 = 0;
      break;
    }
    uVar3 = x_max;
    if (x_max == 0) {
      uVar3 = uVar2;
    }
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 2) == 0) {
        if ((uVar3 & 4) == 0) {
          if (((uVar3 & 8) != 0) && (unaff_EBX = in_stack_00000044, iVar4 != 0)) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(in_stack_00000044 - in_stack_00000034) & 0xffffffffffffU) >>
                           0x10) << 0x20 |
                          (longlong)(in_stack_00000044 - in_stack_00000034) * 0x10000 & 0xffffffffU)
                         / (longlong)iVar4) * (longlong)iVar5;
            unaff_EDI = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + y1;
          }
        }
        else {
          unaff_EBX = in_stack_0000004c;
          if (iVar4 != 0) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(in_stack_0000004c - in_stack_00000034) & 0xffffffffffffU) >>
                           0x10) << 0x20 |
                          (longlong)(in_stack_0000004c - in_stack_00000034) * 0x10000 & 0xffffffffU)
                         / (longlong)iVar4) * (longlong)iVar5;
            unaff_EDI = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + y1;
          }
        }
      }
      else {
        unaff_EDI = in_stack_00000048;
        if (iVar5 != 0) {
          lVar1 = (longlong)
                  (int)((longlong)
                        ((((longlong)(in_stack_00000048 - y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                        (longlong)(in_stack_00000048 - y1) * 0x10000 & 0xffffffffU) /
                       (longlong)iVar5) * (longlong)iVar4;
          unaff_EBX = in_stack_00000034 +
                      ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
      }
    }
    else {
      unaff_EDI = in_stack_00000050;
      if (iVar5 != 0) {
        lVar1 = (longlong)
                (int)((longlong)
                      ((((longlong)(in_stack_00000050 - y1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                      (longlong)(in_stack_00000050 - y1) * 0x10000 & 0xffffffffU) / (longlong)iVar5)
                * (longlong)iVar4;
        unaff_EBX = in_stack_00000034 +
                    ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (x_max == 0) {
      engine_2d_c_computeOutcode_FUN_00402c60
                (unaff_EBX,unaff_EDI,in_stack_00000044,in_stack_00000048,in_stack_0000004c,
                 in_stack_00000050);
      in_stack_0000003c = unaff_EBX;
      in_stack_00000040 = unaff_EDI;
    }
    else {
      in_stack_00000034 =
           engine_2d_c_computeOutcode_FUN_00402c60
                     (unaff_EBX,unaff_EDI,in_stack_00000044,in_stack_00000048,in_stack_0000004c,
                      in_stack_00000050);
      y1 = unaff_EDI;
    }
    in_stack_0000002c = in_stack_0000002c + 1;
  } while (in_stack_0000002c < 100);
  if (y2 == 0) {
    return;
  }
  engine_2d_c_drawLine_FUN_004011a0(in_stack_00000034,y1,in_stack_0000003c,in_stack_00000040);
  return;
}
