// Name: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
// Address: 00551820
// MANUAL RECONSTRUCTION
// Address Range: [[00551820, 005518b0]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod *this_ptr,char *target_filename)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod *this_ptr,char *target_filename)

{
  int iVar1;
  int iVar2;
  char local_210 [256];
  char local_110 [256];

  iVar2 = 0;
  engine_dosio_cpp_splitPath_FUN_00481f20
            (target_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  if (0 < this_ptr->pod_file_count) {
    do {
      engine_dosio_cpp_splitPath_FUN_00481f20
                (this_ptr->pod_files[iVar2]->filename,(char *)0x0,(char *)0x0,local_210,(char *)0x0);
      iVar1 = _stricmp(local_110,local_210);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return -1;
}
