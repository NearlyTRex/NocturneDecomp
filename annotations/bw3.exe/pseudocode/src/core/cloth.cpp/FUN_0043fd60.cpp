// Name: core_cloth.cpp_FUN_0043fd60
// Address: 0043fd60
// Address Range: [[0043fd60, 0043fdf4]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043fd60(int param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_cloth_cpp_FUN_0043fd60(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *str2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    str2 = (char *)(param_1 + 0x37b50);
    do {
      iVar1 = _strcmp(param_2,str2);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      str2 = str2 + 0xac;
    } while (iVar2 < *(int *)(param_1 + 0x37b4c));
  }
  if (iVar2 == *(int *)(param_1 + 0x37b4c)) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0xab4;
    core_main_c_FUN_004e4330("CCloth::grabCloth - Can't find bone %s",param_2);
  }
  *(uint *)(param_1 + 0x40c + param_3 * 0x11c) = 1;
  *(int *)(param_1 + 0x470 + param_3 * 0x11c) = iVar2;
  return;
}
