// Name: engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
// Address: 00551820
// Address Range: [[00551820, 005518b0]]
// Convention: __cdecl
// Signature: int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod * this_ptr, char * target_filename)

#include "nocturne.h"

int __cdecl
engine_pod_cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod *this_ptr,char *target_filename)

{
  int iVar1;
  int iVar2;
  CPod *pCVar3;
  char local_210 [256];
  char local_110 [256];
  
  iVar2 = 0;
  engine_dosio_c_splitPath_FUN_00481f20
            (target_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      engine_dosio_c_splitPath_FUN_00481f20
                (pCVar3->pod_files[0]->filename,(char *)0x0,(char *)0x0,local_210,(char *)0x0);
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(local_110,local_210);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return -1;
}
