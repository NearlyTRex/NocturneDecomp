// Name: FUN_005cc1c0
// Address: 005cc1c0
// Address Range: [[005cc1c0, 005cc1ed]]
// Convention: unknown
// Signature: void FUN_005cc1c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

#include "nocturne.h"

void FUN_005cc1c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

{
  _FILETIME local_c;
  
  FileTimeToLocalFileTime(param_1,&local_c);
  FileTimeToDosDateTime(&local_c,param_2,param_3);
  return;
}
