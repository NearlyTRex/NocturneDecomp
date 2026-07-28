// Name: engine_dosio.cpp_reopenFileStream_FUN_00456b20
// Address: 00456b20
// Address Range: [[00456b20, 00456bf4]]
// Convention: unknown
// Signature: void engine_dosio_cpp_reopenFileStream_FUN_00456b20(char *param_1,char *param_2,uint param_3,_FILE *param_4)

#include "nocturne.h"

void engine_dosio_cpp_reopenFileStream_FUN_00456b20(char *param_1,char *param_2,uint param_3,_FILE *param_4)

{
  int iVar1;
  SFoundFileInfo local_220;
  
  _fflush(param_4);
  ios_clear((int)&param_4->_ptr + *(int *)(param_4->_ptr + 4),0);
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_220.found_path,param_1,param_2);
  if ((param_3 & 0x52) == 0) {
    iVar1 = engine_dosio_cpp_findFile_FUN_004567a0(&local_220);
    if (iVar1 != 0) {
      crt_fstream_cpp_openFile_FUN_00565eb5(param_4,local_220.target_path,param_3,0x000001A4);
      if (local_220.file_offset != 0) {
        crt_fstream_cpp_istream_seekg_FUN_00565f14(&param_4[2]._handle,local_220.file_offset);
        return;
      }
    }
  }
  else {
    if (param_1 != (char *)0x0) {
      _mkdir(param_1);
    }
    crt_fstream_cpp_openFile_FUN_00565eb5(param_4,local_220.found_path,param_3,0x000001A4);
  }
  return;
}
