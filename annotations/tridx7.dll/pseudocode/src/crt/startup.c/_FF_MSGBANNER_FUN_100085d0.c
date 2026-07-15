// Name: crt_startup.c__FF_MSGBANNER_FUN_100085d0
// Address: 100085d0
// Address Range: [[100085d0, 1000860c]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c__FF_MSGBANNER_FUN_100085d0(void)

#include "nocturne.h"

void __cdecl _FF_MSGBANNER(void)

{
  if ((DAT_10016c70 == 1) || ((DAT_10016c70 == 0 && (DAT_10016c74 == 1)))) {
    _NMSG_WRITE(0xfc);
    if (DAT_10017080 != (code *)0x0) {
      (*DAT_10017080)();
    }
    _NMSG_WRITE(0xff);
  }
  return;
}
