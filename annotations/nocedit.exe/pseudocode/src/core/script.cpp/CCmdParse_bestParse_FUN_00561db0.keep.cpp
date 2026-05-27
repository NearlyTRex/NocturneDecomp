// Name: core_script.cpp_CCmdParse_bestParse_FUN_00561db0
// Address: 00561db0
// MANUAL RECONSTRUCTION
// Address Range: [[00561db0, 00561fca]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CCmdParse_bestParse_FUN_00561db0(CCmdParse *this_ptr,char *input_text,int cursor_position,char **templates,int template_count)

#include "nocturne.h"

int __cdecl core_script_cpp_CCmdParse_bestParse_FUN_00561db0(CCmdParse *this_ptr,char *input_text,int cursor_position,char **templates,int template_count)

{
  bool bVar1;
  int iVar5;
  int iVar3;
  int iVar4;
  char **ppcVar5;
  int iVar7;
  int iVar6;
  CPickList local_464;
  int aiStack_bc [20];
  int local_6c [20];
  int local_14;

  iVar4 = 0;
  iVar6 = 0;
  local_14 = 2;
  bVar1 = false;
  ppcVar5 = templates;
  if (0 < template_count) {
    do {
      iVar3 = core_script_cpp_CCmdParse_parse_FUN_00561fd0(this_ptr,input_text,*ppcVar5);
      if ((local_14 <= iVar3) &&
         (iVar7 = core_script_cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620
                            (this_ptr,cursor_position), -1 < iVar7)) {
        if (local_14 < iVar3) {
          iVar4 = 0;
          bVar1 = false;
          local_14 = iVar3;
        }
        else if (0x13 < iVar4) {
          g_CurrentFilename = "..\\core\\script.cpp";
          g_CurrentLineNumber = 0x1289;
          core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::bestParse - too many matches!");
        }
        local_6c[iVar4] = iVar7;
        iVar5 = local_6c[0];
        aiStack_bc[iVar4] = iVar6;
        if (iVar7 != iVar5) {
          bVar1 = true;
        }
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar6 + 1;
      ppcVar5 = ppcVar5 + 1;
    } while (iVar6 < template_count);
  }
  if (iVar4 < 1) {
    return -1;
  }
  iVar7 = 0;
  if (bVar1) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_464);
    if (0 < iVar4) {
      do {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_464.base,templates[aiStack_bc[iVar7]]);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_464,"Choose command form",-1,0);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_464,0);
      return -1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_464,0);
  }
  core_script_cpp_CCmdParse_parse_FUN_00561fd0(this_ptr,input_text,templates[aiStack_bc[iVar7]]);
  iVar7 = core_script_cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(this_ptr,cursor_position);
  return iVar7;
}
