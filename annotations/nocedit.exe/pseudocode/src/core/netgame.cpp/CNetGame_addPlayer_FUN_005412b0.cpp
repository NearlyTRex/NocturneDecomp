// Name: core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
// Address: 005412b0
// Address Range: [[005412b0, 0054138f]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SNetPlayer *dest;
  SNetPlayer *pSVar5;
  byte bVar6;
  uint *in_stack_00000008;
  char *in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  bVar6 = 0;
  if (1 < this_ptr->player_count) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x5ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::addPlayer - too many players!");
  }
  iVar2 = this_ptr->player_count;
  dest = this_ptr->players + iVar2;
  this_ptr->player_count = iVar2 + 1;
  memset(dest,0,0x78);
  pSVar5 = dest;
  do {
    cVar1 = *in_stack_0000000c;
    pSVar5->name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pSVar5->name[1] = cVar1;
    pSVar5 = (SNetPlayer *)(pSVar5->name + 2);
  } while (cVar1 != '\0');
  *(uint *)(dest->name + 0x1c) = *in_stack_00000008;
  *(uint *)((int)dest + (uint)bVar6 * -8 + 0x20) = in_stack_00000008[(uint)bVar6 * -2 + 1];
  dest->ping_quality = -1.0;
  dest->unk1[0xc] = '\0';
  dest->unk1[0xd] = '\0';
  dest->unk1[0xe] = '\0';
  dest->unk1[0xf] = '\0';
  dest->unk1[8] = '\0';
  dest->unk1[9] = '\0';
  dest->unk1[10] = '\0';
  dest->unk1[0xb] = '\0';
  dest->unk1[4] = '\0';
  dest->unk1[5] = '\0';
  dest->unk1[6] = '\0';
  dest->unk1[7] = '\0';
  *(uint *)(dest->name + 0x14) = in_stack_00000010;
  *(uint *)(dest->name + 0x18) = in_stack_00000014;
  uVar4 = g_CurrentGameTime;
  *(uint *)(dest->name + 0x24) = g_CurrentGameTime;
  uVar4 = uVar4 - 0x1e0000;
  dest->last_ping_sent = uVar4;
  dest->last_ping_response = uVar4;
  iVar3 = DAT_02f7c8c4;
  *(uint *)dest->unk1 = uVar4;
  dest->player_id = iVar3 + -1;
  return iVar2;
}
