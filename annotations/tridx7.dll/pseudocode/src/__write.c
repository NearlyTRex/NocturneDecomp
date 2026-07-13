// Name: __write
// Address: 1000a5f0
// Address Range: [[1000a5f0, 1000a667]]
// Convention: __cdecl
// Signature: int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  uint *puVar2;
  
  if (((uint)_FileHandle < DAT_10241970) &&
     ((*(byte *)(*(int *)((int)&DAT_10241870 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __lseek_lk(_FileHandle,_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  puVar2 = (uint *)FUN_10008a20();
  *puVar2 = 9;
  puVar2 = (uint *)FUN_10008a30();
  *puVar2 = 0;
  return -1;
}
