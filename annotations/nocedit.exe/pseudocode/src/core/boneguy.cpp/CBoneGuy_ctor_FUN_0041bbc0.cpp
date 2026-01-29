// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
// Address: 0041bbc0
// Address Range: [[0041bbc0, 0041bcf1]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  void *dest;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  double dVar8;
  float local_20;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  dest = __arrinit
                   (pCVar4[1].base.base.create_event + 0x10,0x14,&g_SBoneGuyBoxTypeInfo);
  *(CDemonActor_vtable **)((int)dest + -0xbde8) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)((int)dest + -0xbde4),"boneguy.dfm");
  *(uint *)((int)dest + -0x9160) = 0x3f19999a;
  *(uint *)((int)dest + -0x915c) = 0x3f666666;
  pcVar6 = "boneguydie";
  *(uint *)((int)dest + -0xbe40) = 1;
  pcVar7 = (char *)((int)dest + -0x6c);
  *(uint *)((int)dest + 0x5a0) = 0;
  fVar2 = 50.0f;
  *(uint *)((int)dest + -0x992c) = 2;
  fVar3 = 100.0f;
  *(uint *)((int)dest + -8) = 0x41200000;
  *(float *)((int)dest + -0x9158) = fVar2;
  *(float *)((int)dest + -0x9154) = fVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -4) = 0;
  memset(dest,0,0x5a0);
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  *(uint *)((int)dest + -0x74) = 0;
  *(uint *)((int)dest + -0x8c) = 0x40c00000;
  *(int *)((int)dest + -0x80) = iVar5;
  core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,255.0);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,40.0);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(106.0,256.0);
  core_boneguy_cpp_FUN_0041ba10();
  fVar2 = 256.0f;
  dVar8 = round((double)(local_20 * 256.0f));
  *(int *)((int)dest + -0xbe34) = (int)ROUND(dVar8);
  dVar8 = round((double)(local_20 * fVar2));
  *(int *)((int)dest + -0xbe30) = (int)ROUND(dVar8);
  dVar8 = round((double)(fVar2 * local_20));
  *(int *)((int)dest + -0xbe2c) = (int)ROUND(dVar8);
  return (CBoneGuy *)((int)dest + -0xbf3c);
}
