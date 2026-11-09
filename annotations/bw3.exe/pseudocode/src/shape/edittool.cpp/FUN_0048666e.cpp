// Name: shape_edittool.cpp_FUN_0048666e
// Address: 0048666e
// Address Range: [[0048666e, 00486751]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0048666e(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0048666e(int param_1,uint param_2,uint param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_4 == (char *)0x0) {
    param_4 = (char *)0x5bd95b;
  }
  *(uint *)(param_1 + 0x10) = param_2;
  pcVar6 = (char *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x14) = param_3;
  do {
    cVar1 = *param_4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  if (_DAT_01c5b0e0 == (CBitFont *)0x0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    core_main_c_FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = engine_font_cpp_FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar2 = engine_font_cpp_FUN_004b2b30(_DAT_01c5b0e0,(char *)(param_1 + 0x24));
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) + iVar2;
  iVar3 = shape_edittool_cpp_FUN_00486780(param_1);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = shape_edittool_cpp_FUN_004867f0(param_1);
  iVar5 = engine_font_cpp_FUN_004b2a80(_DAT_01c5b0e0,(char *)(param_1 + 0x24));
  *(int *)(param_1 + 0x18) = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
