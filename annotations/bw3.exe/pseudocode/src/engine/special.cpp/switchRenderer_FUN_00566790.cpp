// Name: engine_special.cpp_switchRenderer_FUN_00566790
// Address: 00566790
// Address Range: [[00566790, 005667d4]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_switchRenderer_FUN_00566790(char *new_dll_name,int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_switchRenderer_FUN_00566790(char *new_dll_name,int card_index)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  engine_special_cpp_kill_FUN_005657f0();
  pcVar3 = g_RendererDllPath;
  g_RendererCardIndex = card_index;
  do {
    cVar1 = *new_dll_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = new_dll_name[1];
    new_dll_name = new_dll_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_special_cpp_loadExternalRenderer_FUN_00564be0(g_StoredWindowHandle);
  return iVar2;
}
