// Name: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
// Address: 00544fc0
// Address Range: [[00544fc0, 00545051]]
// Convention: unknown
// Signature: void engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(void)

#include "nocturne.h"

void engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar4 = 0;
  if (0 < *in_stack_00000004) {
    iVar3 = 0;
    do {
      iVar2 = strcmp
                        ((char *)(in_stack_00000004[1] + iVar3),in_stack_00000008);
      if (iVar2 == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar4 < *in_stack_00000004);
  }
  pcVar5 = (char *)(in_stack_00000004[1] + *in_stack_00000004 * 0x40);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = *in_stack_00000004;
  *in_stack_00000004 = iVar4 + 1;
  if (iVar4 + 1 < 0x400) {
    return;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 0x5d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::addTexture - Too many textures!");
  return;
}
