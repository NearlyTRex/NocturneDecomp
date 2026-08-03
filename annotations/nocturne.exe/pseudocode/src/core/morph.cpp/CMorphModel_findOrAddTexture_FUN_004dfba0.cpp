// Name: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
// Address: 004dfba0
// Address Range: [[004dfba0, 004dfc62]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004dfba0(CMorphModel *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004dfba0(CMorphModel *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < this_ptr->num_textures) {
    pcVar4 = this_ptr->textures[0].textures[0].texture_name;
    do {
      iVar2 = _stricmp(pcVar4,filename);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar3 < this_ptr->num_textures);
  }
  if (0x13 < this_ptr->num_textures) {
    g_CHAR_PTR_01cc4800 = "..\\core\\morph.cpp";
    g_INT_01cc4804 = 0x1d0;
    core_main_c_FUN_004c8440("CMorphModel::findOrAddTexture - too many textures!");
  }
  memset(this_ptr->textures + this_ptr->num_textures,0,0x48);
  pcVar4 = this_ptr->textures[this_ptr->num_textures].textures[0].texture_name;
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
