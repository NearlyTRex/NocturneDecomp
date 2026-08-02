// Name: crt_unknown.c_FUN_005708c0
// Address: 005708c0
// Address Range: [[005708c0, 005708ed]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005708c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

#include "nocturne.h"

void FUN_005708c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

{
  _FILETIME local_c;
  
  FileTimeToLocalFileTime(param_1,&local_c);
  FileTimeToDosDateTime(&local_c,param_2,param_3);
  return;
}
