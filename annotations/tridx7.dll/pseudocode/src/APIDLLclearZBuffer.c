// Name: APIDLLclearZBuffer
// Address: 10004a70
// Address Range: [[10004a70, 10004ab6]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLclearZBuffer(void)

#include "nocturne.h"

int __cdecl APIDLLclearZBuffer(void)

{
  uint *puVar1;
  int iVar2;
  uint local_64 [20];
  uint local_14;
  
                    /* 0x4a70  10  APIDLLclearZBuffer */
  puVar1 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_64[0] = 100;
  local_14 = 0xffffffff;
  (**(code **)(*DAT_10014190 + 0x14))(DAT_10014190,0,0,0,0x3000000,local_64);
  return 1;
}
