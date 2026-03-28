// Name: shape_edittool.cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180
// Address: 0049f180
// Address Range: [[0049f180, 0049f26a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180(CEditorTools *this_ptr,char *format,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180(CEditorTools *this_ptr,char *format,...)

{
  int iVar1;
  CStrList local_18;
  va_list_t local_8;
  
  VA_START_T(local_8, format);
  _vsprintf(g_DialogMessageBuffer_02cf0930,format,local_8);
  VA_END_T(local_8);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_18);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^Yes");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"Yes to ^All");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^No");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^Cancel");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)g_DialogMessageBuffer_02cf0930,(char *)&local_18,0);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = 2;
  }
  else {
    if (iVar1 != 2) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
      return -1;
    }
    iVar1 = 0;
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
  return iVar1;
}
