// Name: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
// Address: 0049f060
// Address Range: [[0049f060, 0049f0ea]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 (CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
          (CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  uint in_stack_ffffffe8;
  va_list_t local_8;
  
  local_8 = &stack0x0000000c;
  vsprintf(g_ConfirmationMessageBuffer + 0x400,format_string,&local_8);
  local_8 = (va_list_t)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffe8);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xffffffe8,"^Yes, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xffffffe8,"^No, please, I didn't mean to do it!");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)(g_ConfirmationMessageBuffer + 0x400),&stack0xffffffe8,1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xffffffe8,0,in_stack_ffffffe8);
  return (uint)(iVar1 == 0);
}
