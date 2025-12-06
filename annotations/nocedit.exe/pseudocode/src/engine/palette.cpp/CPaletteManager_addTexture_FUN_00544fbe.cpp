// Name: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fbe
// Address: 00544fbe
// Address Range: [[00544fbe, 00544fbf]]
// Convention: __cdecl
// Signature: void engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fbe(CPaletteManager * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fbe(CPaletteManager *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  if (0 < this_ptr->field0_0x0) {
    iVar3 = 0;
    do {
      iVar2 = crt_string_c_strcmp_FUN_005fef20((char *)(this_ptr->field1_0x4 + iVar3),filename);
      if (iVar2 == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar4 < this_ptr->field0_0x0);
  }
  pcVar5 = (char *)(this_ptr->field1_0x4 + this_ptr->field0_0x0 * 0x40);
  do {
    cVar1 = *filename;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = this_ptr->field0_0x0 + 1;
  this_ptr->field0_0x0 = iVar4;
  if (iVar4 < 0x400) {
    return;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 0x5d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::addTexture - Too many textures!");
  return;
}
