// Name: unkafter_asgaya.cpp_FUN_005aee30
// Address: 005aee30
// Address Range: [[005aee30, 005aee5d]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005aee30(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

#include "nocturne.h"

void unkafter_asgaya_cpp_FUN_005aee30(FILETIME *param_1,LPWORD param_2,LPWORD param_3)

{
  _FILETIME local_c;
  
  FileTimeToLocalFileTime(param_1,&local_c);
  FileTimeToDosDateTime(&local_c,param_2,param_3);
  return;
}
