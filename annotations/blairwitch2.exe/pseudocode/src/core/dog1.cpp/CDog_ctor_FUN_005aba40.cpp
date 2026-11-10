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
  CDog *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  uint auStackY_1028 [1009];
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
  
  bVar6 = 0;
  this_ptr_00 = (CDog *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CDog_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CDogVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,"blackDog.dfm");
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f000000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x3fe00000;
  *(uint *)&this_ptr_00->field_0xfc = 0;
  *(uint *)&this_ptr_00->field_0x113c4 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x2a8 = 0x3dcccccd;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 2;
  *(uint *)&this_ptr_00->field_0x11390 = 0;
  core_dog1_cpp_CDog_processStates_FUN_005abe90(this_ptr_00,0.0,0);
  uVar3 = _DAT_00600c50;
  puVar1 = &this_ptr_00->field_0x10af8;
  *(uint *)&this_ptr_00->field_0x11398 = 0x40a00000;
  *(uint *)&this_ptr_00->field_0x11394 = uVar3;
  unkaddr_0059d350_cpp_FUN_0059d6f0(puVar1,"ChaseFoodComplete","Alert");
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Alert");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  *(uint *)&this_ptr_00->field_0x1137c = 0;
  *(uint *)&this_ptr_00->field_0x113fc = 0xffffffff;
  *(uint *)&this_ptr_00->field_0x1185c = 0;
  *(uint *)&this_ptr_00->field_0x11864 = 0x40a00000;
  *(uint *)&this_ptr_00->field_0x11860 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x3434 = 0x3fc00000;
  *(uint *)&this_ptr_00->field_0x3440 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x3444 = 0x40400000;
  *(uint *)&this_ptr_00->field_0x11344 = 1;
  uStack_28 = 0xbe883127;
  uStack_24 = 0x3e000000;
  uStack_20 = 0x3f00cb29;
  if ((uint *)&this_ptr_00->field_0x10a0c != &stack0xffffffd8) {
    *(uint *)&this_ptr_00->field_0x10a0c = 0xbe883127;
    *(uint *)&this_ptr_00->field_0x10a10 = 0x3e000000;
    *(uint *)&this_ptr_00->field_0x10a14 = 0x3f00cb29;
  }
  uStack_48 = 0x3e000000;
  uStack_44 = 0x3f00cb29;
  uStack_4c = 0x3e883127;
  if ((uint *)&this_ptr_00->field_0x10a18 != &stack0xffffffb4) {
    *(uint *)&this_ptr_00->field_0x10a18 = 0x3e883127;
    *(uint *)&this_ptr_00->field_0x10a1c = 0x3e000000;
    *(uint *)&this_ptr_00->field_0x10a20 = 0x3f00cb29;
  }
  uStack_2c = 0;
  uStack_30 = 0x3fc90fdb;
  uStack_34 = 0;
  uStack_1c = 0;
  (&stack0xffffffe8)[(uint)bVar6 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((uint *)&this_ptr_00->field_0x10a48 != &stack0xffffffe4) {
    *(uint *)&this_ptr_00->field_0x10a48 = uStack_1c;
    *(uint *)&this_ptr_00->field_0x10a4c = uStack_18;
    *(uint *)&this_ptr_00->field_0x10a50 = uStack_14;
  }
  uStack_40 = 0;
  (&stack0xffffffc4)[(uint)bVar6 * 0xfffffffe] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((uint *)&this_ptr_00->field_0x10a54 != &stack0xffffffc0) {
    *(uint *)&this_ptr_00->field_0x10a54 = uStack_40;
    *(uint *)&this_ptr_00->field_0x10a58 = uStack_3c;
    *(uint *)&this_ptr_00->field_0x10a5c = uStack_38;
  }
  pcVar4 = (char *)0x5f0d08;
  pcVar5 = &this_ptr_00->field_0x11444;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pcVar4 = "dogdeath0?.wav";
  pcVar5 = &this_ptr_00->field_0x11543;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  pcVar4 = (char *)0x5f0d24;
  pcVar5 = &this_ptr_00->field_0x11741;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)&this_ptr_00->field_0x11844 = 0x40e00000;
  *(uint *)&this_ptr_00->field_0xfc = 1;
  *(uint *)&this_ptr_00->field_0x10a28 = 0;
  *(uint *)&this_ptr_00->field_0x1186c = 0;
  return this_ptr_00;
}
