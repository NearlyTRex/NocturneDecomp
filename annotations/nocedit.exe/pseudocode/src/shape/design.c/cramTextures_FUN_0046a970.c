// Name: shape_design.c_cramTextures_FUN_0046a970
// Address: 0046a970
// Address Range: [[0046a970, 0046abec]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_cramTextures_FUN_0046a970(char *texture_filename,int min_u,int min_v,int max_u,int max_v)

#include "nocturne.h"

void __cdecl shape_design_c_cramTextures_FUN_0046a970(char *texture_filename,int min_u,int min_v,int max_u,int max_v)

{
  char cVar2;
  int iVar2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar4;
  STextureAtlasEntry *pSVar5;
  char local_1e4 [200];
  char local_11c [260];
  char *local_18;
  int local_14;
  char cVar1;
  
  pcVar4 = local_11c;
  pcVar3 = texture_filename;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar5 = local_11c;
  do {
    local_18 = pcVar5;
    if (*pcVar5 == '.') goto LAB_0046a9c2;
    if (*pcVar5 == '\0') break;
    local_18 = pcVar5 + 1;
    if (*local_18 == '.') goto LAB_0046a9c2;
    pcVar5 = pcVar5 + 2;
  } while (*local_18 != '\0');
  local_18 = (char *)0x0;
LAB_0046a9c2:
  if (local_18 == (char *)0x0) {
    pcVar5 = local_11c;
    do {
      local_18 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_0046a9ee;
      if (*pcVar5 == '\0') break;
      local_18 = pcVar5 + 1;
      if (*local_18 == '\0') goto LAB_0046a9ee;
      pcVar5 = pcVar5 + 2;
    } while (*local_18 != '\0');
    local_18 = (char *)0x0;
  }
LAB_0046a9ee:
  pcVar5 = ".TGA";
  do {
    cVar2 = *pcVar5;
    *local_18 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    local_18[1] = cVar2;
    local_18 = local_18 + 2;
  } while (cVar2 != '\0');
  for (local_14 = 0; local_14 < g_TextureProcessedCount; local_14 = local_14 + 1) {
    iVar2 = _stricmp
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
    _sprintf(local_1e4,"Too many textures to cram, max is %d",0xfa);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 9976;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_1e4);
  }
  pcVar5 = local_11c;
  pSVar5 = g_TextureAtlasEntries + g_TextureProcessedCount;
  do {
    cVar2 = *pcVar5;
    pSVar5->tga_filename[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pSVar5->tga_filename[1] = cVar2;
    pSVar5 = (STextureAtlasEntry *)(pSVar5->tga_filename + 2);
  } while (cVar2 != '\0');
  pcVar5 = g_TextureAtlasEntries[g_TextureProcessedCount].original_filename;
  do {
    cVar2 = *texture_filename;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = texture_filename[1];
    texture_filename = texture_filename + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  g_TextureAtlasEntries[g_TextureProcessedCount].min_u = min_u;
  g_TextureAtlasEntries[g_TextureProcessedCount].min_v = min_v;
  g_TextureAtlasEntries[g_TextureProcessedCount].max_u = max_u;
  g_TextureAtlasEntries[g_TextureProcessedCount].max_v = max_v;
  g_TextureProcessedCount = g_TextureProcessedCount + 1;
  return;
}
