// Name: core_script.cpp_CScript_updateMouseCursor_FUN_00566bc0
// Address: 00566bc0
// Address Range: [[00566bc0, 00566c14]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_updateMouseCursor_FUN_00566bc0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_updateMouseCursor_FUN_00566bc0(CScript *this_ptr)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20
                    (this_ptr,g_MouseX,g_MouseY,&local_c,&local_8);
  if (iVar1 == 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920
            (g_CEditorToolsPtr,1,g_ScriptEditorLineHeight,0);
  return;
}
