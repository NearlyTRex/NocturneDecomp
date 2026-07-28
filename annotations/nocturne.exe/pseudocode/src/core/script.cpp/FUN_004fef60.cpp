// Name: core_script.cpp_FUN_004fef60
// Address: 004fef60
// Address Range: [[004fef60, 004fefe7]]
// Convention: unknown
// Signature: undefined * core_script_cpp_FUN_004fef60(CScript *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * core_script_cpp_FUN_004fef60(CScript *param_1,int *param_2)

{
  int iVar1;
  char **ppcVar2;
  float local_10;
  
  _DAT_01e56418 = 1;
  core_script_cpp_FUN_004feff0(param_1);
  shape_edittool_cpp_FUN_00476160(0x1e56c30);
  if ((int)(param_1->script_text).data_array < param_1->xref_count) {
    do {
      ppcVar2 = (param_1->script_text).data_array;
      local_10 = 0.25;
      iVar1 = core_script_cpp_CScript_step_FUN_004ff2c0(param_1,&local_10);
      if (iVar1 < 0) {
        *param_2 = *(int *)(param_1->xref_entries->name + (int)ppcVar2 * 8) + -1;
        return &DAT_01e56420;
      }
      ppcVar2 = (char **)((int)ppcVar2 + 1);
      (param_1->script_text).data_array = ppcVar2;
    } while ((int)ppcVar2 < param_1->xref_count);
  }
  _DAT_01e56418 = 0;
  return (byte *)0x0;
}
