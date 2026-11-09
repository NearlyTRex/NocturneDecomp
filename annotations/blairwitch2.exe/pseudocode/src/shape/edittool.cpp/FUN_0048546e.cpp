// Name: shape_edittool.cpp_FUN_0048546e
// Address: 0048546e
// Address Range: [[0048546e, 004854af]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0048546e(CEdCheck *param_1,undefined4 param_2,undefined4 param_3,CEdCheck *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0048546e(CEdCheck *param_1,uint param_2,uint param_3,CEdCheck *param_4)

{
  CEdCheck CVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CEdCheck *pCVar6;
  
  if (param_4 == (CEdCheck *)0x0) {
    param_4 = (CEdCheck *)0x5d2b05;
  }
  *(uint *)(param_1 + 0x10) = param_2;
  pCVar6 = param_1 + 0x24;
  *(uint *)(param_1 + 0x14) = param_3;
  do {
    CVar1 = *param_4;
    *pCVar6 = CVar1;
    if (CVar1 == (CEdCheck)0x0) break;
    CVar1 = param_4[1];
    param_4 = param_4 + 2;
    pCVar6[1] = CVar1;
    pCVar6 = pCVar6 + 2;
  } while (CVar1 != (CEdCheck)0x0);
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    core_main_c_FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x6a);
  iVar2 = engine_font_cpp_FUN_004aafb0(_DAT_01c25590,(char *)(param_1 + 0x24));
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(param_1);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = func_0x004855f0(param_1);
  iVar5 = engine_font_cpp_FUN_004aaf00(_DAT_01c25590,param_1 + 0x24);
  *(int *)(param_1 + 0x18) = iVar2 + iVar3 + iVar4 + iVar5;
  return;
}
