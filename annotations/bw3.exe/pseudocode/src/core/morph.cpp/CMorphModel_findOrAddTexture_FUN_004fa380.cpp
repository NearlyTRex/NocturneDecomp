// Name: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380
// Address: 004fa380
// Address Range: [[004fa380, 004fa442]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004fa380(CMorphModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004fa380(CMorphModel *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < this_ptr->num_textures) {
    pcVar4 = this_ptr->textures[0].texture_name;
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
    _DAT_01d71de0 = "..\\core\\morph.cpp";
    _DAT_01d71de4 = 0x1d0;
    core_main_c_FUN_004e4330("CMorphModel::findOrAddTexture - too many textures!");
  }
  memset(this_ptr->textures + this_ptr->num_textures,0,0x48);
  pcVar4 = this_ptr->textures[this_ptr->num_textures].texture_name;
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
