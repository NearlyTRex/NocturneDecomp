// Name: shape_design.c_initializeTextureManager_FUN_0046a880
// Address: 0046a880
// Address Range: [[0046a880, 0046a8d6]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_initializeTextureManager_FUN_0046a880(int initialization_mode)

#include "nocturne.h"

void __cdecl shape_design_c_initializeTextureManager_FUN_0046a880(int initialization_mode)

{
  int local_14;
  
  g_TextureManagerMode = initialization_mode;
  g_TextureProcessedCount = 0;
  for (local_14 = 0; local_14 < 0xfa; local_14 = local_14 + 1) {
    g_TextureAtlasEntries[local_14].tga_filename[0] = '\0';
  }
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x10);
  return;
}
