// Name: core_script.cpp_FUN_004fef60
// Address: 004fef60
// Address Range: [[004fef60, 004fefe7]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_FUN_004fef60(CScript *this_ptr,int *error_line_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_script_cpp_FUN_004fef60(CScript *this_ptr,int *error_line_out)

{
  int iVar1;
  char **ppcVar2;
  float local_10;
  
  _DAT_01e56418 = 1;
  core_script_cpp_FUN_004feff0(this_ptr);
  shape_edittool_cpp_FUN_00476160(0x1e56c30);
  if ((int)(this_ptr->script_text).data_array < this_ptr->xref_count) {
    do {
      ppcVar2 = (this_ptr->script_text).data_array;
      local_10 = 0.25;
      iVar1 = core_script_cpp_CScript_step_FUN_004ff2c0(this_ptr,&local_10);
      if (iVar1 < 0) {
        *error_line_out = *(int *)(this_ptr->xref_entries->name + (int)ppcVar2 * 8) + -1;
        return &DAT_01e56420;
      }
      ppcVar2 = (char **)((int)ppcVar2 + 1);
      (this_ptr->script_text).data_array = ppcVar2;
    } while ((int)ppcVar2 < this_ptr->xref_count);
  }
  _DAT_01e56418 = 0;
  return (char *)0x0;
}
