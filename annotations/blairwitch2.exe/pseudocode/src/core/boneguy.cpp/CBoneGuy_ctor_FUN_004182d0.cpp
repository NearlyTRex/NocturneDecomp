// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0
// Address: 004182d0
// Address Range: [[004182d0, 004184b6]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_004182d0(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_004182d0(CBoneGuy *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  CEnemy *pCVar6;
  void *dest;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float afStackY_101c [1015];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CColor3f CStack_28;
  CColor3f CStack_1c;
  float fStack_10;
  
  bVar10 = 0;
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  dest = __arrinit
                   (pCVar6[1].base.base.create_event + 8,0x14,&g_SBoneGuyBoxTypeInfo);
  *(CBoneGuy_full_vtable **)((int)dest + -0x108c8) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)((int)dest + -0x108c4),(char *)0x5cc022);
  *(uint *)((int)dest + -0xd748) = 0x3f19999a;
  *(uint *)((int)dest + -0xd744) = 0x3f666666;
  pcVar8 = "boneguydie";
  *(uint *)((int)dest + -0x10a7c) = 1;
  pcVar9 = (char *)((int)dest + -0x6c);
  *(uint *)((int)dest + 0x5a0) = 0;
  uVar4 = _DAT_005f3830;
  *(uint *)((int)dest + -0xe36c) = 2;
  uVar5 = _DAT_005f3834;
  *(uint *)((int)dest + -8) = 0x41200000;
  *(uint *)((int)dest + -0xd740) = uVar4;
  *(uint *)((int)dest + -0xd73c) = uVar5;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -4) = 0;
  memset(dest,0,0x5a0);
  iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0xff);
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  *(uint *)((int)dest + -0x74) = 0;
  *(uint *)((int)dest + -0x8c) = 0x40c00000;
  *(uint *)((int)dest + -0xe5dc) = 0x3f490fdb;
  *(int *)((int)dest + -0x80) = iVar7;
  CStack_28.r = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,255.0);
  fStack_10 = CStack_28.r;
  CStack_28.g = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,40.0);
  fStack_10 = CStack_28.g;
  CStack_28.b = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(106.0,256.0);
  fStack_10 = CStack_28.b;
  core_boneguy_cpp_hsvToRgb_FUN_00418110(&CStack_28,&CStack_1c);
  fStack_34 = CStack_1c.r;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar10 * -8) =
       *(uint *)((int)&CStack_1c + (uint)bVar10 * -8 + 4);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       *(uint *)((int)&CStack_1c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  fVar2 = fStack_30 * _DAT_005cc03a;
  fVar3 = fStack_2c * _DAT_005cc03a;
  dVar11 = round((double)(fStack_34 * _DAT_005cc03a));
  dVar12 = round((double)fVar2);
  dVar13 = round((double)fVar3);
  *(int *)((int)dest + -0x10a70) = (int)ROUND(dVar11);
  *(int *)((int)dest + -0x10a6c) = (int)ROUND(dVar12);
  *(int *)((int)dest + -0x10a68) = (int)ROUND(dVar13);
  return (CBoneGuy *)((int)dest + -0x10b78);
}
