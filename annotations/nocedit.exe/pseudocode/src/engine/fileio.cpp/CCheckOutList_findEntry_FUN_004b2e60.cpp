// Name: engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
// Address: 004b2e60
// Address Range: [[004b2e60, 004b2ea6]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList *this_ptr,char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < this_ptr->count) {
    iVar3 = 0;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->items->name + iVar3,filename);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x168;
    } while (iVar2 < this_ptr->count);
  }
  return -1;
}
