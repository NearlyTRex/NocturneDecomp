// Name: core_script.cpp_CScript_addEventXRef_FUN_00567510
// Address: 00567510
// MANUAL RECONSTRUCTION
// Address Range: [[00567510, 00567595]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_addEventXRef_FUN_00567510(CScript *this_ptr,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_addEventXRef_FUN_00567510(CScript *this_ptr,SScriptXRef *xref_data)

{
  SScriptXRef *pSVar1;

  pSVar1 = (SScriptXRef *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->xref_entries,(this_ptr->xref_count + 1) * 0x114,
                      "..\\core\\script.cpp",0x1d37);
  this_ptr->xref_entries = pSVar1;
  if (pSVar1 == (SScriptXRef *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d38;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  pSVar1 = this_ptr->xref_entries + this_ptr->xref_count;
  *pSVar1 = *xref_data;
  this_ptr->xref_count = this_ptr->xref_count + 1;
  return;
}
