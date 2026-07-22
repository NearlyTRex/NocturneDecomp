// Name: core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40
// Address: 00417b40
// Address Range: [[00417b40, 00417c87]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417b40(int param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417b40(int param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  byte local_18 [16];
  
  if (*(int *)(param_1 + 0x744) < 2) {
    puVar6 = (uint *)(param_1 + 0x748 + *(int *)(param_1 + 0x744) * 0x2a8);
    *(int *)(param_1 + 0x744) = *(int *)(param_1 + 0x744) + 1;
    if (puVar6 != param_2) {
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      puVar6[2] = param_2[2];
    }
    puVar2 = (uint *)
             core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_18,puVar6);
    puVar6[0xb] = *puVar2;
    puVar6[0xc] = puVar2[1];
    puVar6[0xd] = puVar2[2];
    core_flame_cpp_CFlame_setup_FUN_0048d050(puVar6 + 3);
    puVar6[0x6c] = 0;
    puVar6[0x57] = 0x3fc00000;
    puVar6[0x58] = 0x40400000;
    pcVar8 = (char *)(param_1 + 400);
    puVar6[0x59] = 0x3fc00000;
    *(uint *)(param_1 + 0xfc) = 1;
    pcVar7 = "CHAR2.RAW";
    *(uint *)(param_1 + 0x184) = 1;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x178)) {
      iVar3 = 0;
      do {
        *(uint *)(*(int *)(param_1 + 0x180) + iVar3) = 0;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < *(int *)(param_1 + 0x178));
    }
    uVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41400000,0x41a00000);
    *(uint *)(param_1 + 0xcb0) = uVar4;
  }
  return;
}
