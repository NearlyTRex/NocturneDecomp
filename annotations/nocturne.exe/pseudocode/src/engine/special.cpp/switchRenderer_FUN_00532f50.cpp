// Name: engine_special.cpp_switchRenderer_FUN_00532f50
// Address: 00532f50
// Address Range: [[00532f50, 00532f94]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_switchRenderer_FUN_00532f50(char *new_dll_name,int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_switchRenderer_FUN_00532f50(char *new_dll_name,int card_index)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  engine_special_cpp_kill_FUN_005322b0();
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
  iVar2 = engine_special_cpp_loadExternalRenderer_FUN_00531780(g_StoredWindowHandle);
  return iVar2;
}
