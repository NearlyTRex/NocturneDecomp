// Name: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
// Address: 004b54e0
// Address Range: [[004b54e0, 004b5603]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node)

{
  uint uVar1;
  SMRGLHeaderExtended *mrgl_node_00;
  int *texture_filename;
  SMRGLHeaderExtended *pSVar2;
  int iVar3;
  SMRGLHeaderExtended *local_14;
  
  iVar3 = (mrgl_node->base).type;
  local_14 = mrgl_node;
  if (iVar3 == 0x20) {
    iVar3 = 0;
    if (0 < mrgl_node->child_count) {
      pSVar2 = mrgl_node + 2;
      do {
        mrgl_node_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)pSVar2);
        _fprintf(this_ptr->file_ptr,"MODELS\\%s\n",pSVar2);
        engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(this_ptr,mrgl_node_00);
        engine_model_c_freeMRGLData_FUN_005280b0(mrgl_node_00);
        iVar3 = iVar3 + 1;
        pSVar2 = (SMRGLHeaderExtended *)&pSVar2[1].base.count;
      } while (iVar3 < mrgl_node->child_count);
    }
  }
  else {
    if ((iVar3 == 0x26) && (iVar3 = 0, 0 < mrgl_node[2].base.type)) {
      pSVar2 = mrgl_node + 3;
      do {
        iVar3 = iVar3 + 1;
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(this_ptr,(char *)pSVar2);
        pSVar2 = pSVar2 + 2;
      } while (iVar3 < mrgl_node[2].base.type);
    }
    for (; iVar3 = (local_14->base).type, iVar3 != 0;
        local_14 = (SMRGLHeaderExtended *)((int)&(local_14->base).type + (uVar1 & 0xfffffffc))) {
      if ((iVar3 == 0xd) || (iVar3 == 0x40)) {
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                  (this_ptr,(char *)&local_14->child_count);
      }
      if ((local_14->base).type == 0x1d) {
        iVar3 = 0;
        texture_filename = &local_14[2].base.count;
        if (0 < local_14->child_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                      (this_ptr,(char *)texture_filename);
            texture_filename = texture_filename + 8;
          } while (iVar3 < local_14->child_count);
        }
      }
      uVar1 = engine_model_c_getMRGLSize_FUN_00528700(local_14);
    }
  }
  return;
}
