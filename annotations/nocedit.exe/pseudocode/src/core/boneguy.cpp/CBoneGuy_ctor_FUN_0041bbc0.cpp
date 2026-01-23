// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
// Address: 0041bbc0
// Address Range: [[0041bbc0, 0041bcf1]]
// Convention: __cdecl
// Signature: CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  CEnemy *pCVar5;
  void *dest;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  double dVar9;
  float local_20;
  
  pCVar5 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  dest = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                   (pCVar5[1].base_character.base_actor.create_event + 0x10,0x14,
                    &g_SBoneGuyBoxTypeInfo);
  *(CDemonActor_vtable **)((int)dest + -0xbde8) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)((int)dest + -0xbde4),"boneguy.dfm");
  *(uint *)((int)dest + -0x9160) = 0x3f19999a;
  *(uint *)((int)dest + -0x915c) = 0x3f666666;
  pcVar7 = "boneguydie";
  *(uint *)((int)dest + -0xbe40) = 1;
  pcVar8 = (char *)((int)dest + -0x6c);
  *(uint *)((int)dest + 0x5a0) = 0;
  uVar3 = _DAT_0065af60;
  *(uint *)((int)dest + -0x992c) = 2;
  uVar4 = _PTR_FUN_0065af61_3;
  *(uint *)((int)dest + -8) = 0x41200000;
  *(uint *)((int)dest + -0x9158) = uVar3;
  *(uint *)((int)dest + -0x9154) = uVar4;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -4) = 0;
  crt_memory_c_memset_FUN_005fde40(dest,0,0x5a0);
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  *(uint *)((int)dest + -0x74) = 0;
  *(uint *)((int)dest + -0x8c) = 0x40c00000;
  *(int *)((int)dest + -0x80) = iVar6;
  core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,255.0);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,40.0);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(106.0,256.0);
  core_boneguy_cpp_FUN_0041ba10();
  fVar2 = 256.0f;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(local_20 * 256.0f));
  *(int *)((int)dest + -0xbe34) = (int)ROUND(dVar9);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(local_20 * fVar2));
  *(int *)((int)dest + -0xbe30) = (int)ROUND(dVar9);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(fVar2 * local_20));
  *(int *)((int)dest + -0xbe2c) = (int)ROUND(dVar9);
  return (CBoneGuy *)((int)dest + -0xbf3c);
}
