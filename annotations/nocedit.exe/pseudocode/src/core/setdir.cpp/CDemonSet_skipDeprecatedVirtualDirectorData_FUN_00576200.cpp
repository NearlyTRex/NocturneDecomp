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
  int unaff_EBX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  char acStack_10c [252];
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee8,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  iVar2 = 0;
  if (0 < unaff_EBP) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%*[^\"]\", %d\n");
      iVar1 = 0;
      if (0 < unaff_ESI) {
        do {
          crt_stdio_c_fgets_FUN_005fefd0(acStack_10c,0xff,file_handle);
          iVar1 = iVar1 + 1;
        } while (iVar1 < unaff_EBX);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBP);
  }
  return;
}
