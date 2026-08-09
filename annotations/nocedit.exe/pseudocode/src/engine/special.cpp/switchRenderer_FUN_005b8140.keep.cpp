// Name: engine_special.cpp_switchRenderer_FUN_005b8140
// Address: 005b8140
// MANUAL RECONSTRUCTION
// Address Range: [[005b8140, 005b8184]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int card_index)

{
  int iVar2;

  engine_special_cpp_kill_FUN_005b71e0();
  g_RendererCardIndex = card_index;
  strcpy(g_RendererDllPath,new_dll_name);
  iVar2 = engine_special_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle);
  return iVar2;
}
