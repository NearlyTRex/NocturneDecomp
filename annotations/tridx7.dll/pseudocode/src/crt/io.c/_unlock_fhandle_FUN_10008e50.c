// Name: crt_io.c__unlock_fhandle_FUN_10008e50
// Address: 10008e50
// Address Range: [[10008e50, 10008e77]]
// Convention: __cdecl
// Signature: void __cdecl crt_io_c__unlock_fhandle_FUN_10008e50(int filehandle)

#include "nocturne.h"

void __cdecl _unlock_fhandle(int filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)((int)&DAT_10241870 + ((int)(filehandle & 0xffffffe7U) >> 3)) +
              (filehandle & 0x1fU) * 0x24 + 0xc));
  return;
}
