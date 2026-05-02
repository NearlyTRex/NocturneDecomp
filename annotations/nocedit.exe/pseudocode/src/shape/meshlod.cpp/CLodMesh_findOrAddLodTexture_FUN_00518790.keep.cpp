// Name: shape_meshlod.cpp_CLodMesh_findOrAddLodTexture_FUN_00518790
// Address: 00518790
// MANUAL RECONSTRUCTION
// Address Range: [[00518790, 00518863]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790(CLodMesh *this_ptr,char *texture_filename)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790(CLodMesh *this_ptr,char *texture_filename)

{
  int iVar2;
  SMRGLTextureLod *pSVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar4 = 0;
  if (0 < this_ptr->lod_texture_count) {
    iVar5 = 0;
    do {
      iVar2 = _stricmp
                        (this_ptr->lod_textures->textures[0].texture_name + iVar5,texture_filename);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x48;
    } while (iVar4 < this_ptr->lod_texture_count);
  }
  pSVar3 = (SMRGLTextureLod *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->lod_textures,(this_ptr->lod_texture_count + 1) * 0x48,
                      "..\\shape\\meshlod.cpp",0xb6d);
  this_ptr->lod_textures = pSVar3;
  if (pSVar3 == (SMRGLTextureLod *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xb6e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  pcVar6 = this_ptr->lod_textures[this_ptr->lod_texture_count].textures[0].texture_name;
  strcpy(pcVar6,texture_filename);
  iVar4 = this_ptr->lod_texture_count;
  this_ptr->lod_texture_count = iVar4 + 1;
  return iVar4;
}
