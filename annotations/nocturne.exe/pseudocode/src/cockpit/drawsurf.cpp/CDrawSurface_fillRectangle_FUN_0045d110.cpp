// Name: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110
// Address: 0045d110
// Address Range: [[0045d110, 0045d2a8]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_0045d110(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_0045d110(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  if (param_2 < *(int *)(param_1 + 0x10)) {
    param_2 = *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x18) < param_4) {
    param_4 = *(int *)(param_1 + 0x18);
  }
  if (param_2 <= param_4) {
    if (param_3 < *(int *)(param_1 + 0x14)) {
      param_3 = *(int *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x1c) < param_5) {
      param_5 = *(int *)(param_1 + 0x1c);
    }
    if (param_3 <= param_5) {
      if (_DAT_01b4d71c == 0) {
        param_1 = param_5 * 4;
        param_3 = param_3 * 4;
        if (DAT_005b7624 < 0x10) {
          if (DAT_005b7624 == 8) {
            do {
              piVar1 = (int *)(&DAT_01bd2fa0 + param_3);
              param_3 = param_3 + 4;
              iVar4 = memset
                                (*piVar1 + param_2,_DAT_01b4d710,(param_4 - param_2) + 1);
            } while (param_3 <= param_1);
            return iVar4;
          }
LAB_0045d27e:
          PTR_01cc4800 = "..\\cockpit\\drawsurf.cpp";
          INT_01cc4804 = 0x524;
          iVar4 = core_main_c_FUN_004c8440("Invalid bitsPerPixel!");
          return iVar4;
        }
        if (DAT_005b7624 < 0x11) {
          do {
            if (param_2 <= param_4) {
              iVar4 = param_2;
              puVar3 = (ushort *)(param_2 * 2 + *(int *)(&DAT_01bd2fa0 + param_3));
              do {
                iVar4 = iVar4 + 1;
                *puVar3 = _DAT_01b4d710;
                puVar3 = puVar3 + 1;
              } while (iVar4 <= param_4);
            }
            param_3 = param_3 + 4;
          } while (param_3 <= param_1);
        }
        else {
          if (DAT_005b7624 != 0x20) goto LAB_0045d27e;
          do {
            if (param_2 <= param_4) {
              puVar2 = (uint *)(param_2 * 4 + *(int *)(&DAT_01bd2fa0 + param_3));
              iVar4 = param_2;
              do {
                iVar4 = iVar4 + 1;
                *puVar2 = _DAT_01b4d710;
                puVar2 = puVar2 + 1;
              } while (iVar4 <= param_4);
            }
            param_3 = param_3 + 4;
          } while (param_3 <= param_1);
        }
      }
      else {
        do {
          iVar4 = param_3 + 1;
          param_1 = cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20
                              (param_2,param_4,param_3);
          param_3 = iVar4;
        } while (iVar4 <= param_5);
      }
    }
  }
  return param_1;
}
