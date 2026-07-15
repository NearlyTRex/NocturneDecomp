// Name: APIDLLclearZBox
// Address: 10004ac0
// Address Range: [[10004ac0, 10004b2e]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLclearZBox(int left,int right,int top,int bottom)

#include "nocturne.h"

int __cdecl APIDLLclearZBox(int left,int right,int top,int bottom)

{
  int iVar1;
  uint *puVar2;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64 [20];
  uint local_14;
  
                    /* 0x4ac0  9  APIDLLclearZBox */
  local_70 = top;
  local_74 = left;
  local_68 = bottom + 1;
  local_6c = right + 1;
  puVar2 = local_64;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_64[0] = 100;
  local_14 = 0xffffffff;
  (**(code **)(*DAT_10014190 + 0x14))(DAT_10014190,&local_74,0,0,0x3000000,local_64);
  return 1;
}
