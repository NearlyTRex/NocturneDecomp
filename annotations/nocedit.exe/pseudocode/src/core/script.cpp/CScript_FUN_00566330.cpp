// Name: core_script.cpp_CScript_FUN_00566330
// Address: 00566330
// Address Range: [[00566330, 0056638d]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566330(CScript *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00566330(CScript *this_ptr,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(this_ptr,param_3);
  uVar2 = 0xffffffff;
  pcVar3 = g_CurrentLineBuffer + 1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if ((int)(~uVar2 - 1) < param_2) {
    param_2 = ~uVar2 - 1;
  }
  shape_edittool_cpp_CStrList_insert_FUN_004a2bc0
            (&this_ptr->script_text,param_3 + 1,g_CurrentLineBuffer + param_2 + 1);
  g_CurrentLineBuffer[param_2 + 1] = '\0';
  core_script_cpp_CScript_editorPutLine_FUN_005662a0(this_ptr,param_3);
  return;
}
