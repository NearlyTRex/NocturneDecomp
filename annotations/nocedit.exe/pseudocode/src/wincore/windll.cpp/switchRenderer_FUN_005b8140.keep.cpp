// Name: wincore_windll.cpp_switchRenderer_FUN_005b8140
// Address: 005b8140
// MANUAL RECONSTRUCTION
// Address Range: [[005b8140, 005b8184]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int renderer_handle)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int renderer_handle)

{
  int iVar2;

  wincore_windll_cpp_kill_FUN_005b71e0();
  g_RendererHandle = renderer_handle;
  strcpy(g_RendererDllPath,new_dll_name);
  iVar2 = wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle);
  return iVar2;
}
