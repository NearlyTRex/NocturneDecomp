// Name: engine_special.cpp_getCurrentRenderer_FUN_005667e0
// Address: 005667e0
// Address Range: [[005667e0, 005667f0]]
// Convention: __cdecl
// Signature: char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_005667e0(int *card_index_out)

#include "nocturne.h"

char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_005667e0(int *card_index_out)

{
  *card_index_out = g_RendererCardIndex;
  return g_RendererDllPath;
}
