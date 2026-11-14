// Name: core_construc.cpp_CConstruct_ctor_FUN_00436b00
// Address: 00436b00
// Address Range: [[00436b00, 00436bda]]
// Convention: __cdecl
// Signature: CConstruct * __cdecl core_construc_cpp_CConstruct_ctor_FUN_00436b00(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CConstruct * __cdecl core_construc_cpp_CConstruct_ctor_FUN_00436b00(CConstruct *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  pvVar5 = __arrinit
                     (pCVar4[1].base.base.footstep_sound_code,0x18,&g_SBoneGuyBoxTypeInfo);
  pcVar6 = (char *)0x5cdc55;
  *(CEnemy_full_vtable **)((int)pvVar5 + -0x10968) = &g_CConstructVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)((int)pvVar5 + -0x10964),"construct1.dfm");
  uVar2 = _DAT_005f46a0;
  pcVar7 = (char *)((int)pvVar5 + -0x120);
  *(uint *)((int)pvVar5 + -0xd7e8) = 0x3f19999a;
  uVar3 = _DAT_005f46a4;
  *(uint *)((int)pvVar5 + -0xd7e4) = 0x40000000;
  *(uint *)((int)pvVar5 + -0xd7e0) = uVar2;
  *(uint *)((int)pvVar5 + -0xd7dc) = uVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = (char *)0x5cdc5a;
  pcVar7 = (char *)((int)pvVar5 + -0x70);
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar5 + 0x6c0) = 0;
  *(uint *)((int)pvVar5 + -0xc) = 0x41000000;
  return (CConstruct *)((int)pvVar5 + -0x10c18);
}
