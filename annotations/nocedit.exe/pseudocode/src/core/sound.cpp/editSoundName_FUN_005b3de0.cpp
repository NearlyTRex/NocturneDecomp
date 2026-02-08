// Name: core_sound.cpp_editSoundName_FUN_005b3de0
// Address: 005b3de0
// Address Range: [[005b3de0, 005b3dff]]
// Convention: __cdecl
// Signature: int __cdecl core_sound_cpp_editSoundName_FUN_005b3de0(char *prompt_text,char *output_buffer)

#include "nocturne.h"

int __cdecl core_sound_cpp_editSoundName_FUN_005b3de0(char *prompt_text,char *output_buffer)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,output_buffer,prompt_text,0x20,1);
  return iVar1;
}
