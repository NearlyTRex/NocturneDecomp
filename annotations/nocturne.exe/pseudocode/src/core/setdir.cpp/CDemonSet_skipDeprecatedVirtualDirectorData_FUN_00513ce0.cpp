// Name: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0
// Address: 00513ce0
// Address Range: [[00513ce0, 00513d7d]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,&DAT_00590c5f,&local_18);
  iVar2 = 0;
  if (0 < local_18) {
    do {
      _fscanf(param_2,"\"%*[^\"]\", %d\n",&local_14);
      iVar1 = 0;
      if (0 < local_14) {
        do {
          _fgets(local_118,0xff,param_2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_14);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18);
  }
  return;
}
