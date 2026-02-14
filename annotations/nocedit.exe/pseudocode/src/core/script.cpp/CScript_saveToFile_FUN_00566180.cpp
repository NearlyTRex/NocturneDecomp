// Name: core_script.cpp_CScript_saveToFile_FUN_00566180
// Address: 00566180
// Address Range: [[00566180, 00566229]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_saveToFile_FUN_00566180(CScript *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_saveToFile_FUN_00566180(CScript *this_ptr,char *filename)

{
  CStrList *this_ptr_00;
  int iVar1;
  _FILE *file_ptr;
  int iVar2;
  char *pcVar3;
  
  this_ptr_00 = &this_ptr->script_text;
  iVar1 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00);
  if (iVar1 < 1) {
    return;
  }
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",filename,"wt");
  if (file_ptr != (_FILE *)0x0) {
    iVar1 = 0;
    g_ScriptEditorHScrollBar.current_value = 0;
    while( true ) {
      iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(this_ptr_00);
      if (iVar2 <= iVar1) break;
      core_script_cpp_CScript_updateLineMetrics_FUN_00566800(this_ptr,iVar1);
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr_00,iVar1);
      iVar1 = iVar1 + 1;
      _fprintf(file_ptr,"%s\n",pcVar3);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\script.cpp",0x1a65);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't create world\\%s",filename);
  return;
}
