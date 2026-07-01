// Name: core_script.cpp_CScript_addEventXRef_FUN_00567510
// Address: 00567510
// Address Range: [[00567510, 00567595]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_addEventXRef_FUN_00567510(CScript *this_ptr,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_addEventXRef_FUN_00567510(CScript *this_ptr,SScriptXRef *xref_data)

{
  SScriptXRef *pSVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  pSVar1 = (SScriptXRef *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->xref_entries,(this_ptr->xref_count + 1) * 0x114,
                      "..\\core\\script.cpp",7479);
  this_ptr->xref_entries = pSVar1;
  if (pSVar1 == (SScriptXRef *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 7480;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  pSVar1 = this_ptr->xref_entries + this_ptr->xref_count;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pSVar1->name = *(uint *)xref_data->name;
    xref_data = (SScriptXRef *)((int)xref_data + (uint)bVar3 * -8 + 4);
    pSVar1 = (SScriptXRef *)((int)pSVar1 + (uint)bVar3 * -8 + 4);
  }
  this_ptr->xref_count = this_ptr->xref_count + 1;
  return;
}
