// Name: core_script.cpp_FUN_00521ff0
// Address: 00521ff0
// Address Range: [[00521ff0, 0052207f]]
// Convention: unknown
// Signature: undefined * core_script_cpp_FUN_00521ff0(CScript *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * core_script_cpp_FUN_00521ff0(CScript *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uStack_14;
  
  _DAT_01e650f8 = 1;
  core_script_cpp_FUN_00522080(param_1);
  shape_edittool_cpp_FUN_00483d10(&g_ScriptPickList);
  if (*(int *)&param_1->field_0x44 < *(int *)&param_1->field_0x2c) {
    do {
      iVar2 = *(int *)&param_1->field_0x44;
      uStack_14 = 0x3e800000;
      iVar1 = core_script_cpp_FUN_00522350(param_1,&uStack_14);
      if ((iVar1 < 0) &&
         (iVar1 = *(int *)(*(int *)&param_1->field_0x30 + iVar2 * 8) + -1, *param_2 = iVar1,
         param_3 <= iVar1)) {
        return &DAT_01e65100;
      }
      iVar2 = iVar2 + 1;
      *(int *)&param_1->field_0x44 = iVar2;
    } while (iVar2 < *(int *)&param_1->field_0x2c);
  }
  _DAT_01e650f8 = 0;
  return (byte *)0x0;
}
