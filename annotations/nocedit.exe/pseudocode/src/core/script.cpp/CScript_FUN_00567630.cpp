// Name: core_script.cpp_CScript_FUN_00567630
// Address: 00567630
// Address Range: [[00567630, 005676d3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00567630(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00567630(CScript *this_ptr)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int aiStack_124 [65];
  uint local_20;
  uint local_18;
  
  this_ptr->unk3 = 0;
  core_script_cpp_CScript_FUN_0055a370(this_ptr);
  iVar3 = 0;
  if (0 < this_ptr->parsed_line_count) {
    iVar2 = 0;
    do {
      local_20 = 0;
      local_18 = *(uint *)((int)&this_ptr->parsed_lines->line_number + iVar2);
      puVar1 = (uint *)((int)&this_ptr->parsed_lines->text + iVar2);
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      core_script_cpp_CScript_FUN_00567080(this_ptr,(char *)*puVar1,aiStack_124);
    } while (iVar3 < this_ptr->parsed_line_count);
  }
  core_msnedit_cpp_CDemonMission_FUN_0053ea30(g_CDemonMissionPtr);
  qsort(this_ptr->unk4,this_ptr->unk3,0x114,core_script_cpp_FUN_005675a0);
  return;
}
