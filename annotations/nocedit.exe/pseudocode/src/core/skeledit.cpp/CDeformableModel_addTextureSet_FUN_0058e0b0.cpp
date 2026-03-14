// Name: core_skeledit.cpp_CDeformableModel_addTextureSet_FUN_0058e0b0
// Address: 0058e0b0
// Address Range: [[0058e0b0, 0058e234]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_addTextureSet_FUN_0058e0b0(CDeformableModel *this_ptr,char *name_format)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_addTextureSet_FUN_0058e0b0(CDeformableModel *this_ptr,char *name_format)

{
  char cVar2;
  int iVar4;
  int iVar2;
  char *path;
  int iVar3;
  char *pcVar4;
  char *path_buffer;
  char local_31c [260];
  char local_218 [256];
  char local_118 [256];
  int local_18;
  STextureSet *local_14;
  char cVar1;
  
  if (4 < this_ptr->num_texture_sets) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x912;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't add another texture set!");
  }
  iVar4 = this_ptr->num_texture_sets;
  iVar3 = 0;
  this_ptr->num_texture_sets = iVar4 + 1;
  if (0 < this_ptr->num_textures) {
    path = this_ptr->texture_sets[0].textures[0].textures[0].texture_name;
    do {
      splitpath(path,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
      _sprintf(local_218,name_format,local_118);
      makepath(local_31c,(char *)0x0,(char *)0x0,local_218,".tga");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",local_31c);
      path_buffer = this_ptr->texture_sets[iVar4].textures[iVar3].textures[0].texture_name;
      pcVar4 = path;
      if (iVar2 < 0) {
        do {
          cVar1 = *pcVar4;
          *path_buffer = cVar1;
          if (cVar1 == '\0') break;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          path_buffer[1] = cVar2;
          path_buffer = path_buffer + 2;
        } while (cVar2 != '\0');
      }
      else {
        makepath
                  (path_buffer,(char *)0x0,(char *)0x0,local_218,".raw");
      }
      iVar3 = iVar3 + 1;
      path = path + 0x48;
    } while (iVar3 < this_ptr->num_textures);
  }
  return;
}
