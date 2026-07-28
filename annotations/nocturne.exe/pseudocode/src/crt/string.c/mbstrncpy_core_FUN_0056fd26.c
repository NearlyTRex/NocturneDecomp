// Name: crt_string.c_mbstrncpy_core_FUN_0056fd26
// Address: 0056fd26
// Address Range: [[0056fd26, 0056fd64]]
// Convention: unknown
// Signature: _FILE * crt_string_c_mbstrncpy_core_FUN_0056fd26(_FILE *param_1)

#include "nocturne.h"

_FILE * mbstrncpy_core(_FILE *param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = fgetc_buffered(param_1);
    if (((*(uint *)((int)&param_1->_handle + *(int *)(param_1->_ptr + 4)) & 3) != 0) ||
       (((&DAT_005c168c)[(byte)((char)iVar1 + 1)] & 2) == 0)) break;
    FUN_00571cc6(param_1);
  }
  return param_1;
}
