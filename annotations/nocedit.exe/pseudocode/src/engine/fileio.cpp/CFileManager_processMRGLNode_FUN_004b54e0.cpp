// Name: engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
// Address: 004b54e0
// Address Range: [[004b54e0, 004b5603]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager * this_ptr, SMRGLHeaderExtended * mrgl_node)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0
          (CFileManager *this_ptr,SMRGLHeaderExtended *mrgl_node)

{
  SMRGLHeaderExtended *pSVar1;
  int *texture_filename;
  SMRGLHeaderExtended *pSVar2;
  int iVar3;
  CFileManager *pCVar4;
  
  iVar3 = (mrgl_node->base).type;
  if (iVar3 == 0x20) {
    iVar3 = 0;
    if (0 < mrgl_node->child_count) {
      pSVar2 = mrgl_node + 2;
      do {
        pSVar1 = engine_model_c_loadModelFile_FUN_00527ec0((char *)pSVar2);
        crt_stdio_c_fprintf_FUN_005fe6d0(this_ptr->file_ptr,"MODELS\\%s\n",pSVar2);
        pCVar4 = this_ptr;
        engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(this_ptr,pSVar1);
        engine_model_c_freeMRGLData_FUN_005280b0(pSVar1);
        iVar3 = iVar3 + 1;
        pSVar2 = (SMRGLHeaderExtended *)&pSVar2[1].base.count;
      } while (iVar3 < *(int *)pCVar4->file_entries[0]);
    }
  }
  else {
    pSVar2 = mrgl_node;
    if ((iVar3 == 0x26) && (iVar3 = 0, 0 < mrgl_node[2].base.type)) {
      pSVar1 = mrgl_node + 3;
      do {
        iVar3 = iVar3 + 1;
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0(this_ptr,(char *)pSVar1);
        pSVar1 = pSVar1 + 2;
      } while (iVar3 < mrgl_node[2].base.type);
    }
    while (iVar3 = (pSVar2->base).type, iVar3 != 0) {
      if ((iVar3 == 0xd) || (iVar3 == 0x40)) {
        engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                  (this_ptr,(char *)&pSVar2->child_count);
      }
      pSVar1 = pSVar2;
      if ((pSVar2->base).type == 0x1d) {
        iVar3 = 0;
        texture_filename = &pSVar2[2].base.count;
        if (0 < pSVar2->child_count) {
          do {
            iVar3 = iVar3 + 1;
            engine_fileio_cpp_CFileManager_extractTexture_FUN_004b53e0
                      (this_ptr,(char *)texture_filename);
            texture_filename = texture_filename + 8;
          } while (iVar3 < pSVar2->child_count);
        }
      }
      engine_model_c_getMRGLSize_FUN_00528700(pSVar1);
      pSVar2 = pSVar1;
    }
  }
  return;
}
