// Name: core_script.cpp_CScript_collectSoundReferences_FUN_00567bc0
// Address: 00567bc0
// MANUAL RECONSTRUCTION
// Address Range: [[00567bc0, 00567cfa]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_collectSoundReferences_FUN_00567bc0(CScript *this_ptr,CStrList *sounds_out)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_collectSoundReferences_FUN_00567bc0(CScript *this_ptr,CStrList *sounds_out)

{
  int iVar2;
  int iVar3;
  int iVar4;
  CCmdParse local_2274;
  char local_14c [300];
  int local_20;
  int local_14;

  core_script_cpp_CScript_buildParsedLines_FUN_0055a370(this_ptr);
  local_20 = 0;
  if (0 < this_ptr->parsed_line_count) {
    do {
      local_14 = 0;
      do {
        iVar2 = core_script_cpp_CCmdParse_parse_FUN_00561fd0
                          (&local_2274,this_ptr->parsed_lines[local_20].text,
                           g_CommandTemplates[local_14]);
        if ((2 < iVar2) && (iVar4 = 0, 0 < local_2274.param_count)) {
          iVar3 = 0;
          do {
            if (*(int *)(local_2274.params[0].modifier_string + iVar3 + -4) == 0xd) {
              _sprintf(local_14c,"%s\tScript line %d",
                         local_2274.params[0].parsed_value + iVar3,
                         this_ptr->parsed_lines[local_20].line_number);
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(sounds_out,local_14c);
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x328;
          } while (iVar4 < local_2274.param_count);
        }
        local_14 = local_14 + 1;
      } while (local_14 != 0x78);
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->parsed_line_count);
  }
  return;
}
