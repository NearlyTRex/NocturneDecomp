// Name: engine_2d.c_drawLine3D_FUN_00401710
// Address: 00401710
// Address Range: [[00401710, 00401846]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawLine3D_FUN_00401710(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

void __cdecl engine_2d_c_drawLine3D_FUN_00401710(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_14;
  
  iStack_24 = 1;
  iVar1 = param_6;
  iStack_14 = param_4;
  iVar2 = param_5;
  if (param_5 < param_2) {
    iVar1 = param_3;
    iStack_14 = param_1;
    iVar2 = param_2;
    param_3 = param_6;
    param_2 = param_5;
    param_1 = param_4;
  }
  iStack_14 = iStack_14 - param_1;
  iVar2 = iVar2 - param_2;
  if (iStack_14 < 0) {
    iStack_14 = -iStack_14;
    iStack_24 = -1;
  }
  iVar1 = iVar1 - param_3;
  if (iVar2 < iStack_14) {
    iVar3 = iVar2 * 2 - iStack_14;
    iStack_1c = 0;
    if (-1 < iStack_14) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401680(param_1,param_2,param_3);
        if (0 < iVar3) {
          param_2 = param_2 + 1;
          iVar3 = iVar3 - iStack_14;
        }
        param_1 = param_1 + iStack_24;
        iVar3 = iVar3 + iVar2;
        param_3 = param_3 + iVar1 / (iStack_14 + 1);
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c <= iStack_14);
    }
  }
  else {
    iVar3 = iStack_14 * 2 - iVar2;
    iStack_20 = 0;
    if (-1 < iVar2) {
      do {
        engine_2d_c_plotPixelWithDepth_FUN_00401680(param_1,param_2,param_3);
        if (0 < iVar3) {
          iVar3 = iVar3 - iVar2;
          param_1 = param_1 + iStack_24;
        }
        param_2 = param_2 + 1;
        iStack_20 = iStack_20 + 1;
        iVar3 = iVar3 + iStack_14;
        param_3 = param_3 + iVar1 / (iVar2 + 1);
      } while (iStack_20 <= iVar2);
    }
  }
  return;
}
