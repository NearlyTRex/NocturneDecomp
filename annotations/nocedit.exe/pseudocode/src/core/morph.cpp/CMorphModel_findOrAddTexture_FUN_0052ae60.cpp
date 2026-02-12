// Name: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
// Address: 0052ae60
// Address Range: [[0052ae60, 0052af22]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl
core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < this_ptr->num_textures) {
    pcVar4 = this_ptr->textures[0].base.texture_name;
    do {
      iVar2 = stricmp(pcVar4,filename);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar3 < this_ptr->num_textures);
  }
  if (0x13 < this_ptr->num_textures) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x1d0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::findOrAddTexture - too many textures!");
  }
  memset(this_ptr->textures + this_ptr->num_textures,0,0x48);
  pcVar4 = this_ptr->textures[this_ptr->num_textures].base.texture_name;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = this_ptr->num_textures;
  this_ptr->num_textures = iVar3 + 1;
  return iVar3;
}
