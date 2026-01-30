// Name: core_script.cpp_CCmdParse_bestParse_FUN_00561db0
// Address: 00561db0
// Address Range: [[00561db0, 00561fca]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_bestParse_FUN_00561db0 (CCmdParse *this_ptr,int param_2,int param_3,int *param_4,int param_5)

#include "nocturne.h"

int __cdecl
core_script_cpp_CCmdParse_bestParse_FUN_00561db0
          (CCmdParse *this_ptr,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
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
  
  iVar3 = 0;
  iVar5 = 0;
  local_14 = 2;
  local_18 = 0;
  piVar4 = param_4;
  if (0 < param_5) {
    do {
      iVar2 = core_script_cpp_CCmdParse_parse_FUN_00561fd0(this_ptr,param_2,(char *)*piVar4);
      if (local_14 <= iVar2) {
        local_1c = core_script_cpp_CCmdParse_FUN_00562620(this_ptr,param_3);
        if (-1 < local_1c) {
          if (local_14 < iVar2) {
            iVar3 = 0;
            local_14 = iVar2;
            local_18 = 0;
          }
          else if (0x13 < iVar3) {
            g_CurrentFilename = "..\\core\\script.cpp";
            g_CurrentLineNumber = 0x1289;
            core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::bestParse - too many matches!");
          }
          iVar1 = local_1c;
          local_6c[iVar3] = local_1c;
          iVar2 = local_6c[0];
          aiStack_bc[iVar3] = iVar5;
          if (iVar1 != iVar2) {
            local_18 = 1;
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < param_5);
  }
  if (iVar3 < 1) {
    return -1;
  }
  iVar5 = 0;
  if (local_18 != 0) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb9c);
    if (0 < iVar3) {
      do {
        piVar4 = (int *)((int)aiStack_bc + iVar5);
        iVar5 = iVar5 + 4;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffffb9c,(char *)param_4[*piVar4]);
      } while (iVar5 < iVar3 * 4);
    }
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffb9c,"Choose command form",-1,0);
    if (iVar5 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffb9c,0,in_stack_fffffb9c,in_stack_fffffba0,
                 (uint)in_stack_fffffba4,(uint)in_stack_fffffba8,in_stack_fffffbac);
      return -1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb9c,0,in_stack_fffffb9c,in_stack_fffffba0,
               (uint)in_stack_fffffba4,(uint)in_stack_fffffba8,in_stack_fffffbac);
  }
  core_script_cpp_CCmdParse_parse_FUN_00561fd0(this_ptr,param_2,(char *)param_4[aiStack_bc[iVar5]]);
  iVar3 = core_script_cpp_CCmdParse_FUN_00562620(this_ptr,param_3);
  return iVar3;
}
