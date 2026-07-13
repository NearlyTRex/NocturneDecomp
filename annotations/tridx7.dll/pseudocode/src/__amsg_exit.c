// Name: __amsg_exit
// Address: 100058c0
// Address Range: [[100058c0, 100058f3]]
// Convention: __cdecl
// Signature: void __cdecl __amsg_exit(int param_1)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10016c70 == 1) || ((DAT_10016c70 == 0 && (DAT_10016c74 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_10008610(param_1);
  (*(code *)PTR___exit_10016c6c)(0xff);
  return;
}
