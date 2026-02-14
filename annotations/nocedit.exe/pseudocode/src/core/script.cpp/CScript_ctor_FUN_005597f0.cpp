// Name: core_script.cpp_CScript_ctor_FUN_005597f0
// Address: 005597f0
// Address Range: [[005597f0, 00559834]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005597f0(CScript *this_ptr)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005597f0(CScript *this_ptr)

{
  CScript_ptr_56 pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&this_ptr->script_text);
  ADJ(pCVar1)->parsed_line_count = 0;
  ADJ(pCVar1)->parsed_lines = (SScriptLine *)0x0;
  ADJ(pCVar1)->dialog_entry_count = 0;
  ADJ(pCVar1)->dialog_entries = (SDialogEntry *)0x0;
  ADJ(pCVar1)->current_sfx_handle = 0;
  ADJ(pCVar1)->xref_count = 0;
  ADJ(pCVar1)->xref_entries = (SScriptXRef *)0x0;
  return ADJ(pCVar1);
}
