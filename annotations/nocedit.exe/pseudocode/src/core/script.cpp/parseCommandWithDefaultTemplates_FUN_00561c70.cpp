// Name: core_script.cpp_parseCommandWithDefaultTemplates_FUN_00561c70
// Address: 00561c70
// Address Range: [[00561c70, 00561caa]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_parseCommandWithDefaultTemplates_FUN_00561c70 (char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position ,CCmdParm *parm_out,CCmdParse *parse_out)

#include "nocturne.h"

int __cdecl
core_script_cpp_parseCommandWithDefaultTemplates_FUN_00561c70
          (char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position
          ,CCmdParm *parm_out,CCmdParse *parse_out)

{
  int iVar1;
  
  iVar1 = core_script_cpp_parseCommandWithTemplates_FUN_00561690
                    (input_text,cmd_name_out,prefix_out,suffix_out,cursor_position,parm_out,
                     parse_out,g_CommandTemplates,0x78);
  return iVar1;
}
