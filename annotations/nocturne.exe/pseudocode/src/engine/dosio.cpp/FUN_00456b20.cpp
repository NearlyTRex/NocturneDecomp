// Name: engine_dosio.cpp_FUN_00456b20
// Address: 00456b20
// Address Range: [[00456b20, 00456bf4]]
// Convention: unknown
// Signature: void engine_dosio_cpp_FUN_00456b20(int param_1,undefined4 param_2,uint param_3,int *param_4)

#include "nocturne.h"

void engine_dosio_cpp_FUN_00456b20(int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  byte local_220 [256];
  byte local_120 [256];
  int local_20;
  
  _fflush(param_4);
  FUN_00565e94(*(int *)(*param_4 + 4) + (int)param_4,0);
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_220,param_1,param_2);
  if ((param_3 & 0x52) == 0) {
    iVar1 = engine_dosio_cpp_findFile_FUN_004567a0(local_220);
    if (iVar1 != 0) {
      crt_fstream_cpp_openFile_FUN_00565eb5(param_4,local_120,param_3,0x000001A4);
      if (local_20 != 0) {
        crt_fstream_cpp_istream_seekg_FUN_00565f14(param_4 + 0x11,local_20);
        return;
      }
    }
  }
  else {
    if (param_1 != 0) {
      _mkdir(param_1);
    }
    crt_fstream_cpp_openFile_FUN_00565eb5(param_4,local_220,param_3,0x000001A4);
  }
  return;
}
