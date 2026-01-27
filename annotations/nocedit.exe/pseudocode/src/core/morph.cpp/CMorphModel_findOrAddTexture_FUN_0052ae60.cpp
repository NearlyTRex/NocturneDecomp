// Name: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
// Address: 0052ae60
// Address Range: [[0052ae60, 0052af22]]
// Convention: __cdecl
// Signature: int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel * this_ptr, char * filename)

#include "nocturne.h"

int __cdecl
core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->unk2 + 0xc)) {
    pcVar4 = this_ptr->unk2 + 0x18;
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,filename);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar3 < *(int *)(this_ptr->unk2 + 0xc));
  }
  if (0x13 < *(int *)(this_ptr->unk2 + 0xc)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x1d0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::findOrAddTexture - too many textures!");
  }
  crt_memory_c_memset_FUN_005fde40
            (this_ptr->unk2 + *(int *)(this_ptr->unk2 + 0xc) * 0x48 + 0x10,0,0x48);
  pcVar4 = this_ptr->unk2 + *(int *)(this_ptr->unk2 + 0xc) * 0x48 + 0x18;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(this_ptr->unk2 + 0xc);
  *(int *)(this_ptr->unk2 + 0xc) = iVar3 + 1;
  return iVar3;
}
