// Name: shape_design.c_getAtlasMapIndex_FUN_0046e030
// Address: 0046e030
// Address Range: [[0046e030, 0046e055]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)

#include "nocturne.h"

int __cdecl shape_design_c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)

{
  return g_TextureAtlasEntries[texture_entry_index].atlas_map_index;
}
