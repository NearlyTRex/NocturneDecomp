// Name: crt_io.c__isatty_FUN_100091b0
// Address: 100091b0
// Address Range: [[100091b0, 100091df]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__isatty_FUN_100091b0(int fh)

#include "nocturne.h"

int __cdecl _isatty(int fh)

{
  if (DAT_10241970 <= (uint)fh) {
    return 0;
  }
  return *(byte *)(*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3)) + 4 +
                  (fh & 0x1fU) * 0x24) & 0x40;
}
