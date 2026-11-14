// Name: crt_unknown.c_openFile_FUN_005c2019
// Address: 005c2019
// Address Range: [[005c2019, 005c2077]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_openFile_FUN_005c2019(void *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)

#include "nocturne.h"

void __cdecl openFile(void *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)stream_obj + 4) + (int)stream_obj;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar1 = FUN_005c8e7a(*(int *)(iVar1 + 4),filename,open_mode,buffer_size);
    if (iVar1 != 0) {
      ios_clear
                ((ios *)((int)stream_obj + *(int *)(*(int *)stream_obj + 4)),0);
      return;
    }
    iVar1 = (int)stream_obj + *(int *)(*(int *)stream_obj + 4);
  }
  FUN_005c8e45(iVar1,2);
  return;
}
