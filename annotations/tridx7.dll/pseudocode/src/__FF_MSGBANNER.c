// Name: __FF_MSGBANNER
// Address: 100085d0
// Address Range: [[100085d0, 1000860c]]
// Convention: __cdecl
// Signature: void __cdecl __FF_MSGBANNER(void)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10016c70 == 1) || ((DAT_10016c70 == 0 && (DAT_10016c74 == 1)))) {
    FUN_10008610(0xfc);
    if (DAT_10017080 != (code *)0x0) {
      (*DAT_10017080)();
    }
    FUN_10008610(0xff);
  }
  return;
}
