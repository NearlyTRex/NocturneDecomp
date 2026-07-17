// Name: dll_dx7.cpp_CDLLTextureCache_acquireSlot_FUN_10001090
// Address: 10001090
// Address Range: [[10001090, 1000117d]]
// Convention: __ecxcall
// Signature: int __ecxcall dll_dx7_cpp_CDLLTextureCache_acquireSlot_FUN_10001090(CDLLTextureCache *this_ptr,SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __ecxcall dll_dx7_cpp_CDLLTextureCache_acquireSlot_FUN_10001090(CDLLTextureCache *this_ptr,SMRGLTextureBasic *texture_info)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  iVar3 = 0;
  if (0 < this_ptr->entry_count) {
    pcVar5 = this_ptr->entries[0].name;
    do {
      pcVar11 = texture_info->texture_name;
      pcVar9 = pcVar5;
      do {
        bVar2 = *pcVar9;
        bVar12 = bVar2 < (byte)*pcVar11;
        if (bVar2 != *pcVar11) {
LAB_100010c9:
          iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_100010ce;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar9[1];
        bVar12 = bVar2 < (byte)pcVar11[1];
        if (bVar2 != pcVar11[1]) goto LAB_100010c9;
        pcVar9 = pcVar9 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_100010ce:
      if (iVar10 == 0) break;
      pcVar5 = pcVar5 + 0x48;
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->entry_count);
  }
  iVar10 = this_ptr->entry_count;
  if (iVar3 < iVar10) {
    this_ptr->entries[iVar3].lru_stamp = this_ptr->usage_counter;
    this_ptr->usage_counter = this_ptr->usage_counter + 1;
    return this_ptr->entries[iVar3].slot;
  }
  iVar3 = this_ptr->max_count;
  if (iVar10 < iVar3) {
    this_ptr->entry_count = iVar10 + 1;
  }
  else {
    uVar7 = 0xffffffff;
    iVar10 = 0;
    iVar4 = 0;
    if (0 < iVar3) {
      piVar6 = &this_ptr->entries[0].lru_stamp;
      do {
        if ((uint)*piVar6 < uVar7) {
          uVar7 = *piVar6;
          iVar10 = iVar4;
        }
        piVar6 = piVar6 + 0x12;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  dll_dx7_cpp_loadTexture_FUN_100030e0(this_ptr->entries[iVar10].slot);
  uVar7 = 0xffffffff;
  this_ptr->entries[iVar10].lru_stamp = this_ptr->usage_counter;
  pcVar5 = texture_info->texture_name;
  do {
    pcVar11 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar5 + (uint)bVar13 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar5 = pcVar11 + -uVar7;
  pcVar11 = this_ptr->entries[iVar10].name;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(uint *)pcVar11 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + ((uint)bVar13 * -2 + 1) * 4;
    pcVar11 = pcVar11 + ((uint)bVar13 * -2 + 1) * 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar13 * -2 + 1;
    pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
  }
  this_ptr->usage_counter = this_ptr->usage_counter + 1;
  return this_ptr->entries[iVar10].slot;
}
