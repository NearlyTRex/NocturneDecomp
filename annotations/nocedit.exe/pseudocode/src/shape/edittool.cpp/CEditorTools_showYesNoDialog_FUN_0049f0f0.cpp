// Name: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
// Address: 0049f0f0
// Address Range: [[0049f0f0, 0049f17a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string, ...)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
          (CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  uint in_stack_ffffffe8;
  va_list_t local_8;
  
  local_8 = &stack0x0000000c;
  crt_stdio_c_vsprintf_FUN_005fdba8(g_YesNoDialogBuffer,format_string,&local_8);
  local_8 = (va_list_t)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffe8);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffffe8,"^Yes");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffffe8,"^No");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)g_YesNoDialogBuffer,&stack0xffffffe8,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffe8,0,in_stack_ffffffe8);
  return (uint)(iVar1 == 0);
}
