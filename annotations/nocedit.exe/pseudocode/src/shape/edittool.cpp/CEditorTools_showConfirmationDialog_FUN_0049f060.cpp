// Name: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
// Address: 0049f060
// Address Range: [[0049f060, 0049f0ea]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string, ...)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
          (CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CStrList_vtable *d2;
  
  crt_stdio_c_vsprintf_FUN_005fdba8
            (g_ConfirmationMessageBuffer + 0x400,format_string,(va_list_t *)&stack0xfffffff8);
  d2 = (CStrList_vtable *)0x0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)&stack0xffffffec);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffff0,"^Yes, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffff4,"^No, please, I didn't mean to do it!");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)(g_ConfirmationMessageBuffer + 0x400),&stack0xfffffff8,1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&stack0xfffffffc,0,(uint)d2);
  return (uint)(iVar1 == 0);
}
