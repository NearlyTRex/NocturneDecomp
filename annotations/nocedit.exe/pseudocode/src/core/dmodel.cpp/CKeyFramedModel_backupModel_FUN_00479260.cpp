// Name: core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260
// Address: 00479260
// Address Range: [[00479260, 00479323]]
// Convention: __cdecl
// Signature: int __cdecl core_dmodel_cpp_CKeyFramedModel_backupModel_FUN_00479260(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CKeyFramedModel_backupModel_FUN_00479260(CKeyFramedModel *this_ptr,char *filename)

{
  _FILE *file_ptr;
  _FILE *file_ptr_00;
  int iVar1;
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (this_ptr->model_filename,(char *)0x0,"rb",
                        "..\\core\\dmodel.cpp",0x5ef);
  if (file_ptr == (_FILE *)0x0) {
    return 0;
  }
  file_ptr_00 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"wb","..\\core\\dmodel.cpp",0x5f2);
  if (file_ptr_00 != (_FILE *)0x0) {
    while( true ) {
      iVar1 = _fgetc(file_ptr);
      if (iVar1 < 0) break;
      _fputc(iVar1,file_ptr_00);
    }
    if (((file_ptr->_flag & 0x20) == 0) && ((file_ptr_00->_flag & 0x20) == 0)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0x600);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\dmodel.cpp",0x601);
    return iVar1;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0x5f4);
  return 0;
}
