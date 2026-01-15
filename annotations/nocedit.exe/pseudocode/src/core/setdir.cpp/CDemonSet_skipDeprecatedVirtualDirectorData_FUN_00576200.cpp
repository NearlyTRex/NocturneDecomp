// Name: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
// Address: 00576200
// Address Range: [[00576200, 0057629d]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200(CDemonSet * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
          (CDemonSet *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  char local_118 [256];
  int local_18;
  int local_14;
  
  crt_stdio_c_fgets_FUN_005fefd0(local_118,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&local_18);
  iVar2 = 0;
  if (0 < local_18) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%*[^\"]\", %d\n",&local_14);
      iVar1 = 0;
      if (0 < local_14) {
        do {
          crt_stdio_c_fgets_FUN_005fefd0(local_118,0xff,file_handle);
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_14);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18);
  }
  return;
}
