// Name: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00539ff0
// Address: 00539ff0
// Address Range: [[00539ff0, 0053a08d]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00539ff0(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00539ff0(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e609f,&local_18);
  iVar2 = 0;
  if (0 < local_18) {
    do {
      _fscanf(file_handle,"\"%*[^\"]\", %d\n",&local_14);
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
