// Name: shape_design.c_findTextureByFilename_FUN_0046dfc0
// Address: 0046dfc0
// Address Range: [[0046dfc0, 0046e024]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_findTextureByFilename_FUN_0046dfc0(char *filename)

#include "nocturne.h"

int __cdecl shape_design_c_findTextureByFilename_FUN_0046dfc0(char *filename)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (g_TextureProcessedCount <= local_14) {
      return -1;
    }
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                      (g_TextureAtlasEntries[local_14].original_filename,filename);
    if (iVar1 == 0) break;
    local_14 = local_14 + 1;
  }
  return local_14;
}
