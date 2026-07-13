// Name: __close
// Address: 10005b50
// Address Range: [[10005b50, 10005bbd]]
// Convention: __cdecl
// Signature: int __cdecl __close(int _FileHandle)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __close(int _FileHandle)

{
  int iVar1;
  uint *puVar2;
  
  if (((uint)_FileHandle < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __close_lk(_FileHandle);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  puVar2 = (uint *)FUN_10008a20();
  *puVar2 = 9;
  puVar2 = (uint *)FUN_10008a30();
  *puVar2 = 0;
  return -1;
}
