// Name: wincore_windll.cpp_switchRenderer_FUN_005b8140
// Address: 005b8140
// Address Range: [[005b8140, 005b8184]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_switchRenderer_FUN_005b8140(char * new_dll_name, int renderer_handle)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int renderer_handle)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_0000000c;
  
  wincore_windll_cpp_kill_FUN_005b71e0();
  pcVar3 = g_RendererDllName;
  g_RendererHandle = in_stack_0000000c;
  do {
    cVar1 = *(char *)renderer_handle;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *(char *)(renderer_handle + 1);
    renderer_handle = renderer_handle + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle);
  return iVar2;
}
