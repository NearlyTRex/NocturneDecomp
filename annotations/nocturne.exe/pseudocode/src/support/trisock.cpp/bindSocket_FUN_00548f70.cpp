// Name: support_trisock.cpp_bindSocket_FUN_00548f70
// Address: 00548f70
// Address Range: [[00548f70, 00548fb5]]
// Convention: __cdecl
// Signature: bool __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(undefined4 param_1,ushort param_2)

#include "nocturne.h"

bool __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(uint param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  uint *unaff_retaddr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = (uint)param_2;
  uStack_10 = CONCAT22(uStack_10._2_2_,2);
  uVar1 = Ordinal_9();
  uStack_14 = CONCAT22(uVar1,(ushort)uStack_14);
  uStack_10 = 0;
  iVar2 = Ordinal_2(*unaff_retaddr,&uStack_14,0x10);
  return iVar2 == 0;
}
