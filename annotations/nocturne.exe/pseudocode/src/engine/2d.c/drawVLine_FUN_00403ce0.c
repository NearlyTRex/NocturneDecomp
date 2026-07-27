// Name: engine_2d.c_drawVLine_FUN_00403ce0
// Address: 00403ce0
// Address Range: [[00403ce0, 00403e04]]
// Convention: __cdecl
// Signature: undefined8 __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((_DAT_01c00c58 <= param_1) && (param_1 <= _DAT_01c00c60)) {
    if (param_2 < _DAT_01c00c5c) {
      param_2 = _DAT_01c00c5c;
    }
    if (_DAT_01c00c64 < param_3) {
      param_3 = _DAT_01c00c64;
    }
    if (param_2 <= param_3) {
      iVar2 = param_3 * 4;
      iVar5 = param_2 * 4;
      if (DAT_005b7624 < 0x10) {
        param_3 = iVar5;
        if (DAT_005b7624 != 8) {
LAB_00403dde:
          PTR_01cc4800 = "..\\engine\\2d.c";
          INT_01cc4804 = 0x8d6;
          uVar6 = core_main_c_FUN_004c8440("vLine - invalid bitsPerPixel");
          return uVar6;
        }
        for (; param_3 <= iVar2; param_3 = param_3 + 4) {
          param_2 = param_2 + 1;
          *(byte *)(*(int *)(&DAT_01bd2fa0 + param_3) + param_1) = DAT_01c00c70;
        }
      }
      else if (DAT_005b7624 < 0x11) {
        uVar3 = *(ushort *)(&DAT_01bff720 + _DAT_01c00c70 * 2);
        if (param_2 <= param_3) {
          param_3 = iVar5;
          do {
            piVar1 = (int *)(&DAT_01bd2fa0 + param_3);
            param_3 = param_3 + 4;
            param_2 = param_2 + 1;
            *(ushort *)(*piVar1 + param_1 * 2) = uVar3;
          } while (param_3 <= iVar2);
        }
      }
      else {
        if (DAT_005b7624 != 0x20) goto LAB_00403dde;
        uVar4 = *(uint *)(_DAT_01c00c70 * 4 + 0x1bff920);
        if (param_2 <= param_3) {
          do {
            piVar1 = (int *)(&DAT_01bd2fa0 + iVar5);
            iVar5 = iVar5 + 4;
            param_2 = param_2 + 1;
            *(uint *)(*piVar1 + param_1 * 4) = uVar4;
          } while (iVar5 <= iVar2);
          return CONCAT44(iVar5,param_2);
        }
      }
    }
  }
  return CONCAT44(param_3,param_2);
}
