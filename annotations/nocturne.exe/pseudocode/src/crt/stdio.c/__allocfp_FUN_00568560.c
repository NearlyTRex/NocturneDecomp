// Name: crt_stdio.c___allocfp_FUN_00568560
// Address: 00568560
// Address Range: [[00568560, 0056861d]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c___allocfp_FUN_00568560(int unused_param)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_FILE * __cdecl __allocfp(int unused_param)

{
  streambuf *psVar1;
  _FILE *dest;
  uint uVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  if (_DAT_02de4e24 == (streambuf *)0x0) {
    dest = (_FILE *)&DAT_005c1894;
    do {
      if ((dest->_flag & 3) == 0) {
        psVar1 = (streambuf *)malloc(0x1d);
        if (psVar1 == (streambuf *)0x0) goto LAB_00568608;
        uVar2 = 3;
        goto LAB_005685d9;
      }
      dest = dest + 1;
    } while (dest < (_FILE *)&DAT_005c1a9c);
    uVar2 = 0x4003;
    psVar1 = (streambuf *)malloc(0x37);
    if (psVar1 == (streambuf *)0x0) {
LAB_00568608:
      setErrno(5);
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return (_FILE *)0x0;
    }
    dest = (_FILE *)((int)&psVar1->__put_end + 1);
  }
  else {
    dest = (_FILE *)_DAT_02de4e24->__reserve_base;
    uVar2 = (uint)((ushort)dest->_flag & 0x4003 | 3);
    psVar1 = _DAT_02de4e24;
    _DAT_02de4e24 = _DAT_02de4e24->__b_lock;
  }
LAB_005685d9:
  memset(dest,0,0x1a);
  dest->_flag = uVar2;
  psVar1->__reserve_base = (char *)dest;
  dest->_link = psVar1;
  psVar1->__b_lock = _DAT_02de4e20;
  _DAT_02de4e20 = psVar1;
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  return dest;
}
