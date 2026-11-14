// Name: crt_unknown.c_FUN_005c3ec0
// Address: 005c3ec0
// Address Range: [[005c3ec0, 005c3eed]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c3ec0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

#include "nocturne.h"

void FUN_005c3ec0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

{
  _FILETIME local_c;
  
  FileTimeToLocalFileTime(param_1,&local_c);
  FileTimeToDosDateTime(&local_c,param_2,param_3);
  return;
}
