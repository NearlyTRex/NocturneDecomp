// Name: engine_palette.cpp_CPaletteManager_FUN_00545060
// Address: 00545060
// Address Range: [[00545060, 00545172]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_palette_cpp_CPaletteManager_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *unk)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_palette_cpp_CPaletteManager_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *unk)

{
  SMRGLHeaderExtended *in_EAX;
  uint uVar1;
  SMRGLHeaderExtended *unk_00;
  SMRGLHeaderExtended *extraout_EAX;
  int iVar2;
  SMRGLHeaderExtended *filename;
  SMRGLHeaderExtended *local_14;
  
  iVar2 = (unk->base).type;
  local_14 = unk;
  if (iVar2 == 0x20) {
    iVar2 = 0;
    local_14 = in_EAX;
    if (0 < unk->child_count) {
      filename = unk + 2;
      do {
        unk_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)filename);
        engine_palette_cpp_CPaletteManager_FUN_00545060(this_ptr,unk_00);
        engine_model_c_freeMRGLData_FUN_005280b0(unk_00);
        iVar2 = iVar2 + 1;
        filename = (SMRGLHeaderExtended *)&filename[1].base.count;
        local_14 = unk;
      } while (iVar2 < unk->child_count);
    }
  }
  else if (iVar2 == 0x26) {
    local_14 = (SMRGLHeaderExtended *)unk[2].base.type;
    iVar2 = 0;
    if (0 < (int)local_14) {
      do {
        iVar2 = iVar2 + 1;
        engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
      } while (iVar2 < unk[2].base.type);
      return extraout_EAX;
    }
  }
  else {
    for (; iVar2 = (local_14->base).type, iVar2 != 0;
        local_14 = (SMRGLHeaderExtended *)((int)&(local_14->base).type + (uVar1 & 0xfffffffc))) {
      if ((iVar2 == 0xd) || (iVar2 == 0x40)) {
        engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
      }
      if (((local_14->base).type == 0x1d) && (iVar2 = 0, 0 < local_14->child_count)) {
        do {
          iVar2 = iVar2 + 1;
          engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
        } while (iVar2 < local_14->child_count);
      }
      uVar1 = engine_model_c_getMRGLSize_FUN_00528700(local_14);
    }
  }
  return local_14;
}
