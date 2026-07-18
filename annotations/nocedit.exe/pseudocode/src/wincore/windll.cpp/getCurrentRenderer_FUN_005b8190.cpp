// Name: wincore_windll.cpp_getCurrentRenderer_FUN_005b8190
// Address: 005b8190
// Address Range: [[005b8190, 005b81a0]]
// Convention: __cdecl
// Signature: char * __cdecl wincore_windll_cpp_getCurrentRenderer_FUN_005b8190(int *renderer_handle)

#include "nocturne.h"

char * __cdecl wincore_windll_cpp_getCurrentRenderer_FUN_005b8190(int *renderer_handle)

{
  *renderer_handle = g_RendererHandle;
  return g_RendererDllPath;
}
