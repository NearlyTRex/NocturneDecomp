// Name: support_trisock.cpp_parseIPComponents_FUN_00548bf0
// Address: 00548bf0
// Address Range: [[00548bf0, 00548c51]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trisock_cpp_parseIPComponents_FUN_00548bf0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_parseIPComponents_FUN_00548bf0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  iVar1 = sscanf
                    (param_2,"%d.%d.%d.%d",&uStack_14,&uStack_10,&uStack_c,&uStack_8);
  if (iVar1 != 4) {
    return 0;
  }
  uVar2 = support_trisock_cpp_buildIPAddress_FUN_00548c60
                    (param_1,uStack_14,uStack_10,uStack_c,uStack_8);
  return uVar2;
}
