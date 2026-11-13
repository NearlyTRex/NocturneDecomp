// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0
// Address: 004182d0
// Address Range: [[004182d0, 004184b6]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_004182d0(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_004182d0(CBoneGuy *this_ptr)

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
  float afStackY_101c [1015];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  
  bVar9 = 0;
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  dest = __arrinit
                   (pCVar4[1].base.base.create_event + 8,0x14,&g_SBoneGuyBoxTypeInfo);
  *(CBoneGuy_full_vtable **)((int)dest + -0x108c8) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)((int)dest + -0x108c4),(char *)0x5cc022);
  *(uint *)((int)dest + -0xd748) = 0x3f19999a;
  *(uint *)((int)dest + -0xd744) = 0x3f666666;
  pcVar7 = "boneguydie";
  *(uint *)((int)dest + -0x10a7c) = 1;
  pcVar8 = (char *)((int)dest + -0x6c);
  *(uint *)((int)dest + 0x5a0) = 0;
  uVar2 = _DAT_005f3830;
  *(uint *)((int)dest + -0xe36c) = 2;
  uVar3 = _DAT_005f3834;
  *(uint *)((int)dest + -8) = 0x41200000;
  *(uint *)((int)dest + -0xd740) = uVar2;
  *(uint *)((int)dest + -0xd73c) = uVar3;
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
  memset(dest,0,0x5a0);
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0xff);
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  *(uint *)((int)dest + -0x74) = 0;
  *(uint *)((int)dest + -0x8c) = 0x40c00000;
  *(uint *)((int)dest + -0xe5dc) = 0x3f490fdb;
  *(int *)((int)dest + -0x80) = iVar5;
  fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,255.0);
  fStack_10 = fStack_28;
  fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,40.0);
  fStack_10 = fStack_24;
  fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(106.0,256.0);
  fStack_10 = fStack_20;
  core_boneguy_cpp_hsvToRgb_FUN_00418110(&stack0xffffffd8);
  fStack_34 = fStack_1c;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar9 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar9 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  fVar10 = (float10)_DAT_005cc03a;
  fVar11 = (float10)fStack_34 * fVar10;
  fVar12 = (float10)fStack_30 * fVar10;
  fVar10 = (float10)fStack_2c * fVar10;
  round();
  round();
  pCVar6 = (CBoneGuy *)round();
  *(int *)((int)dest + -0x10a70) = (int)ROUND(fVar11);
  *(int *)((int)dest + -0x10a6c) = (int)ROUND(fVar12);
  *(int *)((int)dest + -0x10a68) = (int)ROUND(fVar10);
  return pCVar6;
}
