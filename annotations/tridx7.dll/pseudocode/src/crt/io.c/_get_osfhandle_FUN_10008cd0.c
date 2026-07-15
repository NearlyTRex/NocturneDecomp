// Name: crt_io.c__get_osfhandle_FUN_10008cd0
// Address: 10008cd0
// Address Range: [[10008cd0, 10008d19]]
// Convention: __cdecl
// Signature: intptr_t __cdecl crt_io_c__get_osfhandle_FUN_10008cd0(int fh)

#include "nocturne.h"

intptr_t __cdecl _get_osfhandle(int fh)

{
  intptr_t *piVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)fh < DAT_10241970) &&
     (piVar1 = (intptr_t *)
               (*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3)) + (fh & 0x1fU) * 0x24)
     , (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  piVar2 = _errno();
  *piVar2 = 9;
  puVar3 = __doserrno();
  *puVar3 = 0;
  return -1;
}
