// Name: core_netgame.cpp_FUN_0050b41c
// Address: 0050b41c
// Address Range: [[0050b41c, 0050b41f]]
// Convention: unknown
// Signature: undefined4 core_netgame_cpp_FUN_0050b41c(CNetGame *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_netgame_cpp_FUN_0050b41c(CNetGame *param_1)

{
  CGame *pCVar1;
  uint uVar2;
  int iVar3;
  byte auStack_14 [8];
  
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_FUN_0050b8d0(param_1,0);
  pCVar1 = g_CGamePtr;
  *(uint *)&param_1->field_0x1c = 0;
  uVar2 = support_trisock_cpp_createNetworkAddr_FUN_00578e60
                    (auStack_14,_DAT_02653630,0x1ddf,&param_1->field_0x8,
                     *(uint *)&pCVar1->field_0xd4,*(uint *)&pCVar1->field_0xd8);
  uVar2 = core_netgame_cpp_FUN_0050ce70(param_1,uVar2);
  *(uint *)&param_1->field_0x124 = uVar2;
  *(uint *)&param_1->field_0x120 = uVar2;
  iVar3 = core_netgame_cpp_FUN_0050b790(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)&param_1->field_0x4 = 1;
  *(uint *)param_1 = 1;
  return 1;
}
