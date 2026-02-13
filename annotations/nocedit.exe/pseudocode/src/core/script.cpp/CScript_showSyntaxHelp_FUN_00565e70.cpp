// Name: core_script.cpp_CScript_showSyntaxHelp_FUN_00565e70
// Address: 00565e70
// Address Range: [[00565e70, 00565f60]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_showSyntaxHelp_FUN_00565e70(CScript *this_ptr,int column,int line)

#include "nocturne.h"

void __cdecl
core_script_cpp_CScript_showSyntaxHelp_FUN_00565e70(CScript *this_ptr,int column,int line)

{
  CStrList *this_ptr_00;
  char cVar1;
  int iVar2;
  int cursor_position;
  char *input_text;
  char *pcVar3;
  char *pcVar4;
  char *cmd_name_out;
  CCmdParm *parm_out;
  char **templates;
  CCmdParse *parse_out;
  CCmdParse local_2a38;
  CCmdParm local_910;
  char local_5e8 [500];
  char local_3f4 [500];
  char local_200 [500];
  
  if (-1 < line) {
    this_ptr_00 = &this_ptr->script_text;
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00);
    if (line < iVar2) {
      cursor_position = core_script_cpp_CScript_editorX2Index_FUN_00566a90(this_ptr,line,column);
      parse_out = &local_2a38;
      parm_out = &local_910;
      pcVar3 = local_5e8;
      pcVar4 = local_3f4;
      cmd_name_out = local_200;
      iVar2 = cursor_position;
      input_text = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr_00,line);
      iVar2 = core_script_cpp_parseCommandWithDefaultTemplates_FUN_00561c70
                        (input_text,cmd_name_out,pcVar4,pcVar3,iVar2,parm_out,parse_out);
      if (iVar2 < 1) {
        iVar2 = 0x78;
        templates = g_CommandTemplates;
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr_00,line);
        iVar2 = core_script_cpp_CCmdParse_bestParse_FUN_00561db0
                          (&local_2a38,pcVar3,cursor_position,templates,iVar2);
        if (iVar2 < 1) {
          pcVar3 = "Not enough context to show usage.  (Try putting the cursor over the first parm...)";
          pcVar4 = g_ScriptEditorStatusText;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') {
              return;
            }
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          return;
        }
      }
      core_script_cpp_expandTemplateText_FUN_005643d0
                (g_ScriptEditorStatusText,local_2a38.template_text);
      return;
    }
  }
  return;
}
