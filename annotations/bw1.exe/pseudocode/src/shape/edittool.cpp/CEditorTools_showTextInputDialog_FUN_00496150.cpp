// Name: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150
// Address: 00496150
// Address Range: [[00496150, 00496172]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_showTextInputDialog_FUN_00493720
                    (prompt_text,input_buffer,buffer_size,dialog_flags,0);
  return iVar1;
}
