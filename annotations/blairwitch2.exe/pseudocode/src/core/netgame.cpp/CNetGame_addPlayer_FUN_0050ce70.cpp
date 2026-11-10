// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70
// Address: 0050ce70
// Address Range: [[0050ce70, 0050cf47]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_0050ce70(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SNetPlayer *dest;
  SNetPlayer *pSVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (1 < this_ptr->player_count) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 0x5ff;
    core_main_c_FUN_004e4500("CNetGame::addPlayer - too many players!");
  }
  iVar2 = this_ptr->player_count;
  this_ptr->player_count = iVar2 + 1;
  dest = this_ptr->players + iVar2;
  memset(dest,0,0x80);
  pSVar5 = dest;
  do {
    cVar1 = *name;
    *(char *)pSVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = name[1];
    name = name + 2;
    pSVar5->field_0x1 = cVar1;
    pSVar5 = (SNetPlayer *)&pSVar5->field_0x2;
  } while (cVar1 != '\0');
  *(uint *)&dest->field_0x1c = *(uint *)addr;
  *(uint *)((int)dest + (uint)bVar6 * -8 + 0x20) =
       *(uint *)(addr + (uint)bVar6 * -8 + 4);
  *(uint *)&dest->field_0x28 = 0xbf800000;
  *(uint *)&dest->field_0x44 = 0;
  *(uint *)&dest->field_0x40 = 0;
  *(uint *)&dest->field_0x3c = 0;
  *(int *)&dest->field_0x14 = hero_number;
  *(int *)&dest->field_0x18 = aim_mode;
  iVar4 = _DAT_01d34e38;
  *(int *)&dest->field_0x24 = _DAT_01d34e38;
  iVar4 = iVar4 + -0x1e0000;
  *(int *)&dest->field_0x2c = iVar4;
  *(int *)&dest->field_0x30 = iVar4;
  iVar3 = _DAT_01d34e44;
  *(int *)&dest->field_0x38 = iVar4;
  *(int *)&dest->field_0x34 = iVar3 + -1;
  return iVar2;
}
