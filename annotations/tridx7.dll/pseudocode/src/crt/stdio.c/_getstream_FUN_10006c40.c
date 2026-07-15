// Name: crt_stdio.c__getstream_FUN_10006c40
// Address: 10006c40
// Address Range: [[10006c40, 10006d20]]
// Convention: __cdecl
// Signature: FILE * __cdecl crt_stdio_c__getstream_FUN_10006c40(void)

#include "nocturne.h"

FILE * __cdecl _getstream(void)

{
  void *pvVar1;
  int iVar2;
  int index;
  FILE *pFVar3;
  
  index = 0;
  pFVar3 = (FILE *)0x0;
  _lock(2);
  if (0 < DAT_10241860) {
    iVar2 = 0;
    do {
      pvVar1 = *(void **)(DAT_1024085c + iVar2);
      if (pvVar1 == (void *)0x0) {
        pvVar1 = malloc(0x38);
        *(void **)(DAT_1024085c + index * 4) = pvVar1;
        iVar2 = *(int *)(DAT_1024085c + index * 4);
        if (iVar2 != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_1024085c + index * 4) + 0x20));
          pFVar3 = *(FILE **)(DAT_1024085c + index * 4);
        }
        break;
      }
      if ((*(uint *)((int)pvVar1 + 0xc) & 0x83) == 0) {
        _lock_file2(index,pvVar1);
        if ((*(uint *)((int)*(void **)(DAT_1024085c + iVar2) + 0xc) & 0x83) == 0) {
          pFVar3 = *(FILE **)(DAT_1024085c + index * 4);
          break;
        }
        _unlock_file2(index,*(void **)(DAT_1024085c + iVar2));
      }
      iVar2 = iVar2 + 4;
      index = index + 1;
    } while (index < DAT_10241860);
  }
  if (pFVar3 != (FILE *)0x0) {
    pFVar3->_cnt = 0;
    pFVar3->_flag = 0;
    pFVar3->_base = (char *)0x0;
    pFVar3->_ptr = (char *)0x0;
    pFVar3->_tmpfname = (char *)0x0;
    pFVar3->_file = -1;
  }
  _unlock(2);
  return pFVar3;
}
