// Name: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_0047db10
// Address: 0047db10
// Address Range: [[0047db10, 0047db32]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047db10(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_0047db10(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_showTextInputDialog_FUN_0047b1f0
                    (prompt_text,input_buffer,buffer_size,dialog_flags,1);
  return iVar1;
}
