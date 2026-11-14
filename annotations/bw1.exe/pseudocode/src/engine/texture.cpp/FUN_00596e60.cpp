// Name: engine_texture.cpp_FUN_00596e60
// Address: 00596e60
// Address Range: [[00596e60, 00596ec5]]
// Convention: unknown
// Signature: int engine_texture_cpp_FUN_00596e60(CTextureCache *param_1,char *param_2,int param_3,uchar *param_4,uchar *param_5,uchar *param_6)

#include "nocturne.h"

int engine_texture_cpp_FUN_00596e60(CTextureCache *param_1,char *param_2,int param_3,uchar *param_4,uchar *param_5,uchar *param_6)

{
  char cVar1;
  int iVar2;
  STextureCacheEntry *pSVar3;
  char *pcVar4;
  
  iVar2 = engine_texture_cpp_CTextureCache_findFreeSlot_FUN_00596680(param_1);
  pSVar3 = param_1->entries + iVar2;
  pcVar4 = pSVar3->texture_name;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pSVar3->is_locked = 1;
  pSVar3->dimension = param_3;
  pSVar3->texture_data = param_4;
  pSVar3->palette_data = param_5;
  pSVar3->opacity_data = param_6;
  return iVar2;
}
