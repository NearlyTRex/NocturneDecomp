// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400
// Address: 00417400
// Address Range: [[00417400, 00417604]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  void *dest;
  int iVar5;
  CBoneGuy *pCVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1018 [1015];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  dest = (void *)__arrinit
                           (&pCVar4[1].field_0x9c,0x14,&g_SBoneGuyBoxTypeInfo);
  *(byte ***)((int)dest + -0xcf9c) = &g_CBoneGuyVTable;
  core_skeleton_cpp_FUN_0054eae0((int)dest + -0xcf98,0x5b6d7a);
  *(uint *)((int)dest + -0x9e84) = 0x3f19999a;
  *(uint *)((int)dest + -0x9e80) = 0x3f666666;
  pcVar7 = "boneguydie";
  *(uint *)((int)dest + -0xcff4) = 1;
  pcVar8 = (char *)((int)dest + -0x74);
  *(uint *)((int)dest + -0xc) = 0;
  uVar2 = _DAT_005dc13c;
  *(uint *)((int)dest + -0xa950) = 3;
  uVar3 = _DAT_005dc140;
  *(uint *)((int)dest + -0x10) = 0x41200000;
  *(uint *)((int)dest + -0x9e7c) = uVar2;
  *(uint *)((int)dest + -0x9e78) = uVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -8) = 0;
  memset(dest,0,0x5a0);
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)((int)dest + -0x94) = 0;
  *(uint *)((int)dest + -0x90) = 0;
  *(uint *)((int)dest + -0x8c) = 0;
  *(uint *)((int)dest + -0x298) = 0x40c00000;
  *(uint *)((int)dest + -0xabc4) = 0x3f490fdb;
  *(uint *)((int)dest + -4) = 0;
  *(uint *)((int)dest + -0x7c) = 0;
  *(int *)((int)dest + -0x9c) = iVar5;
  uStack_24 = core_actor_cpp_FUN_0040ce40(0,0x437f0000);
  uStack_20 = core_actor_cpp_FUN_0040ce40(0,0x42200000);
  uStack_1c = core_actor_cpp_FUN_0040ce40(0x42d40000,0x43800000);
  core_boneguy_cpp_FUN_00417240(&stack0xffffffdc);
  fStack_30 = fStack_18;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar9 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar9 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  fVar10 = (float10)_DAT_005b6d92;
  fVar11 = (float10)fStack_30 * fVar10;
  fVar12 = (float10)fStack_2c * fVar10;
  fVar10 = (float10)fStack_28 * fVar10;
  *(uint *)((int)dest + -0x9e8c) = 0;
  round();
  round();
  pCVar6 = (CBoneGuy *)round();
  *(int *)((int)dest + -0xcfe8) = (int)ROUND(fVar11);
  *(int *)((int)dest + -0xcfe4) = (int)ROUND(fVar12);
  *(int *)((int)dest + -0xcfe0) = (int)ROUND(fVar10);
  return pCVar6;
}
