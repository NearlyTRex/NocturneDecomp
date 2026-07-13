// Name: __initptd
// Address: 10007790
// Address Range: [[10007790, 100077a2]]
// Convention: __cdecl
// Signature: void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(byte **)(_Ptd->_con_ch_buf + 4) = &DAT_100176d0;
  _Ptd->_holdrand = 1;
  return;
}
