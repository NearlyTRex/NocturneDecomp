// Name: core_netgame.cpp_FUN_0052dff0
// Address: 0052dff0
// Address Range: [[0052dff0, 0052e033]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_0052dff0(CNetGame *this_ptr,SNetworkAddr *addr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_FUN_0052dff0(CNetGame *this_ptr,SNetworkAddr *addr)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0x1c) {
    piVar1 = (int *)&this_ptr->field_0x3c;
    do {
      if (((short)piVar1[1] == *(short *)(addr + 4)) && (*(int *)addr == *piVar1)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x1f;
    } while (iVar2 < *(int *)&this_ptr->field_0x1c);
  }
  return -1;
}
