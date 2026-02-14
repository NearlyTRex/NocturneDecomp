// Name: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
// Address: 004a03d0
// Address Range: [[004a03d0, 004a03f2]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_showTextInputDialog_FUN_0049db10
                    ((int)prompt_text,input_buffer,(char *)buffer_size,dialog_flags,0);
  return iVar1;
}
