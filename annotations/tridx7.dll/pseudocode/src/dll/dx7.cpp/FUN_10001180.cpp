// Name: dll_dx7.cpp_FUN_10001180
// Address: 10001180
// Address Range: [[10001180, 100011fa]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10001180(SMRGLTextureBasic *param_1)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10001180(SMRGLTextureBasic *param_1)

{
  byte bVar1;
  int iVar2;
  CDLLTextureCache *in_ECX;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = 0;
  bVar7 = in_ECX->entry_count == 0;
  if (0 < in_ECX->entry_count) {
    pcVar4 = in_ECX->entries[0].name;
    pcVar6 = param_1->texture_name;
    pcVar3 = pcVar4;
LAB_10001199:
    do {
      bVar1 = *pcVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 == *pcVar6) {
        if (bVar1 != 0) {
          bVar1 = pcVar4[1];
          bVar7 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_100011b9;
          pcVar4 = pcVar4 + 2;
          pcVar6 = pcVar6 + 2;
          if (bVar1 != 0) goto LAB_10001199;
        }
        iVar5 = 0;
      }
      else {
LAB_100011b9:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar5 == 0) break;
      pcVar4 = pcVar3 + 0x48;
      iVar2 = iVar2 + 1;
      pcVar6 = param_1->texture_name;
      pcVar3 = pcVar4;
    } while (iVar2 < in_ECX->entry_count);
    bVar7 = in_ECX->entry_count == iVar2;
  }
  if (!bVar7) {
    dll_dx7_cpp_FUN_100030e0(in_ECX->entries[iVar2].slot);
    return;
  }
  dll_dx7_cpp_CDLLTextureCache_acquireSlot_FUN_10001090(in_ECX,param_1);
  return;
}
