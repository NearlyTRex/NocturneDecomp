// Name: __unlock_fhandle
// Address: 10008e50
// Address Range: [[10008e50, 10008e77]]
// Convention: __cdecl
// Signature: void __cdecl __unlock_fhandle(int _Filehandle)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)((int)&DAT_10241870 + ((int)(_Filehandle & 0xffffffe7U) >> 3)) +
              (_Filehandle & 0x1fU) * 0x24 + 0xc));
  return;
}
