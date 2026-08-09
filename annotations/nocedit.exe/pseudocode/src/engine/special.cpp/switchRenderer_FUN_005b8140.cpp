// Name: engine_special.cpp_switchRenderer_FUN_005b8140
// Address: 005b8140
// Address Range: [[005b8140, 005b8184]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int card_index)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  engine_special_cpp_kill_FUN_005b71e0();
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
  iVar2 = engine_special_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle);
  return iVar2;
}
