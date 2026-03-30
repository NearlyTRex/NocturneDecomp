// Name: shape_edittool.cpp_CEditorTools_showYesNoDialog1_FUN_0049f060
// Address: 0049f060
// Address Range: [[0049f060, 0049f0ea]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog1_FUN_0049f060(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog1_FUN_0049f060(CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  CStrList local_18;
  va_list_t local_8;
  
  VA_START_T(local_8, format_string);
  _vsprintf
            (g_ConfirmationMessageBuffer + 0x400,format_string,local_8);
  VA_END_T(local_8);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_18);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^Yes, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^No, please, I didn't mean to do it!");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)(g_ConfirmationMessageBuffer + 0x400),(char *)&local_18,1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
  return (uint)(iVar1 == 0);
}
