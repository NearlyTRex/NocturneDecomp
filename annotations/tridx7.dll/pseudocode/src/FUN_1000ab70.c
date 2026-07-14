// Name: FUN_1000ab70
// Address: 1000ab70
// Address Range: [[1000ab70, 1000ac07]]
// Convention: unknown
// Signature: int FUN_1000ab70(void)

#include "nocturne.h"

int FUN_1000ab70(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_10241860) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_1024085c + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_1024085c + iVar4) + 0x20));
          FUN_10005b30(*(uint *)(DAT_1024085c + iVar4));
          *(uint *)(DAT_1024085c + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10241860);
  }
  FUN_10005a10(2);
  return iVar2;
}
