// Name: engine_special.cpp_getCurrentRenderer_FUN_00532fa0
// Address: 00532fa0
// Address Range: [[00532fa0, 00532fb0]]
// Convention: __cdecl
// Signature: char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_00532fa0(int *card_index_out)

#include "nocturne.h"

char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_00532fa0(int *card_index_out)

{
  *card_index_out = g_RendererCardIndex;
  return g_RendererDllPath;
}
