// Name: engine_texture.cpp_FUN_00574bbe
// Address: 00574bbe
// Address Range: [[00574bbe, 00574cd0]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574bbe(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void engine_texture_cpp_FUN_00574bbe(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (param_3 == 0) {
    iVar4 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x18004)) {
      piVar1 = (int *)(param_1 + 4);
      do {
        if (piVar1[0x11] != 0) {
          iVar2 = iVar2 + *piVar1 * *piVar1;
        }
        if (piVar1[0x12] != 0) {
          iVar2 = iVar2 + *piVar1 * *piVar1;
        }
        if (piVar1[0x13] != 0) {
          iVar2 = iVar2 + 0x300;
        }
        if (piVar1[0x14] != 0) {
          iVar2 = iVar2 + *piVar1 * *piVar1 * 4;
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 0x18004));
    }
    FUN_005b8010(param_2,"Total system mem usage : %d bytes\n",iVar2);
    return;
  }
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x18004)) {
    do {
      if (param_3 == *(int *)(iVar4 + 4)) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x60;
    } while (iVar3 < *(int *)(param_1 + 0x18004));
  }
  FUN_005b8010(param_2,"%d %dx%d textures\n",iVar2,param_3,param_3);
  iVar4 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x18004)) {
    do {
      if (param_3 == *(int *)(iVar2 + 4)) {
        FUN_005b8010(param_2,0x5ec9ba,iVar4 * 0x60 + param_1 + 8);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x60;
    } while (iVar4 < *(int *)(param_1 + 0x18004));
  }
  return;
}
