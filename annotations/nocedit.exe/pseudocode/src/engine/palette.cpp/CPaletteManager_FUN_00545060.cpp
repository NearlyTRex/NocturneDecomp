// Name: engine_palette.cpp_CPaletteManager_FUN_00545060
// Address: 00545060
// Address Range: [[00545060, 00545172]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_palette.cpp_CPaletteManager_FUN_00545060(CPaletteManager * this_ptr, SMRGLHeaderExtended * unk)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_palette_cpp_CPaletteManager_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *unk)

{
  SMRGLHeaderExtended *in_EAX;
  uint uVar1;
  SMRGLHeaderExtended *unk_00;
  SMRGLHeaderExtended *pSVar2;
  int iVar3;
  SMRGLHeaderExtended *local_14;
  
  iVar3 = (unk->base).type;
  local_14 = unk;
  if (iVar3 == 0x20) {
    iVar3 = 0;
    local_14 = in_EAX;
    if (0 < unk->child_count) {
      pSVar2 = unk + 2;
      do {
        unk_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)pSVar2);
        engine_palette_cpp_CPaletteManager_FUN_00545060(this_ptr,unk_00);
        engine_model_c_freeMRGLData_FUN_005280b0(unk_00);
        iVar3 = iVar3 + 1;
        pSVar2 = (SMRGLHeaderExtended *)&pSVar2[1].base.count;
        local_14 = unk;
      } while (iVar3 < unk->child_count);
    }
  }
  else if (iVar3 == 0x26) {
    local_14 = (SMRGLHeaderExtended *)unk[2].base.type;
    iVar3 = 0;
    if (0 < (int)local_14) {
      do {
        iVar3 = iVar3 + 1;
        pSVar2 = (SMRGLHeaderExtended *)engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0()
        ;
      } while (iVar3 < unk[2].base.type);
      return pSVar2;
    }
  }
  else {
    for (; iVar3 = (local_14->base).type, iVar3 != 0;
        local_14 = (SMRGLHeaderExtended *)((int)&(local_14->base).type + (uVar1 & 0xfffffffc))) {
      if ((iVar3 == 0xd) || (iVar3 == 0x40)) {
        engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
      }
      if (((local_14->base).type == 0x1d) && (iVar3 = 0, 0 < local_14->child_count)) {
        do {
          iVar3 = iVar3 + 1;
          engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
        } while (iVar3 < local_14->child_count);
      }
      uVar1 = engine_model_c_getMRGLSize_FUN_00528700(local_14);
    }
  }
  return local_14;
}
