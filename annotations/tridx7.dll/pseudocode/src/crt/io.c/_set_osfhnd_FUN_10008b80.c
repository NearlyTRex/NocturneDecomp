// Name: crt_io.c__set_osfhnd_FUN_10008b80
// Address: 10008b80
// Address Range: [[10008b80, 10008c23]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__set_osfhnd_FUN_10008b80(int fh,intptr_t osfhandle)

#include "nocturne.h"

int __cdecl _set_osfhnd(int fh,intptr_t osfhandle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((uint)fh < DAT_10241970) {
    piVar2 = (int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3));
    iVar1 = (fh & 0x1fU) * 0x24;
    if (*(int *)(*piVar2 + iVar1) == -1) {
      if (DAT_10016c74 == 1) {
        if (fh == 0) {
          SetStdHandle(0xfffffff6,(HANDLE)osfhandle);
        }
        else if (fh == 1) {
          SetStdHandle(0xfffffff5,(HANDLE)osfhandle);
        }
        else if (fh == 2) {
          SetStdHandle(0xfffffff4,(HANDLE)osfhandle);
        }
      }
      *(intptr_t *)(*piVar2 + iVar1) = osfhandle;
      return 0;
    }
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}
