// Name: shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0
// Address: 0049f0f0
// Address Range: [[0049f0f0, 0049f17a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0(CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
  CStrList local_18;
  va_list_t local_8;
  
  VA_START_T(local_8, format_string);
  _vsprintf(g_YesNoDialogBuffer,format_string,local_8);
  VA_END_T(local_8);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_18);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^Yes");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^No");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)g_YesNoDialogBuffer,(char *)&local_18,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
  return (uint)(iVar1 == 0);
}
