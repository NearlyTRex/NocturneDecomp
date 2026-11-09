// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040
// Address: 0052e040
// Address Range: [[0052e040, 0052e11f]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_0052e040(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *dest;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (1 < *(int *)&this_ptr->field_0x1c) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 0x5ff;
    core_main_c_FUN_005030e0("CNetGame::addPlayer - too many players!");
  }
  iVar2 = *(int *)&this_ptr->field_0x1c;
  dest = &this_ptr->field_0x20 + iVar2 * 0x7c;
  *(int *)&this_ptr->field_0x1c = iVar2 + 1;
  memset(dest,0,0x7c);
  pcVar5 = dest;
  do {
    cVar1 = *name;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = name[1];
    name = name + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(dest + 0x1c) = *(uint *)addr;
  *(uint *)(dest + (uint)bVar6 * -8 + 0x20) = *(uint *)(addr + (uint)bVar6 * -8 + 4);
  dest[0x28] = '\0';
  dest[0x29] = '\0';
  dest[0x2a] = -0x80;
  dest[0x2b] = -0x41;
  dest[0x44] = '\0';
  dest[0x45] = '\0';
  dest[0x46] = '\0';
  dest[0x47] = '\0';
  dest[0x40] = '\0';
  dest[0x41] = '\0';
  dest[0x42] = '\0';
  dest[0x43] = '\0';
  dest[0x3c] = '\0';
  dest[0x3d] = '\0';
  dest[0x3e] = '\0';
  dest[0x3f] = '\0';
  *(int *)(dest + 0x14) = hero_number;
  *(int *)(dest + 0x18) = aim_mode;
  iVar4 = _DAT_01d51da0;
  *(int *)(dest + 0x24) = _DAT_01d51da0;
  iVar4 = iVar4 + -0x1e0000;
  *(int *)(dest + 0x2c) = iVar4;
  *(int *)(dest + 0x30) = iVar4;
  iVar3 = _DAT_01d51dac;
  *(int *)(dest + 0x38) = iVar4;
  *(int *)(dest + 0x34) = iVar3 + -1;
  return iVar2;
}
