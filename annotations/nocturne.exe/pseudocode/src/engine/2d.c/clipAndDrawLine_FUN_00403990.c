// Name: engine_2d.c_clipAndDrawLine_FUN_00403990
// Address: 00403990
// Address Range: [[00403990, 00403bc4]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_clipAndDrawLine_FUN_00403990(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_clipAndDrawLine_FUN_00403990(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

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
  
  local_14 = engine_2d_c_computeOutcode_FUN_00403900
                       (param_1,param_2,param_5,param_6,param_7,param_8);
  local_18 = engine_2d_c_computeOutcode_FUN_00403900
                       (param_3,param_4,param_5,param_6,param_7,param_8);
  local_1c = 0;
  do {
    iVar4 = param_4 - param_2;
    iVar3 = param_3 - param_1;
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
          if (((uVar2 & 8) != 0) && (unaff_EBX = param_5, iVar3 != 0)) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(param_5 - param_1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(param_5 - param_1) * 0x10000 & 0xffffffffU) / (longlong)iVar3)
                    * (longlong)iVar4;
            unaff_EDI = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + param_2;
          }
        }
        else {
          unaff_EBX = param_7;
          if (iVar3 != 0) {
            lVar1 = (longlong)
                    (int)((longlong)
                          ((((longlong)(param_7 - param_1) & 0xffffffffffffU) >> 0x10) << 0x20 |
                          (longlong)(param_7 - param_1) * 0x10000 & 0xffffffffU) / (longlong)iVar3)
                    * (longlong)iVar4;
            unaff_EDI = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + param_2;
          }
        }
      }
      else {
        unaff_EDI = param_6;
        if (iVar4 != 0) {
          lVar1 = (longlong)
                  (int)((longlong)
                        ((((longlong)(param_6 - param_2) & 0xffffffffffffU) >> 0x10) << 0x20 |
                        (longlong)(param_6 - param_2) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                  (longlong)iVar3;
          unaff_EBX = param_1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        }
      }
    }
    else {
      unaff_EDI = param_8;
      if (iVar4 != 0) {
        lVar1 = (longlong)
                (int)((longlong)
                      ((((longlong)(param_8 - param_2) & 0xffffffffffffU) >> 0x10) << 0x20 |
                      (longlong)(param_8 - param_2) * 0x10000 & 0xffffffffU) / (longlong)iVar4) *
                (longlong)iVar3;
        unaff_EBX = param_1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
    }
    if (local_14 == 0) {
      local_18 = engine_2d_c_computeOutcode_FUN_00403900
                           (unaff_EBX,unaff_EDI,param_5,param_6,param_7,param_8);
      param_3 = unaff_EBX;
      param_4 = unaff_EDI;
    }
    else {
      local_14 = engine_2d_c_computeOutcode_FUN_00403900
                           (unaff_EBX,unaff_EDI,param_5,param_6,param_7,param_8);
      param_2 = unaff_EDI;
      param_1 = unaff_EBX;
    }
    local_1c = local_1c + 1;
  } while (local_1c < 100);
  if (local_1c == 100) {
    _DAT_01cc4800 = "..\\engine\\2d.c";
    _DAT_01cc4804 = 0x86e;
    FUN_004c8440("2d line clipping exceeded max iterations");
  }
  if (local_20 != 0) {
    engine_2d_c_drawLine_FUN_004015a0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}
