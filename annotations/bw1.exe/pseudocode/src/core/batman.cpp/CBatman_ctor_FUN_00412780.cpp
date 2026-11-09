// Name: core_batman.cpp_CBatman_ctor_FUN_00412780
// Address: 00412780
// Address Range: [[00412780, 0041283a]]
// Convention: unknown
// Signature: CBatman * core_batman_cpp_CBatman_ctor_FUN_00412780(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBatman * core_batman_cpp_CBatman_ctor_FUN_00412780(CBatman *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CBatman *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CBatman *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  pcVar5 = (char *)0x5d38e4;
  *(byte ***)&pCVar4->field_0x154 = &g_CBatmanVTable;
  pcVar6 = &pCVar4->field_0xc26c;
  core_skeleton_cpp_FUN_00569f50(&pCVar4->field_0x158,0x5d38d9);
  uVar2 = _DAT_005fc170;
  *(uint *)&pCVar4->field_0x2fec = 0x3f19999a;
  uVar3 = _DAT_005fc174;
  *(uint *)&pCVar4->field_0x2ff0 = 0x40000000;
  *(uint *)&pCVar4->field_0x2ff4 = uVar2;
  *(uint *)&pCVar4->field_0x2ff8 = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4->field_0xc308 = 0;
  *(uint *)&pCVar4->field_0xc30c = 0;
  *(uint *)&pCVar4->field_0xc318 = 0;
  *(uint *)&pCVar4->field_0xc314 = *(uint *)&pCVar4->field_0xc318;
  *(uint *)&pCVar4->field_0xc310 = *(uint *)&pCVar4->field_0xc314;
  *(uint *)&pCVar4->field_0xc268 = 0;
  return pCVar4;
}
