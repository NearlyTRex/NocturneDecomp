// Name: engine_special.cpp_FUN_00532f50
// Address: 00532f50
// Address Range: [[00532f50, 00532f94]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_FUN_00532f50(char *param_1,int param_2)

#include "nocturne.h"

void __cdecl engine_special_cpp_FUN_00532f50(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  engine_special_cpp_kill_FUN_005322b0();
  pcVar2 = "trid3d.dll";
  g_RendererHandle = param_2;
  do {
    cVar1 = *param_1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  engine_special_cpp_loadExternalRenderer_FUN_00531780(g_StoredWindowHandle);
  return;
}
