// Name: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
// Address: 0049f180
// Address Range: [[0049f180, 0049f26a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180(CEditorTools * this_ptr, char * format, ...)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
          (CEditorTools *this_ptr,char *format,...)

{
  int iVar1;
  uint in_stack_ffffffe8;
  va_list_t local_8;
  
  local_8 = &stack0x0000000c;
  crt_stdio_c_vsprintf_FUN_005fdba8(g_DialogMessageBuffer_02cf0930,format,&local_8);
  local_8 = (va_list_t)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffe8);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffffe8,"^Yes");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffffe8,"Yes to ^All");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffffe8,"^No");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffffe8,"^Cancel");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)g_DialogMessageBuffer_02cf0930,&stack0xffffffe8,0);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = 2;
  }
  else {
    if (iVar1 != 2) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)&stack0xffffffe8,0,in_stack_ffffffe8);
      return -1;
    }
    iVar1 = 0;
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffe8,0,in_stack_ffffffe8);
  return iVar1;
}
