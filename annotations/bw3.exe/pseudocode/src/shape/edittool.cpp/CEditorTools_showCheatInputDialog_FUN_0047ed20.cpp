// Name: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20
// Address: 0047ed20
// Address Range: [[0047ed20, 0047ed42]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047ed20(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_showTextInputDialog_FUN_0047c2c0
                    (prompt_text,input_buffer,buffer_size,dialog_flags,1);
  return iVar1;
}
