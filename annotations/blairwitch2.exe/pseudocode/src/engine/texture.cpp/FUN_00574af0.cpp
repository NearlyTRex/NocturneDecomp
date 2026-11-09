// Name: engine_texture.cpp_FUN_00574af0
// Address: 00574af0
// Address Range: [[00574af0, 00574bba]]
// Convention: __cdecl
// Signature: int __cdecl engine_texture_cpp_FUN_00574af0(CTextureCache *this_ptr,char *output_buffer)

#include "nocturne.h"

int __cdecl engine_texture_cpp_FUN_00574af0(CTextureCache *this_ptr,char *output_buffer)

{
  CTextureCache *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = 0;
  iVar4 = 0;
  local_14 = 0;
  local_18 = 0;
  if (*(int *)this_ptr == 0) {
    iVar3 = 0;
    pCVar1 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x18004)) {
      do {
        if (*(int *)(pCVar1 + 4) == 0x20) {
          iVar5 = iVar5 + 1;
        }
        if (*(int *)(pCVar1 + 4) == 0x40) {
          iVar6 = iVar6 + 1;
        }
        if (*(int *)(pCVar1 + 4) == 0x80) {
          iVar2 = iVar2 + 1;
        }
        if (*(int *)(pCVar1 + 4) == 0x100) {
          local_14 = local_14 + 1;
        }
        if (*(int *)(pCVar1 + 4) == 0x200) {
          iVar4 = iVar4 + 1;
        }
        if (*(int *)(pCVar1 + 4) == 0x400) {
          local_18 = local_18 + 1;
        }
        iVar3 = iVar3 + 1;
        pCVar1 = pCVar1 + 0x60;
      } while (iVar3 < *(int *)(this_ptr + 0x18004));
    }
    iVar2 = FUN_005b7790
                      (output_buffer,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d, 512: %d, 1024: %d",
                       *(uint *)(this_ptr + 0x18004),iVar5,iVar6,iVar2,local_14,iVar4,local_18
                      );
    return iVar2;
  }
  iVar2 = FUN_005b7790(output_buffer,"Texture cache has wrapped.  Make it bigger, please.");
  return iVar2;
}
