// Name: crt_startup.c__amsg_exit_FUN_100058c0
// Address: 100058c0
// Address Range: [[100058c0, 100058f3]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c__amsg_exit_FUN_100058c0(int rterrnum)

#include "nocturne.h"

void __cdecl _amsg_exit(int rterrnum)

{
  if ((DAT_10016c70 == 1) || ((DAT_10016c70 == 0 && (DAT_10016c74 == 1)))) {
    _FF_MSGBANNER();
  }
  _NMSG_WRITE(rterrnum);
  (*(code *)PTR_crt_startup_c__exit_crt_FUN_100075c0_10016c6c)(0xff);
  return;
}
