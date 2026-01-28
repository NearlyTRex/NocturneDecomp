// Name: shape_design.c_cramTextures_FUN_0046a970
// Address: 0046a970
// Address Range: [[0046a970, 0046abec]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_cramTextures_FUN_0046a970 (char *texture_filename,int min_u,int min_v,int max_u,int max_v)

#include "nocturne.h"

void __cdecl
shape_design_c_cramTextures_FUN_0046a970
          (char *texture_filename,int min_u,int min_v,int max_u,int max_v)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  STextureAtlasEntry *pSVar5;
  char local_1e4 [200];
  char local_11c [260];
  char *local_18;
  int local_14;
  
  pcVar4 = local_11c;
  pcVar3 = texture_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = local_11c;
  do {
    local_18 = pcVar4;
    if (*pcVar4 == '.') goto LAB_0046a9c2;
    if (*pcVar4 == '\0') break;
    local_18 = pcVar4 + 1;
    if (*local_18 == '.') goto LAB_0046a9c2;
    pcVar4 = pcVar4 + 2;
  } while (*local_18 != '\0');
  local_18 = (char *)0x0;
LAB_0046a9c2:
  if (local_18 == (char *)0x0) {
    pcVar4 = local_11c;
    do {
      local_18 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_0046a9eb;
      if (*pcVar4 == '\0') break;
      local_18 = pcVar4 + 1;
      if (*local_18 == '\0') goto LAB_0046a9eb;
      pcVar4 = pcVar4 + 2;
    } while (*local_18 != '\0');
    local_18 = (char *)0x0;
LAB_0046a9eb:
  }
  pcVar3 = ".TGA";
  pcVar4 = local_18;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  for (local_14 = 0; local_14 < g_TextureProcessedCount; local_14 = local_14 + 1) {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                      (g_TextureAtlasEntries[local_14].tga_filename,local_11c);
    if (iVar2 == 0) {
      if (min_u < g_TextureAtlasEntries[local_14].min_u) {
        g_TextureAtlasEntries[local_14].min_u = min_u;
      }
      if (g_TextureAtlasEntries[local_14].max_u < max_u) {
        g_TextureAtlasEntries[local_14].max_u = max_u;
      }
      if (min_v < g_TextureAtlasEntries[local_14].min_v) {
        g_TextureAtlasEntries[local_14].min_v = min_v;
      }
      if (max_v <= g_TextureAtlasEntries[local_14].max_v) {
        return;
      }
      g_TextureAtlasEntries[local_14].max_v = max_v;
      return;
    }
  }
  if (0xf9 < g_TextureProcessedCount) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_1e4,"Too many textures to cram, max is %d",0xfa);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x26f8;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_1e4);
  }
  pcVar4 = local_11c;
  pSVar5 = g_TextureAtlasEntries + g_TextureProcessedCount;
  do {
    cVar1 = *pcVar4;
    pSVar5->tga_filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pSVar5->tga_filename[1] = cVar1;
    pSVar5 = (STextureAtlasEntry *)(pSVar5->tga_filename + 2);
  } while (cVar1 != '\0');
  pcVar4 = g_TextureAtlasEntries[g_TextureProcessedCount].original_filename;
  do {
    cVar1 = *texture_filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = texture_filename[1];
    texture_filename = texture_filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  g_TextureAtlasEntries[g_TextureProcessedCount].min_u = min_u;
  g_TextureAtlasEntries[g_TextureProcessedCount].min_v = min_v;
  g_TextureAtlasEntries[g_TextureProcessedCount].max_u = max_u;
  g_TextureAtlasEntries[g_TextureProcessedCount].max_v = max_v;
  g_TextureProcessedCount = g_TextureProcessedCount + 1;
  return;
}
