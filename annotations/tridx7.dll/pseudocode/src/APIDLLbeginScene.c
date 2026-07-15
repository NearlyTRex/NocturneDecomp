// Name: APIDLLbeginScene
// Address: 10002ce0
// Address Range: [[10002ce0, 10002d0d]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLbeginScene(void)

#include "nocturne.h"

int __cdecl APIDLLbeginScene(void)

{
  int iVar1;
  
                    /* 0x2ce0  6  APIDLLbeginScene */
  if (DAT_10014204 != 0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_100141e0 + 0x24))(DAT_100141e0);
  if (iVar1 != 0) {
    return 0;
  }
  DAT_10014204 = 1;
  return 1;
}
