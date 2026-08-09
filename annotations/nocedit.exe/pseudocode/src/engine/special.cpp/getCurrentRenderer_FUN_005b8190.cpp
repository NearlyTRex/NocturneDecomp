// Name: engine_special.cpp_getCurrentRenderer_FUN_005b8190
// Address: 005b8190
// Address Range: [[005b8190, 005b81a0]]
// Convention: __cdecl
// Signature: char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_005b8190(int *card_index_out)

#include "nocturne.h"

char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_005b8190(int *card_index_out)

{
  *card_index_out = g_RendererCardIndex;
  return g_RendererDllPath;
}
