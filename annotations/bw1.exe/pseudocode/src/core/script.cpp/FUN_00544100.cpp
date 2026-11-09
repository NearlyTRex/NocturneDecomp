// Name: core_script.cpp_FUN_00544100
// Address: 00544100
// Address Range: [[00544100, 0054418f]]
// Convention: unknown
// Signature: undefined * core_script_cpp_FUN_00544100(CScript *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * core_script_cpp_FUN_00544100(CScript *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fStack_14;
  
  _DAT_01e810a8 = 1;
  core_script_cpp_FUN_00544190(param_1);
  shape_edittool_cpp_FUN_0049c370(&g_ScriptPickList);
  if (*(int *)&param_1->field_0x44 < *(int *)&param_1->field_0x2c) {
    do {
      iVar2 = *(int *)&param_1->field_0x44;
      fStack_14 = 0.25;
      iVar1 = core_script_cpp_CScript_step_FUN_00544460(param_1,&fStack_14);
      if ((iVar1 < 0) &&
         (iVar1 = *(int *)(*(int *)&param_1->field_0x30 + iVar2 * 8) + -1, *param_2 = iVar1,
         param_3 <= iVar1)) {
        return &DAT_01e810b0;
      }
      iVar2 = iVar2 + 1;
      *(int *)&param_1->field_0x44 = iVar2;
    } while (iVar2 < *(int *)&param_1->field_0x2c);
  }
  _DAT_01e810a8 = 0;
  return (byte *)0x0;
}
