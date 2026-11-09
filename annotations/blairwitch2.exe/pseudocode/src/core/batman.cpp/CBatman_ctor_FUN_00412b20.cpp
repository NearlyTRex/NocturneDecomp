// Name: core_batman.cpp_CBatman_ctor_FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412bd0]]
// Convention: __cdecl
// Signature: CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00412b20(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBatman * __cdecl core_batman_cpp_CBatman_ctor_FUN_00412b20(CBatman *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CBatman *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CBatman *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  pcVar5 = (char *)0x5cb971;
  *(byte **)&pCVar4->field_0x2b0 = &g_CBatmanVTable;
  pcVar6 = &pCVar4->field_0x10af8;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar4->field_0x2b4,(char *)0x5cb966);
  uVar2 = _DAT_005f3090;
  *(uint *)&pCVar4->field_0x3430 = 0x3f19999a;
  uVar3 = _DAT_005f3094;
  *(uint *)&pCVar4->field_0x3434 = 0x40000000;
  *(uint *)&pCVar4->field_0x3438 = uVar2;
  *(uint *)&pCVar4->field_0x343c = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4->field_0x10b94 = 0;
  *(uint *)&pCVar4->field_0x10b98 = 0;
  *(uint *)&pCVar4->field_0x10ba4 = 0;
  *(uint *)&pCVar4->field_0x10ba0 = *(uint *)&pCVar4->field_0x10ba4;
  *(uint *)&pCVar4->field_0x10b9c = *(uint *)&pCVar4->field_0x10ba0;
  return pCVar4;
}
