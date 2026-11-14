// Name: engine_2d.c_FUN_00401590
// Address: 00401590
// Address Range: [[00401590, 00401616]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00401590(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_2d_c_FUN_00401590(char *param_1)

{
  int iVar1;
  CInStreamFile local_2c;
  
  support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(&local_2c);
  iVar1 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                    (&local_2c,&DAT_005b505c,param_1,1);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x29b;
    core_main_c_FUN_004e4330("Unable to open VGA palette (probably need to mount startup.pod or delete pod.ini).");
  }
  support_trstream_cpp_CInStreamFile_read_FUN_00573c00(&local_2c,&DAT_01c6af98,0x300);
  support_trstream_cpp_CInStreamFile_close_FUN_00573db0(&local_2c);
  support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_2c,0);
  return;
}
