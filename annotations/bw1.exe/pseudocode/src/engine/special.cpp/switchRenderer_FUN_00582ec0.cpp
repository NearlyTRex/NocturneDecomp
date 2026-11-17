// Name: engine_special.cpp_switchRenderer_FUN_00582ec0
// Address: 00582ec0
// Address Range: [[00582ec0, 00582f04]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_switchRenderer_FUN_00582ec0(char *new_dll_name,int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_switchRenderer_FUN_00582ec0(char *new_dll_name,int card_index)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  engine_special_cpp_kill_FUN_00581f20();
  pcVar3 = g_CHAR_ARRAY_006257d0;
  g_INT_02c83374 = card_index;
  do {
    cVar1 = *new_dll_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = new_dll_name[1];
    new_dll_name = new_dll_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_special_cpp_loadExternalRenderer_FUN_00581310(g_HWND_02c834c0);
  return iVar2;
}
