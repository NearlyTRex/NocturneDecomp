// Name: core_dog1.cpp_CDog_ctor_FUN_005aba40
// Address: 005aba40
// Address Range: [[005aba40, 005abd2e]]
// Convention: unknown
// Signature: CDog * core_dog1_cpp_CDog_ctor_FUN_005aba40(CDog *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDog * core_dog1_cpp_CDog_ctor_FUN_005aba40(CDog *this_ptr)

{
  byte *puVar1;
  char cVar2;
  uint uVar3;
  CDog *pCVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  uint auStackY_1034 [1012];
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar7 = 0;
  pCVar4 = (CDog *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(byte **)&pCVar4->field_0x2b0 = &g_CDogVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar4->field_0x2b4,"blackDog.dfm");
  *(uint *)&pCVar4->field_0x3434 = 0x3f000000;
  *(uint *)&pCVar4->field_0x1134c = 0x3fe00000;
  *(uint *)&pCVar4->field_0xfc = 0;
  *(uint *)&pCVar4->field_0x113c4 = 0x3f800000;
  *(uint *)&pCVar4->field_0x2a8 = 0x3dcccccd;
  *(uint *)&pCVar4->field_0x11380 = 0;
  *(uint *)&pCVar4->field_0x11384 = 0;
  *(uint *)&pCVar4->field_0x11388 = 1;
  *(uint *)&pCVar4->field_0x1138c = 2;
  *(uint *)&pCVar4->field_0x11390 = 0;
  core_dog1_cpp_FUN_005abe90(pCVar4,0,0);
  uVar3 = _DAT_00600c50;
  puVar1 = &pCVar4->field_0x10af8;
  *(uint *)&pCVar4->field_0x11398 = 0x40a00000;
  *(uint *)&pCVar4->field_0x11394 = uVar3;
  unkaddr_0059d350_cpp_FUN_0059d6f0(puVar1,"ChaseFoodComplete","Alert");
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Alert");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  *(uint *)&pCVar4->field_0x1137c = 0;
  *(uint *)&pCVar4->field_0x113fc = 0xffffffff;
  *(uint *)&pCVar4->field_0x1185c = 0;
  *(uint *)&pCVar4->field_0x11864 = 0x40a00000;
  *(uint *)&pCVar4->field_0x11860 = 0x3f800000;
  *(uint *)&pCVar4->field_0x3434 = 0x3fc00000;
  *(uint *)&pCVar4->field_0x3440 = 0x3f800000;
  *(uint *)&pCVar4->field_0x3444 = 0x40400000;
  *(uint *)&pCVar4->field_0x11344 = 1;
  uStack_34 = 0xbe883127;
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3f00cb29;
  if ((uint *)&pCVar4->field_0x10a0c != &stack0xffffffcc) {
    *(uint *)&pCVar4->field_0x10a0c = 0xbe883127;
    *(uint *)&pCVar4->field_0x10a10 = 0x3e000000;
    *(uint *)&pCVar4->field_0x10a14 = 0x3f00cb29;
  }
  uStack_54 = 0x3e000000;
  uStack_50 = 0x3f00cb29;
  uStack_58 = 0x3e883127;
  if ((uint *)&pCVar4->field_0x10a18 != &stack0xffffffa8) {
    *(uint *)&pCVar4->field_0x10a18 = 0x3e883127;
    *(uint *)&pCVar4->field_0x10a1c = 0x3e000000;
    *(uint *)&pCVar4->field_0x10a20 = 0x3f00cb29;
  }
  uStack_38 = 0;
  uStack_3c = 0x3fc90fdb;
  uStack_40 = 0;
  uStack_28 = 0;
  (&stack0xffffffdc)[(uint)bVar7 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if ((uint *)&pCVar4->field_0x10a48 != &stack0xffffffd8) {
    *(uint *)&pCVar4->field_0x10a48 = uStack_28;
    *(uint *)&pCVar4->field_0x10a4c = uStack_24;
    *(uint *)&pCVar4->field_0x10a50 = uStack_20;
  }
  uStack_14 = 0;
  uStack_1c = 0;
  uStack_18 = 0x3fc90fdb;
  uStack_4c = 0;
  (&stack0xffffffb8)[(uint)bVar7 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar7 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  if ((uint *)&pCVar4->field_0x10a54 != &stack0xffffffb4) {
    *(uint *)&pCVar4->field_0x10a54 = uStack_4c;
    *(uint *)&pCVar4->field_0x10a58 = uStack_48;
    *(uint *)&pCVar4->field_0x10a5c = uStack_44;
  }
  pcVar5 = (char *)0x5f0d08;
  pcVar6 = &pCVar4->field_0x11444;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = "dogdeath0?.wav";
  pcVar6 = &pCVar4->field_0x11543;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  pcVar5 = (char *)0x5f0d24;
  pcVar6 = &pCVar4->field_0x11741;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  *(uint *)&pCVar4->field_0x11844 = 0x40e00000;
  *(uint *)&pCVar4->field_0xfc = 1;
  *(uint *)&pCVar4->field_0x10a28 = 0;
  *(uint *)&pCVar4->field_0x1186c = 0;
  return pCVar4;
}
