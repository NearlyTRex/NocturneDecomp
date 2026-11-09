// Name: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_00522a80
// Address: 00522a80
// Address Range: [[00522a80, 00522b42]]
// Convention: __cdecl
// Signature: int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_00522a80(CMorphModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_00522a80(CMorphModel *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x64) {
    pcVar4 = &this_ptr->field_0x70;
    do {
      iVar2 = _stricmp(pcVar4,filename);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar3 < *(int *)&this_ptr->field_0x64);
  }
  if (0x13 < *(int *)&this_ptr->field_0x64) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x1d0;
    core_main_c_FUN_005030e0("CMorphModel::findOrAddTexture - too many textures!");
  }
  memset
            (&this_ptr->field_0x68 + *(int *)&this_ptr->field_0x64 * 0x48,0,0x48);
  pcVar4 = &this_ptr->field_0x70 + *(int *)&this_ptr->field_0x64 * 0x48;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)&this_ptr->field_0x64;
  *(int *)&this_ptr->field_0x64 = iVar3 + 1;
  return iVar3;
}
