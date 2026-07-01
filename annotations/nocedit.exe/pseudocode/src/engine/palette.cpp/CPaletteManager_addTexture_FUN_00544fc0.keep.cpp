// Name: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
// Address: 00544fc0
// MANUAL RECONSTRUCTION
// Address Range: [[00544fc0, 00545051]]
// Convention: __cdecl
// Signature: void __cdecl engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(CPaletteManager *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(CPaletteManager *this_ptr,char *filename)

{
  int iVar2;
  int iVar4;

  for (iVar4 = 0; iVar4 < this_ptr->texture_count; iVar4 = iVar4 + 1) {
    iVar2 = _strcmp(this_ptr->texture_names + iVar4 * 0x40,filename);
    if (iVar2 == 0) {
      return;
    }
  }
  strcpy(this_ptr->texture_names + this_ptr->texture_count * 0x40,filename);
  this_ptr->texture_count = this_ptr->texture_count + 1;
  if (this_ptr->texture_count < 0x400) {
    return;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 93;
  core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::addTexture - Too many textures!");
  return;
}
