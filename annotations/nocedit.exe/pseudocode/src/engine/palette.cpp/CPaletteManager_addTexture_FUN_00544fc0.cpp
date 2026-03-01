// Name: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
// Address: 00544fc0
// Address Range: [[00544fc0, 00545051]]
// Convention: __cdecl
// Signature: void __cdecl engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(CPaletteManager *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(CPaletteManager *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  if (0 < this_ptr->texture_count) {
    iVar3 = 0;
    do {
      iVar2 = _strcmp(this_ptr->texture_names + iVar3,filename);
      if (iVar2 == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar4 < this_ptr->texture_count);
  }
  pcVar5 = this_ptr->texture_names + this_ptr->texture_count * 0x40;
  do {
    cVar1 = *filename;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = this_ptr->texture_count + 1;
  this_ptr->texture_count = iVar4;
  if (iVar4 < 0x400) {
    return;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 0x5d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::addTexture - Too many textures!");
  return;
}
