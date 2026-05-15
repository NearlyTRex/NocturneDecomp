// Name: engine_palette.cpp_CPaletteManager_scanTextures_FUN_00545060
// Address: 00545060
// MANUAL RECONSTRUCTION
// Address Range: [[00545060, 00545172]]
// Convention: __cdecl
// Signature: void __cdecl engine_palette_cpp_CPaletteManager_scanTextures_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *mrgl_data)

#include "nocturne.h"

void __cdecl engine_palette_cpp_CPaletteManager_scanTextures_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *mrgl_data)

{
  uint uVar1;
  SMRGLHeaderExtended *mrgl_data_00;
  int iVar2;
  SMRGLHeaderExtended *pSVar3;
  SMRGLHeaderExtended *filename_00;
  int *filename;
  int iVar1;
  SMRGLHeaderExtended *local_14;
  
  iVar1 = (mrgl_data->base).type;
  local_14 = mrgl_data;
  if (iVar1 == 0x20) {
    iVar1 = 0;
    if (0 < mrgl_data->child_count) {
      filename_00 = mrgl_data + 2;
      do {
        mrgl_data_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)filename_00);
        engine_palette_cpp_CPaletteManager_scanTextures_FUN_00545060(this_ptr,mrgl_data_00);
        engine_model_c_freeMRGLData_FUN_005280b0(mrgl_data_00);
        iVar1 = iVar1 + 1;
        filename_00 = (SMRGLHeaderExtended *)&filename_00[1].base.count;
      } while (iVar1 < mrgl_data->child_count);
    }
  }
  else if (iVar1 == 0x26) {
    iVar1 = 0;
    if (0 < mrgl_data[2].base.type) {
      pSVar3 = mrgl_data + 3;
      do {
        iVar1 = iVar1 + 1;
        engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(this_ptr,(char *)pSVar3);
        pSVar3 = pSVar3 + 2;
      } while (iVar1 < mrgl_data[2].base.type);
      return;
    }
  }
  else {
    for (; iVar1 = (local_14->base).type, iVar1 != 0;
        local_14 = (SMRGLHeaderExtended *)((char *)local_14 + (uVar1 & 0xfffffffc))) {
      if ((iVar1 == 0xd) || (iVar1 == 0x40)) {
        engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0
                  (this_ptr,(char *)&local_14->child_count);
      }
      if ((local_14->base).type == 0x1d) {
        iVar2 = 0;
        filename = &local_14[2].base.count;
        if (0 < local_14->child_count) {
          do {
            iVar2 = iVar2 + 1;
            engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(this_ptr,(char *)filename);
            filename = filename + 8;
          } while (iVar2 < local_14->child_count);
        }
      }
      uVar1 = engine_model_c_getMRGLSize_FUN_00528700(local_14);
    }
  }
  return;
}
