// Name: core_script.cpp_SCmdParse_bestParse_FUN_00561db0
// Address: 00561db0
// Address Range: [[00561db0, 00561fca]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_SCmdParse_bestParse_FUN_00561db0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_SCmdParse_bestParse(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

uint core_script_cpp_SCmdParse_bestParse_FUN_00561db0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_fffffb9c;
  uint in_stack_fffffba0;
  char **in_stack_fffffba4;
  CStrList_vtable *in_stack_fffffba8;
  uint in_stack_fffffbac;
  int aiStack_bc [20];
  int local_6c [20];
  int local_1c;
  int local_18;
  int local_14;
  
  iVar5 = 0;
  iVar6 = 0;
  local_14 = 2;
  local_18 = 0;
  if (0 < in_stack_00000014) {
    do {
      iVar3 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
      if (local_14 <= iVar3) {
        local_1c = core_script_cpp_FUN_00562620();
        if (-1 < local_1c) {
          if (local_14 < iVar3) {
            iVar5 = 0;
            local_14 = iVar3;
            local_18 = 0;
          }
          else if (0x13 < iVar5) {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1289;
            core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::bestParse - too many matches!");
          }
          iVar2 = local_1c;
          local_6c[iVar5] = local_1c;
          iVar3 = local_6c[0];
          aiStack_bc[iVar5] = iVar6;
          if (iVar2 != iVar3) {
            local_18 = 1;
          }
          iVar5 = iVar5 + 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_stack_00000014);
  }
  if (iVar5 < 1) {
    return 0xffffffff;
  }
  iVar6 = 0;
  if (local_18 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb9c);
    if (0 < iVar5) {
      do {
        piVar1 = (int *)((int)aiStack_bc + iVar6);
        iVar6 = iVar6 + 4;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffb9c,*(char **)(*piVar1 * 4 + in_stack_00000010));
      } while (iVar6 < iVar5 * 4);
    }
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffb9c,"Choose command form",-1,0);
    if (iVar5 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffb9c,0,in_stack_fffffb9c,in_stack_fffffba0,
                 (uint)in_stack_fffffba4,(uint)in_stack_fffffba8,in_stack_fffffbac);
      return 0xffffffff;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb9c,0,in_stack_fffffb9c,in_stack_fffffba0,
               (uint)in_stack_fffffba4,(uint)in_stack_fffffba8,in_stack_fffffbac);
  }
  core_script_cpp_SCmdParse_parse_FUN_00561fd0();
  uVar4 = core_script_cpp_FUN_00562620();
  return uVar4;
}
