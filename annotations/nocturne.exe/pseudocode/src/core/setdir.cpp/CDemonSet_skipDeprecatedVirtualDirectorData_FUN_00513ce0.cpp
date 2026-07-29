// Name: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0
// Address: 00513ce0
// Address Range: [[00513ce0, 00513d7d]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  char local_118 [256];
  int local_18;
  int local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  iVar2 = 0;
  if (0 < local_18) {
    do {
      _fscanf(file_handle,"\"%*[^\"]\", %d\n");
      iVar1 = 0;
      if (0 < local_14) {
        do {
          _fgets(local_118,0xff,file_handle);
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_14);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18);
  }
  return;
}
