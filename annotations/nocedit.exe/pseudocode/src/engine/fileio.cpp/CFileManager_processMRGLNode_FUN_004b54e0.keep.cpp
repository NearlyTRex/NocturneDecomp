// Name: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
// Address: 004b54e0
// MANUAL RECONSTRUCTION
// Address Range: [[004b54e0, 004b5603]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node)

{
  uint uVar1;
  SMRGLHeaderExtended *mrgl_node_00;
  char *filename;
  SMRGLHeaderExtended *pSVar2;
  int iVar1;
  int iVar3;
  SMRGLHeaderExtended *local_14;
  
  iVar1 = (mrgl_node->base).type;
  local_14 = mrgl_node;
  if (iVar1 == 0x20) {
    iVar1 = 0;
    if (0 < mrgl_node->child_count) {
      filename = (char *)(mrgl_node + 2);
      do {
        mrgl_node_00 = engine_model_c_loadModelFile_FUN_00527ec0(filename);
        _fprintf(this_ptr->file_ptr,"MODELS\\%s\n",filename);
        engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(this_ptr,mrgl_node_00);
        engine_model_c_freeMRGLData_FUN_005280b0(mrgl_node_00);
        iVar1 = iVar1 + 1;
        filename = filename + 16;
      } while (iVar1 < mrgl_node->child_count);
    }
  }
  else {
    if ((iVar1 == 0x26) && (iVar1 = 0, 0 < mrgl_node[2].base.type)) {
      pSVar2 = mrgl_node + 3;
      do {
        iVar1 = iVar1 + 1;
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(this_ptr,(char *)pSVar2);
        pSVar2 = pSVar2 + 2;
      } while (iVar1 < mrgl_node[2].base.type);
    }
    for (; iVar1 = (local_14->base).type, iVar1 != 0;
        local_14 = (SMRGLHeaderExtended *)((char *)local_14 + (uVar1 & 0xfffffffc))) {
      if ((iVar1 == 0xd) || (iVar1 == 0x40)) {
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                  (this_ptr,(char *)&local_14->child_count);
      }
      if ((local_14->base).type == 0x1d) {
        SMRGLTextureList *list = (SMRGLTextureList *)local_14;
        for (iVar3 = 0; iVar3 < list->base.child_count; iVar3 = iVar3 + 1) {
          engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                    (this_ptr,list->entries[iVar3].texture_name);
        }
      }
      uVar1 = engine_model_c_getMRGLSize_FUN_00528700(local_14);
    }
  }
  return;
}
