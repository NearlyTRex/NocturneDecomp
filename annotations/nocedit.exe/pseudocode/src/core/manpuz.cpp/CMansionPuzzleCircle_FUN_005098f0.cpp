// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_005098f0
// Address: 005098f0
// Address Range: [[005098f0, 00509b1a]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_005098f0(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_005098f0(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  CMansionPuzzleCircle *pCVar2;
  CMansionPuzzleCircle *pCVar3;
  CMansionPuzzleCircle *pCVar4;
  int iVar5;
  int iVar6;
  
  pCVar2 = this_ptr;
  pCVar4 = this_ptr;
  do {
    pCVar4->unk2[0] = '\0';
    pCVar4->unk2[1] = '\0';
    pCVar4->unk2[2] = '\0';
    pCVar4->unk2[3] = '\0';
    pCVar4->unk2[4] = '\0';
    pCVar4->unk2[5] = '\0';
    pCVar4->unk2[6] = '\0';
    pCVar4->unk2[7] = '\0';
    pCVar4->red = 0;
    pCVar4->green = 0;
    pCVar4->blue = 0;
    pCVar3 = (CMansionPuzzleCircle *)((pCVar2->base).actor_name + 4);
    pCVar4->exists = 1;
    pCVar2->unk3[0xdb8] = '\0';
    pCVar2->unk3[0xdb9] = '\0';
    pCVar2->unk3[0xdba] = '\0';
    pCVar2->unk3[0xdbb] = '\0';
    pCVar2->unk3[0xde8] = '\0';
    pCVar2->unk3[0xde9] = '\0';
    pCVar2->unk3[0xdea] = '\0';
    pCVar2->unk3[0xdeb] = '\0';
    pCVar2->unk3[0xe18] = '\0';
    pCVar2->unk3[0xe19] = '\0';
    pCVar2->unk3[0xe1a] = '\0';
    pCVar2->unk3[0xe1b] = '\0';
    pCVar4 = (CMansionPuzzleCircle *)&(pCVar4->base).health;
    pCVar2->unk3[0xe48] = '\0';
    pCVar2->unk3[0xe49] = '\0';
    pCVar2->unk3[0xe4a] = '\0';
    pCVar2->unk3[0xe4b] = '\0';
    pCVar2 = pCVar3;
  } while (pCVar3 != (CMansionPuzzleCircle *)&(this_ptr->base).orient);
  this_ptr->blue = 0xff;
  iVar6 = this_ptr->blue;
  this_ptr->unk3[0x58] = -1;
  this_ptr->unk3[0x59] = '\0';
  this_ptr->unk3[0x5a] = '\0';
  this_ptr->unk3[0x5b] = '\0';
  this_ptr->unk3[0xbc] = -1;
  this_ptr->unk3[0xbd] = '\0';
  this_ptr->unk3[0xbe] = '\0';
  this_ptr->unk3[0xbf] = '\0';
  this_ptr->unk3[0xd4] = '\0';
  this_ptr->unk3[0xd5] = '\0';
  this_ptr->unk3[0xd6] = '\0';
  this_ptr->unk3[0xd7] = '\0';
  this_ptr->unk3[0x184] = -1;
  this_ptr->unk3[0x185] = '\0';
  this_ptr->unk3[0x186] = '\0';
  this_ptr->unk3[0x187] = '\0';
  this_ptr->unk3[0x1f0] = -1;
  this_ptr->unk3[0x1f1] = '\0';
  this_ptr->unk3[0x1f2] = '\0';
  this_ptr->unk3[499] = '\0';
  this_ptr->unk3[0x200] = '\0';
  this_ptr->unk3[0x201] = '\0';
  this_ptr->unk3[0x202] = '\0';
  this_ptr->unk3[0x203] = '\0';
  this_ptr->unk3[0x2b0] = -1;
  this_ptr->unk3[0x2b1] = '\0';
  this_ptr->unk3[0x2b2] = '\0';
  this_ptr->unk3[0x2b3] = '\0';
  this_ptr->unk3[0x31c] = -1;
  this_ptr->unk3[0x31d] = '\0';
  this_ptr->unk3[0x31e] = '\0';
  this_ptr->unk3[799] = '\0';
  this_ptr->unk3[0x378] = -1;
  this_ptr->unk3[0x379] = '\0';
  this_ptr->unk3[0x37a] = '\0';
  this_ptr->unk3[0x37b] = '\0';
  this_ptr->unk3[0x3e4] = -1;
  this_ptr->unk3[0x3e5] = '\0';
  this_ptr->unk3[0x3e6] = '\0';
  this_ptr->unk3[999] = '\0';
  this_ptr->unk3[0x448] = -1;
  this_ptr->unk3[0x449] = '\0';
  this_ptr->unk3[0x44a] = '\0';
  this_ptr->unk3[1099] = '\0';
  this_ptr->unk3[0xe18] = -1;
  this_ptr->unk3[0xe19] = '\0';
  this_ptr->unk3[0xe1a] = '\0';
  this_ptr->unk3[0xe1b] = '\0';
  this_ptr->unk3[0xe1c] = -1;
  this_ptr->unk3[0xe1d] = '\0';
  this_ptr->unk3[0xe1e] = '\0';
  this_ptr->unk3[0xe1f] = '\0';
  this_ptr->unk3[0xdc0] = -1;
  this_ptr->unk3[0xdc1] = '\0';
  this_ptr->unk3[0xdc2] = '\0';
  this_ptr->unk3[0xdc3] = '\0';
  this_ptr->unk3[0xdc4] = -1;
  this_ptr->unk3[0xdc5] = '\0';
  this_ptr->unk3[0xdc6] = '\0';
  this_ptr->unk3[0xdc7] = '\0';
  this_ptr->unk3[0xe28] = -1;
  this_ptr->unk3[0xe29] = '\0';
  this_ptr->unk3[0xe2a] = '\0';
  this_ptr->unk3[0xe2b] = '\0';
  this_ptr->unk3[0xdcc] = -1;
  this_ptr->unk3[0xdcd] = '\0';
  this_ptr->unk3[0xdce] = '\0';
  this_ptr->unk3[0xdcf] = '\0';
  this_ptr->unk3[0xdd0] = -1;
  this_ptr->unk3[0xdd1] = '\0';
  this_ptr->unk3[0xdd2] = '\0';
  this_ptr->unk3[0xdd3] = '\0';
  this_ptr->unk3[0xe34] = -1;
  this_ptr->unk3[0xe35] = '\0';
  this_ptr->unk3[0xe36] = '\0';
  this_ptr->unk3[0xe37] = '\0';
  this_ptr->unk3[0xe38] = -1;
  this_ptr->unk3[0xe39] = '\0';
  this_ptr->unk3[0xe3a] = '\0';
  this_ptr->unk3[0xe3b] = '\0';
  this_ptr->unk3[0xe3c] = -1;
  this_ptr->unk3[0xe3d] = '\0';
  this_ptr->unk3[0xe3e] = '\0';
  this_ptr->unk3[0xe3f] = '\0';
  this_ptr->unk3[0xde0] = -1;
  this_ptr->unk3[0xde1] = '\0';
  this_ptr->unk3[0xde2] = '\0';
  this_ptr->unk3[0xde3] = '\0';
  this_ptr->red = iVar6;
  iVar6 = 0;
  *(uint *)(this_ptr->unk3 + 0xdb8) = *(uint *)(this_ptr->unk3 + 0xe18);
  this_ptr->unk3[0xde4] = -1;
  this_ptr->unk3[0xde5] = '\0';
  this_ptr->unk3[0xde6] = '\0';
  this_ptr->unk3[0xde7] = '\0';
  do {
    iVar5 = iVar6 * 0xb8;
    core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(this_ptr);
    pcVar1 = this_ptr->unk3 + iVar5 + 0x46c;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    iVar6 = iVar6 + 1;
    pcVar1 = this_ptr->unk3 + iVar5 + 0x478;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(uint *)(this_ptr->unk3 + iVar5 + 0x468) =
         *(uint *)(this_ptr->unk3 + iVar5 + 0x46c);
    *(uint *)(this_ptr->unk3 + iVar5 + 0x474) =
         *(uint *)(this_ptr->unk3 + iVar5 + 0x478);
    *(uint *)(this_ptr->unk3 + iVar5 + 0x464) =
         *(uint *)(this_ptr->unk3 + iVar5 + 0x468);
    *(uint *)(this_ptr->unk3 + iVar5 + 0x470) =
         *(uint *)(this_ptr->unk3 + iVar5 + 0x478);
  } while (iVar6 < 0xc);
  this_ptr->unk3[0xd54] = '\x01';
  this_ptr->unk3[0xd55] = '\0';
  this_ptr->unk3[0xd56] = '\0';
  this_ptr->unk3[0xd57] = '\0';
  this_ptr->unk3[0xd70] = '\0';
  this_ptr->unk3[0xd71] = '\0';
  this_ptr->unk3[0xd72] = '\0';
  this_ptr->unk3[0xd73] = '\0';
  this_ptr->unk3[0xdb4] = '\v';
  this_ptr->unk3[0xdb5] = '\0';
  this_ptr->unk3[0xdb6] = '\0';
  this_ptr->unk3[0xdb7] = '\0';
  this_ptr->unk3[0xd10] = '\0';
  this_ptr->unk3[0xd11] = '\0';
  this_ptr->unk3[0xd12] = '\0';
  this_ptr->unk3[0xd13] = '\0';
  return;
}
