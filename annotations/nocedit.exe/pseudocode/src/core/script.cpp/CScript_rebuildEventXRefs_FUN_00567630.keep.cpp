// Name: core_script.cpp_CScript_rebuildEventXRefs_FUN_00567630
// Address: 00567630
// MANUAL RECONSTRUCTION
// Address Range: [[00567630, 005676d3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_rebuildEventXRefs_FUN_00567630(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_rebuildEventXRefs_FUN_00567630(CScript *this_ptr)

{
  int iVar3;
  SScriptXRef SStack_124;

  this_ptr->xref_count = 0;
  core_script_cpp_CScript_buildParsedLines_FUN_0055a370(this_ptr);
  iVar3 = 0;
  if (0 < this_ptr->parsed_line_count) {
    do {
      SStack_124.actor = (CDemonActor *)0x0;
      SStack_124.line_number = this_ptr->parsed_lines[iVar3].line_number;
      core_script_cpp_CScript_parseCommand_FUN_00567080
                (this_ptr,this_ptr->parsed_lines[iVar3].text,&SStack_124);
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->parsed_line_count);
  }
  core_msnedit_cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30(g_CDemonMissionPtr);
  _qsort
            (this_ptr->xref_entries,this_ptr->xref_count,0x114,
             core_script_cpp_compareEventXRefs_FUN_005675a0);
  return;
}
