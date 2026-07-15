// Name: crt_io.c__free_osfhnd_FUN_10008c30
// Address: 10008c30
// Address Range: [[10008c30, 10008cc0]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__free_osfhnd_FUN_10008c30(int fh)

#include "nocturne.h"

int __cdecl _free_osfhnd(int fh)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if ((uint)fh < DAT_10241970) {
    piVar3 = (int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3));
    iVar1 = (fh & 0x1fU) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_10016c74 == 1) {
        if (fh == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (fh == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (fh != 2) goto LAB_10008c95;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10008c95:
      *(uint *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = _errno();
  *piVar3 = 9;
  puVar4 = __doserrno();
  *puVar4 = 0;
  return -1;
}
