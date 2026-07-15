// Name: crt_thread.c__initptd_FUN_10007790
// Address: 10007790
// Address Range: [[10007790, 100077a2]]
// Convention: __cdecl
// Signature: void __cdecl crt_thread_c__initptd_FUN_10007790(_ptiddata ptd,pthreadlocinfo locale)

#include "nocturne.h"

void __cdecl _initptd(_ptiddata ptd,pthreadlocinfo locale)

{
  *(uint **)(ptd->_con_ch_buf + 4) = &DAT_100176d0;
  ptd->_holdrand = 1;
  return;
}
