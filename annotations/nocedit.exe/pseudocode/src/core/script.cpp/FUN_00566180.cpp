// Name: core_script.cpp_FUN_00566180
// Address: 00566180
// Address Range: [[00566180, 00566229]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566180()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566180(uint param_1, uint param_2) */

void core_script_cpp_FUN_00566180(void)

{
  CBitFont *font_ptr;
  int iVar1;
  FILE *file_ptr;
  int iVar2;
  char *pcVar3;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
  if (iVar1 < 1) {
    return;
  }
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",in_stack_00000008,"wt");
  if (file_ptr != (FILE *)0x0) {
    iVar1 = 0;
    CEdScrollBar_0310fd0c.current_value = 0;
    while( true ) {
      iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
      if (iVar2 <= iVar1) break;
      core_script_cpp_FUN_00566800();
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,iVar1);
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%s\n",pcVar3);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\script.cpp",0x1a65);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't create world\\%s",in_stack_00000008);
  return;
}
