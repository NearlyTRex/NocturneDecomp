// Name: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
// Address: 0052ae60
// MANUAL RECONSTRUCTION
// Address Range: [[0052ae60, 0052af22]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename)

{
  int iVar2;
  int iVar3;

  for (iVar3 = 0; iVar3 < this_ptr->num_textures; iVar3 = iVar3 + 1) {
    iVar2 = _stricmp(this_ptr->textures[iVar3].textures[0].texture_name,filename);
    if (iVar2 == 0) {
      return iVar3;
    }
  }
  if (0x13 < this_ptr->num_textures) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 464;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::findOrAddTexture - too many textures!");
  }
  memset(this_ptr->textures + this_ptr->num_textures,0,0x48);
  strcpy(this_ptr->textures[this_ptr->num_textures].textures[0].texture_name,filename);
  iVar3 = this_ptr->num_textures;
  this_ptr->num_textures = iVar3 + 1;
  return iVar3;
}
